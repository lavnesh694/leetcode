// // String

// // in java script there are two types of string one is primitive and one is object

// let lk="lavnesh" // primitive
// let pk=new String("lavnesh")

// console.log(typeof(lk),typeof(pk))


// // there are various of method of strings are available here is no need to learn all of them 

// let message="thius is my first message"

// let words=message.split(' ')
// message.replace('first','second')
// console.log(message,typeof(words))
// message[4]='hello'
// console.log(message[4])

// s="second"
// s[4]='din'
// console.log(s[4])

// // Please note that javascript strings arr immutable meeans you cant change it

// // how to include questes in string
// code="my name is \'lavnesh'"
// console.log(code)

// // if we want to print the line by line so we use 

// // template literal (backtick)
// // on=bject literal({})
// // string literal('')
// nam='lavnesh'

// code=`my name
// is ${nam} and
// today iam here`
// console.log(code)

// // Date

// let date =new Date()
// let date1=new Date(2003,11,6,7)


// NOW MAIN TOPIC ARRAYs


let a=[1,3,5,true]

// 1 INsertion

a.push(9)// add elemnt in end
a.unshift(8)// start
a.splice(3,0,false) // means how many elemnts deleted
console.log(a)


// 2 searching

console.log(a.indexOf(9))// number is not presrent it retturn -1

console.log(a.includes(11))// return true or false

console.log(a.indexOf(8,1))// first parameter is that which elemnt is to search and second paramenter is that where to start


// now for non primitives

school=[
    {rool:5,nam:"lavnesh"},
   { rool:10,nam:"boss"}
]

// index of never give you the right answer because the address is diferent

// console.log(school.indexOf({a:5})) // return -1

// now for this we use callback funcion

// means when function is depend on another function
// here we use find which return object on array

let answer= school.find(function(child) // this is predicate functiion
{
    return child.rool===10
})
console.log(answer)

// we minimize the upper code using arroy function
let answe= school.find(child => // first remove function and the apply arroy and if there is only one argument in function so remove parenthesis
 child.rool===5)// if there is no argument is a function so write only parernthis
console.log(answe)

// 3 removing

a=[1,2,3,4,true]

a.pop() // end
a.shift() // start
a.splice(3,1)// middle

console.log(a)


// emptying an array

b=a
// a=[] // worst method
//  a.length=0 // best method
// a.splice(0,a.length) also best 

//  console.log(a,b)

// combining AND SLICING AND ARRAY

a=[1,2,3]
b=[4,5,6]
// c=a.concat(b) 
c=[...a,...b] // spread operator new method
console.log(c)

// slicing

c=c.slice(2,5)
console.log(c)

// iteration an array
// for( let i of c){
//     console.log(i)
// }

c.forEach(element =>console.log(element));

// joining of array

arr=c.join('@')
console.log(arr)

// splitting

abb=arr.split('@') // returns and aray
console.log(abb)


// sorting of array

a=[4,40,5,2,3]
a=a.sort() // convert element into string and than sort
console.log(a)
console.log(a.reverse())


// filtering

a=a.filter(element=>element>=5)
console.log(a)

// Map

a=a.map(element=>element+"lkboss")
console.log(a)


// chaning means in one line first filter and then map for ex

a=[1,5,2,23,20,50,7]

b=a.filter(element=>element%5==0).map(element=>element+"lkboss")
console.log(b)
