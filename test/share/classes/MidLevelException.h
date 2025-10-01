#ifndef _MidLevelException_h_
#define _MidLevelException_h_
//$ class MidLevelException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class MidLevelException : public ::java::lang::Exception {
	$class(MidLevelException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	MidLevelException();
	void init$($Throwable* cause);
	MidLevelException(const MidLevelException& e);
	MidLevelException wrapper$();
	virtual void throwWrapper$() override;
};

#endif // _MidLevelException_h_