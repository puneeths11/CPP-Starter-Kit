//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>BASICS OF C++ PROGRAMS<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

/* DISCLAIMER: Do not run this entire file! Copy and paste the specific program or code segment you want to execute into a new file and run that. OR Select part program code you want run and click on run button in your IDE*/

/*--------------------------------------------------------------------------------
 Program 1 : Hello world porgram
-----------------------------------------------------------------------------*/
#include<iostream>        //preprocessor compiler
using namespace std;      //std:: defined at first
int main(){               //main function exceutes first
    cout<<"Hello world";  //cout c-console,out
    return 0;             // retuning no value (not strict necessary can be automatically add by the compiler)
}
//------------------------------------------------------------------------------

/*----------------------------------------------------------------------------------
 Program 2 : next line
-----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Hi puneeth"<<endl;          //endl next line
    cout<<"How are You !"<<endl;
    return 0;
}
//-----------------------------------------------------------------------------------------

/*----------------------------------------------------------------------------------
 Program 3 : defining variable
-----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){         //variable are case sensitive (short,int,long,long long) staring should be letter /_ / (camelCase most used)
    short a;        // 2byte 16bit
    int b;          //  4byte 32bit  (may vary)
    long c;         // 4byte (may vary)
    long long d;    // 8byte 64bit
    float score = 50.12;
    double score2 = 51.123;
    long double score3 = 52.123456;
    score = 401.1;    //reassigned before printing the statement changes can be seen
    cout<<"The total score is "<<score<<endl<<score2<<endl<<score3<<endl;
    score = 402.1;    //reassigned after printing the statement changes can not be seen

    const int A = 5;  //constant int cant be changed note const variable can't be empty can use  special value like "NA" or -1

    return 0;
}
//-----------------------------------------------------------------------------------------

/*----------------------------------------------------------------------------
 Program 4 User input, taking input from the user
--------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter the firstnumber"<<endl;
    cin>>a;
    cout<<"enter the secondnumber"<<endl;
    cin>>b;
    cout<<"sum a+b is " << a + b <<endl;  // arthemetic operatiors
    cout<<"sum a-b is " << a - b <<endl;
    cout<<"sum a*b is " << a * b <<endl;
    cout<<"sum a/b is " << (float) a / b <<endl;
    cout<<"sum a%b is " << a % b <<endl;  //typecasting changing int to float
    cout << "sum a is " << ++a << endl;   // pre increment increment and use

    //Typecasting :- a / b int-int > int result, float-int > float, float-float > float so we convert it to float

}
//---------------------------------------------------------------------------------------------------------------

/*-----------------------------------------------------------------------------
 Program 5 if else statement in c++
-------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age >18 ){
        cout<<"you can vote"<<endl;
    }if(age < 18     ){
        cout<<"you are under 18 can not  vote"<<endl;
    }else if(age > 90 ){
        cout<<"Please bring you latest photo copy"<<endl;
    }else{
        cout<<"you can not vote"<<endl;
    }
}
// //------------------------------------------------------------------------------

/*-----------------------------------------------------------------------------
 Program 6 logical operators  in c++
-------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
int age;
int main(){
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age > 25 && age < 18 ){
        cout<<"your are a adult"<<endl;
    }else if(age > 18 && age < 25){
        cout<<"your are a youth"<<endl;
    }else if(age > 6 || age < 18){
        cout<<"your are a child"<<endl;
    }else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}

//------------------------

#include <iostream>
using namespace std;

int age;

int main() {
    cout << "Enter your age: " << endl;

    if (cin >> age) {  // Check if input is a valid integer
        if (age >= 25) {
            cout << "You are an adult" << endl;
        } else if (age >= 18 && age < 25) {
            cout << "You are a youth" << endl;
        } else if (age >= 6 && age < 18) {
            cout << "You are a child" << endl;
        } else {
            cout << "Invalid age input" << endl;
        }
    } else {
        cout << "Invalid input. Please enter a valid age." << endl;
    }

    return 0;
}

//-----------------------------------------------------------------------------------

/*-----------------------------------------------------------------------------
 Program 7 switch statement in c++
-------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "you are 12" << endl;
        break;
    case 18:
        cout << "you are 18" << endl;
        break;
    default:
        cout << "you are neither 18 nor 12" << endl;
        break;  //default break not necessary
    }
}
//---------------------------------------------------------------------------------

/*-----------------------------------------------------------------------------
 Program 8 loops  in c++
-------------------------------------------------------------------------------*/

// for loop
#include<iostream>
using namespace std;
int main(){
    int num;
    for(num=0; num<=5; num++){
        cout<<"The number is "<<num<<endl;
    }
}

// while loop
 #include<iostream>
 using namespace std;
 int main(){
     int index = 0;
         while (index <= 11)
         {
             cout<<"we are at the index"<<index<<endl;
             index = index + 1;
         }

}

// do while (runs atleast on time )
 #include<iostream>
 using namespace std;
 int main(){
     int index = 0;
     do
     {
         cout<<"we are at index"<<index<<endl;
         index  = index + 1;
     } while (index > 100); //condition false because index = 0 and not greater than 100 but still runs atleast 1time
     return 0;
 }

//-------------------------------------------------------------------------------

/*-----------------------------------------------------------------------------
 Program 9 functions   in c++
-------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

int sum(int a, int b);
 //function decelartion before using it because C,C++ compiled language where as JS, python interpreter language can be defined anywhere in the program and can be accessed through out the program

int main()
{
    int a, b;
    cout << "enter the value for a ";
    cin >> a;
    cout << "enter the value for b ";
    cin >> b;
    cout << "The sum of a and b is " << sum(a, b) << endl;
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// NOTE :- we can define as many function we need, we can also define function inside a function, we can call function from anywhere not manditory that we have to call the function only in the main function
//-------------------------------------------------------------------------------------------------------------------------

/*---------------------------------------------------------------------------------------------
 Program 10 array's in c++
-----------------------------------------------------------------------------------------------*/
// NOTE :- In some programming languages, such as Python and JavaScript, you can create arrays (or lists in Python) that can hold elements of different data types. These are often referred to as "heterogeneous" arrays or lists. However, in statically-typed languages like C++ and Java and C, arrays are typically homogenous, meaning that can only store elements of a single data type.

#include<iostream>
using namespace std;
int main(){
    int arr[3] = {11,12,13};
    int length = sizeof(arr) / sizeof(arr[2]);
    cout<<length<<endl;
    return 0;
}

/*NOTE :-  int length = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

sizeof(arr): This part of the expression calculates the total size, in bytes, of the entire array arr. It tells you how much memory the entire array occupies.

For example, if sizeof(arr) is 12 bytes, that means the entire array arr takes up 12 bytes in memory.
sizeof(arr[0]): This part of the expression calculates the size, in bytes, of a single element within the array. In this case, arr[0] represents the first element of the array, which is an integer.

For example, if sizeof(arr[0]) is 4 bytes, that means each individual integer element within the array occupies 4 bytes in memory.
The division / operator is used to divide the total size of the array by the size of a single element within the array.

Now, let's put it all together:

If sizeof(arr) is 12 bytes (total size of the array) and sizeof(arr[0]) is 4 bytes (size of a single element), then the calculation becomes:

length = 12 bytes / 4 bytes = 3 */

/*NOTE :-
In C++, the need to calculate the number of elements in an array using the sizeof method is due to the way arrays are handled in the language and the way C and C++ manage memory.

In JavaScript and Python, arrays are dynamically sized and have built-in methods or properties like length that directly give you the number of elements in the array. These languages handle memory allocation and resizing of arrays behind the scenes, making it easy to determine the array's length.

In C and C++, arrays are fixed in size and have a static memory layout. The sizeof technique is used to determine the size of the array in memory */

#include<iostream>
using namespace std;
int main(){
    int arr[3] = {1,2,3}; //array index {0,1,2}
    cout<<arr[4];  //accessing an undefined index in arry
}

/* NOTE :- accessing an undefined index in an array in C++ results in undefined behavior, and the specific output or value you get is not meaningful or predictable. It's essential to ensure that you only access valid indices within the bounds of the array to avoid such issues.*/

/*NOTE :- In summary, Java and Python will throw exceptions when you attempt to access an out-of-bounds index, while JavaScript will return 'undefined' without raising an error. The exact behavior may also depend on the specific environment or interpreter you are using for JavaScript, but in general, it will not produce arbitrary values as seen in your C++ and C Code*/

//using loops in One dimensional array
 #include <iostream>
 using namespace std;
 int main()

{
    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "enter the marks of " << i << "th student" << endl;
        cin >> marks[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "marks of " << i << "th student is " << marks[i] << endl;
    }
}

/* NOTE :- The number of dimensions you can have for arrays in Java, JavaScript, Python, and C is generally not limited by the language itself but rather by practical considerations, including available memory and system constraints. Here's an overview of multi-dimensional arrays in these languages:*/

// two dimensional array
#include <iostream>
using namespace std;
int main(){
    int arr2d[2][3] = { {1,2,3},{4,5,6} }; //2x3 (2cross3) 2dimensional array
    /* represented in this form
        [  ][  ][  ]
        [  ][  ][  ] */
    for(int i = 0; i < 2; i++)
    {
        for(int j=0; j<3;j++)
        {
            cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
        }
    }

}

/*NOTE :-
>>int threeDimArray[2][3][4] (3D Array):
This is a 3-dimensional array.
It has three levels of dimensions: Layer, Row, and Column.
In this case, you have 2 layers, each with 3 rows and 4 columns.
It is suitable for representing a three-dimensional structure, such as a 3D grid or a cube.
//---------------------------------------------------------------------------------
>>int threeDimArray[3][4] (2D Array):
This is a 2-dimensional array.
It has two levels of dimensions: Row and Column.
In this case, you have 3 rows and 4 columns.
It represents a regular two-dimensional grid or matrix.*/

/*NOTE :- Zero-based indexing is a common convention in many programming languages because it simplifies array manipulation and aligns with how memory is typically organized in computer systems*/

/*---------------------------------------------------------------------------------------------
 Program 11 typecasting in c++
-----------------------------------------------------------------------------------------------*/
/* NOTE :- Typecasting, also known as type conversion or type coercion, is a fundamental concept in programming languages. It refers to the process of converting a value from one data type (or type) to another*/
#include<iostream>
using namespace std;
int main(){
    int a = 11;
    float b = 83.23;
    cout<<(float) a/34<<endl;  //retuns float value
    cout<<(int)b;   //returns only 83

}

/*---------------------------------------------------------------------------------------------
 Program 12 String in c++
-----------------------------------------------------------------------------------------------*/
/*NOTE :- Mutable means changes updated to original, immutable means changes doesnt effect original it create new string
string mutable language -> C, C++ & string immutable language -> Java, JS, Python*/
#include <iostream>
#include <string> //to use string function we have to define / include the string in headerfile
using namespace std;
int main()
{
    string name = "puneeth";
    cout << "The name is " << name << endl;
    cout << "The length of name is " << name.length() << endl;
    cout << "The substring is " << name.substr(0, 3)<<endl;
    cout << "The substring is " << name.substr(0, 3121);
    return 0;
}
//------------------------------------------------------------------------------------------------------------------

/*---------------------------------------------------------------------------------------------
 Program 13 Pointers in c++
-----------------------------------------------------------------------------------------------*/

/* NOTE :- pointer is feature that stores the address of the another variable*/
#include<iostream>
using namespace std;
int main(){
    int a = 11;
    int* ptr;  //the pointer name can be anything but (*) is the sytnax for retriving the address information
    ptr = &a;  // (&) meaning is store the value of something in its address(something which is defined)
    cout<<ptr<<endl;;
    cout<<*ptr<<endl;
    // here * acts as dereference variable prints the value of a ,which means the ptr stores the address of the variable a  and when we use pointer function on the ptr variable it goes to the particular address and prints the value of it acts de referencing
    cout<<"------------"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The address of a is "<<&a<<endl;  //can also access the address using & symbol
    cout<<"The address of a is "<<ptr<<endl;
    cout<<"The value of a is "<<*ptr<<endl;
    return 0;
}

//----------------------------------------------------------------------------------------------------

/*---------------------------------------------------------------------------------------------
 Program 14 Classes and objects (OOP) in c++
-----------------------------------------------------------------------------------------------*/
//NOTE :- while defining class last need to give semicolon
#include <iostream>
using namespace std;
/* NOTE :-  //access specifier public can be access from outside the class and private can be accessed only from inside the class and protected are similar to private members but have limited accessibility from derived classes Protected members can be accessed from within the class and by derived classes.*/
class employee // defined outside the main function
{
public:
    string name;
    int salary;
    void printdata()
    {                                                             // defining new method
        cout << "The name of employee is " << this->name << endl; // using this (syntax this->) which means puni
        cout << "The Salary of employee is " << this->salary << endl;
    }
};

int main()
{
    employee punii;
    punii.name = "MR.Puneeth";
    punii.salary = 60000;
    punii.printdata();
}
//------------------------------------------------------------------------------------------


/*---------------------------------------------------------------------------------------------
 Program 15 Using constructor Classes and objects (OOP) in c++
-----------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int salary;
    //constructor
    employee(string n, int s,int sp)  //name can be anything
    {
        this->name = n;
        this->salary = s;
        this->secretpassword = sp;
    }
    void printdata()
    {                                                             
        cout << "The name of employee is " << this->name << endl; 
        cout << "The Salary of employee is " << this->salary << endl;
    }
    void getsecretpassword()
     {
        cout<<"The Secret Password of the employee is "<<this->secretpassword;
    }
private:
int secretpassword;
};


int main()
{
    employee puni("puneeth constructor",60000,181273198);
    puni.printdata();
    // cout<<puni.secretpassword;  //error occured private variable but can be accessed inside the class itself
    puni.getsecretpassword();
}
//------------------------------------------------------------------------------------------------