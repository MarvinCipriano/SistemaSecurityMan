#pragma once
#include "Proveedores.h"
using namespace System;

namespace SistemaSecurityManModel {

    public ref class Proveedores {

    private:
        String^ Nombre;
        String^ RUC;
        String^ Email;
        String^ Direccion;
        int Telefono;
    public:
        Proveedores();
        Proveedores(String^ Nombre, String^ RUC, String^ Email, String^ Direccion, int Telefono);
        //propiedades GET y SET
        String^ getNombre();//obtiene el valor
        void setNombre(String^ Nombre);// actualiza el valor

        String^ getRUC();
        void setRUC(String^ RUC);

        String^ getEmail();
        void setEmail(String^ Email);

        String^ getDireccion();
        void setDireccion(String^ Direccion);

        int getTelefono();
        void setTelefono(int Telefono);
    };
}