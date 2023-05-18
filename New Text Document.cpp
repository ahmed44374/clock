/*
 * author : Ahmed Qamar
 * created: 18.05.2023
 * */
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main() {
   int hrs,min,sec;
   cout << "Hours";
   cin >> hrs;
   cout << "minutes";
   cin >> min;
   cout << "seconds";
   cin>> sec;
   while(1){
       system("cls");
       cout << "======== CLOCK =========" << endl;
       if(sec > 59){
           min++;
           sec=0;
       }
       if(min > 59){
           hrs++;
           min=0;
       }
       if(hrs > 23) hrs=0;
       cout <<  "   " <<  hrs << "   :   " << min << "   :   " << sec << endl;
       sec++;
       cout << "========================";
       Sleep(1000);

   }

}
