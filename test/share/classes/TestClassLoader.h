#ifndef _TestClassLoader_h_
#define _TestClassLoader_h_
//$ class TestClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

namespace java {
	namespace lang {
		class Package;
	}
}

class TestClassLoader : public ::java::lang::ClassLoader {
	$class(TestClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	TestClassLoader();
	void init$();
	void init$(::java::lang::ClassLoader* parent);
	virtual ::java::lang::Package* defineEmptyPackage($String* name);
	virtual bool testPackageView($String* name);
};

#endif // _TestClassLoader_h_