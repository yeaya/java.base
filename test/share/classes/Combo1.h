#ifndef _Combo1_h_
#define _Combo1_h_
//$ class Combo1
//$ extends Base
//$ implements SuperI

#include <Base.h>
#include <SuperI.h>

class Combo1 : public ::Base, public ::SuperI {
	$class(Combo1, $NO_CLASS_INIT, ::Base, ::SuperI)
public:
	Combo1();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
	virtual void wombat();
};

#endif // _Combo1_h_