#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Taking input with spaces.
    string str;

    int n = 0;
    cin >> n;

    cin.ignore(); // After taking any input before using getline() function we have to use cin.ignore()!!
    getline(cin, str);

    // storing a string.
    string s = "zxosdosabsaecadkfd";

    sort(s.begin(), s.end()); /*{The s.begin() points at the first element and s.end() at the last element}*/
    cout << "Sorted : " << s << endl;

    // Reversing a string.
    reverse(s.begin(), s.end());
    cout << "Reversed : " << s << endl;

    // Concating string
    string a = "abc", b = "def";
    a = a + b;

    cout << "Concating : " << a << endl;

    // To clear a string.
    cout << "Before clearing b: " << b.size() << endl; // string_name.size() is used to see string size.
    b.clear();
    cout << "After Clearing b : " << b.size() << endl;

    // Copying string.
    string s1 = "Sayed Shahriar", s2 = "Istiyaq";
    cout << "Before copying: " << s1 << endl;

    s1 = s2;

    cout << "After copying: " << s1 << endl;

    // str_name.empty() is used to see if a string is empty . If empty it return 1, else 0.
    cout << "The emplty states : " << s2.empty() << endl;

    // Comparing string.
    string x = "abc", y = "abc";

    if (x == y)
        cout << "They are same" << endl;
}
