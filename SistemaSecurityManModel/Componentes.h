#pragma once

using namespace System;

namespace SistemaSecurityManModel {

    public ref class Componentes {

    private:
        String^ Nombre;
        String^ Utilidad;
        int Stock;
        String^ Imagen;

    public:
        Componentes();
        Componentes(String^ Nombre, String^ Utilidad, int Stock, String^ Imagen);

        //propiedades GET y SET
        String^ getNombre();//obtiene el valor
        void setNombre(String^ Nombre);// actualiza el valor

        String^ getUtilidad();
        void setUtilidad(String^ Utilidad);

        int getStock();
        void setStock(int Stock);

        String^ getImagen();
        void setImagen(String^ Imagen);
    };
}