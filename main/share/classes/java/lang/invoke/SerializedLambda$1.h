#ifndef _java_lang_invoke_SerializedLambda$1_h_
#define _java_lang_invoke_SerializedLambda$1_h_
//$ class java.lang.invoke.SerializedLambda$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class SerializedLambda$1 : public ::java::security::PrivilegedExceptionAction {
	$class(SerializedLambda$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	SerializedLambda$1();
	void init$(::java::lang::invoke::SerializedLambda* this$0);
	virtual $Object* run() override;
	::java::lang::invoke::SerializedLambda* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_SerializedLambda$1_h_