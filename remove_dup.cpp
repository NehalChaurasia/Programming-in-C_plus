// #include<iostream>
// using namespace std;
// string removeDup(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans=removeDup(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     return (ch+ans);
// }
// int main(){
//     cout<<removeDup("aaabbbccccdddeee");
//     return 0;

// }

//Move all 'x' to the end.
// #include<iostream>
// using namespace std;
// string moveallx(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string  ans=moveallx(s.substr(1));
//     if(ch=='x'){
//         return ans+ch;
//     }
//     return(ch+ans);
// }
// int main(){
//     cout<<moveallx("axxbdxxnhsxxgrxgsxdfg");
//     return 0;
// }


// Generate all the substring of a string
// #include<iostream>
// using namespace std;
// void subseq(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string ros=s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }
// int main(){
//     subseq("ABC","");
//     cout<<endl;
//     return 0;
// }

// Generate all the Substring of a string along with the ascii value

// #include<iostream>
// using namespace std;
// void subseq(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch=s[0];
//     int code=ch;
//     string ros=s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
//     subseq(ros,ans+to_string(code));
// }
//     int main(){
//         subseq("AB","");
//         return 0;
//     }

// Get input from the old mobile with keypads

#include<iostream>
using namespace std;

string keypadArray[]={"","","abc","def","ghi","jkl","mno","pqr","stu","vwxyz"};
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadArray[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }

}
int main(){
    keypad("23","");
    return 0;
}

