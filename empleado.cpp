#include <iostream>
#include <string>

// Clase base Empleado
class Empleado {
protected:
    std::string nombre;

public:
    Empleado(const std::string& nom) : nombre(nom) {}

    virtual std::string toString() const {
        return nombre;
    }

    virtual ~Empleado() {}
};

// Clase derivada Gerente
class Gerente : public Empleado {
public:
    Gerente(const std::string& nom) : Empleado(nom) {}

    std::string toString() const override {
        return "Gerente: " + Empleado::toString();
    }
};

// Clase derivada Ingeniero
class Ingeniero : public Empleado {
public:
    Ingeniero(const std::string& nom) : Empleado(nom) {}

    std::string toString() const override {
        return "Ingeniero: " + Empleado::toString();
    }
};

// Clase derivada Administrativo
class Administrativo : public Empleado {
public:
    Administrativo(const std::string& nom) : Empleado(nom) {}

    std::string toString() const override {
        return "Administrativo: " + Empleado::toString();
    }
};

// Programa principal
int main() {
    Gerente g("Juan Perez");
    Ingeniero i("Ana Gomez");
    Administrativo a("Carlos Ruiz");

    std::cout << g.toString() << std::endl;
    std::cout << i.toString() << std::endl;
    std::cout << a.toString() << std::endl;

    return 0;
}
