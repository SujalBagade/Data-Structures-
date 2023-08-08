#include<iostream>
using namespace std;
int BinarySearch(int arr[] ,int l, int h, int a)
{
    int mid;
    
    while(l <= h)
    {
        mid=(l+h)/2;
        if(a == arr[mid])
        {
            return mid;
        }
        else if (a < arr[mid])
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;

}
int main()
{   
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<BinarySearch(arr ,0,11,5);
    return 0;
}
