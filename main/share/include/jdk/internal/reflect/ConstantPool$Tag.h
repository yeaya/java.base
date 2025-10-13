#ifndef _jdk_internal_reflect_ConstantPool$Tag_h_
#define _jdk_internal_reflect_ConstantPool$Tag_h_
//$ class jdk.internal.reflect.ConstantPool$Tag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("FIELDREF")
#undef FIELDREF
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("INTEGER")
#undef INTEGER
#pragma push_macro("INTERFACEMETHODREF")
#undef INTERFACEMETHODREF
#pragma push_macro("INVALID")
#undef INVALID
#pragma push_macro("INVOKEDYNAMIC")
#undef INVOKEDYNAMIC
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("METHODHANDLE")
#undef METHODHANDLE
#pragma push_macro("METHODREF")
#undef METHODREF
#pragma push_macro("METHODTYPE")
#undef METHODTYPE
#pragma push_macro("NAMEANDTYPE")
#undef NAMEANDTYPE
#pragma push_macro("STRING")
#undef STRING
#pragma push_macro("UTF8")
#undef UTF8

namespace jdk {
	namespace internal {
		namespace reflect {

class $import ConstantPool$Tag : public ::java::lang::Enum {
	$class(ConstantPool$Tag, 0, ::java::lang::Enum)
public:
	ConstantPool$Tag();
	static $Array<::jdk::internal::reflect::ConstantPool$Tag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t tagCode);
	static ::jdk::internal::reflect::ConstantPool$Tag* valueOf($String* name);
	static ::jdk::internal::reflect::ConstantPool$Tag* valueOf(int8_t v);
	static $Array<::jdk::internal::reflect::ConstantPool$Tag>* values();
	static ::jdk::internal::reflect::ConstantPool$Tag* UTF8;
	static ::jdk::internal::reflect::ConstantPool$Tag* INTEGER;
	static ::jdk::internal::reflect::ConstantPool$Tag* FLOAT;
	static ::jdk::internal::reflect::ConstantPool$Tag* LONG;
	static ::jdk::internal::reflect::ConstantPool$Tag* DOUBLE;
	static ::jdk::internal::reflect::ConstantPool$Tag* CLASS;
	static ::jdk::internal::reflect::ConstantPool$Tag* STRING;
	static ::jdk::internal::reflect::ConstantPool$Tag* FIELDREF;
	static ::jdk::internal::reflect::ConstantPool$Tag* METHODREF;
	static ::jdk::internal::reflect::ConstantPool$Tag* INTERFACEMETHODREF;
	static ::jdk::internal::reflect::ConstantPool$Tag* NAMEANDTYPE;
	static ::jdk::internal::reflect::ConstantPool$Tag* METHODHANDLE;
	static ::jdk::internal::reflect::ConstantPool$Tag* METHODTYPE;
	static ::jdk::internal::reflect::ConstantPool$Tag* INVOKEDYNAMIC;
	static ::jdk::internal::reflect::ConstantPool$Tag* INVALID;
	static $Array<::jdk::internal::reflect::ConstantPool$Tag>* $VALUES;
	int32_t tagCode = 0;
};

		} // reflect
	} // internal
} // jdk

#pragma pop_macro("CLASS")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("FIELDREF")
#pragma pop_macro("FLOAT")
#pragma pop_macro("INTEGER")
#pragma pop_macro("INTERFACEMETHODREF")
#pragma pop_macro("INVALID")
#pragma pop_macro("INVOKEDYNAMIC")
#pragma pop_macro("LONG")
#pragma pop_macro("METHODHANDLE")
#pragma pop_macro("METHODREF")
#pragma pop_macro("METHODTYPE")
#pragma pop_macro("NAMEANDTYPE")
#pragma pop_macro("STRING")
#pragma pop_macro("UTF8")

#endif // _jdk_internal_reflect_ConstantPool$Tag_h_