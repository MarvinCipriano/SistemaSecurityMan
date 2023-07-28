#pragma once

using namespace System;

namespace SistemaSecurityManModel {

    public ref class FacturaModel {

    private:
        int NumFactura;
        String^ Fecha;
        int NumCompra;
        String^ NombreCliente;
        String^ ID;
        String^ Direccion;
        String^ Distrito;
        double CostoEnvio;
        double Total;

    public:
        FacturaModel();
        FacturaModel(int NumFactura, String^ Fecha, int NumCompra, String^ NombreCliente, String^ ID, String^ Direccion, String^ Distrito, double CostoEnvio, double Total);

        //propiedades GET y SET
        int getNumFactura();//obtiene el valor
        void setNumFactura(int NumFactura);// actualiza el valor

        String^ getFecha();
        void setFecha(String^ Fecha);

        int getNumCompra();
        void setNumCompra(int NumCompra);

        String^ getNombreCliente();
        void setNombreCliente(String^ NombreCliente);

        String^ getID();
        void setID(String^ ID);

        String^ getDireccion();
        void setDireccion(String^ Direccion);

        String^ getDistrito();
        void setDistrito(String^ Distrito);

        double getCostoEnvio();
        void setCostoEnvio(double CostoEnvio);

        double getTotal();
        void setTotal(double Total);
    };
}