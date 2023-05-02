#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(b >= a)
        cout << "Wrong order!" << endl;
    else if( (a-b) % 2 != 0)
    {
        cout << "Wrong difference!" << endl;
    }
    else
    {
        int x1 = (a-b)/2 + 1; 
        int y1 = (a-b)/2 + 1;

        int x2 = a-((a-b)/2);   
        int y2 = a-((a-b)/2);

        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=a;j++)
            {
                if((i >= x1 && i <= x2) && (j >= y1 && j <= y2))
                    cout << "  ";
                else
                    cout << "* ";        
            }

            cout << endl;
        }
    }

    return 0;
}