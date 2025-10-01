#ifndef _java_lang_invoke_VarHandle$VarHandleDesc$Kind_h_
#define _java_lang_invoke_VarHandle$VarHandleDesc$Kind_h_
//$ class java.lang.invoke.VarHandle$VarHandleDesc$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("STATIC_FIELD")
#undef STATIC_FIELD
#pragma push_macro("FIELD")
#undef FIELD

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
			class ConstantDesc;
			class DirectMethodHandleDesc;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandle$VarHandleDesc$Kind : public ::java::lang::Enum {
	$class(VarHandle$VarHandleDesc$Kind, 0, ::java::lang::Enum)
public:
	VarHandle$VarHandleDesc$Kind();
	static $Array<::java::lang::invoke::VarHandle$VarHandleDesc$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod);
	virtual $Array<::java::lang::constant::ConstantDesc>* toBSMArgs(::java::lang::constant::ClassDesc* declaringClass, ::java::lang::constant::ClassDesc* varType);
	static ::java::lang::invoke::VarHandle$VarHandleDesc$Kind* valueOf($String* name);
	static $Array<::java::lang::invoke::VarHandle$VarHandleDesc$Kind>* values();
	static ::java::lang::invoke::VarHandle$VarHandleDesc$Kind* FIELD;
	static ::java::lang::invoke::VarHandle$VarHandleDesc$Kind* STATIC_FIELD;
	static ::java::lang::invoke::VarHandle$VarHandleDesc$Kind* ARRAY;
	static $Array<::java::lang::invoke::VarHandle$VarHandleDesc$Kind>* $VALUES;
	::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod = nullptr;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ARRAY")
#pragma pop_macro("STATIC_FIELD")
#pragma pop_macro("FIELD")

#endif // _java_lang_invoke_VarHandle$VarHandleDesc$Kind_h_