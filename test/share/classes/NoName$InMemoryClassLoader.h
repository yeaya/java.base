#ifndef _NoName$InMemoryClassLoader_h_
#define _NoName$InMemoryClassLoader_h_
//$ class NoName$InMemoryClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/Array.h>
#include <java/lang/ClassLoader.h>

class NoName$InMemoryClassLoader : public ::java::lang::ClassLoader {
	$class(NoName$InMemoryClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	NoName$InMemoryClassLoader();
	using ::java::lang::ClassLoader::defineClass;
	void init$();
	virtual $Class* defineClass($String* name, $bytes* b);
};

#endif // _NoName$InMemoryClassLoader_h_