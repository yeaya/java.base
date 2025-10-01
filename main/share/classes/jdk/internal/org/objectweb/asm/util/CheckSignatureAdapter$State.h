#ifndef _jdk_internal_org_objectweb_asm$_util_CheckSignatureAdapter$State_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckSignatureAdapter$State_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("RETURN")
#undef RETURN
#pragma push_macro("SUPER")
#undef SUPER
#pragma push_macro("SIMPLE_TYPE")
#undef SIMPLE_TYPE
#pragma push_macro("BOUND")
#undef BOUND
#pragma push_macro("END")
#undef END
#pragma push_macro("PARAM")
#undef PARAM
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("FORMAL")
#undef FORMAL
#pragma push_macro("CLASS_TYPE")
#undef CLASS_TYPE

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

class CheckSignatureAdapter$State : public ::java::lang::Enum {
	$class(CheckSignatureAdapter$State, 0, ::java::lang::Enum)
public:
	CheckSignatureAdapter$State();
	static $Array<::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* valueOf($String* name);
	static $Array<::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State>* values();
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* EMPTY;
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* FORMAL;
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* BOUND;
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* SUPER;
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* PARAM;
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* RETURN;
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* SIMPLE_TYPE;
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* CLASS_TYPE;
	static ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* END;
	static $Array<::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State>* $VALUES;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("RETURN")
#pragma pop_macro("SUPER")
#pragma pop_macro("SIMPLE_TYPE")
#pragma pop_macro("BOUND")
#pragma pop_macro("END")
#pragma pop_macro("PARAM")
#pragma pop_macro("EMPTY")
#pragma pop_macro("FORMAL")
#pragma pop_macro("CLASS_TYPE")

#endif // _jdk_internal_org_objectweb_asm$_util_CheckSignatureAdapter$State_h_