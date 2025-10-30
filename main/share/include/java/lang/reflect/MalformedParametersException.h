#ifndef _java_lang_reflect_MalformedParametersException_h_
#define _java_lang_reflect_MalformedParametersException_h_
//$ class java.lang.reflect.MalformedParametersException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		namespace reflect {

class $import MalformedParametersException : public ::java::lang::RuntimeException {
	$class(MalformedParametersException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	MalformedParametersException();
	void init$();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)20130919;
	MalformedParametersException(const MalformedParametersException& e);
	virtual void throw$() override;
	inline MalformedParametersException* operator ->() {
		return (MalformedParametersException*)throwing$;
	}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_MalformedParametersException_h_