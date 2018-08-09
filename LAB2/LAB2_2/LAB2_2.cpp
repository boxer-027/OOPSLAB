#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int string_length(char* string1)
{

    int length = 0;
    while (*string1 != '\0') {
        length++;
        string1++;
    }

    return length;
}

int main()
{
    char string1[20];
    cout<<"Enter string:"<<endl;
    gets(string1);
    cout <<"Size of string is:\n"<< string_length(string1);
    return 0;
}
