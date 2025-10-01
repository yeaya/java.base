#ifndef _ValueOf4Enum$Silly1_h_
#define _ValueOf4Enum$Silly1_h_
//$ class ValueOf4Enum$Silly1
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

class $export ValueOf4Enum$Silly1 : public ::java::lang::Enum {
	$class(ValueOf4Enum$Silly1, 0, ::java::lang::Enum)
public:
	ValueOf4Enum$Silly1();
	static $Array<ValueOf4Enum$Silly1>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::ValueOf4Enum$Silly1* valueOf($String* name);
	static $Array<ValueOf4Enum$Silly1>* values();
	static ::ValueOf4Enum$Silly1* e1;
	static $Array<ValueOf4Enum$Silly1>* $VALUES;
};

#endif // _ValueOf4Enum$Silly1_h_