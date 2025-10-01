#ifndef _sun_net_TelnetProtocolException_h_
#define _sun_net_TelnetProtocolException_h_
//$ class sun.net.TelnetProtocolException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace sun {
	namespace net {

class $import TelnetProtocolException : public ::java::io::IOException {
	$class(TelnetProtocolException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	TelnetProtocolException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x76167DF7586DBB2F;
	TelnetProtocolException(const TelnetProtocolException& e);
	TelnetProtocolException wrapper$();
	virtual void throwWrapper$() override;
};

	} // net
} // sun

#endif // _sun_net_TelnetProtocolException_h_