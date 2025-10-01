#ifndef _jdk_internal_loader_ClassLoaderHelper_h_
#define _jdk_internal_loader_ClassLoaderHelper_h_
//$ class jdk.internal.loader.ClassLoaderHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class ClassLoaderHelper : public ::java::lang::Object {
	$class(ClassLoaderHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassLoaderHelper();
	void init$();
	static ::java::io::File* mapAlternativeName(::java::io::File* lib);
	static $StringArray* parsePath($String* ldPath);
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_ClassLoaderHelper_h_