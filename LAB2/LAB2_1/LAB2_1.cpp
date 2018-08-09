#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
void printname();
void printlist();
void insertname();
void deletename();
int main()
{
    char c=0;


    cout<<"PRESS 1 TO INSERT STUDENT NAME:";
    cout<<"PRESS 2 TO PRINT STUDENT NAME:";
    cout<<"PRESS 3 TO DELETE STUDENT NAME:";
    switch(c){
    case '1':
        insertname();

        break;
    case '2':
        printname();
        break;
    case '3':
        deletename();
        break;
    default:
        cout<<"Invalid choice!!";
    }
     return 0;
}

    void insertname(char *str[],int *a)
    {
        char str1[20];
        int p;
        cout<<"Enter no. of names to be inserted:";
        cin>>p;
        for(int i=0;i<p;i++){
        cout<<"Enter name:"<<endl;
        gets(str1);
        }

        cout<<"INSERTED SUCCESSFULY!"<<endl;
    }
        void printname(char *s[],int*a)
        {
            int k;
            cout<<"Enter no. of student whose name is to be printed:\n";
            cin>>k;
            a=&k;
            cout<<"Name is:"<<a;
        }




