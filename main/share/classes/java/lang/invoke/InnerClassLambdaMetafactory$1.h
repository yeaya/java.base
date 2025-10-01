#ifndef _java_lang_invoke_InnerClassLambdaMetafactory$1_h_
#define _java_lang_invoke_InnerClassLambdaMetafactory$1_h_
//$ class java.lang.invoke.InnerClassLambdaMetafactory$1
//$ extends java.security.PrivilegedAction

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

class InnerClassLambdaMetafactory$1 : public ::java::security::PrivilegedAction {
	$class(InnerClassLambdaMetafactory$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InnerClassLambdaMetafactory$1();
	void init$(::java::lang::invoke::InnerClassLambdaMetafactory* this$0, $Class* val$innerClass);
	virtual $Object* run() override;
	::java::lang::invoke::InnerClassLambdaMetafactory* this$0 = nullptr;
	$Class* val$innerClass = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_InnerClassLambdaMetafactory$1_h_