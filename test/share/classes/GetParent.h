#ifndef _GetParent_h_
#define _GetParent_h_
//$ class GetParent
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export GetParent : public ::java::lang::Object {
	$class(GetParent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetParent();
	void init$();
	static void check($String* path, $StringArray* parents);
	static void main($StringArray* args);
	static void testUnix();
	static void testWin32();
};

#endif // _GetParent_h_