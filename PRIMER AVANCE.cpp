#include <iostream> 

using namespace std;
int main()
{
	int opcion;
	float cita;
	char text[120], datos[120];
	do 
	{
		system("cls");
		cout << "Bienvenidos a la clinica smile" << endl;
		cout << "Eliga la acción que quiera realizar" << endl;
		cout << "1.Agendar cita" << endl;
		cout << "2.Modificar cita" << endl;
		cout << "3.Eliminar cita" << endl;
		cout << "4.Lista de citas vigentes" << endl;
		cout << "5.Limpiar pantalla" << endl;
		cout << "6.Salir" << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1: cout << "Escriba sus datos: " << endl;
			cin >> datos;

		case 2:
			
			break;

		case 3:
			
			}

		case 6:
			exit(EXIT_SUCCESS);
			break;

		default:
			cout << "Esta opción no es valida, intentar de nuevo" << endl;
			break;

		}

	}
}