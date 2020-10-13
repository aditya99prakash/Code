
void bubbleSort(int arr[], int n)  
{  
    int i, j,tmp;  
    for (i = 0; i < n-1; i++)      
      

    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
        {           tmp=arr[j]; //swaoping
             arr[j]=arr[j+1];
             arr[j+1]=arr[j];
       }
}  

void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout<<"SORTED ARRAY IS ";
        cout << arr[i] << " ";  
    cout << endl;  
}  
