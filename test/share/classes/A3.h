#ifndef _A3_h_
#define _A3_h_
//$ interface A3
//$ extends B3,C3

#include <B3.h>
#include <C3.h>

class A3 : public ::B3, public ::C3 {
	$interface(A3, $NO_CLASS_INIT, ::B3, ::C3)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual void m() override {}
	virtual $String* toString() override;
};

#endif // _A3_h_