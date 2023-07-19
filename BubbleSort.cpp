class BubbleSort
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {int temp;
        // Your code here  
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
};

int main()
{
  cout<<"------- Bubble Sort --------";
  int n=10;
  int arr[n]={9,86,57,35,8,6,1,90,54,10};
  BubbleSort bs;
  bs.bubbleSort(arr,n);
  return 0;
}