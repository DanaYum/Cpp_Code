// #include<iostream>
// using namespace std;
// main()
// {
//     string s1("12345");
//     string s2("abcde");
//     s1.append(s2);
//     cout<<s1<<endl;
//     s1.append(s2,1,2);
//     cout<<s1;
// }
// #include<iostream>
// using namespace std;
// main()
// {
//     string s1("12345");
//     string s2("abcde");
//     cout<<s1<<" "<<s2<<endl;
//     s1.insert(4,s2);
//     cout<<s1<<endl;
//     s1.erase(4,5);
//     cout<<s1<<endl;
//     s2.replace(1,3,s1);
//     cout<<s2<<endl;
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="welcome";
    cout<<"Size="<<str.size()<<endl;
    cout<<"Length="<<str.length()<<endl;
    cout<<"Max Size="<<str.max_size()<<endl;
    cout<<"Empty: "<<(str.empty()?"yes":"no")<<endl;
}
