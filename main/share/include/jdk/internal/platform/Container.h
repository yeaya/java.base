#ifndef _jdk_internal_platform_Container_h_
#define _jdk_internal_platform_Container_h_
//$ class jdk.internal.platform.Container
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace platform {
			class Metrics;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace platform {

class $import Container : public ::java::lang::Object {
	$class(Container, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Container();
	void init$();
	static ::jdk::internal::platform::Metrics* metrics();
};

		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_Container_h_