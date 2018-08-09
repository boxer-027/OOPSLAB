#include <iostream>


using namespace std;
struct engparts{
    char *a;
    int year;
    int quant;
    char sk[4],mat[5];
} a[100000];
int main()
{

    int i,n,m;
    char c;
    cout<<"ENTER 1 TO STORE RECORDS:\n";
    cout<<"ENTER 2 TO SEARCH RECORD:\n";
    cout<<"Enter 3 to continue storing record";
    cin>>c;
    cin>>m;

    switch(c)
    {

    case '1':
    cout<<"Enter no of parts you want:"<<endl;
    cin>> n;
    for(i=0;i<n;i++){
    cout<<"Enter serial key of engine part\n";
    cin>>a[i].sk;
    cout<<"Enter year of manufacture:\n";
    cin>>a[i].year  ;
    cout<<"Enter material:\n";
    cin>>a[i].mat;
    cout<<"enter quantity:\n";
    cin>>a[i].quant;
    cout<<"RECORDS STORED SUCCESSFULY!"<<endl;

break;
    case '2':

            if(a[i].sk=="BB1"||a[i].sk=="CC6")
            {
                cout<<a[i].year;
                cout<<a[i].mat;
                cout<<a[i].quant;
            }
    }

        break;

    default:
        cout<<"INVALID CHOICE!";


    }
    return 0;
}


