// 1:- Write a Program to print "Hello, World!"
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"NAMASTE DUNIYA !"<<endl;
//     return 0;
// };

// 2) Write a Program to Print Integer Number Entered by Use

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     cout<<n<<endl;
// };

// 3) Write a Program to Add Two Integer Numbers Entered by
// User

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<a+b<<endl;
//     return 0;
// };

// 4) Write a program where the user is asked to enter two
// integers (divisor and dividend) and the quotient and the
// remainder of their division is computed.(Both divisor and
// dividend should be integers.)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int divisor,divedent;
//     cout<<"ENTER THE DIVISOR"<<endl;
//     cin>>divisor;
//     cout<<"ENTER THE DIVIDENT"<<endl;
//     cin>>divedent;
//     cout<<divedent/divisor<<endl;
//     return 0;
// };

// 5) Write a Program to Find Size of int, float, double and char
// in your computer

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 9;
//     float c = 3.4;
//     char b = 'b';
//     double z = 1802009.308083803;

//     cout<<sizeof(n)<<sizeof(z)<<sizeof(b)<<sizeof(c);
//     return 0;
// };

// 6) Write a Program to Swap Two Numbers

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = 20;
//     int c;
//     c = b;
//     b = a;
//     a = c;
//     cout<<"THE VALUE OF A : "<<a<<endl;
//     cout<<"THE VALUE OF B : "<<b<<endl;
//     return 0;
// };

// 7) Write a Program to Find ASCII Value of a Character

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char c = 'b';
//     cout<<int(c)<<endl;
//     return 0;
// };

// 8) Write a Program to Multiply two decimal Numbers
// entered by User

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// float a,b,c;
// cout<<"enter the value of a"<<endl;
// cin>>a;
// cout<<"enter the value of b"<<endl;
// cin>>b;
// c = a*b;
// cout<<c<<endl;
// return 0;
// };

// ########## USING IF - ELSE CONDTIONS ###########

// 1) Write a Program to Check Whether Number is Even or
// Odd

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number "<<endl;
//     cin>>n;
//     if(n%2 == 0){
//         cout<<"EVEN";
//     }else{
//         cout<<"ODD";
//     };
//     return 0;
// };

// ) Write a Program to Check Whether a Character is
// Vowel or Consonant.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char c;
//     cout << "Enter the character: " << endl;
//     cin >> c;
//     cout << c<<endl;
//     // char lower = );
//     // char upper = ('A'||'E'||'I'||'O'||'U');

//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//     {
//         cout << "VOWEL" << endl;
//     }
//     else
//     {
//         cout << "CONSONANAT" << endl;
//     }
//     return 0;
// };

// 3) Write a Program to Find Largest Number Among Three
// Numbers entered by users

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"ENTER THE VALUE OF A : "<<endl;
//     cin>>a;
//     cout<<"ENTER THE VALUE OF B : "<<endl;
//     cin>>b;
//     cout<<"ENTER THE VALUE OF C : "<<endl;
//     cin>>c;

//     if(a>b){
//         if(a>c){
//             cout<<a<<" A IS THE GREATEST"<<endl;
//         }else{
//             cout<<c<<" C is the greatest"<<endl;
//         };
//     }else if(b>a){
//         if(b>c){
//             cout<<b<<" B is greatest"<<endl;
//         }else{
//             cout<<c<<" C is greatest"<<endl;
//         }
//     }else{
//         cout<<"ALL ARE SAME"<<endl;
//     }
// };
// 4) Write a Program which accepts coefficients of a
// quadratic equation from the user and displays the roots
// (both real and complex roots depending upon the
// discriminant).

// #include <bits/stdc++.h>
// using namespace std;

// int sum(int a, int b){
//     // cout<<"sum is : "<<a+b<<endl;
//     return a+b;
// }
// int main(){
//     int a = 80;
//     int c = 90;
//     cout<<sum(a,c);
//     return 0;
// };


// pass by value;

#include <bits/stdc++.h>
using namespace std;

void s(int n){
    n = 20;
    cout<<"Function value : "<<n<<endl;
}
int main(){
    s(40);
    return 0;
};

