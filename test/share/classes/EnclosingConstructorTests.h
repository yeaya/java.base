#ifndef _EnclosingConstructorTests_h_
#define _EnclosingConstructorTests_h_
//$ class EnclosingConstructorTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export EnclosingConstructorTests : public ::java::lang::Object {
	$class(EnclosingConstructorTests, 0, ::java::lang::Object)
public:
	EnclosingConstructorTests();
	void init$();
	void init$(int32_t i);
	static int32_t examine($Class* enclosedClass, $String* constructorSig);
	static void main($StringArray* argv);
	static $Class* anonymousClass;
	static $Class* localClass;
	static $Class* anotherLocalClass;
};

#endif // _EnclosingConstructorTests_h_