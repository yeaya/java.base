#ifndef _java_lang_constant_DynamicConstantDesc_h_
#define _java_lang_constant_DynamicConstantDesc_h_
//$ class java.lang.constant.DynamicConstantDesc
//$ extends java.lang.constant.ConstantDesc

#include <java/lang/Array.h>
#include <java/lang/constant/ConstantDesc.h>

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
			class DirectMethodHandleDesc;
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
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace constant {

class $export DynamicConstantDesc : public ::java::lang::constant::ConstantDesc {
	$class(DynamicConstantDesc, $NO_CLASS_INIT, ::java::lang::constant::ConstantDesc)
public:
	DynamicConstantDesc();
	void init$(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod, $String* constantName, ::java::lang::constant::ClassDesc* constantType, $Array<::java::lang::constant::ConstantDesc>* bootstrapArgs);
	virtual $Array<::java::lang::constant::ConstantDesc>* bootstrapArgs();
	virtual ::java::util::List* bootstrapArgsList();
	virtual ::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod();
	static ::java::lang::constant::ConstantDesc* canonicalizeArrayVarHandle(::java::lang::constant::DynamicConstantDesc* desc);
	static ::java::lang::constant::ConstantDesc* canonicalizeEnum(::java::lang::constant::DynamicConstantDesc* desc);
	static ::java::lang::constant::ConstantDesc* canonicalizeFieldVarHandle(::java::lang::constant::DynamicConstantDesc* desc);
	static ::java::lang::constant::ConstantDesc* canonicalizeNull(::java::lang::constant::DynamicConstantDesc* desc);
	static ::java::lang::constant::ConstantDesc* canonicalizePrimitiveClass(::java::lang::constant::DynamicConstantDesc* desc);
	static ::java::lang::constant::ConstantDesc* canonicalizeStaticFieldVarHandle(::java::lang::constant::DynamicConstantDesc* desc);
	virtual $String* constantName();
	virtual ::java::lang::constant::ClassDesc* constantType();
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	static ::java::lang::constant::DynamicConstantDesc* of(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod, $Array<::java::lang::constant::ConstantDesc>* bootstrapArgs);
	static ::java::lang::constant::DynamicConstantDesc* of(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod);
	static ::java::lang::constant::ConstantDesc* ofCanonical(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod, $String* constantName, ::java::lang::constant::ClassDesc* constantType, $Array<::java::lang::constant::ConstantDesc>* bootstrapArgs);
	static ::java::lang::constant::DynamicConstantDesc* ofNamed(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod, $String* constantName, ::java::lang::constant::ClassDesc* constantType, $Array<::java::lang::constant::ConstantDesc>* bootstrapArgs);
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual $String* toString() override;
	::java::lang::constant::ConstantDesc* tryCanonicalize();
	::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod$ = nullptr;
	$Array<::java::lang::constant::ConstantDesc>* bootstrapArgs$ = nullptr;
	$String* constantName$ = nullptr;
	::java::lang::constant::ClassDesc* constantType$ = nullptr;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_DynamicConstantDesc_h_