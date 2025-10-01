#ifndef _jdk_internal_ref_Cleaner$1_h_
#define _jdk_internal_ref_Cleaner$1_h_
//$ class jdk.internal.ref.Cleaner$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace jdk {
	namespace internal {
		namespace ref {
			class Cleaner;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace ref {

class Cleaner$1 : public ::java::security::PrivilegedAction {
	$class(Cleaner$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Cleaner$1();
	void init$(::jdk::internal::ref::Cleaner* this$0, $Throwable* val$x);
	virtual $Object* run() override;
	::jdk::internal::ref::Cleaner* this$0 = nullptr;
	$Throwable* val$x = nullptr;
};

		} // ref
	} // internal
} // jdk

#endif // _jdk_internal_ref_Cleaner$1_h_