#ifndef _jdk_internal_event_EventHelper_h_
#define _jdk_internal_event_EventHelper_h_
//$ class jdk.internal.event.EventHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JUJA")
#undef JUJA
#pragma push_macro("SECURITY_LOGGER_NAME")
#undef SECURITY_LOGGER_NAME
#pragma push_macro("LOGGER_HANDLE")
#undef LOGGER_HANDLE
#pragma push_macro("LOG_LEVEL")
#undef LOG_LEVEL

namespace java {
	namespace lang {
		class System$Logger;
		class System$Logger$Level;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace time {
		class Instant;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaUtilJarAccess;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace event {

class $import EventHelper : public ::java::lang::Object {
	$class(EventHelper, 0, ::java::lang::Object)
public:
	EventHelper();
	void init$();
	static $String* getDurationString(::java::time::Instant* start);
	static bool isLoggingSecurity();
	static void logSecurityPropertyEvent($String* key, $String* value);
	static void logTLSHandshakeEvent(::java::time::Instant* start, $String* peerHost, int32_t peerPort, $String* cipherSuite, $String* protocolVersion, int64_t peerCertId);
	static void logX509CertificateEvent($String* algId, $String* serialNum, $String* subject, $String* issuer, $String* keyType, int32_t length, int64_t certId, int64_t beginDate, int64_t endDate);
	static void logX509ValidationEvent(int32_t anchorCertId, $ints* certIds);
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaUtilJarAccess* JUJA;
	static $volatile(bool) loggingSecurity;
	static $volatile(::java::lang::System$Logger*) securityLogger;
	static ::java::lang::invoke::VarHandle* LOGGER_HANDLE;
	static ::java::lang::System$Logger$Level* LOG_LEVEL;
	static $String* SECURITY_LOGGER_NAME;
};

		} // event
	} // internal
} // jdk

#pragma pop_macro("JUJA")
#pragma pop_macro("SECURITY_LOGGER_NAME")
#pragma pop_macro("LOGGER_HANDLE")
#pragma pop_macro("LOG_LEVEL")

#endif // _jdk_internal_event_EventHelper_h_