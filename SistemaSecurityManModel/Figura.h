#pragma once

namespace SistemaSecurityManModel {

	using namespace System::Drawing;

	public ref class Figura {
	private:
		int inicioX;
		int inicioY;
		int finX;
		int finY;
		int tipo;
		Color objColor;

	public:
		Figura();
		Figura(int inicioX, int inicioY, int finX, int finY, int tipo, Color objColor);
		int getInicioX();
		void setInicioX(int inicioX);
		int getInicioY();
		void setInicioY(int inicioY);
		int getFinX();
		void setFinX(int finX);
		int getFinY();
		void setFinY(int finY);
		int getTipo();
		void setTipo(int tipo);
		Color getColor();
		void setColor(Color objColor);
	};

}