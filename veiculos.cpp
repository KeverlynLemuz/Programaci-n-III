#include <iostream>
#include <string>

// Clase base Vehiculo
class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int año;

public:
    Vehiculo(const std::string& marca, const std::string& modelo, int año)
        : marca(marca), modelo(modelo), año(año) {}

    virtual void mostrarInfo() const {
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Año: " << año << std::endl;
    }

    virtual void arrancar() const {
        std::cout << "El vehículo está arrancando." << std::endl;
    }

    virtual ~Vehiculo() {}
};

// Clase derivada Coche
class Coche : public Vehiculo {
    int numPuertas;

public:
    Coche(const std::string& marca, const std::string& modelo, int año, int numPuertas)
        : Vehiculo(marca, modelo, año), numPuertas(numPuertas) {}

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        std::cout << "Número de puertas: " << numPuertas << std::endl;
    }

    void arrancar() const override {
        std::cout << "El coche está arrancando." << std::endl;
    }
};

// Clase derivada Moto
class Moto : public Vehiculo {
    bool tieneCasco;

public:
    Moto(const std::string& marca, const std::string& modelo, int año, bool tieneCasco)
        : Vehiculo(marca, modelo, año), tieneCasco(tieneCasco) {}

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        std::cout << "Tiene casco: " << (tieneCasco ? "Sí" : "No") << std::endl;
    }

    void arrancar() const override {
        std::cout << "La moto está arrancando." << std::endl;
    }
};

// Clase derivada Camion
class Camion : public Vehiculo {
    float capacidadCarga;

public:
    Camion(const std::string& marca, const std::string& modelo, int año, float capacidadCarga)
        : Vehiculo(marca, modelo, año), capacidadCarga(capacidadCarga) {}

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        std::cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << std::endl;
    }

    void arrancar() const override {
        std::cout << "El camión está arrancando." << std::endl;
    }
};

// Programa principal
int main() {
    Coche coche("Toyota", "Corolla", 2020, 4);
    Moto moto("Yamaha", "YZF-R3", 2019, true);
    Camion camion("Volvo", "FH", 2018, 18.5);

    std::cout << "Información del Coche:" << std::endl;
    coche.mostrarInfo();
    coche.arrancar();

    std::cout << "\nInformación de la Moto:" << std::endl;
    moto.mostrarInfo();
    moto.arrancar();

    std::cout << "\nInformación del Camión:" << std::endl;
    camion.mostrarInfo();
    camion.arrancar();

    return 0;
}
