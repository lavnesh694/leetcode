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
console.log(l1.draw())


// now constructor function in this we follow pascal notation 
// firt leeter of every word is capital

function Rectangle(l1,l2){
    this.length=l1;
    this.breadth=l2;
    this.draw=function(){console.log("this is a constructior function")}
        // this basically used to show your current object
}

let l2= new Rectangle(100,200)
console.log(l2)