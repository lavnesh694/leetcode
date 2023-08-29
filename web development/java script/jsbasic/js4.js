a=[23,4,40,5,50]
console.log(a.sort(function(a,b){return (b-a)}));


/// Now todAY we learn about funcitons

// in java script there is special case if we call a function befrore its execution so it still works but not in c++ 
// this is because of hoisting in this all the function decleration moving top of the file

// function assignment

let lk=function boss(){
    console.log("lovely bhaiyha is  a bosss")
}
lk()

// but in function assignement there is no hosting

function it (a,b){
    console.log(arguments)// this line rerturns all the elemnts we passed in a function in object form not an array
    
    return a+b
}

// lets create a dynamic function which take unlimited numbers and give the sum of all of them
let som=0

function sum(){
    for(let i in arguments){ // for objects we use for of loop but for array we use for in loop
        som=som+arguments[i]
    }
    console.log(som)
    
    return  som
    
}

console.log(it(2,3))
console.log(it())
console.log(sum(2))

// if we pass less no of argument so it giva nan means not a number and we passe large number of argument so it take only first arguments which are required

// rest operator

function sim(n,...kuchbhi){ // always decleare in last in total no of arguments we cannot give rest operator in middle
    console.log(n,kuchbhi)
}

sim(1,2,3,4,5,100)

// now lets learn about getter and setter

let nam={
    fname:"lavnesh",
    lname:"sharma",

    get fullname(){
        console.log( `${this.fname}  ${this.lname}`)
    },
    set fullname(val){
      arr=val.split(' ')
      this.fname=arr[0]
      this.lname=arr[1]
    }
}

nam.fullname="lk boss"
nam.fullname


// now lets learn about try and cathch block

try{
    nam.fullname=45
}
catch{
    alert("bhaiya galti")
}
