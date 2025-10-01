#ifndef _LowLevelException_h_
#define _LowLevelException_h_
//$ class LowLevelException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

class LowLevelException : public ::java::lang::Exception {
	$class(LowLevelException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	LowLevelException();
	void init$();
	LowLevelException(const LowLevelException& e);
	LowLevelException wrapper$();
	virtual void throwWrapper$() override;
};

#endif // _LowLevelException_h_