#pragma once
#include "Clientes.h"
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaSecurityManModel {

    public ref class Locales {

    private:
        int Codigo;
        String^ Nombre;
        String^ Ubicacion;
        Clientes^ objClientes;
        String^ Direccion;
        String^ Distrito;

    public:
        Locales();
        Locales(int Codigo, String^ Nombre, String^ Ubicacion, Clientes^ objClientes, String^ Direccion, String^ Distrito);

        //propiedades GET y SET         
        int getCodigo();//obtiene el valor
        void setCodigo(int Codigo);// actualiza el valor 

        String^ getNombre();
        void setNombre(String^ Nombre);

        String^ getUbicacion();
        void setUbicacion(String^ Ubicacion);

        Clientes^ getClientes();
        void setClientes(Clientes^ objClientes);

        String^ getDireccion();
        void setDireccion(String^ Direccion);

        String^ getDistrito();
        void setDistrito(String^ Distrito);
    };
}