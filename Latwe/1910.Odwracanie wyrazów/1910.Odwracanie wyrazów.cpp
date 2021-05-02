#include <iostream>

using namespace std;

string string_reverse( string word)
{
    string reverse_word="";
    for(int i = word.size()-1; i>=0; i--)
    {
        reverse_word = reverse_word + word[i];
    }

    return reverse_word;
}
int main()
{
    string word;

    while(cin >> word)
    {
        cout << string_reverse(word) << endl;
    }

    return 0;
}
