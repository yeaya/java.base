#ifndef _java_lang_invoke_MethodTypeForm_h_
#define _java_lang_invoke_MethodTypeForm_h_
//$ class java.lang.invoke.MethodTypeForm
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LF_VH_EX_INVOKER")
#undef LF_VH_EX_INVOKER
#pragma push_macro("LF_INVVIRTUAL")
#undef LF_INVVIRTUAL
#pragma push_macro("LF_NEWINVSPECIAL")
#undef LF_NEWINVSPECIAL
#pragma push_macro("LF_EX_LINKER")
#undef LF_EX_LINKER
#pragma push_macro("LF_TF")
#undef LF_TF
#pragma push_macro("LF_COLLECTOR")
#undef LF_COLLECTOR
#pragma push_macro("LF_INVSPECIAL")
#undef LF_INVSPECIAL
#pragma push_macro("MH_NF_INV")
#undef MH_NF_INV
#pragma push_macro("LF_VH_GEN_LINKER")
#undef LF_VH_GEN_LINKER
#pragma push_macro("MH_BASIC_INV")
#undef MH_BASIC_INV
#pragma push_macro("LF_INVSTATIC_INIT")
#undef LF_INVSTATIC_INIT
#pragma push_macro("LF_GEN_INVOKER")
#undef LF_GEN_INVOKER
#pragma push_macro("UNWRAP")
#undef UNWRAP
#pragma push_macro("MH_LIMIT")
#undef MH_LIMIT
#pragma push_macro("MH_UNINIT_CS")
#undef MH_UNINIT_CS
#pragma push_macro("LF_LOOP")
#undef LF_LOOP
#pragma push_macro("WRAP")
#undef WRAP
#pragma push_macro("LF_INVSTATIC")
#undef LF_INVSTATIC
#pragma push_macro("LF_GWT")
#undef LF_GWT
#pragma push_macro("LF_INVSPECIAL_IFC")
#undef LF_INVSPECIAL_IFC
#pragma push_macro("LF_EX_INVOKER")
#undef LF_EX_INVOKER
#pragma push_macro("LF_CS_LINKER")
#undef LF_CS_LINKER
#pragma push_macro("LF_VH_GEN_INVOKER")
#undef LF_VH_GEN_INVOKER
#pragma push_macro("LF_LIMIT")
#undef LF_LIMIT
#pragma push_macro("LF_DELEGATE_BLOCK_INLINING")
#undef LF_DELEGATE_BLOCK_INLINING
#pragma push_macro("LF_DELEGATE")
#undef LF_DELEGATE
#pragma push_macro("LF_INVNATIVE")
#undef LF_INVNATIVE
#pragma push_macro("LF_INTERPRET")
#undef LF_INTERPRET
#pragma push_macro("ERASE")
#undef ERASE
#pragma push_macro("LF_INVINTERFACE")
#undef LF_INVINTERFACE
#pragma push_macro("LF_GEN_LINKER")
#undef LF_GEN_LINKER
#pragma push_macro("LF_REBIND")
#undef LF_REBIND
#pragma push_macro("LF_GWC")
#undef LF_GWC
#pragma push_macro("LF_MH_LINKER")
#undef LF_MH_LINKER

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
			class MethodHandle;
			class MethodType;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodTypeForm : public ::java::lang::Object {
	$class(MethodTypeForm, 0, ::java::lang::Object)
public:
	MethodTypeForm();
	void init$(::java::lang::invoke::MethodType* erasedType);
	::java::lang::invoke::MethodType* basicType();
	::java::lang::invoke::LambdaForm* cachedLambdaForm(int32_t which);
	::java::lang::invoke::MethodHandle* cachedMethodHandle(int32_t which);
	static ::java::lang::invoke::MethodType* canonicalize(::java::lang::invoke::MethodType* mt, int32_t how);
	static $Class* canonicalize($Class* t, int32_t how);
	static $ClassArray* canonicalizeAll($ClassArray* ts, int32_t how);
	::java::lang::invoke::MethodType* erasedType();
	static ::java::lang::invoke::MethodTypeForm* findForm(::java::lang::invoke::MethodType* mt);
	bool hasPrimitives();
	int32_t parameterCount();
	int32_t parameterSlotCount();
	::java::lang::invoke::LambdaForm* setCachedLambdaForm(int32_t which, ::java::lang::invoke::LambdaForm* form);
	::java::lang::invoke::MethodHandle* setCachedMethodHandle(int32_t which, ::java::lang::invoke::MethodHandle* mh);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	int16_t parameterSlotCount$ = 0;
	int16_t primitiveCount = 0;
	::java::lang::invoke::MethodType* erasedType$ = nullptr;
	::java::lang::invoke::MethodType* basicType$ = nullptr;
	$Array<::java::lang::ref::SoftReference>* methodHandles = nullptr;
	static const int32_t MH_BASIC_INV = 0;
	static const int32_t MH_NF_INV = 1;
	static const int32_t MH_UNINIT_CS = 2;
	static const int32_t MH_LIMIT = 3;
	$Array<::java::lang::ref::SoftReference>* lambdaForms = nullptr;
	static const int32_t LF_INVVIRTUAL = 0;
	static const int32_t LF_INVSTATIC = 1;
	static const int32_t LF_INVSPECIAL = 2;
	static const int32_t LF_NEWINVSPECIAL = 3;
	static const int32_t LF_INVINTERFACE = 4;
	static const int32_t LF_INVSTATIC_INIT = 5;
	static const int32_t LF_INTERPRET = 6;
	static const int32_t LF_REBIND = 7;
	static const int32_t LF_DELEGATE = 8;
	static const int32_t LF_DELEGATE_BLOCK_INLINING = 9;
	static const int32_t LF_EX_LINKER = 10;
	static const int32_t LF_EX_INVOKER = 11;
	static const int32_t LF_GEN_LINKER = 12;
	static const int32_t LF_GEN_INVOKER = 13;
	static const int32_t LF_CS_LINKER = 14;
	static const int32_t LF_MH_LINKER = 15;
	static const int32_t LF_GWC = 16;
	static const int32_t LF_GWT = 17;
	static const int32_t LF_TF = 18;
	static const int32_t LF_LOOP = 19;
	static const int32_t LF_INVSPECIAL_IFC = 20;
	static const int32_t LF_INVNATIVE = 21;
	static const int32_t LF_VH_EX_INVOKER = 22;
	static const int32_t LF_VH_GEN_INVOKER = 23;
	static const int32_t LF_VH_GEN_LINKER = 24;
	static const int32_t LF_COLLECTOR = 25;
	static const int32_t LF_LIMIT = 26;
	static const int32_t ERASE = 1;
	static const int32_t WRAP = 2;
	static const int32_t UNWRAP = 3;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("LF_VH_EX_INVOKER")
#pragma pop_macro("LF_INVVIRTUAL")
#pragma pop_macro("LF_NEWINVSPECIAL")
#pragma pop_macro("LF_EX_LINKER")
#pragma pop_macro("LF_TF")
#pragma pop_macro("LF_COLLECTOR")
#pragma pop_macro("LF_INVSPECIAL")
#pragma pop_macro("MH_NF_INV")
#pragma pop_macro("LF_VH_GEN_LINKER")
#pragma pop_macro("MH_BASIC_INV")
#pragma pop_macro("LF_INVSTATIC_INIT")
#pragma pop_macro("LF_GEN_INVOKER")
#pragma pop_macro("UNWRAP")
#pragma pop_macro("MH_LIMIT")
#pragma pop_macro("MH_UNINIT_CS")
#pragma pop_macro("LF_LOOP")
#pragma pop_macro("WRAP")
#pragma pop_macro("LF_INVSTATIC")
#pragma pop_macro("LF_GWT")
#pragma pop_macro("LF_INVSPECIAL_IFC")
#pragma pop_macro("LF_EX_INVOKER")
#pragma pop_macro("LF_CS_LINKER")
#pragma pop_macro("LF_VH_GEN_INVOKER")
#pragma pop_macro("LF_LIMIT")
#pragma pop_macro("LF_DELEGATE_BLOCK_INLINING")
#pragma pop_macro("LF_DELEGATE")
#pragma pop_macro("LF_INVNATIVE")
#pragma pop_macro("LF_INTERPRET")
#pragma pop_macro("ERASE")
#pragma pop_macro("LF_INVINTERFACE")
#pragma pop_macro("LF_GEN_LINKER")
#pragma pop_macro("LF_REBIND")
#pragma pop_macro("LF_GWC")
#pragma pop_macro("LF_MH_LINKER")

#endif // _java_lang_invoke_MethodTypeForm_h_