#ifndef _sun_nio_ch_SocketAdaptor$1_h_
#define _sun_nio_ch_SocketAdaptor$1_h_
//$ class sun.nio.ch.SocketAdaptor$1
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace ch {
			class SocketAdaptor;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SocketAdaptor$1 : public ::java::io::InputStream {
	$class(SocketAdaptor$1, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SocketAdaptor$1();
	void init$(::sun::nio::ch::SocketAdaptor* this$0);
	virtual int32_t available() override;
	virtual void close() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::sun::nio::ch::SocketAdaptor* this$0 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SocketAdaptor$1_h_