#ifndef _java_lang_invoke_InnerClassLambdaMetafactory$2_h_
#define _java_lang_invoke_InnerClassLambdaMetafactory$2_h_
//$ class java.lang.invoke.InnerClassLambdaMetafactory$2
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace invoke {
			class InnerClassLambdaMetafactory;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class InnerClassLambdaMetafactory$2 : public ::java::security::PrivilegedAction {
	$class(InnerClassLambdaMetafactory$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InnerClassLambdaMetafactory$2();
	void init$(::java::lang::invoke::InnerClassLambdaMetafactory* this$0, $bytes* val$classBytes);
	virtual $Object* run() override;
	::java::lang::invoke::InnerClassLambdaMetafactory* this$0 = nullptr;
	$bytes* val$classBytes = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_InnerClassLambdaMetafactory$2_h_