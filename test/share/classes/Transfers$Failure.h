#ifndef _Transfers$Failure_h_
#define _Transfers$Failure_h_
//$ class Transfers$Failure
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

class Transfers$Failure : public ::java::lang::RuntimeException {
	$class(Transfers$Failure, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Transfers$Failure();
	void init$(::java::lang::Exception* x);
	void init$($String* s);
	Transfers$Failure(const Transfers$Failure& e);
	virtual void throw$() override;
	inline Transfers$Failure* operator ->() {
		return (Transfers$Failure*)throwing$;
	}
};

#endif // _Transfers$Failure_h_