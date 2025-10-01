#ifndef _A1_h_
#define _A1_h_
//$ interface A1
//$ extends B1,C1

#include <B1.h>
#include <C1.h>

class A1 : public ::B1, public ::C1 {
	$interface(A1, $NO_CLASS_INIT, ::B1, ::C1)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual void m() override {}
	virtual $String* toString() override;
};

#endif // _A1_h_