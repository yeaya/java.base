#ifndef _sun_util_logging_PlatformLogger_h_
#define _sun_util_logging_PlatformLogger_h_
//$ class sun.util.logging.PlatformLogger
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class System$Logger$Level;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger$Bridge;
			class PlatformLogger$Level;
		}
	}
}

namespace sun {
	namespace util {
		namespace logging {

class $import PlatformLogger : public ::java::lang::Object {
	$class(PlatformLogger, 0, ::java::lang::Object)
public:
	PlatformLogger();
	void init$(::sun::util::logging::PlatformLogger$Bridge* loggerProxy);
	virtual void config($String* msg);
	virtual void config($String* msg, $Throwable* t);
	virtual void config($String* msg, $ObjectArray* params);
	virtual void fine($String* msg);
	virtual void fine($String* msg, $Throwable* t);
	virtual void fine($String* msg, $ObjectArray* params);
	virtual void finer($String* msg);
	virtual void finer($String* msg, $Throwable* t);
	virtual void finer($String* msg, $ObjectArray* params);
	virtual void finest($String* msg);
	virtual void finest($String* msg, $Throwable* t);
	virtual void finest($String* msg, $ObjectArray* params);
	static ::sun::util::logging::PlatformLogger* getLogger($String* name);
	virtual $String* getName();
	virtual void info($String* msg);
	virtual void info($String* msg, $Throwable* t);
	virtual void info($String* msg, $ObjectArray* params);
	virtual bool isEnabled();
	virtual bool isLoggable(::sun::util::logging::PlatformLogger$Level* level);
	virtual ::sun::util::logging::PlatformLogger$Level* level();
	virtual void setLevel(::sun::util::logging::PlatformLogger$Level* newLevel);
	virtual void severe($String* msg);
	virtual void severe($String* msg, $Throwable* t);
	virtual void severe($String* msg, $ObjectArray* params);
	static ::sun::util::logging::PlatformLogger$Level* toPlatformLevel(::java::lang::System$Logger$Level* level);
	virtual void warning($String* msg);
	virtual void warning($String* msg, $Throwable* t);
	virtual void warning($String* msg, $ObjectArray* params);
	static bool $assertionsDisabled;
	static ::java::util::Map* loggers;
	::sun::util::logging::PlatformLogger$Bridge* loggerProxy = nullptr;
	static $Array<::sun::util::logging::PlatformLogger$Level>* spi2platformLevelMapping;
};

		} // logging
	} // util
} // sun

#endif // _sun_util_logging_PlatformLogger_h_