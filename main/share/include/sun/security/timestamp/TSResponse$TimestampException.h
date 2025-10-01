#ifndef _sun_security_timestamp_TSResponse$TimestampException_h_
#define _sun_security_timestamp_TSResponse$TimestampException_h_
//$ class sun.security.timestamp.TSResponse$TimestampException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace sun {
	namespace security {
		namespace timestamp {

class $import TSResponse$TimestampException : public ::java::io::IOException {
	$class(TSResponse$TimestampException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	TSResponse$TimestampException();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xE95B4786FD3B9BA7;
	TSResponse$TimestampException(const TSResponse$TimestampException& e);
	TSResponse$TimestampException wrapper$();
	virtual void throwWrapper$() override;
};

		} // timestamp
	} // security
} // sun

#endif // _sun_security_timestamp_TSResponse$TimestampException_h_