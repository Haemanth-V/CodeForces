#include <iostream>

using namespace std;

void solve()
{
    long long x, y, single, both;
    cin >> x >> y >> single >> both;
    
    long long total = 0;
    if(2*single <= both)
    {
        total = (x + y)*single;
    }
    else
    {
        total += min(x, y)*both;
        
        total += (max(x, y) - min(x, y))*single;
    }
    
    cout << total << "\n";
}

int main()
{
    int no_of_test_cases;
    cin >> no_of_test_cases;
    
    while(no_of_test_cases--)
        solve();
    
    return 0;
}
