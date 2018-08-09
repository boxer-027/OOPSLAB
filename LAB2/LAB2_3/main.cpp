#include <iostream>

using namespace std;
void minmax( int arr[], int length, int * min, int * max);
int main()
{
    int arr[10],c,d;
    cout << "Enter an array:\n" << endl;
    for(int i=0;i<9;i++)
    {
        cin>>arr[i];
    }
    minmax(arr,10,&c,&d);
    cout<<"Min number:\n"<<c<<endl;
    cout<<"Max number:\n"<<d;

    return 0;
}
void minmax( int arr[], int length, int * min, int * max)
{
    int i;
    *min=INT_MAX;
    *max=INT_MIN;
    for(i=0;i<9;i++)
    {
        if(arr[i]<*min)
            *min=arr[i];
        if(arr[i]>*max)
            *max=arr[i];
    }
}
