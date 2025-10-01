#ifndef _jdk_internal_icu_impl_ICUBinary$Authenticate_h_
#define _jdk_internal_icu_impl_ICUBinary$Authenticate_h_
//$ interface jdk.internal.icu.impl.ICUBinary$Authenticate
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class ICUBinary$Authenticate : public ::java::lang::Object {
	$interface(ICUBinary$Authenticate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isDataVersionAcceptable($bytes* version) {return false;}
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_ICUBinary$Authenticate_h_