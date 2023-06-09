#include <iostream>
#include "Auto.h"
#include <vector>

void agregarAuto(std::vector<Auto> &cars) {
    std::string marca;
    std::string modelo;
    int velocidadMaxima;
    int caballos;
    int aceleracion;

    std::cout << "-- Agregar Auto--" << std::endl << std::endl;
    std::cout << "Marca: ";
    std::cin >> marca;
    std::cout << "Modelo: ";
    std::cin >> modelo;
    std::cout << "Velocidad Max: ";
    std::cin >> velocidadMaxima;
    std::cout << "Caballos fuerza: ";
    std::cin >> caballos;
    std::cout << "Aceleracion: ";
    std::cin >> aceleracion;

    Auto a(marca, modelo, velocidadMaxima, caballos, aceleracion);
    cars.push_back(a);
}

void modificarAuto(std::vector<Auto>cars) {
    std::cout << "Mycars:" << std::endl;
    for (auto car : cars) {
        std::cout << "Car: " << car.marca << " model: " << car.modelo;
    }
}
int main()
{   
    std::vector<Auto>cars;
    while (true) {
        // menu
        bool exit = false;
        int input;
        std::cout << "Menu: " << std::endl;
        std::cout << "1 agregar auto: " << std::endl;
        std::cout << "2 modificar auto: " << std::endl;
        std::cout << "3 salir: " << std::endl;
        std::cin >> input;
        switch (input)
        {
        case 1:
            agregarAuto(cars);
            break;
        case 2:
            modificarAuto(cars);
            break;
        case 3:
            exit = true;
            break;
        default:
            break;
        }

        if(exit){
            break;
        }
    }
}
