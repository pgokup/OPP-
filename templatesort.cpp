#include<iostream>
using namespace std;

template <class T>

void selection_sort(T a[],int n){
    for (int i=0;i<n-1;i++){
        int min_in=i;
        for (int j=i+1;j<n;j++){
            if (a[min_in]>a[j]){
                min_in=j;
            }
        }
        if (min_in!=i){
            T temp =a[min_in];
            a[min_in]=a[i];
            a[i]=temp;
        }
    }
}


int main(){
    int arr1[10]={1,9,4,8,5,3,6,7,2,0};
    //int n=sizeof(arr1)/sizeof(arr1[0]);

    selection_sort(arr1,10);

    cout<<"sorted integer array is: [";
    for (int i=0;i<10;i++){
        cout<<arr1[i]<<",";

    }cout<<"]";

    float arr2[8]={1.8,12.4,0.4,5.0,9.5,1.4,5.8,16.2};
    //int m=sizeof(arr2)/sizeof(arr2[0]);

    selection_sort(arr2,8);
    cout<<"\n\nsorted float array is: [";
    for (int i=0;i<8;i++){
        cout<<arr2[i]<<",";
    }cout<<"]";
    return 0;


}
