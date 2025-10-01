#ifndef _LegacyChainedExceptionSerialization$SubClass_h_
#define _LegacyChainedExceptionSerialization$SubClass_h_
//$ class LegacyChainedExceptionSerialization$SubClass
//$ extends java.lang.ExceptionInInitializerError

#include <java/lang/ExceptionInInitializerError.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class $export LegacyChainedExceptionSerialization$SubClass : public ::java::lang::ExceptionInInitializerError {
	$class(LegacyChainedExceptionSerialization$SubClass, $NO_CLASS_INIT, ::java::lang::ExceptionInInitializerError)
public:
	LegacyChainedExceptionSerialization$SubClass();
	void init$($Throwable* t);
	virtual $Throwable* getCause() override;
	LegacyChainedExceptionSerialization$SubClass(const LegacyChainedExceptionSerialization$SubClass& e);
	LegacyChainedExceptionSerialization$SubClass wrapper$();
	virtual void throwWrapper$() override;
};

#endif // _LegacyChainedExceptionSerialization$SubClass_h_