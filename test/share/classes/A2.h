#ifndef _A2_h_
#define _A2_h_
//$ interface A2
//$ extends B2,C2

#include <B2.h>
#include <C2.h>

class A2 : public ::B2, public ::C2 {
	$interface(A2, $NO_CLASS_INIT, ::B2, ::C2)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual void m() override {}
	virtual $String* toString() override;
};

#endif // _A2_h_