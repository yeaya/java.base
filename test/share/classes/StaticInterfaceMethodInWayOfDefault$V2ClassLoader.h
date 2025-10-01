#ifndef _StaticInterfaceMethodInWayOfDefault$V2ClassLoader_h_
#define _StaticInterfaceMethodInWayOfDefault$V2ClassLoader_h_
//$ class StaticInterfaceMethodInWayOfDefault$V2ClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

class $export StaticInterfaceMethodInWayOfDefault$V2ClassLoader : public ::java::lang::ClassLoader {
	$class(StaticInterfaceMethodInWayOfDefault$V2ClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	StaticInterfaceMethodInWayOfDefault$V2ClassLoader();
	using ::java::lang::ClassLoader::findClass;
	void init$(::java::lang::ClassLoader* parent);
	virtual $Class* findClass($String* name) override;
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
};

#endif // _StaticInterfaceMethodInWayOfDefault$V2ClassLoader_h_