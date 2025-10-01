#ifndef _java_lang_Class$1_h_
#define _java_lang_Class$1_h_
//$ class java.lang.Class$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}

namespace java {
	namespace lang {

class Class$1 : public ::java::security::PrivilegedAction {
	$class(Class$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Class$1();
	void init$($Class* this$0, ::java::lang::reflect::Constructor* val$c);
	virtual $Object* run() override;
	$Class* this$0 = nullptr;
	::java::lang::reflect::Constructor* val$c = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Class$1_h_