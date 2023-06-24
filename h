#include <iostream>
#include <string>
using namespace std;

class arrayy
{
private:
    int* arr=nullptr;
    int size=0;

public:
    arrayy(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    arrayy(const arrayy& obj)
    {
        size = obj.size;
    }



    void get_element()
    {
        for (int i = 0; i < size; ++i)
        {
            arr[i] = 1;
        }

        for (int i = 0; i < size; ++i)
        {
            cout << arr[i];
        }

    }

    ~arrayy()
    {
        delete[] arr;
    }
};

int main()
{
    
    int size;
    cin >> size;
    arrayy a(size);
    arrayy obj1 = a;
    a.get_element();

    return 0;
}
