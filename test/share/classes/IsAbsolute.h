#ifndef _IsAbsolute_h_
#define _IsAbsolute_h_
//$ class IsAbsolute
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export IsAbsolute : public ::java::lang::Object {
	$class(IsAbsolute, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IsAbsolute();
	void init$();
	static void ck($String* path, bool ans);
	static void main($StringArray* args);
	static void testUnix();
	static void testWin32();
};

#endif // _IsAbsolute_h_