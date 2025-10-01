#ifndef _jdk_internal_jimage_BasicImageReader$2_h_
#define _jdk_internal_jimage_BasicImageReader$2_h_
//$ class jdk.internal.jimage.BasicImageReader$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			class BasicImageReader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class BasicImageReader$2 : public ::java::security::PrivilegedAction {
	$class(BasicImageReader$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BasicImageReader$2();
	void init$(::jdk::internal::jimage::BasicImageReader* this$0);
	virtual $Object* run() override;
	::jdk::internal::jimage::BasicImageReader* this$0 = nullptr;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_BasicImageReader$2_h_