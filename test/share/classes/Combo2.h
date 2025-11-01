#ifndef _Combo2_h_
#define _Combo2_h_
//$ class Combo2
//$ extends Base
//$ implements SuperIwithDefault

#include <Base.h>
#include <SuperIwithDefault.h>

class Combo2 : public ::Base, public ::SuperIwithDefault {
	$class(Combo2, $NO_CLASS_INIT, ::Base, ::SuperIwithDefault)
public:
	Combo2();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
	virtual void wombat();
};

#endif // _Combo2_h_