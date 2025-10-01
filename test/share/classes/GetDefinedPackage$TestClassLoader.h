#ifndef _GetDefinedPackage$TestClassLoader_h_
#define _GetDefinedPackage$TestClassLoader_h_
//$ class GetDefinedPackage$TestClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

#pragma push_macro("PKG_NAME")
#undef PKG_NAME

namespace java {
	namespace lang {
		class Package;
	}
}

class $export GetDefinedPackage$TestClassLoader : public ::java::lang::ClassLoader {
	$class(GetDefinedPackage$TestClassLoader, 0, ::java::lang::ClassLoader)
public:
	GetDefinedPackage$TestClassLoader();
	using ::java::lang::ClassLoader::definePackage;
	void init$();
	virtual ::java::lang::Package* definePackage($String* name);
	static $String* PKG_NAME;
};

#pragma pop_macro("PKG_NAME")

#endif // _GetDefinedPackage$TestClassLoader_h_