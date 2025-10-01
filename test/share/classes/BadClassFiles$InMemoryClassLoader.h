#ifndef _BadClassFiles$InMemoryClassLoader_h_
#define _BadClassFiles$InMemoryClassLoader_h_
//$ class BadClassFiles$InMemoryClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/Array.h>
#include <java/lang/ClassLoader.h>

class BadClassFiles$InMemoryClassLoader : public ::java::lang::ClassLoader {
	$class(BadClassFiles$InMemoryClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	BadClassFiles$InMemoryClassLoader();
	using ::java::lang::ClassLoader::defineClass;
	void init$();
	virtual $Class* defineClass($String* name, $bytes* b);
};

#endif // _BadClassFiles$InMemoryClassLoader_h_