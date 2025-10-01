#ifndef _RecursiveSystemLoader_h_
#define _RecursiveSystemLoader_h_
//$ class RecursiveSystemLoader
//$ extends java.lang.ClassLoader

#include <java/lang/Array.h>
#include <java/lang/ClassLoader.h>

class $export RecursiveSystemLoader : public ::java::lang::ClassLoader {
	$class(RecursiveSystemLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	RecursiveSystemLoader();
	void init$(::java::lang::ClassLoader* classLoader);
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name) override;
	static void main($StringArray* args);
};

#endif // _RecursiveSystemLoader_h_