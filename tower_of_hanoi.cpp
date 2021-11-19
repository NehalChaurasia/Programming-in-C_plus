#include<iostream>
using namespace std;
void towerofHanoi(int n,char src,char hlpr,char des){
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,des,hlpr);
    cout<<"Move from"<<src<<"to"<<des<<endl;
    towerofHanoi(n-1,des,hlpr,src);
}
int main(){
    towerofHanoi(4,'A','B','C');
    return 0;

}

Remove the  duplicates from the string 