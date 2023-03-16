//Artan Rexhepi INKI964
#include <iostream>
using namespace std;
// zamena na dva elementi
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
   
// podelba na nizata koristejki go posledniot element kako prv
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);   
   
    for (int j = low; j <= high- 1; j++) 
    { 
        //ako momentalniot element e pomal ili ednakov na prviot, zgolemi
        //zamena na elementite i i j
        if (arr[j] <= pivot) 
        { 
            i++;    // zgolemuvanje na indeksot na pomaliot element
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
   
//quick sort algoritmot
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        //podelba na nizata
        int pivot = partition(arr, low, high); 
   
        //nezavisno sortiranje na podnizite
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   
void displayArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
   
int main() 
{ 
   string student="Artan Rexhepi INKI964";
   int m=student.size();
   int arr[100],k=0;
   for(int j=0;j<m;j++)
   {
   arr[k]=(int)student[j];
   k++;
   }
   int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Vnesena niza : "<<endl;
    displayArray(arr,n);
    cout<<endl;
    quickSort(arr, 0, n-1); 
    cout<<"Niza sortirana so quick sort algoritmot : "<<endl; 
    displayArray(arr,n); 
    return 0; 
}
