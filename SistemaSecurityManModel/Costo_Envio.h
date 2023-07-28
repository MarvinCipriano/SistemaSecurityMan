#pragma once

using namespace System;

namespace SistemaSecurityManModel {

    public ref class Costo_Envio {

    private:
        String^ Distrito;
        double Costo;
        String^ Tiempo;

    public:
        Costo_Envio();
        Costo_Envio(String^ Distrito, double Costo, String^ Tiempo);

        //propiedades GET y SET
        String^ getDistrito();//obtiene el valor
        void setDistrito(String^ Distrito);// actualiza el valor

        double getCosto();
        void setCosto(double Costo);

        String^ getTiempo();
        void setTiempo(String^ Tiempo);
    };
}