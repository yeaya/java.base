#ifndef _HighLevelException_h_
#define _HighLevelException_h_
//$ class HighLevelException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class HighLevelException : public ::java::lang::Exception {
	$class(HighLevelException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	HighLevelException();
	void init$($Throwable* cause);
	HighLevelException(const HighLevelException& e);
	virtual void throw$() override;
	inline HighLevelException* operator ->() {
		return (HighLevelException*)throwing$;
	}
};

#endif // _HighLevelException_h_