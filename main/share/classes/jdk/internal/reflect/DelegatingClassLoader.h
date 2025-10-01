#ifndef _jdk_internal_reflect_DelegatingClassLoader_h_
#define _jdk_internal_reflect_DelegatingClassLoader_h_
//$ class jdk.internal.reflect.DelegatingClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class DelegatingClassLoader : public ::java::lang::ClassLoader {
	$class(DelegatingClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	DelegatingClassLoader();
	void init$(::java::lang::ClassLoader* parent);
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_DelegatingClassLoader_h_