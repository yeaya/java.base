#ifndef _java_lang_ProcessImpl$LaunchMechanism_h_
#define _java_lang_ProcessImpl$LaunchMechanism_h_
//$ class java.lang.ProcessImpl$LaunchMechanism
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("POSIX_SPAWN")
#undef POSIX_SPAWN
#pragma push_macro("FORK")
#undef FORK
#pragma push_macro("VFORK")
#undef VFORK

namespace java {
	namespace lang {

class ProcessImpl$LaunchMechanism : public ::java::lang::Enum {
	$class(ProcessImpl$LaunchMechanism, 0, ::java::lang::Enum)
public:
	ProcessImpl$LaunchMechanism();
	static $Array<::java::lang::ProcessImpl$LaunchMechanism>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::ProcessImpl$LaunchMechanism* valueOf($String* name);
	static $Array<::java::lang::ProcessImpl$LaunchMechanism>* values();
	static ::java::lang::ProcessImpl$LaunchMechanism* FORK;
	static ::java::lang::ProcessImpl$LaunchMechanism* POSIX_SPAWN;
	static ::java::lang::ProcessImpl$LaunchMechanism* VFORK;
	static $Array<::java::lang::ProcessImpl$LaunchMechanism>* $VALUES;
};

	} // lang
} // java

#pragma pop_macro("POSIX_SPAWN")
#pragma pop_macro("FORK")
#pragma pop_macro("VFORK")

#endif // _java_lang_ProcessImpl$LaunchMechanism_h_