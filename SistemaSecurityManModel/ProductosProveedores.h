#pragma once
#include "Componentes.h"
#include "Proveedores.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaSecurityManModel {

    public ref class ProductosProveedores {

    private:
        int Codigo;
        Proveedores^ objProveedores;
        double Precio;
        int Stock;
        Componentes^ objComponentes;

    public:
        ProductosProveedores();
        ProductosProveedores(int Codigo, Proveedores^ objProveedores, Componentes^ objComponentes, double Precio, int Stock);

        //propiedades GET y SET  
        int getCodigo();
        void setCodigo(int Codigo);

        Proveedores^ getProveedores();//obtiene el valor
        void setProveedores(Proveedores^ Proveedores);// actualiza el valor 

        Componentes^ getComponentes();
        void setComponentes(Componentes^ objComponentes);

        double getPrecio();
        void setPrecio(double Precio);

        int getStock();
        void setStock(int Stock);
    };
}