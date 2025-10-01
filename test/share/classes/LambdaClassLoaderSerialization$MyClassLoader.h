#ifndef _LambdaClassLoaderSerialization$MyClassLoader_h_
#define _LambdaClassLoaderSerialization$MyClassLoader_h_
//$ class LambdaClassLoaderSerialization$MyClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

class $export LambdaClassLoaderSerialization$MyClassLoader : public ::java::lang::ClassLoader {
	$class(LambdaClassLoaderSerialization$MyClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	LambdaClassLoaderSerialization$MyClassLoader();
	using ::java::lang::ClassLoader::findClass;
	void init$(::java::lang::ClassLoader* parent);
	virtual $Class* findClass($String* name) override;
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
};

#endif // _LambdaClassLoaderSerialization$MyClassLoader_h_