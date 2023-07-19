#include<iostream>
using namespace std;

class LinearSearch{
    int arr[10]={90,28,10,5,30,6,88,75,9,15};
    
    public:
    int search(int element)
    {
        for(int i=0;i<10;i++)
        {
            if (arr[i]==element)
                return i;
         }
         return -1;
    }
};

int main(){
    cout<<"Linear Search"<<endl;
    LinearSearch ls;
    int res=ls.search(10);
    if (res!=-1)
        cout<<"Element is Found at index  "<<res<<endl;
    else
        cout<<"Element is not Found !!!";
    return 0;
    }