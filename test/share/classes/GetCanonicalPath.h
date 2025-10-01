#ifndef _GetCanonicalPath_h_
#define _GetCanonicalPath_h_
//$ class GetCanonicalPath
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export GetCanonicalPath : public ::java::lang::Object {
	$class(GetCanonicalPath, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetCanonicalPath();
	void init$();
	static void main($StringArray* args);
	static void testDriveLetter();
};

#endif // _GetCanonicalPath_h_