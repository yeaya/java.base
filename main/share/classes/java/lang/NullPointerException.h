#ifndef _java_lang_NullPointerException_h_
#define _java_lang_NullPointerException_h_
//$ class java.lang.NullPointerException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $export NullPointerException : public ::java::lang::RuntimeException {
	$class(NullPointerException, $PREINIT | $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	NullPointerException();
	void init$();
	void init$($String* s);
	virtual $Throwable* fillInStackTrace() override;
	$String* getExtendedNPEMessage();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0x47a5a18eff31e1b8;
	int32_t extendedMessageState = 0;
	$String* extendedMessage = nullptr;
	NullPointerException(const NullPointerException& e);
	virtual void throw$() override;
	inline NullPointerException* operator ->() const {
		return (NullPointerException*)throwing$;
	}
	inline operator NullPointerException*() const {
		return (NullPointerException*)throwing$;
	}
	static void throwNew$();
};

	} // lang
} // java

#endif // _java_lang_NullPointerException_h_