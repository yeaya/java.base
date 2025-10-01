#ifndef _jdk_internal_jimage_NativeImageBuffer$1_h_
#define _jdk_internal_jimage_NativeImageBuffer$1_h_
//$ class jdk.internal.jimage.NativeImageBuffer$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace jimage {

class NativeImageBuffer$1 : public ::java::security::PrivilegedAction {
	$class(NativeImageBuffer$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NativeImageBuffer$1();
	void init$();
	virtual $Object* run() override;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_NativeImageBuffer$1_h_