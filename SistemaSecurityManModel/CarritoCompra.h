#pragma once
#include "Tipo_Producto.h"
using namespace System;

namespace SistemaSecurityManModel {

    public ref class CarritoCompra {

    private:
        int Unidades;
        Tipo_Producto^ objTipo;
        double Precio_t;
    public:
        CarritoCompra();
        CarritoCompra(Tipo_Producto^ Tipo, int Unidades, double Precio_t);

        //propiedades GET y SET
        int getUnidades();//obtiene el valor
        void setUnidades(int Unidades);// actualiza el valor

        Tipo_Producto^ getTipo();
        void setTipo(Tipo_Producto^ Tipo);

        double getPrecio_t();
        void setPrecio_t(double Precio_t);
    };
}