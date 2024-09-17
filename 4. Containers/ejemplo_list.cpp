#include <iostream>
#include <list>

struct Fecha {
    int anio;
    std::string mes;
    int dia;
};

// Regresa true si a va antes de b.
bool compara_fechas(const Fecha& a, const Fecha& b)
{
    return a.dia < b.dia;
}

int main()
{
    std::list<std::string> lista { "lunes", "martes", "miércoles" };
    lista.push_front("jueves");
    lista.push_back("viernes");
    lista.push_front("sábado");
    lista.push_back("domingo");

    for (std::string elem : lista) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    lista.sort();

    for (std::string elem : lista) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    std::cout << lista.size() << "\n";

    lista.clear();

    std::cout << lista.size() << "\n";

    std::list<Fecha> lista_fechas {
        {2024, "septiembre", 17},
        {2000, "enero", 1}
    };

    lista_fechas.push_back({1789, "julio", 14});

    for (Fecha elem : lista_fechas) {
        std::cout << elem.anio << " " << elem.mes << " " << elem.dia << "\n";
    }

    std::cout << "\n";

    lista_fechas.sort(compara_fechas);

    for (Fecha elem : lista_fechas) {
        std::cout << elem.anio << " " << elem.mes << " " << elem.dia << "\n";
    }

    std::cout << "\n";

    return 0;
}
