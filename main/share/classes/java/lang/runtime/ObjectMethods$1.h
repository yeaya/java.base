#ifndef _java_lang_runtime_ObjectMethods$1_h_
#define _java_lang_runtime_ObjectMethods$1_h_
//$ class java.lang.runtime.ObjectMethods$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace runtime {

class ObjectMethods$1 : public ::java::security::PrivilegedAction {
	$class(ObjectMethods$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ObjectMethods$1();
	void init$();
	virtual $Object* run() override;
};

		} // runtime
	} // lang
} // java

#endif // _java_lang_runtime_ObjectMethods$1_h_