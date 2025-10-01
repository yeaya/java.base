#ifndef _sun_security_timestamp_HttpTimestamper_h_
#define _sun_security_timestamp_HttpTimestamper_h_
//$ class sun.security.timestamp.HttpTimestamper
//$ extends sun.security.timestamp.Timestamper

#include <sun/security/timestamp/Timestamper.h>

#pragma push_macro("TS_QUERY_MIME_TYPE")
#undef TS_QUERY_MIME_TYPE
#pragma push_macro("CONNECT_TIMEOUT")
#undef CONNECT_TIMEOUT
#pragma push_macro("TS_REPLY_MIME_TYPE")
#undef TS_REPLY_MIME_TYPE

namespace java {
	namespace net {
		class URI;
	}
}
namespace sun {
	namespace security {
		namespace timestamp {
			class TSRequest;
			class TSResponse;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace timestamp {

class $import HttpTimestamper : public ::sun::security::timestamp::Timestamper {
	$class(HttpTimestamper, 0, ::sun::security::timestamp::Timestamper)
public:
	HttpTimestamper();
	void init$(::java::net::URI* tsaURI);
	virtual ::sun::security::timestamp::TSResponse* generateTimestamp(::sun::security::timestamp::TSRequest* tsQuery) override;
	static void verifyMimeType($String* contentType);
	static const int32_t CONNECT_TIMEOUT = 15000;
	static $String* TS_QUERY_MIME_TYPE;
	static $String* TS_REPLY_MIME_TYPE;
	static ::sun::security::util::Debug* debug;
	::java::net::URI* tsaURI = nullptr;
};

		} // timestamp
	} // security
} // sun

#pragma pop_macro("TS_QUERY_MIME_TYPE")
#pragma pop_macro("CONNECT_TIMEOUT")
#pragma pop_macro("TS_REPLY_MIME_TYPE")

#endif // _sun_security_timestamp_HttpTimestamper_h_