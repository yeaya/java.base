#ifndef _java_lang_TypeNotPresentException_h_
#define _java_lang_TypeNotPresentException_h_
//$ class java.lang.TypeNotPresentException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import TypeNotPresentException : public ::java::lang::RuntimeException {
	$class(TypeNotPresentException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	TypeNotPresentException();
	void init$($String* typeName, $Throwable* cause);
	virtual $String* typeName();
	static const int64_t serialVersionUID = (int64_t)0xB934D8B76522CF20;
	$String* typeName$ = nullptr;
	TypeNotPresentException(const TypeNotPresentException& e);
	TypeNotPresentException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_TypeNotPresentException_h_