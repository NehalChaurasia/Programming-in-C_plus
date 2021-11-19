//    #include<iostream>
//  #include<string>
   // using namespace std;
  //  int main(){
    //    string str1(5,'n');
      //  
        //cout<<str1<<endl;
        //return 0;
    //}

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     cout<<str<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str1="fam";
//     string str2="ily";
//     str1.append(str2);
//     cout<<str1<<endl;
//     return 0;
// }
 
//use of "clear"function

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string abc="abcdefghijkl  mno pqrstuvw";
//     abc.clear();
//     cout<<abc<<endl;
//     return 0;
// }


//Use of "compare "function
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="abc";
//     string s2="abc";
//     cout<<s2.compare(s1)<<endl;
//     if(s2.compare(s1)==0){
//         cout<<"they are equal"
//     }
//     return 0;
// }

//Use of  "EMPTY" function
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="abc";
//     cout<<s1<<endl;

//     s1.clear();

//     if(s1.empty())
//     cout<<"string is empty";
//     return 0;
// }

//Use of "Erase"function
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="nincompoop";

//     s1.erase(2,3);
//     cout<<s1<<endl;
//     return 0;
// }

//Use of "Find " function
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="nincompoop";
//     cout<<s1.find("poop")<<endl;
//     return 0;
// }


// Use of  "insert" function
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="nincompoop";
//     s1.insert(2,"lol");
//     cout<<s1<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="nincompoop";
//     cout<<s1.size()<<endl;
//     return 0;
// }

//Access of character in the word using string

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="nincompoop";
//     for(int i=0;i<s1.size();i++)
//         cout<<s1[i]<<endl;
//         return 0;

    
// }

// conversion from string to integer (stoi)
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="786";
//     int x=stoi(s1);
//     cout<<x+2<<endl;
//     return 0;
// }

// Conversion from integer to string

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int x=786;
//     cout<<to_string(x)+"2"<<endl;
//     return 0;
// }

//Sorting

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s1="hfgdtergygdhabdc";
  sort(s1.begin(),s1.end());
  cout<<s1<<endl;
  return 0;
}