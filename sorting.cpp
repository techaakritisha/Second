//Selection Sort ----------------->>>>>>>>>>>>.

// 1.Take a element and compair it remaining element of the array;
// 2.And of the contion is satisfied than swap the position of the both the element 

// Space Complexity ---> O(1)
// Time Complexity -->O(n) for both worst and the best cases

#include<bits/stdc++.h>
using namespace std ;

int selectionSort(int arr[] , int n){
     
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
           if(arr[j] < arr[mini])
            mini = j;
        }
        swap(arr[mini] , arr[i]);
    }
}

int printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << " \n";
}
int main()
{
     int arr[8] = {5,4,3,9,7,12,17,25};
     int brr[4] = {14,47,2,13};

     selectionSort(arr,10);
     printArray(arr,10); 

     selectionSort(brr,4);
     printArray(brr,4);         
    return 0;
}

//Bubble Sort ----------------------------->>>>>>>>>>>>>>>>>

#include<bits/stdc++.h>
using namespace std ;

// If the Array is Sorted--
// Time Complexity will be ---> O(n) in this Case
void BubbleSort(int arr[] , int n){
    
    bool swapped = false
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true
            }
        }
        if(swapped == flase){
            break;
        }
    }
}

//In Each round we have to sort last one element 
//In this way Whole array will get sorted

// Time Complexity = O(n2)
//Space Complexity = O(1)
//Worst Case = O(n2)
//Best Case = Sorted Array -- > O(n)

void BubbleSort(int arr[] , int n){

    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
 int printArray(int arr[] , int n){
     for(int i=0; i<n; i++){
         cout << arr[i] << " ";
     }
     cout << " \n";
  }
int main()
{
    int arr[8] = {5,4,3,9,7,12,17,25};
    int brr[4] = {14,47,2,13};  

    BubbleSort(arr ,8);
    printArray(arr ,8);

    BubbleSort(brr ,4);
    printArray(brr ,4);

    return 0;
}


//----------->Insertion Sort

#include<bits/stdc++.h>
using namespace std ;

// Space Complexity - O(1)
// Time Complexity - O(n2)
// * Best Case - O(n) ---->Ex={1,2,3,4,5,8,9}
// *Worst Case - O(n2)----> Ex={9,8,5,2,1}

void InsertionSort(int arr[] , int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0 ;j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int printArray(int arr[] , int n){
     for(int i=0; i<n; i++){
         cout << arr[i] << " ";
     }
     cout << " \n";
  }
int main()
{
    int arr[8] = {5,4,3,9,7,12,17,25};
    int brr[4] = {14,47,2,13};    

    InsertionSort(arr,8);
    printArray(arr,8);

    InsertionSort(brr,4);
    printArray(brr,4);
    return 0;
}
