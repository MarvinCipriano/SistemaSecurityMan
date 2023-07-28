#pragma once
#include "Clientes.h"
#include "Locales.h"

using namespace System;

namespace SistemaSecurityManModel {

    public ref class HistoricoOcurrencias {

    private:
        int Codigo;
        Clientes^ objClientes;
        Locales^ objLocales;
        String^ Fecha;
        String^ Hora;

    public:
        HistoricoOcurrencias();
        HistoricoOcurrencias(int Codigo, Clientes^ objClientes, Locales^ objLocales, String^ Fecha, String^ Hora);

        //propiedades GET y SET      
        int getCodigo();
        void setCodigo(int Codigo);

        Clientes^ getClientes();//obtiene el valor
        void setClientes(Clientes^ objClientes);// actualiza el valor 

        Locales^ getLocales();
        void setLocales(Locales^ objLocales);

        String^ getFecha();
        void setFecha(String^ Fecha);

        String^ getHora();
        void setHora(String^ Hora);
    };
}