/*Create an integer array. Print the array using a. Incrementing pointer b. Array name itself. Create an array of pointers that point to each location of the integer array.*/
#include<iostream>
#define MAX 5
using namespace std;
int main()
{
    int a[MAX]={1,2,3,4,5};
    int *ptr,i;
    ptr=a;
    cout<<"Using increment pointer &pointer to an array--"<<endl;
    for(i=0;i<MAX;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    cout<<"Using array name itself--"<<endl;
    for(i=0;i<MAX;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *aptr[MAX];
    cout<<"Using Array of pointers--"<<endl;
    for(i=0;i<MAX;i++)
    {
        aptr[i]=&a[i];
    }
    for(i=0;i<MAX;i++)
    {
        cout<<*aptr[i]<<" ";
    }
    return 0;
}
