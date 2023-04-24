#include <iostream>
#include <vector>

using namespace std;

vector<int> BubbleSort(vector<int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}

vector<int> BubbleSortOp(vector<int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int swapped = 0;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                swapped = 1;
            }
            if(swapped=0){
                break;
            }
        }
    }
    return arr;
}

void PrintArray(vector<int> arr){
    for(int n=0;n<arr.size();n++){
        cout<<arr[n]<<" ";
    }
}

int main() {
    vector<int> array = {9,8,9,0,3,2,8,3,7};
    auto start = chrono::high_resolution_clock::now();
    array = BubbleSort(array);
    auto end = chrono::high_resolution_clock::now();
    //PrintArray(array);
    cout<<"for non optimised "<<chrono::duration_cast<chrono::nanoseconds>(end-start).count()<<endl;
    vector<int> array2 = {9,8,9,0,3,2,8,3,7};
    auto start2 = chrono::high_resolution_clock::now();
    array = BubbleSort(array2);
    auto end2 = chrono::high_resolution_clock::now();
    //PrintArray(array2);
    cout<<"for optimised "<<chrono::duration_cast<chrono::nanoseconds>(end2-start2).count();
}
