#ifndef EQUIPO_H
#define EQUIPO_H

class Equipo {

private:
	String nombre;
	String pais;
	String formacion;
	List<Jugador> jugadores;
	EquipoStrategy estrategia;
	Integer goles;

public:
	void SetStrategy(EquipoStrategy s);

	void PlayJuego();
};

#endif
