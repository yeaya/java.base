#ifndef _A4_h_
#define _A4_h_
//$ interface A4
//$ extends B4,C4

#include <B4.h>
#include <C4.h>

class A4 : public ::B4, public ::C4 {
	$interface(A4, $NO_CLASS_INIT, ::B4, ::C4)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual void m() override {}
	virtual $String* toString() override;
};

#endif // _A4_h_