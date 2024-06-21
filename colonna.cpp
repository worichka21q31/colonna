#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int min10(int massive[100], int n, int &save)
{
    int s = 0;
    for (int i = n; i < n + 10; ++i) 
    {    
        s += massive[i];
    }
    if (100 - n == 10)
    {
        save = n;
        return s;
    }
    else
    {
        int s1 = min10(massive, n + 1, save);
        if (s <= s1)
        {
            save = n;
            return s;
        }
        else
        {
            return s1;
        }
    }
}
 
int main()
{
    int massive[100];
    int p;
    srand(time(NULL));
    for (int i = 0; i < 100; ++i) 
    {
        massive[i] = rand() % 100;
    }
    for (int i = 0; i < 100; ++i) 
    {
        cout << massive[i] << " ";
    }
    cout << endl << endl;
    
    min10(massive, 0, p);
    
    cout << "Minimum position: " << p << endl << endl;
 
    system("pause");
}
