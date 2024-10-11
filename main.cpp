#include <iostream>
using namespace std;

int somma(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int sottrazione(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int molt(int a, int b)
{
    int c;
    c = a*b;
    return c;
}

int divi(int a, int b)
{
    int c;
    c = a/b;
    return c;
}

int pot(int a, int b)
{
    int c(a),i;
    for(i=0;i<a;i++)
    {
        c = a * b;
    }
    return c;
}

int main() 
{
    unsigned int a,b;
    cout << "Ins a & b ( > 0 )" << endl;
    cout << "Somma: " << somma(a,b) << endl << "Sottrazione" << sottrazione(a,b) << endl 
    << "Divisione: " << divi(a,b) << endl << "Potenza: " << pot(a,b); 
}

