#ifndef _VerifyStackTrace$TestCase_h_
#define _VerifyStackTrace$TestCase_h_
//$ interface VerifyStackTrace$TestCase
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StackWalker;
	}
}

class $export VerifyStackTrace$TestCase : public ::java::lang::Object {
	$interface(VerifyStackTrace$TestCase, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* description() {return nullptr;}
	virtual $String* expected() {return nullptr;}
	virtual ::java::lang::StackWalker* walker() {return nullptr;}
};

#endif // _VerifyStackTrace$TestCase_h_