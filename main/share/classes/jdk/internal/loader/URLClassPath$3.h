#ifndef _jdk_internal_loader_URLClassPath$3_h_
#define _jdk_internal_loader_URLClassPath$3_h_
//$ class jdk.internal.loader.URLClassPath$3
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
			class URLClassPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class URLClassPath$3 : public ::java::security::PrivilegedExceptionAction {
	$class(URLClassPath$3, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	URLClassPath$3();
	void init$(::jdk::internal::loader::URLClassPath* this$0, ::java::net::URL* val$url);
	virtual $Object* run() override;
	::jdk::internal::loader::URLClassPath* this$0 = nullptr;
	::java::net::URL* val$url = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$3_h_