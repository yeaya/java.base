#ifndef _java_lang_AssertionError_h_
#define _java_lang_AssertionError_h_
//$ class java.lang.AssertionError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $export AssertionError : public ::java::lang::Error {
	$class(AssertionError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	AssertionError();
	void init$();
	void init$($String* detailMessage);
	void init$(Object$* detailMessage);
	void init$(bool detailMessage);
	void init$(char16_t detailMessage);
	void init$(int32_t detailMessage);
	void init$(int64_t detailMessage);
	void init$(float detailMessage);
	void init$(double detailMessage);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xBA6D2EABFD413DE6;
	AssertionError(const AssertionError& e);
	virtual void throw$() override;
	inline AssertionError* operator ->() {
		return (AssertionError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_AssertionError_h_