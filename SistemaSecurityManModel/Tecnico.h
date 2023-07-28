#pragma once

using namespace System;

namespace SistemaSecurityManModel {

    public ref class Tecnico {

    private:
        String^ Nombre;
        String^ Apellido;
        String^ DNI;
        String^ Email;
        int Telefono;
        String^ Contrasenha;
        String^ Direccion;

    public:
        Tecnico();
        Tecnico(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, int Telefono);
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
        void setContrasenha(String^ Contrasenha);
        String^ getDireccion();
        void setDireccion(String^ Direccion);
        int getTelefono();
        void setTelefono(int Telefono);
    };
}