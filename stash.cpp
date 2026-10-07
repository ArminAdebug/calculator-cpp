// this is only for saving codes



#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

float do_operation(float n1, string o, float n2)
{
    if (o == "+")
    {
        return n1 + n2;
    }
    else if (o == "-")
    {
        return n1 - n2;
    }
    else if (o == "*")
    {
        return n1 * n2;
    }
    else if (o == "/")
    {
        if (n2 == 0)
        {
            throw std::runtime_error("cannot divide by zero");
        }
        else
        {
            return n1 / n2;
        }
    }
    else
    {
        throw std::runtime_error("unknown operation.");
    }
}

int main()
{
    float a = 0;
    float b = 0;
    string o = "";

    cout << "enter math:";

    cin >> a >> o >> b;

    try
    {
        double result = do_operation(a, o, b);
        std::cout << result;
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Error: " << e.what();
    }
    return 0;
}
