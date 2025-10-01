#ifndef _java_lang_SecurityManager$1_h_
#define _java_lang_SecurityManager$1_h_
//$ class java.lang.SecurityManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class SecurityManager;
	}
}

namespace java {
	namespace lang {

class SecurityManager$1 : public ::java::security::PrivilegedAction {
	$class(SecurityManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SecurityManager$1();
	void init$(::java::lang::SecurityManager* this$0);
	virtual $Object* run() override;
	::java::lang::SecurityManager* this$0 = nullptr;
};

	} // lang
} // java

#endif // _java_lang_SecurityManager$1_h_