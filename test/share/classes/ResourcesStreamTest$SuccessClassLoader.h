#ifndef _ResourcesStreamTest$SuccessClassLoader_h_
#define _ResourcesStreamTest$SuccessClassLoader_h_
//$ class ResourcesStreamTest$SuccessClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

class $export ResourcesStreamTest$SuccessClassLoader : public ::java::lang::ClassLoader {
	$class(ResourcesStreamTest$SuccessClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	ResourcesStreamTest$SuccessClassLoader();
	void init$();
	virtual ::java::util::Enumeration* getResources($String* name) override;
};

#endif // _ResourcesStreamTest$SuccessClassLoader_h_