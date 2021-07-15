#include <iostream>
int i(1);
void num(int);
int main()
{
    int x;
    std::cin >> x;
    if (x <= 0)
    {
        std::cout << "Error!!!\n";
        return 0;
    }  
    else
    {
        num(x); 
    }
}

void num(int x)
{
    if (i <= x) 
    {
        if (i % 3 == 0)
        {
            std::cout << i << "Bar" << "\n";
            i++;
            num(x);
        }
        else
        {
            std::cout << i << "Foo" << "\n";
            i++;
            num(x);
        }
    }
    else return;   
}