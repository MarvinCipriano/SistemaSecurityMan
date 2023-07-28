#pragma once
#include "Tipo_Producto.h"
#include "Locales.h"
#include "Clientes.h"
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaSecurityManModel {

    public ref class Producto {

    private:

        int Codigo;
        Tipo_Producto^ objTipo_Producto;
        String^ Fecha_Creacion;
        String^ IMEI;
        String^ N_Serie;
        String^ Tiempo_Garantia;
        Locales^ objLocales;
        Clientes^ objClientes;
        

    public:
        Producto();
        Producto(int Codigo, Tipo_Producto^ objTipo_Producto, String^ Fecha_Creacion, String^ IMEI, String^ N_Serie,
                 String^ Tiempo_Garantia, Locales^ objLocales, Clientes^ objClientes);

        //propiedades GET y SET         
        int getCodigo();//obtiene el valor
        void setCodigo(int Codigo);// actualiza el valor 

        Tipo_Producto^ getTipo_Producto();
        void setTipo_Producto(Tipo_Producto^ objTipo_Producto);

        String^ getFecha_Creacion();
        void setFecha_Creacion(String^ Fecha_Creacion);

        String^ getIMEI();
        void setIMEI(String^ IMEI);

        String^ getN_Serie();
        void setN_Serie(String^ N_Serie);

        String^ getTiempo_Garantia();
        void setTiempo_Garantia(String^ Tiempo_Garantia);

        Locales^ getLocales();
        void setLocales(Locales^ objLocales);

        Clientes^ getClientes();
        void setClientes(Clientes^ objClientes);
    };
}