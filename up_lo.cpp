#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="AHSGVVXBUYETEG";
    for(int i=0;i<s1.size();i++){
        if(s1[i]>='A'&&s1[i]<='Z')
        s1[i]+=32;
    }
    cout<<s1<<endl;
}