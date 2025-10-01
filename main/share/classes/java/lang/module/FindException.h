#ifndef _java_lang_module_FindException_h_
#define _java_lang_module_FindException_h_
//$ class java.lang.module.FindException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {
		namespace module {

class $export FindException : public ::java::lang::RuntimeException {
	$class(FindException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	FindException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* cause);
	void init$($String* msg, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xAF45939DFA22E419;
	FindException(const FindException& e);
	FindException wrapper$();
	virtual void throwWrapper$() override;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_FindException_h_