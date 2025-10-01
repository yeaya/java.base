#ifndef _jdk_internal_loader_Loader$2_h_
#define _jdk_internal_loader_Loader$2_h_
//$ class jdk.internal.loader.Loader$2
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
			class Loader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class Loader$2 : public ::java::security::PrivilegedExceptionAction {
	$class(Loader$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Loader$2();
	void init$(::jdk::internal::loader::Loader* this$0, ::java::net::URL* val$urlToCheck);
	virtual $Object* run() override;
	::jdk::internal::loader::Loader* this$0 = nullptr;
	::java::net::URL* val$urlToCheck = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_Loader$2_h_