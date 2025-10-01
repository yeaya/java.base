#ifndef _EnclosingMethodTests_h_
#define _EnclosingMethodTests_h_
//$ class EnclosingMethodTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export EnclosingMethodTests : public ::java::lang::Object {
	$class(EnclosingMethodTests, 0, ::java::lang::Object)
public:
	EnclosingMethodTests();
	void init$();
	static int32_t examine($Class* enclosedClass, $String* methodSig);
	virtual $Class* getLocalClass(Object$* o);
	static void main($StringArray* argv);
	static $Class* anonymousClass;
};

#endif // _EnclosingMethodTests_h_