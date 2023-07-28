#pragma once
using namespace System;

namespace SistemaSecurityManModel {

    public ref class CarritoFacturaCliente {

    private:
        String^ TipoProducto;
        int Unidades;
        double PrecioUnidad;
        double Total;
        int NumFacturaModel;
    public:
        CarritoFacturaCliente();
        CarritoFacturaCliente(String^ TipoProducto, int Unidades, double PrecioUnidad, double Total, int NumFacturaModel);

        //propiedades GET y SET

        String^ getTipoProducto();
        void setTipoProducto(String^ TipoProducto);

        int getUnidades();
        void setUnidades(int Unidades);

        double getPrecioUnidad();
        void setPrecioUnidad(double PrecioUnidad);

        double getTotal();
        void setTotal(double Total);

        int getNumFacturaModel();
        void setNumFacturaModel(int NumFacturaModel);
    };
}