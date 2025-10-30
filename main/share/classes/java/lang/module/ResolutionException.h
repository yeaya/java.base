#ifndef _java_lang_module_ResolutionException_h_
#define _java_lang_module_ResolutionException_h_
//$ class java.lang.module.ResolutionException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {
		namespace module {

class $export ResolutionException : public ::java::lang::RuntimeException {
	$class(ResolutionException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ResolutionException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* cause);
	void init$($String* msg, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xF1B07D0713D73596;
	ResolutionException(const ResolutionException& e);
	virtual void throw$() override;
	inline ResolutionException* operator ->() {
		return (ResolutionException*)throwing$;
	}
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ResolutionException_h_