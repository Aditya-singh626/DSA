#include <iostream>
using namespace std;

int indexedSequentialSearch(int arr[], int n, int key, int blockSize)
{
    int low = 0;
    int high = n -1 ;
    if (arr[high] < key || arr[low] > key)
        return -1;
    int i = low ;  
    if (arr[i] == key)
        return i;  
    while(key > arr[i]){
       i = i+blockSize;
    }    
    if ( arr[i]==key){
       return i;
    }
    else{
        int le =i-1;
        int fe = i-blockSize+1;
        for (int j=fe;j<=le;j++){
            if (arr[j]==key){
                return j;
            }
        }
    }
}    

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 25;
    int blockSize = 4; // size of each block

    int result = indexedSequentialSearch(arr, n, key, blockSize);
    cout << "Index-Sequention-search" << endl;
    cout << "arr :5, 10, 15, 20, 25, 30, 35, 40 " << endl;
    cout << "Element to find : 25" << endl;
    if (result != -1)
        cout << "Element " << key << " found at index " << result << endl;
    else
        cout << "Element " << key << " not found" << endl;

    return 0;
}