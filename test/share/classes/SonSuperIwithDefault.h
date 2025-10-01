#ifndef _SonSuperIwithDefault_h_
#define _SonSuperIwithDefault_h_
//$ interface SonSuperIwithDefault
//$ extends SuperIwithDefault

#include <SuperIwithDefault.h>

class SonSuperIwithDefault : public ::SuperIwithDefault {
	$interface(SonSuperIwithDefault, $NO_CLASS_INIT, ::SuperIwithDefault)
public:
	virtual void baz() {}
	virtual void bazD();
};

#endif // _SonSuperIwithDefault_h_