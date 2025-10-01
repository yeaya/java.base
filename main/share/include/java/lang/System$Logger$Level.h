#ifndef _java_lang_System$Logger$Level_h_
#define _java_lang_System$Logger$Level_h_
//$ class java.lang.System$Logger$Level
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("TRACE")
#undef TRACE
#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("WARNING")
#undef WARNING
#pragma push_macro("OFF")
#undef OFF

namespace java {
	namespace lang {

class $import System$Logger$Level : public ::java::lang::Enum {
	$class(System$Logger$Level, 0, ::java::lang::Enum)
public:
	System$Logger$Level();
	static $Array<::java::lang::System$Logger$Level>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t severity);
	$String* getName();
	int32_t getSeverity();
	static ::java::lang::System$Logger$Level* valueOf($String* name);
	static $Array<::java::lang::System$Logger$Level>* values();
	static ::java::lang::System$Logger$Level* ALL;
	static ::java::lang::System$Logger$Level* TRACE;
	static ::java::lang::System$Logger$Level* DEBUG;
	static ::java::lang::System$Logger$Level* INFO;
	static ::java::lang::System$Logger$Level* WARNING;
	static ::java::lang::System$Logger$Level* ERROR;
	static ::java::lang::System$Logger$Level* OFF;
	static $Array<::java::lang::System$Logger$Level>* $VALUES;
	int32_t severity = 0;
};

	} // lang
} // java

#pragma pop_macro("TRACE")
#pragma pop_macro("ALL")
#pragma pop_macro("ERROR")
#pragma pop_macro("INFO")
#pragma pop_macro("DEBUG")
#pragma pop_macro("WARNING")
#pragma pop_macro("OFF")

#endif // _java_lang_System$Logger$Level_h_