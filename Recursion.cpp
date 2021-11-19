// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int prevSum=sum(n-1);
//     return n + prevSum;

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
//     return 0;
// }

// Calculate N to the power p.
// #include<iostream>
// using namespace std;
// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int prevPower=power(n,p-1);
//     return n*prevPower;
// }
//     int main(){
//         int n,p;
//         cin>>n>>p;
//         cout<<power(n,p)<<endl;
//         return 0;
//     }

// Factorial of n number.
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     int prevFact=factorial(n-1);
//     return n*prevFact;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n)<<endl;
//     return 0;
// }

//Print the nth  Fibonacci number

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==0||n==1){
//     return n;
// }
// return fib(n-1)+fib(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
//     return 0;
// }


//Check if an array is sorted or not

// #include<iostream>
// using namespace std;
// bool sorted (int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restArray=(arr+1,n-1);
//     return(arr[0]<arr[1] && restArray);
    
// }
// int main(){
//     int arr[]={1,6,3,4,5};
//     cout<<sorted(arr,5)<<endl;
//     return 0;
//     }

// To write decreasing and increasing order using recursion.
// #include<iostream>
// using namespace std;
// void dec(int n){
//     if(n==0){
//         return ;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     dec(n);
//     return 0;
// }


//INCREASING ORDER

// #include<iostream>
// using namespace std;
// void inc(int n){
//     if(n==1){
//         cout<<"1"<<endl;
        
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     inc(n);
//     return 0;
// }

// Find the First and the Last Occurence of a number in an Array.

#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);

}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArray=lastocc(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,0,2)<<endl;
    return 0;
    
}