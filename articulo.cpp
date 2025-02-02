#include <iostream>
#include <string>

// Clase base Articulo
class Articulo {
protected:
    std::string descripcion;

public:
    Articulo(const std::string& desc) : descripcion(desc) {}

    virtual void mostrarInfo() const {
        std::cout << "Descripción: " << descripcion << std::endl;
    }

    virtual ~Articulo() {}
};

// Clase derivada Tipo4
class Tipo4 : public Articulo {
public:
    Tipo4(const std::string& desc) : Articulo(desc) {}

    void mostrarInfo() const override {
        std::cout << "Tipo4 - ";
        Articulo::mostrarInfo();
    }
};

// Clase derivada Tipo7
class Tipo7 : public Articulo {
public:
    Tipo7(const std::string& desc) : Articulo(desc) {}

    void mostrarInfo() const override {
        std::cout << "Tipo7 - ";
        Articulo::mostrarInfo();
    }
};

// Clase derivada Tipo16
class Tipo16 : public Articulo {
public:
    Tipo16(const std::string& desc) : Articulo(desc) {}

    void mostrarInfo() const override {
        std::cout << "Tipo16 - ";
        Articulo::mostrarInfo();
    }
};

// Programa principal
int main() {
    Tipo4 t4("Artículo de tipo 4");
    Tipo7 t7("Artículo de tipo 7");
    Tipo16 t16("Artículo de tipo 16");

    t4.mostrarInfo();
    t7.mostrarInfo();
    t16.mostrarInfo();

    return 0;
}
