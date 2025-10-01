#ifndef _GetAbsolutePath_h_
#define _GetAbsolutePath_h_
//$ class GetAbsolutePath
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export GetAbsolutePath : public ::java::lang::Object {
	$class(GetAbsolutePath, 0, ::java::lang::Object)
public:
	GetAbsolutePath();
	void init$();
	static void ck($String* path, $String* ans);
	static void main($StringArray* args);
	static void testUnix();
	static void testWin32();
	static bool ignoreCase;
};

#endif // _GetAbsolutePath_h_