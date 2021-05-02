#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//bool palindrome_petla(int x);

bool palindrome(int x)
{
    string num=to_string(x);
    string num_R = num;

   reverse(num_R.begin(), num_R.end()); //odwracanie za pomoc¹ funkcji

    if(num==num_R) return true;

    else return false;
}

int palindrome_int(int x)
{
    string num_R=to_string(x);
    int rev;

   reverse(num_R.begin(), num_R.end()); //odwracanie za pomoc¹ funkcji

    return rev = stoi(num_R);


}

int main()
{
    int liczba, t;
    cout << "Hello world!" << endl;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        int quantity=0;
        int suma=liczba;
         cin >> liczba;

         while(palindrome(liczba)==0)
         {
             liczba = liczba + palindrome_int(liczba);
            quantity++;
         }

        cout << liczba << " " << quantity<<endl;

    }


    return 0;
}
/*
bool palindrome_petla(int x)
{

    string num=to_string(x);
    string num_R = num;
    int j=0;
    for(int i=num.length()-1; i>=0; i--)
    {
        num_R[j]=num[i];
        j++;
    }
    cout << "0: " <<num.length()<<endl;
    cout << "1: " <<num<<endl;
    cout << "2: " <<num_R<<endl;

    if(num==num_R) return true;

    else return false;
}

string reverseString(string str)
{
    string Rstr;
    int len=str.length();
    for(int i=len-1;i>=0;i--)Rstr+=str[i];
    return Rstr;
}

void reverseString(string &str)
{
    int len=str.length();
    for(int i=0;i<len/2;i++)swap(str[i],str[len-i-1]);
}*/
