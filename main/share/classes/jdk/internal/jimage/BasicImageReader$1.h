#ifndef _jdk_internal_jimage_BasicImageReader$1_h_
#define _jdk_internal_jimage_BasicImageReader$1_h_
//$ class jdk.internal.jimage.BasicImageReader$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace jimage {

class BasicImageReader$1 : public ::java::security::PrivilegedAction {
	$class(BasicImageReader$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BasicImageReader$1();
	void init$($String* val$value, $String* val$key, $String* val$def);
	virtual $Object* run() override;
	$String* val$def = nullptr;
	$String* val$key = nullptr;
	$String* val$value = nullptr;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_BasicImageReader$1_h_