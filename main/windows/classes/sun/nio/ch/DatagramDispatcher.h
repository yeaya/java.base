#ifndef _sun_nio_ch_DatagramDispatcher_h_
#define _sun_nio_ch_DatagramDispatcher_h_
//$ class sun.nio.ch.DatagramDispatcher
//$ extends sun.nio.ch.NativeDispatcher

#include <sun/nio/ch/NativeDispatcher.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class DatagramDispatcher : public ::sun::nio::ch::NativeDispatcher {
	$class(DatagramDispatcher, 0, ::sun::nio::ch::NativeDispatcher)
public:
	DatagramDispatcher();
	void init$();
	virtual void close(::java::io::FileDescriptor* fd) override;
	virtual int32_t read(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int32_t read0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
	virtual int64_t readv(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int64_t readv0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
	virtual int32_t write(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int32_t write0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
	virtual int64_t writev(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int64_t writev0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_DatagramDispatcher_h_