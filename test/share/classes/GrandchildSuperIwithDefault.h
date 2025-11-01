#ifndef _GrandchildSuperIwithDefault_h_
#define _GrandchildSuperIwithDefault_h_
//$ interface GrandchildSuperIwithDefault
//$ extends SonSuperIwithDefault,DaughterSuperIwithDefault

#include <DaughterSuperIwithDefault.h>
#include <SonSuperIwithDefault.h>

class GrandchildSuperIwithDefault : public ::SonSuperIwithDefault, public ::DaughterSuperIwithDefault {
	$interface(GrandchildSuperIwithDefault, $NO_CLASS_INIT, ::SonSuperIwithDefault, ::DaughterSuperIwithDefault)
public:
	virtual void bar() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void foo() override {}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual void wombat() {}
	virtual void wombatD();
};

#endif // _GrandchildSuperIwithDefault_h_