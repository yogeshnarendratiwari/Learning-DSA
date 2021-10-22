#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;

    // Insertion in  a map
    m.insert(pair<int, int>(1, 40));
    m.insert(pair<int, int>(2, 40));
    m.insert(pair<int, int>(3, 40));
    m.insert(pair<int, int>(4, 90));
    m.insert(pair<int, int>(5, 40));
    m.insert(pair<int, int>(6, 40));
    m.insert(pair<int, int>(7, 40));
    m.insert(pair<int, int>(8, 40));
    m.insert(pair<int, int>(9, 40));
    m.insert(pair<int, int>(10, 40));

    // iteration in a map
    map<int, int>::iterator itr;
    // for (itr = m.begin(); itr != m.end(); ++itr)
    // {
    //     cout << itr->first << "  " << itr->second << endl;
    // }

    // Assigning elements of m in n
    // map<int, int> n(m.begin(), m.end());

    //erasing elements of n upto key value 3
    // m.erase(m.begin(),m.find(3));
    //  for (itr = m.begin(); itr != m.end(); ++itr)
    // {
    //     cout << itr->first << "  " << itr->second << endl;
    // }

    //erasing at particular key value
    // m.erase(4);
    //  for (itr = m.begin(); itr != m.end(); ++itr)
    // {
    //     cout << itr->first << "  " << itr->second << endl;
    // }

    //Upperbond and lowerbond
    cout << m.upper_bound(4)->first << " ";
    cout << m.upper_bound(4)->second << endl;
    cout << m.lower_bound(4)->first << " ";
    cout << m.lower_bound(4)->second << endl;
}