#ifndef _sun_security_timestamp_TSResponse_h_
#define _sun_security_timestamp_TSResponse_h_
//$ class sun.security.timestamp.TSResponse
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BAD_REQUEST")
#undef BAD_REQUEST
#pragma push_macro("TIME_NOT_AVAILABLE")
#undef TIME_NOT_AVAILABLE
#pragma push_macro("SYSTEM_FAILURE")
#undef SYSTEM_FAILURE
#pragma push_macro("BAD_ALG")
#undef BAD_ALG
#pragma push_macro("REVOCATION_WARNING")
#undef REVOCATION_WARNING
#pragma push_macro("REJECTION")
#undef REJECTION
#pragma push_macro("BAD_DATA_FORMAT")
#undef BAD_DATA_FORMAT
#pragma push_macro("REVOCATION_NOTIFICATION")
#undef REVOCATION_NOTIFICATION
#pragma push_macro("GRANTED_WITH_MODS")
#undef GRANTED_WITH_MODS
#pragma push_macro("WAITING")
#undef WAITING
#pragma push_macro("UNACCEPTED_POLICY")
#undef UNACCEPTED_POLICY
#pragma push_macro("UNACCEPTED_EXTENSION")
#undef UNACCEPTED_EXTENSION
#pragma push_macro("GRANTED")
#undef GRANTED
#pragma push_macro("ADD_INFO_NOT_AVAILABLE")
#undef ADD_INFO_NOT_AVAILABLE

namespace sun {
	namespace security {
		namespace pkcs {
			class PKCS7;
		}
	}
}
namespace sun {
	namespace security {
		namespace timestamp {
			class TimestampToken;
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

class $import TSResponse : public ::java::lang::Object {
	$class(TSResponse, 0, ::java::lang::Object)
public:
	TSResponse();
	void init$($bytes* tsReply);
	virtual $bytes* getEncodedToken();
	virtual $String* getFailureCodeAsText();
	virtual $booleans* getFailureInfo();
	virtual int32_t getStatusCode();
	virtual $String* getStatusCodeAsText();
	virtual $StringArray* getStatusMessages();
	virtual ::sun::security::timestamp::TimestampToken* getTimestampToken();
	virtual ::sun::security::pkcs::PKCS7* getToken();
	bool isSet(int32_t position);
	void parse($bytes* tsReply);
	static const int32_t GRANTED = 0;
	static const int32_t GRANTED_WITH_MODS = 1;
	static const int32_t REJECTION = 2;
	static const int32_t WAITING = 3;
	static const int32_t REVOCATION_WARNING = 4;
	static const int32_t REVOCATION_NOTIFICATION = 5;
	static const int32_t BAD_ALG = 0;
	static const int32_t BAD_REQUEST = 2;
	static const int32_t BAD_DATA_FORMAT = 5;
	static const int32_t TIME_NOT_AVAILABLE = 14;
	static const int32_t UNACCEPTED_POLICY = 15;
	static const int32_t UNACCEPTED_EXTENSION = 16;
	static const int32_t ADD_INFO_NOT_AVAILABLE = 17;
	static const int32_t SYSTEM_FAILURE = 25;
	static ::sun::security::util::Debug* debug;
	int32_t status = 0;
	$StringArray* statusString = nullptr;
	$booleans* failureInfo = nullptr;
	$bytes* encodedTsToken = nullptr;
	::sun::security::pkcs::PKCS7* tsToken = nullptr;
	::sun::security::timestamp::TimestampToken* tstInfo = nullptr;
};

		} // timestamp
	} // security
} // sun

#pragma pop_macro("BAD_REQUEST")
#pragma pop_macro("TIME_NOT_AVAILABLE")
#pragma pop_macro("SYSTEM_FAILURE")
#pragma pop_macro("BAD_ALG")
#pragma pop_macro("REVOCATION_WARNING")
#pragma pop_macro("REJECTION")
#pragma pop_macro("BAD_DATA_FORMAT")
#pragma pop_macro("REVOCATION_NOTIFICATION")
#pragma pop_macro("GRANTED_WITH_MODS")
#pragma pop_macro("WAITING")
#pragma pop_macro("UNACCEPTED_POLICY")
#pragma pop_macro("UNACCEPTED_EXTENSION")
#pragma pop_macro("GRANTED")
#pragma pop_macro("ADD_INFO_NOT_AVAILABLE")

#endif // _sun_security_timestamp_TSResponse_h_