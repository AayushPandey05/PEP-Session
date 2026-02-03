#include<iostream>
using namespace std;
bool isPossible(int arr[],int n, int m, int mid){
    int student = 1;
    int pageSum = 0;

    for(int i=0;i<n;i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else {
            student++; //Increase Student Count
            if(student > m || arr[i] > mid){ //To check whether the min student is not excedding...
                return false;
            }

            pageSum = arr[i];
        }
    }
    return true;
}

int Allocate(int arr[],int n,int m){
    int s = 0;
    int sum = 0;

    //..Sum..
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Number of books: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Number of Students: ";
    cin>>m;
    int result = Allocate(arr,n,m);
    cout<<result;
}