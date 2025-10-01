#ifndef _Roebling_h_
#define _Roebling_h_
//$ class Roebling
//$ extends java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

class Roebling : public ::java::lang::Comparable {
	$class(Roebling, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	Roebling();
	void init$();
	virtual int32_t compareTo(::Roebling* r);
	virtual int32_t compareTo(Object$* r) override;
	virtual void varArg($ObjectArray* arg);
};

#endif // _Roebling_h_