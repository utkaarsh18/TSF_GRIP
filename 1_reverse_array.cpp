#include<iostream>
using namespace std;

int insert_array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
    return -1;
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
     
}
void reverse_array(int a[],int n)
{
    for(int i=0,j=n-1;i<j;i++,j--){
        a[i]=a[i]+a[j];
        a[j]=a[i]-a[j];
        a[i]=a[i]-a[j];
    }  
}

int main()
{
    int arr[10],n;
    cout<<"Enter size of array "<<" " ;
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    insert_array(arr,n);
    cout<<"Array entered is: ";
    print_array(arr,n);
    cout<<"Reversed array = "<<endl;
    reverse_array(arr,n);
    print_array(arr,n);
    return 0;
}