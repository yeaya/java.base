#ifndef _java_lang_Class$3_h_
#define _java_lang_Class$3_h_
//$ class java.lang.Class$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace lang {

class Class$3 : public ::java::security::PrivilegedAction {
	$class(Class$3, $PRELOAD | $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Class$3();
	void init$($Class* this$0, ::java::lang::reflect::Method* val$values);
	virtual $Object* run() override;
	$Class* this$0 = nullptr;
	::java::lang::reflect::Method* val$values = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Class$3_h_