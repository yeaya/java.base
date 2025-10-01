#ifndef _ResourcesStreamTest$FailingClassLoader_h_
#define _ResourcesStreamTest$FailingClassLoader_h_
//$ class ResourcesStreamTest$FailingClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

class $export ResourcesStreamTest$FailingClassLoader : public ::java::lang::ClassLoader {
	$class(ResourcesStreamTest$FailingClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	ResourcesStreamTest$FailingClassLoader();
	void init$();
	virtual ::java::util::Enumeration* getResources($String* name) override;
};

#endif // _ResourcesStreamTest$FailingClassLoader_h_