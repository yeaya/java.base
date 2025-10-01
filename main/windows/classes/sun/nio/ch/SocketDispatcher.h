#ifndef _sun_nio_ch_SocketDispatcher_h_
#define _sun_nio_ch_SocketDispatcher_h_
//$ class sun.nio.ch.SocketDispatcher
//$ extends sun.nio.ch.NativeDispatcher

#include <sun/nio/ch/NativeDispatcher.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaIOFileDescriptorAccess;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SocketDispatcher : public ::sun::nio::ch::NativeDispatcher {
	$class(SocketDispatcher, 0, ::sun::nio::ch::NativeDispatcher)
public:
	SocketDispatcher();
	void init$();
	virtual void close(::java::io::FileDescriptor* fd) override;
	static void close0(int32_t fdVal);
	static void invalidateAndClose(::java::io::FileDescriptor* fd);
	virtual void preClose(::java::io::FileDescriptor* fd) override;
	virtual int32_t read(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int32_t read0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
	virtual int64_t readv(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int64_t readv0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
	virtual int32_t write(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int32_t write0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
	virtual int64_t writev(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int64_t writev0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SocketDispatcher_h_