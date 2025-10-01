#ifndef _jdk_internal_loader_URLClassPath$JarLoader$3_h_
#define _jdk_internal_loader_URLClassPath$JarLoader$3_h_
//$ class jdk.internal.loader.URLClassPath$JarLoader$3
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace net {
		class URL;
	}
}
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

class URLClassPath$JarLoader$3 : public ::java::security::PrivilegedExceptionAction {
	$class(URLClassPath$JarLoader$3, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	URLClassPath$JarLoader$3();
	void init$(::jdk::internal::loader::URLClassPath$JarLoader* this$0, ::java::net::URL* val$url);
	virtual $Object* run() override;
	::jdk::internal::loader::URLClassPath$JarLoader* this$0 = nullptr;
	::java::net::URL* val$url = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$JarLoader$3_h_