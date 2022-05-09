#include <stdio.h>
#include "stack.h"
int main()
{
    Stack s1;                       // Stack Declaration

    s1 = st_init(s1);                  // Initialize Stack with NULL
    
    // st_functions();                 // Displays all the functions of this module

    s1 = Push(s1, 12);
    s1 = Push(s1, 23);
    s1 = Push(s1, 34);
    Pop(&s1);

    st_display(s1);

    return 0;
}