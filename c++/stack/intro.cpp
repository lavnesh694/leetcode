// stack is a linear data structure where insertion and deletion only allowed at the end,called the top of stack.

// stack is nothing but it is used to store the data

// stack is a abstract data type means we don't need to see the internal working on the stack we only do the operations simply .

//operations -> push ,pop ,top, size , empty

// stack is a also called lifo (last in first out)

// why stack is not called filo? yes we called stack filo but lifo is more preferred lifo is widely accepted by computer science in stack and filo is less common in terms of computer science

// if we wantt to insert negative elements in our stack so we use flag intialy when stack is empty so the value of flag is one when we push elemnt so do flage 0 and when do pop so do flag 1 and now you can insert empty by checking flag if it is 1 so it is empty other wise it is not empty

// so now here is the question begin why we need stack when vector can also perform the same things?

// the answer of this question is memory wasteage we know if the size of vector is x so when we insert the x+1 elemnt so the size of vector is 2x there is memory wasteage .

// and in my opinion the second point is in vector elemnts are stored in contiguous memory locations while in stack we can store elemenst in both way contiguous or non contiguos

// in stl we use deque for implementing stack