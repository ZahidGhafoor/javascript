/*

        DEFINE STRUCTURE:
             A structure is a user-defined data type in C/C++. which are used to store group of items of non-similar data types.
          DEFINE TYPEDEF:
                The typedef keyword allows the programmer to create new names for types. It literally stands for "type definition".
                Typedefs can be used both to provide more clarity to your code and to make it easier to make changes to the underlying data types that you use.


        DEFINE UNION:
            A union in C++ programming is a user defined data type which may hold members of different sizes and type. Union uses a single memory location to hold more than one variables. 
            However, only one of its members can be accessed at a time and all other members will contain garbage values.


        DEFINE ENUM:
            Enum is a user defined data type where we specify a set of values for a variable
            It is mainly used to assign names to integral constants, the names make a program easy to read and maintain.

*/


#include<iostream>
using namespace std;

struct employ
{
    // Data :
    int id;
    char c;
    float cash;

};
typedef struct employ2
{
    // Data :
    int id;
    char c;
    float cash;
} ep;



union money
{
    //  Data :
     int favnum;
     int cash;
     char x;

};



int main()
{
                    // STRUCTURES :

    struct employ tayyab;
    struct employ zahid;
 
    zahid.id = 35102;
    zahid.c = 'Z';
    zahid.cash = 300.5;
    
    tayyab.id = 35104;
    tayyab.c = 'T';
    tayyab.cash = 100.5;

    cout<<"STRUCTURES:\n";
    cout<<"The Value of Zahid's ID = "<<zahid.id<<endl;
    cout<<"The Value of Zahid's Character = "<<zahid.c<<endl;
    cout<<"The Value of Zahid's Salary = "<<zahid.cash<<endl;
    cout<<endl;

    cout<<"The Value of Tayyab's ID = "<<tayyab.id<<endl;
    cout<<"The Value of Tayyab's Character = "<<tayyab.c<<endl;
    cout<<"The Value of Tayyab's Salary = "<<tayyab.cash<<endl;
    cout<<endl<<endl;

                    // STRUCTURE (Typedef) :
    ep junaid;

    junaid.id = 35105;
    junaid.c = 'J';
    junaid.cash = 5000.9;

    cout<<"STRUCTURE (TYPEDEF) : \n";
    cout<<"The Value of Junaid's ID = "<<junaid.id<<endl;
    cout<<"The Value of Junaid's Character = "<<junaid.c<<endl;
    cout<<"The Value of Junaid's Salary = "<<junaid.cash<<endl;
    cout<<endl<<endl<<endl;


                    // UNIONS :

 
    money my;
    my.x = 'A';

    cout<<"UNION : \n";
    cout<<"My Favourite Character is = "<<my.x<<endl;

    my.cash = 5000;     // The Above "my.x" Value become Garbage Value After taking this New datatype (my.cash).

    cout<<"My Favourite Character (After Taking another Datatype (cash) ) is (Garbage Value) = "<<my.x<<endl;
    cout<<"My Favourite Salary is = "<<my.cash<<endl;
    cout<<endl<<endl<<endl;


                    // ENUMS :


    enum days {monday, tuesday, wednesday, thursday, friday, saturday, sunday};   // It will gives the index number of the following Strings.
    
    cout<<"ENUMS : \n";
    cout<<"The OutPut of Monday is =    "<<monday<<endl;
    cout<<"The OutPut of Tuesday is =    "<<tuesday<<endl;
    cout<<"The OutPut of Wednesday is = "<<wednesday<<endl;
    cout<<"The OutPut of Thursday is =  "<<thursday<<endl;
    cout<<"The OutPut of Friday is =    "<<friday<<endl;
    cout<<"The OutPut of Saturday is =  "<<saturday<<endl;
    cout<<"The OutPut of Sunday is =    "<<sunday<<endl;
 
    cout<<"Enum (Advanced) : \n";
    days d1 = friday;       // This will give the output 4 because friday is at 4th index.
    cout<<"The Value of D1 is = "<<d1<<endl;
                // Compairing Values in enum.
    cout<<"The Value of D1 (Friday) == 5 is =  "<<(d1==5)<<endl;    // This False (0) Because the d1 (friday) is 4.
    cout<<"The Value of D1 (Friday) == 4 is =  "<<(d1==4)<<endl;    // This True (1) Because the d1 (friday) is 4.
    return 0;
}



