#pragma once
#include "ProductosProveedores.h"
using namespace System;

namespace SistemaSecurityManModel {

    public ref class CarritoProveedores {

    private:
        int Unidades;
        ProductosProveedores^ objComponentes;
        double Precio_t;
    public:
        CarritoProveedores();
        CarritoProveedores(ProductosProveedores^ objComponentes, int Unidades, double Precio_t);

        //propiedades GET y SET
        int getUnidades();//obtiene el valor
        void setUnidades(int Unidades);// actualiza el valor

        ProductosProveedores^ getProductosProveedores();
        void setProductosProveedores(ProductosProveedores^ objComponentes);

        double getPrecio_t();
        void setPrecio_t(double Precio_t);
    };
}