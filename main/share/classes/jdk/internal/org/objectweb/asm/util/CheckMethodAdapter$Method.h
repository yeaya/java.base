#ifndef _jdk_internal_org_objectweb_asm$_util_CheckMethodAdapter$Method_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckMethodAdapter$Method_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckMethodAdapter$Method
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("VISIT_FIELD_INSN")
#undef VISIT_FIELD_INSN
#pragma push_macro("VISIT_JUMP_INSN")
#undef VISIT_JUMP_INSN
#pragma push_macro("VISIT_INSN")
#undef VISIT_INSN
#pragma push_macro("VISIT_INT_INSN")
#undef VISIT_INT_INSN
#pragma push_macro("VISIT_METHOD_INSN")
#undef VISIT_METHOD_INSN
#pragma push_macro("VISIT_VAR_INSN")
#undef VISIT_VAR_INSN
#pragma push_macro("VISIT_TYPE_INSN")
#undef VISIT_TYPE_INSN

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

class CheckMethodAdapter$Method : public ::java::lang::Enum {
	$class(CheckMethodAdapter$Method, 0, ::java::lang::Enum)
public:
	CheckMethodAdapter$Method();
	static $Array<::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method* valueOf($String* name);
	static $Array<::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method>* values();
	static ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method* VISIT_INSN;
	static ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method* VISIT_INT_INSN;
	static ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method* VISIT_VAR_INSN;
	static ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method* VISIT_TYPE_INSN;
	static ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method* VISIT_FIELD_INSN;
	static ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method* VISIT_METHOD_INSN;
	static ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method* VISIT_JUMP_INSN;
	static $Array<::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method>* $VALUES;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("VISIT_FIELD_INSN")
#pragma pop_macro("VISIT_JUMP_INSN")
#pragma pop_macro("VISIT_INSN")
#pragma pop_macro("VISIT_INT_INSN")
#pragma pop_macro("VISIT_METHOD_INSN")
#pragma pop_macro("VISIT_VAR_INSN")
#pragma pop_macro("VISIT_TYPE_INSN")

#endif // _jdk_internal_org_objectweb_asm$_util_CheckMethodAdapter$Method_h_