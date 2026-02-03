#include<iostream>
#include<vector>
using namespace std;
void mergearray(int arr1[],int n, int arr2[],int m, int arr3[]){
    int i,j;
    i=j=0;
    int k = 0;
    while(i<n && i<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[],int n){
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[n];
    for(int j = 0;j<m;j++){
        cin>>arr2[j];
    }
    mergearray(arr1,n,arr2,m,arr3);
    print(ans,n);
    return 0;
}