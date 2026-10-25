#ifndef SUBJECTOBS_H
#define SUBJECTOBS_H

class SubjectObs {


public:
	void AttachObserver(Observer obj);

	void DettachObserver(Observer obj);

	void NotifyObservers();
};

#endif
