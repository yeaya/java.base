#ifndef _java_lang_constant_MethodTypeDescImpl$1_h_
#define _java_lang_constant_MethodTypeDescImpl$1_h_
//$ class java.lang.constant.MethodTypeDescImpl$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace constant {
			class MethodTypeDescImpl;
		}
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace java {
	namespace lang {
		namespace constant {

class MethodTypeDescImpl$1 : public ::java::security::PrivilegedAction {
	$class(MethodTypeDescImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MethodTypeDescImpl$1();
	void init$(::java::lang::constant::MethodTypeDescImpl* this$0, ::java::lang::invoke::MethodHandles$Lookup* val$lookup);
	virtual $Object* run() override;
	::java::lang::constant::MethodTypeDescImpl* this$0 = nullptr;
	::java::lang::invoke::MethodHandles$Lookup* val$lookup = nullptr;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_MethodTypeDescImpl$1_h_