#ifndef _sun_nio_ch_SocketAdaptor$2_h_
#define _sun_nio_ch_SocketAdaptor$2_h_
//$ class sun.nio.ch.SocketAdaptor$2
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
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

class SocketAdaptor$2 : public ::java::io::OutputStream {
	$class(SocketAdaptor$2, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	SocketAdaptor$2();
	void init$(::sun::nio::ch::SocketAdaptor* this$0);
	virtual void close() override;
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::sun::nio::ch::SocketAdaptor* this$0 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SocketAdaptor$2_h_