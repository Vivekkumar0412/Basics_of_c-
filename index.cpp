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

// #include<bits/stdc++.h>
// using namespace std;

// void pr(int arr[],int size){
//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<endl;
//     };
// };
// int main(){
//     int arr[5] = {3,46,8,98,44};
//     pr(arr,5);
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,5};
//     cout<<sizeof(arr);
//     // cout<<<<endl;
//     return 0;
// };

// #include<bits/stdc++.h>
// using namespace std;

// void arrCall(int arr[],int size){
//     arr[2] = 59;
//     // for(int i =0; i<size; i++){
//     //     cout<<"function ka value : "<<arr[i]<<endl;
//     // };
// }

// int main(){
//     int arr[4] ={5,6,84,6};

//     arrCall(arr,4);
//     for(int i =0; i<4; i++){
//         cout<<"MAIN KA ARRAY : "<<arr[i]<<endl;
//     } ;
// };

// linear search in an array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5] = {4, 5, 7, 59, 9};
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == 59)
//         {
//             cout << "Found the lucky number at : " << i << " and the number is : " << arr[i];
//         };
//     };
//     return 0;
// };

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[100];
//     int n;
//     cout<<"Enter the size of n : "<<endl;
//     cin>>n;
//     for(int i =0; i<n;i++){
//         cin>>arr[i];
//     };

//     for(int i = 0; i<n; i++){
//         cout<<"value is : "<<arr[i]<<endl;
//     };
//     return 0;
// };

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5] = {5, 7, 59, 4, 6};
//     int max=0;
//     for (int i = 0; i < 5; i++)
//     {
//         max = arr[i];
//         // cout << max << endl;
//         if (max >= arr[i])
//         {
//             cout << max << endl;
//             // continue;
//         }
//     }
//     return 0;
// };

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // char a = 'c';
//     // cout<<a;
//     // cout<<int(a);

//     int arr[10] = {1};
//     for(int i = 0; i<10; i++){
//         cout<<arr[i]<<endl;
//         cout<<sizeof(arr);
//     };

//     cout<<"1.5 cr ka pakage lag gaya:)"<<endl;
//     return 0;
// };

// reverse an array

// #include <bits/stdc++.h>
// using namespace std;

// void printArr(int arr[]){
//     for (int i =0; i < 6; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }

// void revArr(int arr[], int size)
// {
//     int i = 0;
//     int j = size - 1;

//     while (i < j)
//     {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     };
//     printArr(arr);

// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     revArr(arr,6);

//     return 0;
// };

// Find the maximum number in an array

// #include <bits/stdc++.h>
// using namespace std;

// void maxElem(int arr[],int size){
//     int ans = INT_MAX;
//     for(int i =0; i<size; i++){
//         ans = min(ans, arr[i]);
//     };
//     cout<<"MAXIMUM VALUE IS : "<<ans;
// }
// int main(){
//     int arr[]= {5,-1,6,7,8,59};
//     maxElem(arr,6);
//     return 0;
// };

//  swap number in alternate order
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {3, 4, 5, 4, 6, 7};
//     int i =0;
//     while(i<6){
//         if(i<6){
//             swap(arr[i],arr[i+1]);
//             i = i+2;
//         }
//     }
//     // for (int i = 0; i < 7;)
//     // {
//     //     if (i < 7)
//     //     {
//     //         swap(arr[i], arr[i + 1]);
//     //         i = i + 2;
//     //     }
//     // };
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// };

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {3, 4, 5, 4, 6, 7};
//     sort(arr, arr + 6);
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << endl;
//     }
// };

// sort 0s , 1s and 2s in an array

// #include<bits/stdc++.h>
// using namespace std;

// void printarr(int arr[],int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void arrsort(int arr[],int size){
//     int one =0,zero =0,two=0;
//     for(int i =0; i<size; i++){
//         if(arr[i]==0){
//             zero++;
//         }else if(arr[i]==1){
//             one++;
//         }else{
//             two++;
//         };
//     };

//     int i =0;
//     while(zero--){
//         arr[i]=0;
//         i++;
//     };

//     while(one--){
//         arr[i]=1;
//         i++;
//     };

//     while(two--){
//         arr[i]=2;
//         i++;
//     };
//     printarr(arr,18);
// }
// int main(){
//     int arr[]= {2,2,2,1,1,1,1,1,0,0,0,0,1,2,1,2,1,0};
//     arrsort(arr,18);
// };

// check palindrome in an aaray

// #include <bits/stdc++.h>
// using namespace std;
// void arrrev(int arr[], int size)
// {
//     int i = 0;
//     int j = size - 1;
//     while (i < j)
//     {
//         if (arr[i] == arr[j])
//         {
//             i++;
//             j--;
//         }
//         else
//         {
//             cout << "NOT A PALINDROME" << endl;
//             break;
//         }
//         cout << "Palindrom";
//     };
// };
// int main()
// {
//     int arr[] = {1, 2, 1};
//     arrrev(arr, 3);
// };

// union in an array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout<<"working";
//     int arr1[] = {1, 3, 5, 7, 9};
//     int arr2[] = {2, 4, 6, 8, 10};
//     int arrun[11];
//     int i, j, k = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr1[i] == arr2[j])
//         {
//             // cin >> arrun[k];
//             k++;
//             i++;
//             j++;
//         }
//         else if (arr1[i] < arr2[j])
//         {
//             // cin >> arrun[k];
//             k++;
//             i++;
//         }
//         else if (arr2[j] < arr1[i])
//         {
//             // cin >> arrun[k];
//             k++;
//             j++;
//         };
//     };

//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr1[i]<< " ";
//     };
//     return 0;
// };

// move all the negative number one side first approach
// using sort() method.
// #include <bits/stdc++.h>
// using namespace std;
// void printarr(int arr[],int size){
//     for(int i =0; i<size; i++){
//         cout<<arr[i]<<" ";
//     };
// };
// void arrsort(int arr[],int size){
//     sort(arr,arr+size);
//     printarr(arr,size);
// };
// int main(){
//     int arr[]= {-1,3,4,-2,-6,7,9,0,-10,16};
//     arrsort(arr,10);
//     return 0;
// };

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 4, 5};
//     sort(arr,arr+5);
//     for(int j = 0; j<6;j++){
//         if(arr[j] == arr[j+1]){
//             cout << arr[j] << " ";
//             j++;
//         }
//     }
// };
// {
//     int arr[] = {1, 2, 3, 4, 4, 5};
//     int arr2[10];
//     int ans = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         ans = arr[i];
//             arr2[i] = ans;
//             if(arr[i] == arr2[i]){

//             }

//         // for (int j = 0; j < 6; j++)
//         // {

//         // };
//     };

// };

// printing subarray of an array

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr []= {1,2,3,4};
//     for(int sp = 0; sp<4; sp++){
//         for(int ep = sp; ep<4; ep++){
//             for(int i = sp; i<=ep; i++){
//                 cout<<arr[i];
//                 // ans = sum;
//             };
//             cout<<endl;
//         }
//     };
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             cout << " * ";
//         };
//         cout << endl;
//     };
//     return 0;
// };


// print hollow rectangle

//  *  *  *  *  * 
//  *           *
//  *           *
//  *           *
//  *  *  *  *  *

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 1; i<=5; i++){
//         for(int j = 1; j<=5; j++){
//             if(i ==1 || i == 5 || j == 1 || j==5){
//                 cout<<" * ";
//             }else{
//                 cout<<"   ";
//             }
//         };
//         cout<<endl;
//     }
// };


// print hollow rectangle using function

//  *  *  *  *  * 
//  *           *
//  *           *
//  *           *
//  *  *  *  *  *


// #include <bits/stdc++.h>
// using namespace std;
// void printrec(int l, int b){
//     for(int i =1; i<=l; i++){
//         for(int j = 1; j<=b; j++){
//             if(i == 1 || i== l || j ==1 || j==b){
//                 cout<<" * ";
//             }else{
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     printrec(5,5);
//     return 0;
// };

// print half pyramid
// * 
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *  *
//  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *

#include <bits/stdc++.h>
using namespace std;
void printpyramid(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<" * ";
        };
        cout<<endl;
    }
}
int main(){
    printpyramid(10);
    return 0;
}
