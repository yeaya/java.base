#ifndef _java_lang_reflect_MalformedParameterizedTypeException_h_
#define _java_lang_reflect_MalformedParameterizedTypeException_h_
//$ class java.lang.reflect.MalformedParameterizedTypeException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		namespace reflect {

class $export MalformedParameterizedTypeException : public ::java::lang::RuntimeException {
	$class(MalformedParameterizedTypeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	MalformedParameterizedTypeException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xB0F1C2DF78D5625C;
	MalformedParameterizedTypeException(const MalformedParameterizedTypeException& e);
	virtual void throw$() override;
	inline MalformedParameterizedTypeException* operator ->() {
		return (MalformedParameterizedTypeException*)throwing$;
	}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_MalformedParameterizedTypeException_h_