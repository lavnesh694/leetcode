//objects
// object is collection of key value pair

//function is used to perform well defined task
// factory function

function createRectangle(l1,l2){
    return rectangle={
        length:l1,
        breadth:l2,
    
        draw:function(){
            console.log("object ke andar function ko method bolte hain",rectangle.length,rectangle.breadth)
        }
    }
    
}
// console.log(createRectangle(20,30))
//or
let l1= createRectangle(20,30);
// console.log(l1.draw())


// now constructor function in this we follow pascal notation 
// firt leeter of every word is capital

function Rectangle(l1,l2){
    this.length=l1;
    this.breadth=l2;
    this.color='pink'
    this.draw=function(){console.log("this is a constructior function")}
        // this basically used to show your current object
}

let l2= new Rectangle(100,200)
// let l2=new Function(){
//     length=l1,
//     breadth=l2,
//     color='pink',
//     draw=function(){console.log("this is a constructior function")}
    
// }
l2.color="yellow"
// console.log(l2)
delete l2.color; // used for deleting a specific property
// console.log(l2)



// constructor

// note that function and array  is also a object the constructor of the object l2 is rectangle but what is the constructor of rectangle (is also a function)


// difference between premitive reference type

// primitive (int ,bool,string,etc)

a=10
b=a
a++
// so the value of a is 11 but the value of b is still 10
// in this only a copy is created with different address

// now reference(array,function,object)

a={value:10}
b=a
a.value=a.value+10

b.value=b.value+100
console.log(a.value)
console.log(b)
// both the values of a and b are same becaause the addresss is same in reference type 


// for in loop only on object

let school={
    book:"gk",
    class:12,
    roono:29
}

// for (key in school){
//     console.log(key, typeof(key),":",school[key])
// }

// for of loop only on iterables

// now there is hack so we can apply it on objects

// for(key of Object.keys(school)){
//     console.log(key,typeof(key))
// }
// for(key of Object.entries(school)){ // it create 3 array of length two
//     console.log(key,typeof(key))
// }

// check there is specific propery or not

// if('book' in school){
//     console.log("ha hain")
// }
// else{
//     console.log("nhi hain")
// }

// cloning in java script

// let tution={...school}

// let dest=Object.assign({},school)
// console.log(dest)


// garbage collector

// is used to free up the memory
// ther is no garbage collector in java and c++
// there is only garbage collector in java script