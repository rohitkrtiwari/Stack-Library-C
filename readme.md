# **Stack Library Implemented in C**

A simple library implemented in C language of Stacks

## **What is a Stack**
Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).<br> 
The Top of a Stack pointes on Top of Stack as shown in the below image.
<br><br>
<img src="images/stack_representation.jpg">


## **get repo**
<pre>
git clone https://github.com/rohitkrtiwari/C-Linked-List-Header.git 
</pre>


## **Starter Code**
<pre>
#include "stack.h"
int main()
{
    Stack s1;                       // Stack Declaration

    s1 = init(s1);                  // Initialize Stack with NULL
    
    st_functions();                 // Displays all the functions of this module

    return 0;
}
</pre>

## **st_init()**
Initializes the Stack with NULL 
<pre>
s1 = st_init(s1);
</pre>

## **Push()**
Adds the new element on Top of the Stack
<pre>
s1 = Push(s1, 21);
</pre>

## **Pop()**
Removes one element from Top of the Stack
<pre>
X = Pop(@s1);
</pre>

## **Peek()**
Returns  the element at Top of the Stack
<pre>
X = Peek(s1);
</pre>

## **st_size()**
Returns the size of the Stack
<pre>
int s1 = st_size(s1);
</pre>

## **st_display()**
Prints all the element present on the Stack
<pre>
st_display(s1);
</pre>

## **index()**
Returns the index of data
<pre>
int i = index(list, data);
</pre>

## **st_clear()**
Deletes all the Data present on the Stack
<pre>
s1 = st_clear(s1);
</pre>

