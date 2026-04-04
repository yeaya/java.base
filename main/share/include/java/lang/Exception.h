#ifndef _java_lang_Exception_h_
#define _java_lang_Exception_h_
//$ class java.lang.Exception
//$ extends java.lang.Throwable

#include <java/lang/Throwable.h>

namespace java {
	namespace lang {

class $import Exception : public ::java::lang::Throwable {
	$class(Exception, $PREINIT | $NO_CLASS_INIT, ::java::lang::Throwable)
public:
	Exception();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	void init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace);
	static const int64_t serialVersionUID = (int64_t)0xd0fd1f3e1a3b1cc4;
	Exception(const Exception& e);
	virtual void throw$() override;
	inline Exception* operator ->() const {
		return (Exception*)throwing$;
	}
	inline operator Exception*() const {
		return (Exception*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_Exception_h_