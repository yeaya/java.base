#ifndef _sun_nio_ch_FileDispatcherImpl_h_
#define _sun_nio_ch_FileDispatcherImpl_h_
//$ class sun.nio.ch.FileDispatcherImpl
//$ extends sun.nio.ch.FileDispatcher

#include <sun/nio/ch/FileDispatcher.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SelectableChannel;
		}
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

class FileDispatcherImpl : public ::sun::nio::ch::FileDispatcher {
	$class(FileDispatcherImpl, 0, ::sun::nio::ch::FileDispatcher)
public:
	FileDispatcherImpl();
	void init$();
	virtual bool canTransferToDirectly(::java::nio::channels::SelectableChannel* sc) override;
	virtual void close(::java::io::FileDescriptor* fd) override;
	static void close0(::java::io::FileDescriptor* fd);
	virtual ::java::io::FileDescriptor* duplicateForMapping(::java::io::FileDescriptor* fd) override;
	static int64_t duplicateHandle(int64_t fd);
	virtual int32_t force(::java::io::FileDescriptor* fd, bool metaData) override;
	static int32_t force0(::java::io::FileDescriptor* fd, bool metaData);
	static bool isFastFileTransferRequested();
	virtual int32_t lock(::java::io::FileDescriptor* fd, bool blocking, int64_t pos, int64_t size, bool shared) override;
	static int32_t lock0(::java::io::FileDescriptor* fd, bool blocking, int64_t pos, int64_t size, bool shared);
	virtual bool needsPositionLock() override;
	virtual int32_t pread(::java::io::FileDescriptor* fd, int64_t address, int32_t len, int64_t position) override;
	static int32_t pread0(::java::io::FileDescriptor* fd, int64_t address, int32_t len, int64_t position);
	virtual int32_t pwrite(::java::io::FileDescriptor* fd, int64_t address, int32_t len, int64_t position) override;
	static int32_t pwrite0(::java::io::FileDescriptor* fd, int64_t address, int32_t len, int64_t position);
	virtual int32_t read(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int32_t read0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
	virtual int64_t readv(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int64_t readv0(::java::io::FileDescriptor* fd, int64_t address, int32_t len);
	virtual void release(::java::io::FileDescriptor* fd, int64_t pos, int64_t size) override;
	static void release0(::java::io::FileDescriptor* fd, int64_t pos, int64_t size);
	virtual int64_t seek(::java::io::FileDescriptor* fd, int64_t offset) override;
	static int64_t seek0(::java::io::FileDescriptor* fd, int64_t offset);
	static int32_t setDirect0(::java::io::FileDescriptor* fd, ::java::nio::CharBuffer* buffer);
	virtual int32_t setDirectIO(::java::io::FileDescriptor* fd, $String* path) override;
	virtual int64_t size(::java::io::FileDescriptor* fd) override;
	static int64_t size0(::java::io::FileDescriptor* fd);
	virtual bool transferToDirectlyNeedsPositionLock() override;
	virtual int32_t truncate(::java::io::FileDescriptor* fd, int64_t size) override;
	static int32_t truncate0(::java::io::FileDescriptor* fd, int64_t size);
	virtual int32_t write(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int32_t write0(::java::io::FileDescriptor* fd, int64_t address, int32_t len, bool append);
	virtual int64_t writev(::java::io::FileDescriptor* fd, int64_t address, int32_t len) override;
	static int64_t writev0(::java::io::FileDescriptor* fd, int64_t address, int32_t len, bool append);
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	static bool fastFileTransfer;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_FileDispatcherImpl_h_