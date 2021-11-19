//To find one unique number
// #include<iostream>
// using namespace std;
// int unique(int arr[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];

//     }
//     return xorsum; 
// }
// int main(){
//     int arr[]={1,2,3,4,3,2,1};
//     cout<<unique(arr,7)<<endl;
//     return 0;
// }


//To find two unique number 

#include<iostream>
using namespace std;
void unique (int arr[] , int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setBit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setbit(arr[i],pos-1)){
            newxor=newxor^arr[i];


        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;

}
int main(){
    int arr[]={2,4,6,7,4,5,6,2};
    unique(arr,8);
    return 0;
}
