// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="sbdhfgetqakdlkcnbggf";
//     transform(s.begin(),s.end(),s.begin(),::toupper);
//     cout<<s<<endl;
//     return 0;
// }

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="AJSHNCBXVFREGH";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}
