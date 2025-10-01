#ifndef _java_net_SocketInputStream_h_
#define _java_net_SocketInputStream_h_
//$ class java.net.SocketInputStream
//$ extends java.io.FileInputStream

#include <java/io/FileInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class AbstractPlainSocketImpl;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

namespace java {
	namespace net {

class SocketInputStream : public ::java::io::FileInputStream {
	$class(SocketInputStream, 0, ::java::io::FileInputStream)
public:
	SocketInputStream();
	void init$(::java::net::AbstractPlainSocketImpl* impl);
	virtual int32_t available() override;
	virtual void close() override;
	virtual ::java::nio::channels::FileChannel* getChannel() override;
	static void init();
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t length) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t length, int32_t timeout);
	virtual int32_t read() override;
	using ::java::io::FileInputStream::readNBytes;
	virtual void setEOF(bool eof);
	virtual int64_t skip(int64_t numbytes) override;
	int32_t socketRead(::java::io::FileDescriptor* fd, $bytes* b, int32_t off, int32_t len, int32_t timeout);
	int32_t socketRead0(::java::io::FileDescriptor* fd, $bytes* b, int32_t off, int32_t len, int32_t timeout);
	static bool $assertionsDisabled;
	bool eof = false;
	::java::net::AbstractPlainSocketImpl* impl = nullptr;
	$bytes* temp = nullptr;
};

	} // net
} // java

#endif // _java_net_SocketInputStream_h_