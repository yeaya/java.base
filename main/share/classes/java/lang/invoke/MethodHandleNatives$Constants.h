#ifndef _java_lang_invoke_MethodHandleNatives$Constants_h_
#define _java_lang_invoke_MethodHandleNatives$Constants_h_
//$ class java.lang.invoke.MethodHandleNatives$Constants
//$ extends java.lang.Object

#include <java/lang/invoke/MethodHandles$Lookup.h>

#pragma push_macro("MN_IS_FIELD")
#undef MN_IS_FIELD
#pragma push_macro("MN_IS_CONSTRUCTOR")
#undef MN_IS_CONSTRUCTOR
#pragma push_macro("MN_TRUSTED_FINAL")
#undef MN_TRUSTED_FINAL
#pragma push_macro("REF_NONE")
#undef REF_NONE
#pragma push_macro("HIDDEN_CLASS")
#undef HIDDEN_CLASS
#pragma push_macro("NESTMATE_CLASS")
#undef NESTMATE_CLASS
#pragma push_macro("ACCESS_VM_ANNOTATIONS")
#undef ACCESS_VM_ANNOTATIONS
#pragma push_macro("LM_MODULE")
#undef LM_MODULE
#pragma push_macro("REF_LIMIT")
#undef REF_LIMIT
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("MN_SEARCH_INTERFACES")
#undef MN_SEARCH_INTERFACES
#pragma push_macro("MN_IS_METHOD")
#undef MN_IS_METHOD
#pragma push_macro("MN_CALLER_SENSITIVE")
#undef MN_CALLER_SENSITIVE
#pragma push_macro("MN_SEARCH_SUPERCLASSES")
#undef MN_SEARCH_SUPERCLASSES
#pragma push_macro("STRONG_LOADER_LINK")
#undef STRONG_LOADER_LINK
#pragma push_macro("LM_TRUSTED")
#undef LM_TRUSTED
#pragma push_macro("MN_IS_TYPE")
#undef MN_IS_TYPE
#pragma push_macro("UNCONDITIONAL")
#undef UNCONDITIONAL
#pragma push_macro("MN_REFERENCE_KIND_SHIFT")
#undef MN_REFERENCE_KIND_SHIFT
#pragma push_macro("LM_UNCONDITIONAL")
#undef LM_UNCONDITIONAL
#pragma push_macro("MN_REFERENCE_KIND_MASK")
#undef MN_REFERENCE_KIND_MASK

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleNatives$Constants : public ::java::lang::Object {
	$class(MethodHandleNatives$Constants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodHandleNatives$Constants();
	void init$();
	static const int32_t MN_IS_METHOD = 0x00010000;
	static const int32_t MN_IS_CONSTRUCTOR = 0x00020000;
	static const int32_t MN_IS_FIELD = 0x00040000;
	static const int32_t MN_IS_TYPE = 0x00080000;
	static const int32_t MN_CALLER_SENSITIVE = 0x00100000;
	static const int32_t MN_TRUSTED_FINAL = 0x00200000;
	static const int32_t MN_REFERENCE_KIND_SHIFT = 24;
	static const int32_t MN_REFERENCE_KIND_MASK = 15; // 0x0F000000 >> MN_REFERENCE_KIND_SHIFT
	static const int32_t MN_SEARCH_SUPERCLASSES = 0x00100000;
	static const int32_t MN_SEARCH_INTERFACES = 0x00200000;
	static const int8_t REF_NONE = 0;
	static const int8_t REF_getField = 1;
	static const int8_t REF_getStatic = 2;
	static const int8_t REF_putField = 3;
	static const int8_t REF_putStatic = 4;
	static const int8_t REF_invokeVirtual = 5;
	static const int8_t REF_invokeStatic = 6;
	static const int8_t REF_invokeSpecial = 7;
	static const int8_t REF_newInvokeSpecial = 8;
	static const int8_t REF_invokeInterface = 9;
	static const int8_t REF_LIMIT = 10;
	static const int32_t NESTMATE_CLASS = 1;
	static const int32_t HIDDEN_CLASS = 2;
	static const int32_t STRONG_LOADER_LINK = 4;
	static const int32_t ACCESS_VM_ANNOTATIONS = 8;
	static const int32_t LM_MODULE = ::java::lang::invoke::MethodHandles$Lookup::MODULE;
	static const int32_t LM_UNCONDITIONAL = ::java::lang::invoke::MethodHandles$Lookup::UNCONDITIONAL;
	static const int32_t LM_TRUSTED = (-1);
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("MN_IS_FIELD")
#pragma pop_macro("MN_IS_CONSTRUCTOR")
#pragma pop_macro("MN_TRUSTED_FINAL")
#pragma pop_macro("REF_NONE")
#pragma pop_macro("HIDDEN_CLASS")
#pragma pop_macro("NESTMATE_CLASS")
#pragma pop_macro("ACCESS_VM_ANNOTATIONS")
#pragma pop_macro("LM_MODULE")
#pragma pop_macro("REF_LIMIT")
#pragma pop_macro("MODULE")
#pragma pop_macro("MN_SEARCH_INTERFACES")
#pragma pop_macro("MN_IS_METHOD")
#pragma pop_macro("MN_CALLER_SENSITIVE")
#pragma pop_macro("MN_SEARCH_SUPERCLASSES")
#pragma pop_macro("STRONG_LOADER_LINK")
#pragma pop_macro("LM_TRUSTED")
#pragma pop_macro("MN_IS_TYPE")
#pragma pop_macro("UNCONDITIONAL")
#pragma pop_macro("MN_REFERENCE_KIND_SHIFT")
#pragma pop_macro("LM_UNCONDITIONAL")
#pragma pop_macro("MN_REFERENCE_KIND_MASK")

#endif // _java_lang_invoke_MethodHandleNatives$Constants_h_