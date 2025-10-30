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
	static const int64_t serialVersionUID = (int64_t)0x8AD83E274DD5858A;
	InstantiationException(const InstantiationException& e);
	virtual void throw$() override;
	inline InstantiationException* operator ->() {
		return (InstantiationException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_InstantiationException_h_