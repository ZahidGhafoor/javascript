/*
        ARRAY QUIZ: 
            PRINT ARRAYs VALUE WITH THE HELP OF WHILE & DO_WHILE LOOP.

*/

#include<iostream>
using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int marks [7] = {20, 35, 60, 75, 90, 100, 200};
    

    cout<<"ARRAY QUIZ WITH HE HELP OF WHILE LOOP: \n";
    while (x<5)
    {
        cout<<"The Value of Marks ["<<x<<"] is = "<<marks[x]<<endl;
        x++;
    }
    cout<<endl<<endl<<endl;    




    cout<<"ARRAY QUIZ WITH HE HELP OF DO-WHILE LOOP: \n";
    do
    {
        cout<<"The Value of Marks ["<<y<<"] is = "<<marks[y]<<endl;
        y++;
    }while (y<5);

    return 0;
}