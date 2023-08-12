// java sccript is a dynamically typed language mean a variable is created without a specific type other than c++ and java
// c++ and java is statically typed language mean a variable is created with a specific data type



// now learn about let and var
// the scope of let is local means only code blocks but var is created globally means whole code can used it
// we cannot redeclare let we we can redeclare var

//const is also used locally and initialization is complusory while creating a const but it is not compulsory in case of let and var

// Generaly we declare variable in camel case for ex iLoveYOU means first alphabet of first first word is small and other first alphabet is large
// a =prompt("Enter the age")
// console.log(a>18?"yes you can drive":"no yo cantt")

// agar hm boolean ke sath nonblean dalte hain to
// console.log(true||"lavnesh")// output true
// console.log(false||"lavnesh"||5)// output lavnesh
// console.log(true&&"lavnesh")// output lavnesh
// console.log(false&&"lavnesh"&& 5)// output lavnesh


// Bitwise AND &

console.log(2&3) 
// Bitwise OR
console.log(2|3) 
// when we multiply binary of two with binaty of three so we get result 2
// 2= 10 and 3 =11 so and of 1 and 1 is 1 
// and of 1 and 0 is 0 so answe is 10 means 2
// and or of 2 and 3 is 11 means 3


// Now lets talk about the operator precedence use parenthisis for no confusion

// learn switch
 let a=1

switch (a){
    case 1:
        console.log(a+"number is 2");
        break
    case 2:
        console.log("number is 3");
        break
    case 3:
        console.log("number is 4")
        break;
    case "aalu":
        console.log("number is aalu")
        break;
    default:
            console.log("default")
}