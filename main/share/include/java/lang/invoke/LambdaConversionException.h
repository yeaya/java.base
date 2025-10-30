#ifndef _java_lang_invoke_LambdaConversionException_h_
#define _java_lang_invoke_LambdaConversionException_h_
//$ class java.lang.invoke.LambdaConversionException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import LambdaConversionException : public ::java::lang::Exception {
	$class(LambdaConversionException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	LambdaConversionException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	void init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace);
	static const int64_t serialVersionUID = 300; // (int64_t)292 + (int64_t)8
	LambdaConversionException(const LambdaConversionException& e);
	virtual void throw$() override;
	inline LambdaConversionException* operator ->() {
		return (LambdaConversionException*)throwing$;
	}
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_LambdaConversionException_h_