#include<iostream>
using namespace std;

void print_array(int arr[], int n)
{
    for(int i=0;i<=n-1;i++)
        cout<<" "<<arr[i]<<" ";

         cout<<endl;
}

void shell(int arr[], int n)
{
    int gap,i;

    for(gap=n/2;gap>0;gap=gap/2)
    {
        for(i=gap;i<n;i++)
        {
           for(int j=i-gap;j>=0;j=j-gap)
            if(arr[j]>arr[j+gap])
            {
                int temp=arr[j+gap];
                arr[j+gap]=arr[j];
                arr[j]=temp;
            }

        }

    }
}


int main()
{
    int n,arr[]={24,13,2,75,1,11,9,5};  //1 2   9 5   24 11   13 75
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"array befor sorting"<<endl;
     print_array(arr,n);

     shell(arr,n);

     cout<<"array after sorting"<<endl;
     print_array(arr,n);

     return 0;

}
