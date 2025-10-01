#ifndef _sun_net_www_protocol_http_EmptyInputStream_h_
#define _sun_net_www_protocol_http_EmptyInputStream_h_
//$ class sun.net.www.protocol.http.EmptyInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class EmptyInputStream : public ::java::io::InputStream {
	$class(EmptyInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	EmptyInputStream();
	void init$();
	virtual int32_t available() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_EmptyInputStream_h_