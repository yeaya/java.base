#ifndef _java_lang_NoSuchMethodException_h_
#define _java_lang_NoSuchMethodException_h_
//$ class java.lang.NoSuchMethodException
//$ extends java.lang.ReflectiveOperationException

#include <java/lang/ReflectiveOperationException.h>

namespace java {
	namespace lang {

class $import NoSuchMethodException : public ::java::lang::ReflectiveOperationException {
	$class(NoSuchMethodException, $NO_CLASS_INIT, ::java::lang::ReflectiveOperationException)
public:
	NoSuchMethodException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x45ddbd9e5ec605db;
	NoSuchMethodException(const NoSuchMethodException& e);
	virtual void throw$() override;
	inline NoSuchMethodException* operator ->() const {
		return (NoSuchMethodException*)throwing$;
	}
	inline operator NoSuchMethodException*() const {
		return (NoSuchMethodException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_NoSuchMethodException_h_