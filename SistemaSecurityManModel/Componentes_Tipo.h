#pragma once
#include "Tipo_Producto.h"

using namespace System;

namespace SistemaSecurityManModel {

    public ref class Componentes_Tipo {

    private:
        int Codigo;
        String^ Nombre;
        String^ Utilidad;
        Tipo_Producto^ objTipo_Producto;

    public:
        Componentes_Tipo();
        Componentes_Tipo(int Codigo, String^ Nombre, String^ Utilidad, Tipo_Producto^ objTipo_Producto);

        //propiedades GET y SET
        String^ getNombre();//obtiene el valor
        void setNombre(String^ Nombre);// actualiza el valor

        String^ getUtilidad();
        void setUtilidad(String^ Utilidad);

        int getCodigo();
        void setCodigo(int Codigo);

        Tipo_Producto^ getTipo_Producto();
        void setTipo_Producto(Tipo_Producto^ objTipo_Producto);
    };
}
