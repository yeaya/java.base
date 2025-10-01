#ifndef _java_lang_constant_DirectMethodHandleDesc$Kind_h_
#define _java_lang_constant_DirectMethodHandleDesc$Kind_h_
//$ class java.lang.constant.DirectMethodHandleDesc$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("INTERFACE_SPECIAL")
#undef INTERFACE_SPECIAL
#pragma push_macro("GETTER")
#undef GETTER
#pragma push_macro("TABLE")
#undef TABLE
#pragma push_macro("STATIC_GETTER")
#undef STATIC_GETTER
#pragma push_macro("INTERFACE_VIRTUAL")
#undef INTERFACE_VIRTUAL
#pragma push_macro("STATIC_SETTER")
#undef STATIC_SETTER
#pragma push_macro("SETTER")
#undef SETTER
#pragma push_macro("CONSTRUCTOR")
#undef CONSTRUCTOR
#pragma push_macro("SPECIAL")
#undef SPECIAL
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("INTERFACE_STATIC")
#undef INTERFACE_STATIC
#pragma push_macro("VIRTUAL")
#undef VIRTUAL

namespace java {
	namespace lang {
		namespace constant {

class $export DirectMethodHandleDesc$Kind : public ::java::lang::Enum {
	$class(DirectMethodHandleDesc$Kind, 0, ::java::lang::Enum)
public:
	DirectMethodHandleDesc$Kind();
	static $Array<::java::lang::constant::DirectMethodHandleDesc$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t refKind);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t refKind, bool isInterface);
	virtual bool isVirtualMethod();
	static int32_t tableIndex(int32_t refKind, bool isInterface);
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* valueOf($String* name);
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* valueOf(int32_t refKind);
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* valueOf(int32_t refKind, bool isInterface);
	static $Array<::java::lang::constant::DirectMethodHandleDesc$Kind>* values();
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* STATIC;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* INTERFACE_STATIC;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* VIRTUAL;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* INTERFACE_VIRTUAL;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* SPECIAL;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* INTERFACE_SPECIAL;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* CONSTRUCTOR;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* GETTER;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* SETTER;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* STATIC_GETTER;
	static ::java::lang::constant::DirectMethodHandleDesc$Kind* STATIC_SETTER;
	static $Array<::java::lang::constant::DirectMethodHandleDesc$Kind>* $VALUES;
	int32_t refKind = 0;
	bool isInterface = false;
	static $Array<::java::lang::constant::DirectMethodHandleDesc$Kind>* TABLE;
};

		} // constant
	} // lang
} // java

#pragma pop_macro("INTERFACE_SPECIAL")
#pragma pop_macro("GETTER")
#pragma pop_macro("TABLE")
#pragma pop_macro("STATIC_GETTER")
#pragma pop_macro("INTERFACE_VIRTUAL")
#pragma pop_macro("STATIC_SETTER")
#pragma pop_macro("SETTER")
#pragma pop_macro("CONSTRUCTOR")
#pragma pop_macro("SPECIAL")
#pragma pop_macro("STATIC")
#pragma pop_macro("INTERFACE_STATIC")
#pragma pop_macro("VIRTUAL")

#endif // _java_lang_constant_DirectMethodHandleDesc$Kind_h_