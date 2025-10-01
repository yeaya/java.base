#ifndef _sun_util_logging_PlatformLogger$Bridge_h_
#define _sun_util_logging_PlatformLogger$Bridge_h_
//$ interface sun.util.logging.PlatformLogger$Bridge
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class System$Logger;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger$Level;
		}
	}
}

namespace sun {
	namespace util {
		namespace logging {

class $export PlatformLogger$Bridge : public ::java::lang::Object {
	$interface(PlatformLogger$Bridge, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static ::sun::util::logging::PlatformLogger$Bridge* convert(::java::lang::System$Logger* logger);
	virtual $String* getName() {return nullptr;}
	virtual bool isEnabled() {return false;}
	virtual bool isLoggable(::sun::util::logging::PlatformLogger$Level* level) {return false;}
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg) {}
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg, $Throwable* thrown) {}
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg, $ObjectArray* params) {}
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, ::java::util::function::Supplier* msgSupplier) {}
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $Throwable* thrown, ::java::util::function::Supplier* msgSupplier) {}
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg) {}
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::function::Supplier* msgSupplier) {}
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $ObjectArray* params) {}
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $Throwable* thrown) {}
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Throwable* thrown, ::java::util::function::Supplier* msgSupplier) {}
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* msg, $ObjectArray* params) {}
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown) {}
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $ObjectArray* params) {}
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown) {}
};

		} // logging
	} // util
} // sun

#endif // _sun_util_logging_PlatformLogger$Bridge_h_