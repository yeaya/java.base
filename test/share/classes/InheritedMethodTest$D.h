#ifndef _InheritedMethodTest$D_h_
#define _InheritedMethodTest$D_h_
//$ class InheritedMethodTest$D
//$ extends InheritedMethodTest$C
//$ implements InheritedMethodTest$J

#include <InheritedMethodTest$C.h>
#include <InheritedMethodTest$J.h>

class $export InheritedMethodTest$D : public ::InheritedMethodTest$C, public ::InheritedMethodTest$J {
	$class(InheritedMethodTest$D, $NO_CLASS_INIT, ::InheritedMethodTest$C, ::InheritedMethodTest$J)
public:
	InheritedMethodTest$D();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* iString() override;
	virtual $String* toString() override;
};

#endif // _InheritedMethodTest$D_h_