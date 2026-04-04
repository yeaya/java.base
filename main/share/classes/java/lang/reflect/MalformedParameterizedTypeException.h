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
	static const int64_t serialVersionUID = (int64_t)0xb0f1c2df78d5625c;
	MalformedParameterizedTypeException(const MalformedParameterizedTypeException& e);
	virtual void throw$() override;
	inline MalformedParameterizedTypeException* operator ->() const {
		return (MalformedParameterizedTypeException*)throwing$;
	}
	inline operator MalformedParameterizedTypeException*() const {
		return (MalformedParameterizedTypeException*)throwing$;
	}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_MalformedParameterizedTypeException_h_