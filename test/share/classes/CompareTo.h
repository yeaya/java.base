#ifndef _CompareTo_h_
#define _CompareTo_h_
//$ class CompareTo
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export CompareTo : public ::java::lang::Object {
	$class(CompareTo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CompareTo();
	void init$();
	static void main($StringArray* args);
	static void testUnix();
	static void testWin32();
};

#endif // _CompareTo_h_