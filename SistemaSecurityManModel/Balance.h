#pragma once

using namespace System;

namespace SistemaSecurityManModel {

    public ref class Balance {

    private:
        double Ingresos;
        double Egresos;

    public:
        Balance();
        Balance(double Ingresos, double Egresos);

        //propiedades GET y SET        
        double getIngresos();//obtiene el valor
        void setIngresos(double Ingresos);// actualiza el valor 

        double getEgresos();
        void setEgresos(double Egresos);
    };
}