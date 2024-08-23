#include <iostream>

class Obj {

public:
    Obj(const std::string& name) : _name(name)
    {
        std::cout << "Creando " << _name << "\n";
    }
    ~Obj()
    {
        std::cout << "Destruyendo " << _name << "\n";
    }
private:
    std::string _name;
};

void fun()
{
    Obj c("C");

    Obj *p = new Obj("P");

    Obj d("D");

    delete p;
}

int main()
{
    std::cout << "Inicio main\n";
    Obj a("A");
    Obj b("B");
    fun();
    fun();
    std::cout << "Final main\n";
    return 0;
}

Obj x("X");
Obj y("Y");
