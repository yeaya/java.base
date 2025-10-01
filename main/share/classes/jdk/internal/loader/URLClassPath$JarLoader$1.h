#ifndef _jdk_internal_loader_URLClassPath$JarLoader$1_h_
#define _jdk_internal_loader_URLClassPath$JarLoader$1_h_
//$ class jdk.internal.loader.URLClassPath$JarLoader$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace jdk {
	namespace internal {
		namespace loader {
			class URLClassPath$JarLoader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class URLClassPath$JarLoader$1 : public ::java::security::PrivilegedExceptionAction {
	$class(URLClassPath$JarLoader$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	URLClassPath$JarLoader$1();
	void init$(::jdk::internal::loader::URLClassPath$JarLoader* this$0);
	virtual $Object* run() override;
	::jdk::internal::loader::URLClassPath$JarLoader* this$0 = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$JarLoader$1_h_