#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaSecurityManModel {

    public ref class Clientes {

    private:
        String^ Identificacion;
        String^ Email;
        String^ Contrasenha;

    public:
        Clientes();
        Clientes(String^ Identificacion, String^ Email, String^ Contrasenha);

        //propiedades GET y SET         
        String^ getIdentificacion();//obtiene el valor
        void setIdentificacion(String^ Identificacion);// actualiza el valor 

        String^ getEmail();
        void setEmail(String^ Email);
        
        String^ getContrasenha();
        void setContrasenha(String^ Contrasenha);
    };
}
