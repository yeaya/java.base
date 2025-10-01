#ifndef _jdk_internal_icu_impl_ICUBinary$1_h_
#define _jdk_internal_icu_impl_ICUBinary$1_h_
//$ class jdk.internal.icu.impl.ICUBinary$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class ICUBinary$1 : public ::java::security::PrivilegedAction {
	$class(ICUBinary$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ICUBinary$1();
	void init$($Class* val$root, $String* val$itemPath);
	virtual $Object* run() override;
	$String* val$itemPath = nullptr;
	$Class* val$root = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_ICUBinary$1_h_