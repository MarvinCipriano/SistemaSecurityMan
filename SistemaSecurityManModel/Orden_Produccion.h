#pragma once
#include "Tecnico.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaSecurityManModel {

    public ref class Orden_Produccion {

    private:
        int numero_produccion;
        Tecnico^ objTecnico;
        int cant_AlarmaBasica;
        int cant_AlarmaPremimum;
        String^ FechaLimite;

    public:
        Orden_Produccion();
        Orden_Produccion(int numero_produccion, Tecnico^ objTecnico, int cant_AlarmaBasica, int cant_AlarmaPremimum, String^ FechaLimite);

        int getnumero_produccion();
        void setnumero_produccion(int numero_produccion);

        Tecnico^ getTecnico();
        void setTecnico(Tecnico^ objTecnico);

        int getcant_AlarmaBasica();
        void setcant_AlarmaBasica(int cant_AlarmaBasica);

        int getcant_AlarmaPremimum();
        void setcant_AlarmaPremimum(int cant_AlarmaPremimum);

        String^ getFechaLimite();
        void setFechaLimite(String^ FechaLimite);


    };
}