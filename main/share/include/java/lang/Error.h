#ifndef _java_lang_Error_h_
#define _java_lang_Error_h_
//$ class java.lang.Error
//$ extends java.lang.Throwable

#include <java/lang/Throwable.h>

namespace java {
	namespace lang {

class $import Error : public ::java::lang::Throwable {
	$class(Error, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Throwable)
public:
	Error();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	void init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace);
	static const int64_t serialVersionUID = (int64_t)0x451D36568B820E56;
	Error(const Error& e);
	Error wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_Error_h_