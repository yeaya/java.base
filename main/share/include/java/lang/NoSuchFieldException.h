#ifndef _java_lang_NoSuchFieldException_h_
#define _java_lang_NoSuchFieldException_h_
//$ class java.lang.NoSuchFieldException
//$ extends java.lang.ReflectiveOperationException

#include <java/lang/ReflectiveOperationException.h>

namespace java {
	namespace lang {

class $import NoSuchFieldException : public ::java::lang::ReflectiveOperationException {
	$class(NoSuchFieldException, $NO_CLASS_INIT, ::java::lang::ReflectiveOperationException)
public:
	NoSuchFieldException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xaabd23ef75fb292c;
	NoSuchFieldException(const NoSuchFieldException& e);
	virtual void throw$() override;
	inline NoSuchFieldException* operator ->() const {
		return (NoSuchFieldException*)throwing$;
	}
	inline operator NoSuchFieldException*() const {
		return (NoSuchFieldException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_NoSuchFieldException_h_