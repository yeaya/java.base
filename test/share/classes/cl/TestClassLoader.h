#ifndef _cl_TestClassLoader_h_
#define _cl_TestClassLoader_h_
//$ class cl.TestClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

namespace cl {

class $export TestClassLoader : public ::java::lang::ClassLoader {
	$class(TestClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	TestClassLoader();
	void init$(::java::lang::ClassLoader* parent);
};

} // cl

#endif // _cl_TestClassLoader_h_