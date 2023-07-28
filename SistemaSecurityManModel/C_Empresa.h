#pragma once

using namespace System;

namespace SistemaSecurityManModel {

    public ref class C_Empresa {

    private:
        String^ Nombre;
        String^ RUC;
        String^ Email;
        String^ Contrasenha;
        String^ Direccion;
        String^ Distrito;
        int Telefono;

    public:
        C_Empresa();
        C_Empresa(String^ Nombre, String^ RUC, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int Telefono);

        //propiedades GET y SET
        String^ getNombre();//obtiene el valor
        void setNombre(String^ Nombre);// actualiza el valor

        String^ getRUC();
        void setRUC(String^ RUC);

        String^ getEmail();
        void setEmail(String^ Email);

        String^ getContrasenha();
        void setContrasenha(String^ Contrasenha);

        String^ getDireccion();
        void setDireccion(String^ Direccion);

        String^ getDistrito();
        void setDistrito(String^ Distrito);

        int getTelefono();
        void setTelefono(int Telefono);
    };
}