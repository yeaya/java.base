#ifndef _java_lang_invoke_ClassSpecializer$Factory$1_h_
#define _java_lang_invoke_ClassSpecializer$Factory$1_h_
//$ class java.lang.invoke.ClassSpecializer$Factory$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace invoke {
			class ClassSpecializer$Factory;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ClassSpecializer$Factory$1 : public ::java::security::PrivilegedAction {
	$class(ClassSpecializer$Factory$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ClassSpecializer$Factory$1();
	void init$(::java::lang::invoke::ClassSpecializer$Factory* this$1);
	virtual $Object* run() override;
	::java::lang::invoke::ClassSpecializer$Factory* this$1 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_ClassSpecializer$Factory$1_h_