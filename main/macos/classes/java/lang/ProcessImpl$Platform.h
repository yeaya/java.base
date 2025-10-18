#ifndef _java_lang_ProcessImpl$Platform_h_
#define _java_lang_ProcessImpl$Platform_h_
//$ class java.lang.ProcessImpl$Platform
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AIX")
#undef AIX
#pragma push_macro("BSD")
#undef BSD
#pragma push_macro("LINUX")
#undef LINUX

namespace java {
	namespace lang {
		class ProcessImpl$LaunchMechanism;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace lang {

class ProcessImpl$Platform : public ::java::lang::Enum {
	$class(ProcessImpl$Platform, 0, ::java::lang::Enum)
public:
	ProcessImpl$Platform();
	static $Array<::java::lang::ProcessImpl$Platform>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $Array<::java::lang::ProcessImpl$LaunchMechanism>* launchMechanisms);
	static ::java::lang::ProcessImpl$Platform* get();
	::java::lang::ProcessImpl$LaunchMechanism* lambda$launchMechanism$0();
	virtual ::java::lang::ProcessImpl$LaunchMechanism* launchMechanism();
	static ::java::lang::ProcessImpl$Platform* valueOf($String* name);
	static $Array<::java::lang::ProcessImpl$Platform>* values();
	static ::java::lang::ProcessImpl$Platform* LINUX;
	static ::java::lang::ProcessImpl$Platform* BSD;
	static ::java::lang::ProcessImpl$Platform* AIX;
	static $Array<::java::lang::ProcessImpl$Platform>* $VALUES;
	::java::lang::ProcessImpl$LaunchMechanism* defaultLaunchMechanism = nullptr;
	::java::util::Set* validLaunchMechanisms = nullptr;
};

	} // lang
} // java

#pragma pop_macro("AIX")
#pragma pop_macro("BSD")
#pragma pop_macro("LINUX")

#endif // _java_lang_ProcessImpl$Platform_h_