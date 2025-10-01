#ifndef _java_lang_invoke_InvokerBytecodeGenerator$1_h_
#define _java_lang_invoke_InvokerBytecodeGenerator$1_h_
//$ class java.lang.invoke.InvokerBytecodeGenerator$1
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace invoke {

class InvokerBytecodeGenerator$1 : public ::java::security::PrivilegedAction {
	$class(InvokerBytecodeGenerator$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InvokerBytecodeGenerator$1();
	void init$($String* val$className, $bytes* val$classFile);
	virtual $Object* run() override;
	$bytes* val$classFile = nullptr;
	$String* val$className = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_InvokerBytecodeGenerator$1_h_