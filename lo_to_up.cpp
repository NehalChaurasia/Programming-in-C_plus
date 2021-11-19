#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1="sgdterthcbfhgg";
    for(int i=0; i<str1.size(); i++){
        if(str1[i]>='a'&&str1[i]<='z')
             str1[i]-=32;

    }
    cout<<str1;
    return 0;
}