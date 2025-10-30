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
	virtual void throw$() override;
	inline MidLevelException* operator ->() {
		return (MidLevelException*)throwing$;
	}
};

#endif // _MidLevelException_h_