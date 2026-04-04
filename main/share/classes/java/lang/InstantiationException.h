#ifndef _java_lang_InstantiationException_h_
#define _java_lang_InstantiationException_h_
//$ class java.lang.InstantiationException
//$ extends java.lang.ReflectiveOperationException

#include <java/lang/ReflectiveOperationException.h>

namespace java {
	namespace lang {

class $export InstantiationException : public ::java::lang::ReflectiveOperationException {
	$class(InstantiationException, $NO_CLASS_INIT, ::java::lang::ReflectiveOperationException)
public:
	InstantiationException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x8ad83e274dd5858a;
	InstantiationException(const InstantiationException& e);
	virtual void throw$() override;
	inline InstantiationException* operator ->() const {
		return (InstantiationException*)throwing$;
	}
	inline operator InstantiationException*() const {
		return (InstantiationException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_InstantiationException_h_