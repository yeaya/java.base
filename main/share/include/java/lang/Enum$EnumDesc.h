#ifndef _java_lang_Enum$EnumDesc_h_
#define _java_lang_Enum$EnumDesc_h_
//$ class java.lang.Enum$EnumDesc
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
		}
	}
}

namespace java {
	namespace lang {

class $import Enum$EnumDesc : public ::java::lang::constant::DynamicConstantDesc {
	$class(Enum$EnumDesc, $NO_CLASS_INIT, ::java::lang::constant::DynamicConstantDesc)
public:
	Enum$EnumDesc();
	void init$(::java::lang::constant::ClassDesc* constantClass, $String* constantName);
	static ::java::lang::Enum$EnumDesc* of(::java::lang::constant::ClassDesc* enumClass, $String* constantName);
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual $String* toString() override;
};

	} // lang
} // java

#endif // _java_lang_Enum$EnumDesc_h_