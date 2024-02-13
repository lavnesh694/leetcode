let slider=document.querySelector('.slider');
let copy=document.querySelector('.copy');
let length=document.querySelector('[data-length');
let upper=document.querySelector('.upper');
let lower=document.querySelector('[lower');
let numb=document.querySelector('[num');
let symb=document.querySelector('[symb');
let psddisplay=document.querySelector('.psd');
let datacopy=document.querySelector('[data-copy')
let indicator=document.querySelector('.indicator')
let checkbox=document.querySelectorAll('[chk')
let psg=document.querySelectorAll('.psg')

console.log(copy)



let password="";
checkCount=0;
let passwordlength=10;
handleslider()

function handleslider(){
    slider.value=passwordlength;
    length.textContent=passwordlength;

}
function setindicator(color){
    indicator.style.backgroundColor=color;
}
function getrandom(min,max){
  return  Math.floor(Math.random()*(max-min))+min; //Math.random hme 0 se 1 ke bich ka no deta hain to agar hm dono me min-max se multiply krde to ye hme 0 se max-min ke bich ka number dega aur agar 0 me min add kre to ye min se max ke bich ke no dega(min-max+min) and then convert it into integer

}
function getinteger(){
    return getrandom(0,9);
}
function getlowercase(){
    return String.fromCharCode( getrandom(97,123));
    //String.fromCharCode iske andar hm ascii value dete hain aur yr hme character deta hain
}
function getuppercase(){
    return String.fromCharCode( getrandom(65,91));
}
const symbols = '~`!@#$%^&*()_-+={[}]|:;"<,>.?/';
function getsymbol (){
    
    const randnum=getrandom(0,symbols.length);
    return symbols.charAt(randnum);
    

}
function calcStrength(){
    let hasup=false;
    let haslow=false;
    let hasnum=false;
    let hassym=false;
    if(upper.checked) hasup=true;
    if(lower.checked) haslow=true;
    if(numb.checked) hasnum=true;
    if(symb.checked) hassym=true;

    if(hasup && haslow && (hassym||hasnum) && passwordlength>=8 ){
        setindicator("#0f0");
    }
    else if((hasup || haslow)&& (hassym || hasnum) && passwordlength>=6){
        setindicator("#ff0");
    }

    else{
        setindicator("#f00");
    }
}
async function copyContent(){
    try{
        await navigator.clipboard.writeText(psddisplay.value)
        datacopy.innerHTML ="copied"
    }
    catch(e){
        datacopy.innerHTML ='failed'
    }
    // span visible
    datacopy.classList.add("active");
    copy.classList.remove("active");
    console.log(datacopy.classList)
    // console.log("jfdsnfj");
    setTimeout(() => {
        datacopy.classList.remove("active");
        copy.classList.add("active");
        // console.log("lk boss ki jai hi")
        
    }, 2000);
}
slider.addEventListener('input', (e) => {
    passwordlength=e.target.value;
    handleslider();

})
function copyhogya(){
    if(psddisplay.value){
        copyContent();
    }
}
function shufflePassword(array) {
    //Fisher Yates Method
    for (let i = array.length - 1; i > 0; i--) {
        const j = Math.floor(Math.random() * (i + 1));
        const temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    let str = "";
    array.forEach((el) => (str += el));
    return str;
}

function handleCheckBoxChange() {
    checkCount = 0;
    checkbox.forEach( (check) => {
        if(check.checked)
            checkCount++;
    });

    //special condition
    if(passwordlength < checkCount ) {
        passwordlength = checkCount;
        handleslider();
    }
}
checkbox.forEach( (check) => {
    check.addEventListener('change', handleCheckBoxChange);
})

function generate(){

//    
if(checkCount==0){
        return;
    }
    
    if(passwordlength<checkCount){
        passwordlength=checkCount;
        
        handleslider();
    }
    password=""
    
    console.log(checkCount);
     



// function generate(){
//     if(checkcount<=0){
//         return;
//     }
//     password="";
//     if(upper.checked)  password+=getuppercase();
//     if(lower.checked)   password+=getlowercase();;
//     if(numb.checked)  password+=getinteger();;
//     if(symb.checked)   password+=getsymbol();

// }
// psddisplay.innerHTML=password;
let funcarr=[];
if(upper.checked)  funcarr.push(getuppercase);
    if(lower.checked)   funcarr.push(getlowercase);;
    if(numb.checked)funcarr.push(getinteger);;
    if(symb.checked)funcarr.push(getsymbol);

 for(let i=0;i<funcarr.length;i++){
    password+=funcarr[i]();
 }
 for(let i=0;i<passwordlength-funcarr.length;i++){
    console.log(getrandom(0,funcarr.length));
    let randIndex = getrandom(0,funcarr.length);
    console.log("randix "+ randIndex)
    password+=funcarr[randIndex]();
 }



 password=shufflePassword(Array.from(password));// Array.from used to convert convert string into array

 psddisplay.value=password;
 

 calcStrength();

}