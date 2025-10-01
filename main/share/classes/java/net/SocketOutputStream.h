#ifndef _java_net_SocketOutputStream_h_
#define _java_net_SocketOutputStream_h_
//$ class java.net.SocketOutputStream
//$ extends java.io.FileOutputStream

#include <java/io/FileOutputStream.h>
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

class SocketOutputStream : public ::java::io::FileOutputStream {
	$class(SocketOutputStream, 0, ::java::io::FileOutputStream)
public:
	SocketOutputStream();
	void init$(::java::net::AbstractPlainSocketImpl* impl);
	virtual void close() override;
	virtual ::java::nio::channels::FileChannel* getChannel() override;
	static void init();
	void socketWrite($bytes* b, int32_t off, int32_t len);
	void socketWrite0(::java::io::FileDescriptor* fd, $bytes* b, int32_t off, int32_t len);
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	static bool $assertionsDisabled;
	::java::net::AbstractPlainSocketImpl* impl = nullptr;
	$bytes* temp = nullptr;
};

	} // net
} // java

#endif // _java_net_SocketOutputStream_h_