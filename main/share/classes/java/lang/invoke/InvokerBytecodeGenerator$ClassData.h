#ifndef _java_lang_invoke_InvokerBytecodeGenerator$ClassData_h_
#define _java_lang_invoke_InvokerBytecodeGenerator$ClassData_h_
//$ class java.lang.invoke.InvokerBytecodeGenerator$ClassData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {

class InvokerBytecodeGenerator$ClassData : public ::java::lang::Object {
	$class(InvokerBytecodeGenerator$ClassData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InvokerBytecodeGenerator$ClassData();
	void init$($String* name, $String* desc, Object$* value);
	virtual $String* name();
	virtual $String* toString() override;
	$String* name$ = nullptr;
	$String* desc = nullptr;
	$Object* value = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_InvokerBytecodeGenerator$ClassData_h_