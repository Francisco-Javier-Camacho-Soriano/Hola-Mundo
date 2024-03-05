#include <iostream>
#include <mascota.hpp>
#include <Alimento.hpp>
#include <list>
// using namespace std;

int main()
{

    std::list<Mascota> mascotas;

    Mascota m1("Firulais");
    Mascota m2("Roko");

    mascotas.push_back(m1);
    mascotas.push_back(m2);

    Alimento a1(5);
    Alimento a2(2);

    m1.comer(a1);
    m2.comer(a2);

    for (auto &&mascota : mascotas)
    {
        std::cout
            << mascota.LeerNombre()
            << ":"
            << mascota.LeerEnergia()
            << std::endl;
    }

    return 0;
}