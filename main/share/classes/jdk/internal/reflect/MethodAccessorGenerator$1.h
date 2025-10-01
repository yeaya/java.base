#ifndef _jdk_internal_reflect_MethodAccessorGenerator$1_h_
#define _jdk_internal_reflect_MethodAccessorGenerator$1_h_
//$ class jdk.internal.reflect.MethodAccessorGenerator$1
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace reflect {
			class MethodAccessorGenerator;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class MethodAccessorGenerator$1 : public ::java::security::PrivilegedAction {
	$class(MethodAccessorGenerator$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MethodAccessorGenerator$1();
	void init$(::jdk::internal::reflect::MethodAccessorGenerator* this$0, $String* val$generatedName, $bytes* val$bytes, $Class* val$declaringClass);
	virtual $Object* run() override;
	::jdk::internal::reflect::MethodAccessorGenerator* this$0 = nullptr;
	$Class* val$declaringClass = nullptr;
	$bytes* val$bytes = nullptr;
	$String* val$generatedName = nullptr;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_MethodAccessorGenerator$1_h_