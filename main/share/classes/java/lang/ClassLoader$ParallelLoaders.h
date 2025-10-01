#ifndef _java_lang_ClassLoader$ParallelLoaders_h_
#define _java_lang_ClassLoader$ParallelLoaders_h_
//$ class java.lang.ClassLoader$ParallelLoaders
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace lang {

class ClassLoader$ParallelLoaders : public ::java::lang::Object {
	$class(ClassLoader$ParallelLoaders, $PRELOAD, ::java::lang::Object)
public:
	ClassLoader$ParallelLoaders();
	void init$();
	static bool isRegistered($Class* c);
	static bool register$($Class* c);
	static ::java::util::Set* loaderTypes;
};

	} // lang
} // java

#endif // _java_lang_ClassLoader$ParallelLoaders_h_