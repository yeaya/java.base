#ifndef _NullClassLoader_h_
#define _NullClassLoader_h_
//$ class NullClassLoader
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullClassLoader : public ::java::lang::Object {
	$class(NullClassLoader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullClassLoader();
	void init$();
	static void main($StringArray* args);
};

#endif // _NullClassLoader_h_