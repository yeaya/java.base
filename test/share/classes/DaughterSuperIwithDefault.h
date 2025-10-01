#ifndef _DaughterSuperIwithDefault_h_
#define _DaughterSuperIwithDefault_h_
//$ interface DaughterSuperIwithDefault
//$ extends SuperIwithDefault

#include <SuperIwithDefault.h>

class DaughterSuperIwithDefault : public ::SuperIwithDefault {
	$interface(DaughterSuperIwithDefault, $NO_CLASS_INIT, ::SuperIwithDefault)
public:
	virtual void quux() {}
	virtual void quuxD();
};

#endif // _DaughterSuperIwithDefault_h_