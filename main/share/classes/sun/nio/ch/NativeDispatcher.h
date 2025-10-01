#ifndef _sun_nio_ch_NativeDispatcher_h_
#define _sun_nio_ch_NativeDispatcher_h_
//$ class sun.nio.ch.NativeDispatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class NativeDispatcher : public ::java::lang::Object {
	$class(NativeDispatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NativeDispatcher();
	void init$();
	virtual void close(::java::io::FileDescriptor* fd) {}
	virtual void dup(::java::io::FileDescriptor* fd1, ::java::io::FileDescriptor* fd2);
	virtual bool needsPositionLock();
	virtual void preClose(::java::io::FileDescriptor* fd);
	virtual int32_t pread(::java::io::FileDescriptor* fd, int64_t address, int32_t len, int64_t position);
	virtual int32_t pwrite(::java::io::FileDescriptor* fd, int64_t address, int32_t len, int64_t position);
	virtual int32_t read(::java::io::FileDescriptor* fd, int64_t address, int32_t len) {return 0;}
	virtual int64_t readv(::java::io::FileDescriptor* fd, int64_t address, int32_t len) {return 0;}
	virtual int32_t write(::java::io::FileDescriptor* fd, int64_t address, int32_t len) {return 0;}
	virtual int64_t writev(::java::io::FileDescriptor* fd, int64_t address, int32_t len) {return 0;}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_NativeDispatcher_h_