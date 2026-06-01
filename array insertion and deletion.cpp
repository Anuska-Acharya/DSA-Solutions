#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50};
    int n=5;
    int i, pos, value;
    cout<<"The array elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<"\n Element at index"<<i<<"is"<<arr[i];
    }
    cout<<"\n Enter the position where you want to store the new variable";
    cin>>pos;
    cout<<"\n Enter the new value to insert";
    cin>>value;
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    n=n+1;
    cout<<"Array after insertion is:";
    for(i=0;i<n;i++)
    {
        cout<<"\nElement at index "<<i<<"is"<<arr[i];
    }
    cout<<"Finally, the total length of the array is: "<<n;
    cout<<"\nEnter the position where you want to delete the variable";
    cin>>pos;
    value=arr[pos];
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"\nThe value deleted from array is"<<value;
    cout<<"\nThe array after deletion is: \n ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<"\n";
    }

    

    return 0;
}
