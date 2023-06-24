#include <iostream>
#include <string>
using namespace std;

class arrayy
{
private:
    int* arr;
    int size;

public:
    arrayy(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    arrayy(const arrayy& obj)
    {
        size = obj.size;
        arr = new int[size];
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
    a.get_element();

    return 0;
}
