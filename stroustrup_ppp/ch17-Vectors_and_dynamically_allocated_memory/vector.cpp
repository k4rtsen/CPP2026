// here I am creating my own vector class.

#include <iostream>
using std::cout;

class vector
{
private:
    int sz;       // размер вектора
    double *elem; // указатель на первый элемент (типа double)

public:
    vector(int s) : sz{s}
    {
        elem = new double(sz);
    }

    int size() const { return sz; }
};

int main()
{

    return 0;
}
