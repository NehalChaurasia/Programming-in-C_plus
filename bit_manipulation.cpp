//GETBIT
// #include<iostream>
// using namespace std;
// int getBit(int n,int pos){
//     return((n&(1<<pos))!=0);

// }
// int main(){
//     cout<<getBit(4,1)<<endl;
//     return 0;
// }

//SETBIT
// #include<iostream>
// using namespace std;

// int setBit(int n,int pos){
//     return(n|(1<<pos));
// }
    
// int main(){
//      cout<<setBit(5,1)<<endl;
//          return 0;
// }

//CLEAR BIT

// #include<iostream>
// using namespace std;
// int Clearbit(int n,int pos){
//     int mask=~(1<<pos);
//     return(n&mask);
//     }
// int main(){
//        cout<<Clearbit(5,2)<<endl;
//        return 0;
// }

//UPDATE BIT

#include<iostream>
using namespace std;
int Updatebit(int n,int pos,int value ){
    int mask=~(1<<pos);
    n=n&mask;
    return(n|(value<<pos));
}
int main(){
    cout<<Updatebit(5,1,1)<<endl;
    return 0;
}




