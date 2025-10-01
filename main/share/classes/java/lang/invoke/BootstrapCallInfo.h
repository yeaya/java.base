#ifndef _java_lang_invoke_BootstrapCallInfo_h_
#define _java_lang_invoke_BootstrapCallInfo_h_
//$ interface java.lang.invoke.BootstrapCallInfo
//$ extends java.lang.invoke.ConstantGroup

#include <java/lang/invoke/ConstantGroup.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class BootstrapCallInfo : public ::java::lang::invoke::ConstantGroup {
	$interface(BootstrapCallInfo, $NO_CLASS_INIT, ::java::lang::invoke::ConstantGroup)
public:
	virtual ::java::lang::invoke::MethodHandle* bootstrapMethod() {return nullptr;}
	virtual $String* invocationName() {return nullptr;}
	virtual $Object* invocationType() {return nullptr;}
	static ::java::lang::invoke::BootstrapCallInfo* makeBootstrapCallInfo(::java::lang::invoke::MethodHandle* bsm, $String* name, Object$* type, ::java::lang::invoke::ConstantGroup* constants);
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_BootstrapCallInfo_h_