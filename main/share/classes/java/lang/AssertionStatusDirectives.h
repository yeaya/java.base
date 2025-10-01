#ifndef _java_lang_AssertionStatusDirectives_h_
#define _java_lang_AssertionStatusDirectives_h_
//$ class java.lang.AssertionStatusDirectives
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {

class AssertionStatusDirectives : public ::java::lang::Object {
	$class(AssertionStatusDirectives, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AssertionStatusDirectives();
	void init$();
	$StringArray* classes = nullptr;
	$booleans* classEnabled = nullptr;
	$StringArray* packages = nullptr;
	$booleans* packageEnabled = nullptr;
	bool deflt = false;
};

	} // lang
} // java

#endif // _java_lang_AssertionStatusDirectives_h_