#include <iostream>
#include <vector>

using namespace std;

// Función para mostrar la representación de la sala
void mostrarSala(vector<vector<char>>& sala) {
  for (int i = 0; i < sala.size(); i++) {
    for (int j = 0; j < sala[i].size(); j++) {
      cout << sala[i][j] << " ";
    }
    cout << endl;
  }
}

// Función para reservar un asiento
void reservarAsiento(vector<vector<char>>& sala, char fila, int asiento) {
  if (fila < 'A' || fila > 'O' || asiento < 1 || asiento > 20) {
    cout << "Fila o asiento inválido." << endl;
    return;
  }

  int fila_index = fila - 'A';
  int asiento_index = asiento - 1;

  if (sala[fila_index][asiento_index] == '+') {
    cout << "El asiento ya esta reservado." << endl;
    return;
  }

  sala[fila_index][asiento_index] = '+';
  cout << "Asiento reservado: " << fila << asiento << endl;
}

// Funcion para cancelar una reserva
void cancelarReserva(vector<vector<char>>& sala, char fila, int asiento) {
  if (fila < 'A' || fila > 'O' || asiento < 1 || asiento > 20) {
    cout << "Fila o asiento invalido." << endl;
    return;
  }

  int fila_index = fila - 'A';
  int asiento_index = asiento - 1;

  if (sala[fila_index][asiento_index] == '-') {
    cout << "El asiento no esta reservado." << endl;
    return;
  }

  sala[fila_index][asiento_index] = '-';
  cout << "Reserva cancelada: " << fila << asiento << endl;
}

int Ejercicio11a() {
  // Crear la matriz que representa la sala
  vector<vector<char>> sala(15, vector<char>(20, '-'));

  // Bucle principal
  bool salir = false;
  while (!salir) {
    cout << "----------------------------------" << endl;
    cout << "Manejo de reservas de asientos" << endl;
    cout << "----------------------------------" << endl;

    // Mostrar la sala
    mostrarSala(sala);

    // Menu de opciones
    cout << endl;
    cout << "1. Reservar asiento" << endl;
    cout << "2. Cancelar reserva" << endl;
    cout << "3. Salir" << endl;
    cout << "----------------------------------" << endl;

    int opcion;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
      case 1: {
        char fila;
        int asiento;

        cout << "Ingrese la fila (A-O): ";
        cin >> fila;

        cout << "Ingrese el numero de asiento (1-20): ";
        cin >> asiento;

        reservarAsiento(sala, fila, asiento);
        break;
      }

      case 2: {
        char fila;
        int asiento;

        cout << "Ingrese la fila (A-O): ";
        cin >> fila;

        cout << "Ingrese el numero de asiento (1-20): ";
        cin >> asiento;

        cancelarReserva(sala, fila, asiento);
        break;
      }

      case 3:
        salir = true;
        break;

      default:
        cout << "Opción invalida." << endl;
    }
  }

  return 0;
}
