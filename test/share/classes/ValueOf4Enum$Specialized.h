#ifndef _ValueOf4Enum$Specialized_h_
#define _ValueOf4Enum$Specialized_h_
//$ class ValueOf4Enum$Specialized
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FOO")
#undef FOO

class $export ValueOf4Enum$Specialized : public ::java::lang::Enum {
	$class(ValueOf4Enum$Specialized, 0, ::java::lang::Enum)
public:
	ValueOf4Enum$Specialized();
	static $Array<ValueOf4Enum$Specialized>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual void foo() {}
	static ::ValueOf4Enum$Specialized* valueOf($String* name);
	static $Array<ValueOf4Enum$Specialized>* values();
	static ::ValueOf4Enum$Specialized* FOO;
	static $Array<ValueOf4Enum$Specialized>* $VALUES;
};

#pragma pop_macro("FOO")

#endif // _ValueOf4Enum$Specialized_h_