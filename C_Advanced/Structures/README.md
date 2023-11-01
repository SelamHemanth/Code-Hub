##Date:01-11-2023 ; Topic: Structures Assignments

Make use of the header file properly in all assignments.

1) Practice scanf and printf on each member of the structure using a structure variable using the below structure template:

struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender
};

create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.
Then calculate the percentage of marks, and store the percentage using per pointer member, and print it.Write a function to calculate the percentage ,and update the percentage member of the structure using function (send only per member using call by reference).

2) Create an array of structures using the above template. read the data for all elements of the array. and print the topper name with the highest percentage. 

3) Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal.

4) write a function to take the array of structures as arguments and return the structure element with the oldest date of birth.
    return the structure variable using return statement and array element with index. Return type of the function will be struct student.

eg.,
struct student oldest student(struct student arr[])
{ 

return arr[i]; // find the index at which date of  birth is oldest using date comparison function
}

5) Write a function to take an array of structures as arguments, and convert all their names into capital letters( strupr implementation). print the data in the main function.

6) Count and print how many girls and how many boys there are in the class.
