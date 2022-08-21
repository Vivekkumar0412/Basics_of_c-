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

// #include <bits/stdc++.h>
// using namespace std;

// void s(int n){
//     n = 20;
//     cout<<"Function value : "<<n<<endl;
// }
// int main(){
//     s(40);
//     return 0;
// };

// print all even number till n using funtion

// #include<bits/stdc++.h>
// using namespace std;

// void allEVEN(int n){
//     for(int i = 1; i<=n; i++){
//         if(i%2 == 0){
//             cout<<i<<" is a even number"<<endl;
//         };
//     }
// }
// int main(){
//     allEVEN(19);
//     return 0;
// };

// Print all the squares using function

// #include<bits/stdc++.h>
// using namespace std;

// void sq(int n){
//     for(int i = 1; i<=n; i++){
//         cout<<"square of "<<i<<" is "<<i*i<<endl;
//     };
// }

// int main(){
//     sq(9);
// }

// find the factorail of the number using function

// #include <bits/stdc++.h>
// using namespace std;

// void fact(int n)
// {
//     int prod = 1;
//     for (int i = n; i > 1; i--)
//     {
//         prod = prod * i;
//     };
//     cout << prod << endl;
// }

// int main()
// {
//     fact(5);
//     // int p = 1;
//     // int n = 5;
//     // for(int i = n; i>1; i--){
//     //     p = p*i;
//     //     cout<<p<<endl;
//     // }
//     return 0;
// }


// print your name n times


// #include<bits/stdc++.h>
// using namespace std;

// void prin(int n){
//     for(int i = 1; i<=n; i++){
//         cout<<"Vivek Kumar"<<endl;
//     }
// };
// int main(){
//     prin(10);
//     return 0;
// };

// print all the elements in an array



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,32,4,5,6,7,8};

//     for(int i = 0; i<7; i++){
//         cout<<arr[i]<<endl;
//     }
// };



// print all the elements in an array using function
// while we are using functio to print the elemts of an array it is recommended that we should always take size of array as input.

#include<bits/stdc++.h>
using namespace std;

void pr(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    };
};
int main(){
    int arr[5] = {3,46,8,98,44};
    pr(arr,5);
}

