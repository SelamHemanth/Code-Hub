##Date:-04-10-2023;Topic:- Pointers Lab Assignments

1) Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.

2) Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.

3) declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Also print the sizeof pointer variables with indirection operators. Observe the results.


4) Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main.


Implement the below functions 

5)strlen
6) strcpy
7)strcmp
8)strrev
9) strcat

10) Implement atoi function ( to take a numerical string and return integer)

11) implement itoa function ( take an integer and store it in a string and return the string).
String can be returned as the base address of the array ( return str). The return type of function will be char *.

12) Write a program to replace a given character by another character in a string.
