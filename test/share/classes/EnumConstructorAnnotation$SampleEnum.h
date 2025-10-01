#ifndef _EnumConstructorAnnotation$SampleEnum_h_
#define _EnumConstructorAnnotation$SampleEnum_h_
//$ class EnumConstructorAnnotation$SampleEnum
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

class $export EnumConstructorAnnotation$SampleEnum : public ::java::lang::Enum {
	$class(EnumConstructorAnnotation$SampleEnum, 0, ::java::lang::Enum)
public:
	EnumConstructorAnnotation$SampleEnum();
	static $Array<EnumConstructorAnnotation$SampleEnum>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* value);
	static ::EnumConstructorAnnotation$SampleEnum* valueOf($String* name);
	static $Array<EnumConstructorAnnotation$SampleEnum>* values();
	static ::EnumConstructorAnnotation$SampleEnum* INSTANCE;
	static $Array<EnumConstructorAnnotation$SampleEnum>* $VALUES;
};

#pragma pop_macro("INSTANCE")

#endif // _EnumConstructorAnnotation$SampleEnum_h_