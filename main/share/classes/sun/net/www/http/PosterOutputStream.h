#ifndef _sun_net_www_http_PosterOutputStream_h_
#define _sun_net_www_http_PosterOutputStream_h_
//$ class sun.net.www.http.PosterOutputStream
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class PosterOutputStream : public ::java::io::ByteArrayOutputStream {
	$class(PosterOutputStream, $NO_CLASS_INIT, ::java::io::ByteArrayOutputStream)
public:
	PosterOutputStream();
	void init$();
	virtual void close() override;
	virtual void reset() override;
	using ::java::io::ByteArrayOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	bool closed = false;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_PosterOutputStream_h_