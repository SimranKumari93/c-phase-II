#include<iostream>

using namespace std;


int binarySearch(int arr[], int size, int key){
    
    int s = 0;
    int e = size - 1;

    int mid =  (e + s) / 2;

    while(s <= e){

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            e = mid - 1;

        }else {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}
int main(){

    int even[6] = {2,4,6,7,89,7};
    int odd[5] = {45,6,53,1,5};

    int evenIndex = binarySearch(even, 6, 7);
    int oddIndex = binarySearch(odd, 5, 53);
    cout<<"index of 7 is " << endl;
    cout<<"index of 53 is " << endl;

 
    return 0;
}