#ifndef _sun_security_timestamp_Timestamper_h_
#define _sun_security_timestamp_Timestamper_h_
//$ interface sun.security.timestamp.Timestamper
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		namespace timestamp {

class $import Timestamper : public ::java::lang::Object {
	$interface(Timestamper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::security::timestamp::TSResponse* generateTimestamp(::sun::security::timestamp::TSRequest* tsQuery) {return nullptr;}
};

		} // timestamp
	} // security
} // sun

#endif // _sun_security_timestamp_Timestamper_h_