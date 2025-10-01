#ifndef _java_lang_System$1_h_
#define _java_lang_System$1_h_
//$ class java.lang.System$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class SecurityManager;
	}
}

namespace java {
	namespace lang {

class System$1 : public ::java::security::PrivilegedAction {
	$class(System$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	System$1();
	void init$(::java::lang::SecurityManager* val$s);
	virtual $Object* run() override;
	::java::lang::SecurityManager* val$s = nullptr;
};

	} // lang
} // java

#endif // _java_lang_System$1_h_