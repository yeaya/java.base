#ifndef _sun_net_TelnetInputStream_h_
#define _sun_net_TelnetInputStream_h_
//$ class sun.net.TelnetInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace sun {
	namespace net {

class $import TelnetInputStream : public ::java::io::FilterInputStream {
	$class(TelnetInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	TelnetInputStream();
	void init$(::java::io::InputStream* fd, bool binary);
	virtual int32_t read() override;
	virtual int32_t read($bytes* bytes) override;
	virtual int32_t read($bytes* bytes, int32_t off, int32_t length) override;
	virtual void setStickyCRLF(bool on);
	bool stickyCRLF = false;
	bool seenCR = false;
	bool binaryMode = false;
};

	} // net
} // sun

#endif // _sun_net_TelnetInputStream_h_