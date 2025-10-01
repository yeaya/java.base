#ifndef _java_lang_IllegalAccessException_h_
#define _java_lang_IllegalAccessException_h_
//$ class java.lang.IllegalAccessException
//$ extends java.lang.ReflectiveOperationException

#include <java/lang/ReflectiveOperationException.h>

namespace java {
	namespace lang {

class $export IllegalAccessException : public ::java::lang::ReflectiveOperationException {
	$class(IllegalAccessException, $NO_CLASS_INIT, ::java::lang::ReflectiveOperationException)
public:
	IllegalAccessException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x5BD42871F9297B32;
	IllegalAccessException(const IllegalAccessException& e);
	IllegalAccessException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_IllegalAccessException_h_