#ifndef PELOTA_H
#define PELOTA_H

class Pelota : SubjectObs {

private:
	List<IObserverJugador> observers;
	Integer velocidad;
	Posicion posicion;

public:
	Posicion miPosicion();

	void setPelotaPosicion(poscion p);
};

#endif
