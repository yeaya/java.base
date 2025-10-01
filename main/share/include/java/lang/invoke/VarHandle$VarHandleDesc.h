#ifndef _java_lang_invoke_VarHandle$VarHandleDesc_h_
#define _java_lang_invoke_VarHandle$VarHandleDesc_h_
//$ class java.lang.invoke.VarHandle$VarHandleDesc
//$ extends java.lang.constant.DynamicConstantDesc

#include <java/lang/constant/DynamicConstantDesc.h>

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
		}
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
			class VarHandle$VarHandleDesc$Kind;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import VarHandle$VarHandleDesc : public ::java::lang::constant::DynamicConstantDesc {
	$class(VarHandle$VarHandleDesc, $NO_CLASS_INIT, ::java::lang::constant::DynamicConstantDesc)
public:
	VarHandle$VarHandleDesc();
	void init$(::java::lang::invoke::VarHandle$VarHandleDesc$Kind* kind, $String* name, ::java::lang::constant::ClassDesc* declaringClass, ::java::lang::constant::ClassDesc* varType);
	static ::java::lang::invoke::VarHandle$VarHandleDesc* ofArray(::java::lang::constant::ClassDesc* arrayClass);
	static ::java::lang::invoke::VarHandle$VarHandleDesc* ofField(::java::lang::constant::ClassDesc* declaringClass, $String* name, ::java::lang::constant::ClassDesc* fieldType);
	static ::java::lang::invoke::VarHandle$VarHandleDesc* ofStaticField(::java::lang::constant::ClassDesc* declaringClass, $String* name, ::java::lang::constant::ClassDesc* fieldType);
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual $String* toString() override;
	::java::lang::constant::ClassDesc* varType();
	::java::lang::invoke::VarHandle$VarHandleDesc$Kind* kind = nullptr;
	::java::lang::constant::ClassDesc* declaringClass = nullptr;
	::java::lang::constant::ClassDesc* varType$ = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VarHandle$VarHandleDesc_h_