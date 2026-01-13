#ifndef _java_lang_invoke_StringConcatException_h_
#define _java_lang_invoke_StringConcatException_h_
//$ class java.lang.invoke.StringConcatException
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

class $import StringConcatException : public ::java::lang::Exception {
	$class(StringConcatException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	StringConcatException();
	void init$($String* msg);
	void init$($String* msg, $Throwable* cause);
	static const int64_t serialVersionUID = 301; // 292L + 9L
	StringConcatException(const StringConcatException& e);
	virtual void throw$() override;
	inline StringConcatException* operator ->() {
		return (StringConcatException*)throwing$;
	}
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_StringConcatException_h_