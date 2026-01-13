#ifndef _sun_util_logging_PlatformLogger$Level_h_
#define _sun_util_logging_PlatformLogger$Level_h_
//$ class sun.util.logging.PlatformLogger$Level
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("CONFIG")
#undef CONFIG
#pragma push_macro("FINE")
#undef FINE
#pragma push_macro("FINER")
#undef FINER
#pragma push_macro("FINEST")
#undef FINEST
#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("LEVEL_VALUES")
#undef LEVEL_VALUES
#pragma push_macro("OFF")
#undef OFF
#pragma push_macro("SEVERE")
#undef SEVERE
#pragma push_macro("SEVERITY_ALL")
#undef SEVERITY_ALL
#pragma push_macro("SEVERITY_CONFIG")
#undef SEVERITY_CONFIG
#pragma push_macro("SEVERITY_FINE")
#undef SEVERITY_FINE
#pragma push_macro("SEVERITY_FINER")
#undef SEVERITY_FINER
#pragma push_macro("SEVERITY_FINEST")
#undef SEVERITY_FINEST
#pragma push_macro("SEVERITY_INFO")
#undef SEVERITY_INFO
#pragma push_macro("SEVERITY_OFF")
#undef SEVERITY_OFF
#pragma push_macro("SEVERITY_SEVERE")
#undef SEVERITY_SEVERE
#pragma push_macro("SEVERITY_WARNING")
#undef SEVERITY_WARNING
#pragma push_macro("WARNING")
#undef WARNING

namespace java {
	namespace lang {
		class System$Logger$Level;
	}
}

namespace sun {
	namespace util {
		namespace logging {

class $export PlatformLogger$Level : public ::java::lang::Enum {
	$class(PlatformLogger$Level, 0, ::java::lang::Enum)
public:
	PlatformLogger$Level();
	static $Array<::sun::util::logging::PlatformLogger$Level>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::java::lang::System$Logger$Level* systemLevel);
	virtual int32_t intValue();
	virtual ::java::lang::System$Logger$Level* systemLevel();
	static ::sun::util::logging::PlatformLogger$Level* valueOf($String* name);
	static ::sun::util::logging::PlatformLogger$Level* valueOf(int32_t level);
	static $Array<::sun::util::logging::PlatformLogger$Level>* values();
	static ::sun::util::logging::PlatformLogger$Level* ALL;
	static ::sun::util::logging::PlatformLogger$Level* FINEST;
	static ::sun::util::logging::PlatformLogger$Level* FINER;
	static ::sun::util::logging::PlatformLogger$Level* FINE;
	static ::sun::util::logging::PlatformLogger$Level* CONFIG;
	static ::sun::util::logging::PlatformLogger$Level* INFO;
	static ::sun::util::logging::PlatformLogger$Level* WARNING;
	static ::sun::util::logging::PlatformLogger$Level* SEVERE;
	static ::sun::util::logging::PlatformLogger$Level* OFF;
	static $Array<::sun::util::logging::PlatformLogger$Level>* $VALUES;
	::java::lang::System$Logger$Level* systemLevel$ = nullptr;
	static const int32_t SEVERITY_OFF = 0x7FFFFFFF; // Integer.MAX_VALUE
	static const int32_t SEVERITY_SEVERE = 1000;
	static const int32_t SEVERITY_WARNING = 900;
	static const int32_t SEVERITY_INFO = 800;
	static const int32_t SEVERITY_CONFIG = 700;
	static const int32_t SEVERITY_FINE = 500;
	static const int32_t SEVERITY_FINER = 400;
	static const int32_t SEVERITY_FINEST = 300;
	static const int32_t SEVERITY_ALL = 0x80000000; // Integer.MIN_VALUE
	static $ints* LEVEL_VALUES;
};

		} // logging
	} // util
} // sun

#pragma pop_macro("ALL")
#pragma pop_macro("CONFIG")
#pragma pop_macro("FINE")
#pragma pop_macro("FINER")
#pragma pop_macro("FINEST")
#pragma pop_macro("INFO")
#pragma pop_macro("LEVEL_VALUES")
#pragma pop_macro("OFF")
#pragma pop_macro("SEVERE")
#pragma pop_macro("SEVERITY_ALL")
#pragma pop_macro("SEVERITY_CONFIG")
#pragma pop_macro("SEVERITY_FINE")
#pragma pop_macro("SEVERITY_FINER")
#pragma pop_macro("SEVERITY_FINEST")
#pragma pop_macro("SEVERITY_INFO")
#pragma pop_macro("SEVERITY_OFF")
#pragma pop_macro("SEVERITY_SEVERE")
#pragma pop_macro("SEVERITY_WARNING")
#pragma pop_macro("WARNING")

#endif // _sun_util_logging_PlatformLogger$Level_h_