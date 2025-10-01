#ifndef _java_lang_invoke_InfoFromMemberName$1_h_
#define _java_lang_invoke_InfoFromMemberName$1_h_
//$ class java.lang.invoke.InfoFromMemberName$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace invoke {
			class InfoFromMemberName;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class InfoFromMemberName$1 : public ::java::security::PrivilegedAction {
	$class(InfoFromMemberName$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InfoFromMemberName$1();
	void init$(::java::lang::invoke::InfoFromMemberName* this$0);
	virtual $Object* run() override;
	::java::lang::invoke::InfoFromMemberName* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_InfoFromMemberName$1_h_