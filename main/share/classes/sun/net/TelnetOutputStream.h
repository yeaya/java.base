#ifndef _sun_net_TelnetOutputStream_h_
#define _sun_net_TelnetOutputStream_h_
//$ class sun.net.TelnetOutputStream
//$ extends java.io.BufferedOutputStream

#include <java/io/BufferedOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace sun {
	namespace net {

class $export TelnetOutputStream : public ::java::io::BufferedOutputStream {
	$class(TelnetOutputStream, $NO_CLASS_INIT, ::java::io::BufferedOutputStream)
public:
	TelnetOutputStream();
	void init$(::java::io::OutputStream* fd, bool binary);
	virtual void setStickyCRLF(bool on);
	using ::java::io::BufferedOutputStream::write;
	virtual void write(int32_t c) override;
	virtual void write($bytes* bytes, int32_t off, int32_t length) override;
	bool stickyCRLF = false;
	bool seenCR = false;
	bool binaryMode = false;
};

	} // net
} // sun

#endif // _sun_net_TelnetOutputStream_h_