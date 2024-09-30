#include <iostream>
#include <string>

using namespace std;

class Country {
    public:
        virtual void displayInfo() = 0;

        virtual ~Country(){
            cout << "Country destroyed" << endl;
        }
};

class USA : public Country {
    void displayInfo() override {
        cout << "Country Name: USA" << endl;
        cout << "Capital: Washington DC" << endl;
        cout << "Population: 331 Million" << endl;
    }
};

class Japan : public Country {
    void displayInfo() override {
        cout << "Country Name: Japan" << endl;
        cout << "Capital: Tokyo" << endl;
        cout << "Population: 126 Million" << endl;
    }
};

class Germany : public Country {
    void displayInfo() override {
        cout << "Country Name: Germany" << endl;
        cout << "Capital: Berlin" << endl;
        cout << "Population: 83 Million" << endl;
    }
};

class India : public Country {
    void displayInfo() override {
        cout << "Country Name: India" << endl;
        cout << "Capital: New Delhi" << endl;
        cout << "Population: 1.366 Billion" << endl;
    }
};

int main()
{
    int size = 0;
    cout << "Enter the number of countries to display info for (up to 4): ";
    cin >> size;
    int * countPtr = new Country [size];
    Country[0] = new USA();
    Country[1] = new Japan();
    Country[2] = new Germany();
    Country[3] = new India();

    for (int i = 0; i<size; i++)
    {
        countPtr[i].displayInfo();
    }
    delete[] countPtr;
    return 0;
}