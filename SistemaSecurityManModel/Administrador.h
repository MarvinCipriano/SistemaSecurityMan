#pragma once

using namespace System;

namespace SistemaSecurityManModel {

    public ref class Administrador {

    private:
        String^ Nombre;
        String^ Apellido;
        String^ DNI;
        String^ Email;
        String^ Contrasenha;
        String^ Telefono;

    public:
        Administrador();
        Administrador(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Telefono);

        //propiedades GET y SET        
        String^ getNombre();//obtiene el valor
        void setNombre(String^ Nombre);// actualiza el valor 

        String^ getApellido();
        void setApellido(String^ Apellido);

        String^ getDNI();
        void setDNI(String^ DNI);

        String^ getEmail();
        void setEmail(String^ Email);

        String^ getContrasenha();
        void setContrasenha(String^ Contrasenhabre);

        String^ getTelefono();
        void setTelefono(String^ Telefono);
    };
}