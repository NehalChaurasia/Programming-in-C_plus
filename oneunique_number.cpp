// # include<iostream>
// using namespace std;
// int setBit(int n,int pos){
//     return ((n&(1<<pos))!=0);

// }
// int unique(int arr[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];
//     }
//     int setbit=0;
//     int pos=0;
//     int tempxor=xorsum;
//     while (setbit!=1){
//         setbit=xorsum&1;
//         pos++;
//         xorsum=xorsum>>1;

//     }
//     int newxor=0;
//     for(int i=0;i<n;i++){
//         if (setBit(arr[i],pos-1)){
//             newxor=newxor^arr[i];
//         }
//     }

//     cout<<newxor<<endl;
//     cout<<(tempxor^newxor)<<endl;
// }
// int main(){
//     int arr[]={1,2,3,1,2,3,5,7};
//     unique(arr,8);
//     return 0;
// }



//Write a program to find a unique number in an array where all
//numbers except one are present thrice .
#include<iostream>
using namespace std;
bool getBit(int n,int pos){
    return((n&(1<n))!=0);
}
setBit(int n ,int pos){
    return(n|(1<<pos));

}

int unique(int arr[],int n){
    int result=0;
    
    for(int i=0;i<64;i++){
        
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result=setBit(result,i);
        }
    }
    return result;
}
int main(){
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr,10)<<endl;
    return 0;
}


