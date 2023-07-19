/******************************************************************************
Program to demonstrate Binary Search

*******************************************************************************/

#include <iostream>

using namespace std;

class BinarySearch{
    int arr[10]={10,20,33,37,49,55,64,76,82,86};
    
    public:
    
    int search(int element)
    {
        int start,end,mid;
        start=0;
        end=sizeof(arr)/sizeof(arr[0]);
        while (start<=end){
            mid=(start+end)/2;
            if (arr[mid]<element)
                start=mid+1;
            else if (arr[mid]>element)
                end=mid-1;
            else
                return mid;
        }
        return -1;
    }
};

int main()
{
    cout<<"Binary Search"<<endl;
    BinarySearch bs;
    int res=bs.search(20);
    if (res==-1)
        cout<<"Element is not found in array !!!"<<endl;
    else
        cout<<"Element is found at index "<<res;
    return 0;
}