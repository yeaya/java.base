#ifndef _java_lang_Class$2_h_
#define _java_lang_Class$2_h_
//$ class java.lang.Class$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {

class Class$2 : public ::java::security::PrivilegedAction {
	$class(Class$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Class$2();
	void init$($Class* this$0);
	virtual $Object* run() override;
	$Class* this$0 = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Class$2_h_