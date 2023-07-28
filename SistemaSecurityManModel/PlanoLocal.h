#pragma once
#include "Locales.h"
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaSecurityManModel {

    public ref class PlanoLocal {

    private:
        int Codigo;
        Locales^ objLocales;
        String^ NombrePlano;

    public:
        PlanoLocal();
        PlanoLocal(int Codigo, Locales^ objLocales, String^ NombrePlano);

        //propiedades GET y SET         
        int getCodigo();//obtiene el valor
        void setCodigo(int Codigo);// actualiza el valor 

        Locales^ getLocales();
        void setLocales(Locales^ Nombre);

        String^ getNombrePlano();
        void setNombrePlano(String^ Ubicacion);
    };
}