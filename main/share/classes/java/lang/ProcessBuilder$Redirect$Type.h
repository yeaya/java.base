#ifndef _java_lang_ProcessBuilder$Redirect$Type_h_
#define _java_lang_ProcessBuilder$Redirect$Type_h_
//$ class java.lang.ProcessBuilder$Redirect$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("INHERIT")
#undef INHERIT
#pragma push_macro("PIPE")
#undef PIPE
#pragma push_macro("APPEND")
#undef APPEND
#pragma push_macro("WRITE")
#undef WRITE

namespace java {
	namespace lang {

class $export ProcessBuilder$Redirect$Type : public ::java::lang::Enum {
	$class(ProcessBuilder$Redirect$Type, 0, ::java::lang::Enum)
public:
	ProcessBuilder$Redirect$Type();
	static $Array<::java::lang::ProcessBuilder$Redirect$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::ProcessBuilder$Redirect$Type* valueOf($String* name);
	static $Array<::java::lang::ProcessBuilder$Redirect$Type>* values();
	static ::java::lang::ProcessBuilder$Redirect$Type* PIPE;
	static ::java::lang::ProcessBuilder$Redirect$Type* INHERIT;
	static ::java::lang::ProcessBuilder$Redirect$Type* READ;
	static ::java::lang::ProcessBuilder$Redirect$Type* WRITE;
	static ::java::lang::ProcessBuilder$Redirect$Type* APPEND;
	static $Array<::java::lang::ProcessBuilder$Redirect$Type>* $VALUES;
};

	} // lang
} // java

#pragma pop_macro("READ")
#pragma pop_macro("INHERIT")
#pragma pop_macro("PIPE")
#pragma pop_macro("APPEND")
#pragma pop_macro("WRITE")

#endif // _java_lang_ProcessBuilder$Redirect$Type_h_