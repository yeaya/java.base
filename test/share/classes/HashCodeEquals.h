#ifndef _HashCodeEquals_h_
#define _HashCodeEquals_h_
//$ class HashCodeEquals
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HashCodeEquals : public ::java::lang::Object {
	$class(HashCodeEquals, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HashCodeEquals();
	void init$();
	static void main($StringArray* args);
	static void test($String* fn1, $String* fn2);
	static void testUnix();
	static void testWin32();
};

#endif // _HashCodeEquals_h_