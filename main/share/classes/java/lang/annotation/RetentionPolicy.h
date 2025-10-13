#ifndef _java_lang_annotation_RetentionPolicy_h_
#define _java_lang_annotation_RetentionPolicy_h_
//$ class java.lang.annotation.RetentionPolicy
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("RUNTIME")
#undef RUNTIME
#pragma push_macro("SOURCE")
#undef SOURCE

namespace java {
	namespace lang {
		namespace annotation {

class $export RetentionPolicy : public ::java::lang::Enum {
	$class(RetentionPolicy, 0, ::java::lang::Enum)
public:
	RetentionPolicy();
	static $Array<::java::lang::annotation::RetentionPolicy>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::annotation::RetentionPolicy* valueOf($String* name);
	static $Array<::java::lang::annotation::RetentionPolicy>* values();
	static ::java::lang::annotation::RetentionPolicy* SOURCE;
	static ::java::lang::annotation::RetentionPolicy* CLASS;
	static ::java::lang::annotation::RetentionPolicy* RUNTIME;
	static $Array<::java::lang::annotation::RetentionPolicy>* $VALUES;
};

		} // annotation
	} // lang
} // java

#pragma pop_macro("CLASS")
#pragma pop_macro("RUNTIME")
#pragma pop_macro("SOURCE")

#endif // _java_lang_annotation_RetentionPolicy_h_