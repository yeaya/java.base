#ifndef _sun_security_timestamp_TSResponse$TimestampException_h_
#define _sun_security_timestamp_TSResponse$TimestampException_h_
//$ class sun.security.timestamp.TSResponse$TimestampException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace sun {
	namespace security {
		namespace timestamp {

class $export TSResponse$TimestampException : public ::java::io::IOException {
	$class(TSResponse$TimestampException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	TSResponse$TimestampException();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xe95b4786fd3b9ba7;
	TSResponse$TimestampException(const TSResponse$TimestampException& e);
	virtual void throw$() override;
	inline TSResponse$TimestampException* operator ->() const {
		return (TSResponse$TimestampException*)throwing$;
	}
	inline operator TSResponse$TimestampException*() const {
		return (TSResponse$TimestampException*)throwing$;
	}
};

		} // timestamp
	} // security
} // sun

#endif // _sun_security_timestamp_TSResponse$TimestampException_h_