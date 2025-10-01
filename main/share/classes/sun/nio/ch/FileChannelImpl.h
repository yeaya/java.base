#ifndef _sun_nio_ch_FileChannelImpl_h_
#define _sun_nio_ch_FileChannelImpl_h_
//$ class sun.nio.ch.FileChannelImpl
//$ extends java.nio.channels.FileChannel

#include <java/lang/Array.h>
#include <java/nio/channels/FileChannel.h>

#pragma push_macro("MAPPED_TRANSFER_SIZE")
#undef MAPPED_TRANSFER_SIZE
#pragma push_macro("TRANSFER_SIZE")
#undef TRANSFER_SIZE
#pragma push_macro("MAP_RW")
#undef MAP_RW
#pragma push_macro("MAP_PV")
#undef MAP_PV
#pragma push_macro("MAP_INVALID")
#undef MAP_INVALID
#pragma push_macro("MAP_RO")
#undef MAP_RO

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Cleaner$Cleanable;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class MappedByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel$MapMode;
			class FileLock;
			class ReadableByteChannel;
			class SeekableByteChannel;
			class WritableByteChannel;
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
namespace jdk {
	namespace internal {
		namespace misc {
			class VM$BufferPool;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class FileChannelImpl$Unmapper;
			class FileDispatcher;
			class FileLockImpl;
			class FileLockTable;
			class NativeThreadSet;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export FileChannelImpl : public ::java::nio::channels::FileChannel {
	$class(FileChannelImpl, 0, ::java::nio::channels::FileChannel)
public:
	FileChannelImpl();
	void init$(::java::io::FileDescriptor* fd, $String* path, bool readable, bool writable, bool direct, Object$* parent);
	void beginBlocking();
	void checkMode(::java::nio::channels::FileChannel$MapMode* mode, int32_t prot, bool isSync);
	void endBlocking(bool completed);
	void ensureOpen();
	::sun::nio::ch::FileLockTable* fileLockTable();
	virtual void force(bool metaData) override;
	static ::jdk::internal::misc::VM$BufferPool* getMappedBufferPool();
	static ::jdk::internal::misc::VM$BufferPool* getSyncMappedBufferPool();
	virtual void implCloseChannel() override;
	static int64_t initIDs();
	bool isSync(::java::nio::channels::FileChannel$MapMode* mode);
	using ::java::nio::channels::FileChannel::lock;
	virtual ::java::nio::channels::FileLock* lock(int64_t position, int64_t size, bool shared) override;
	virtual ::java::nio::MappedByteBuffer* map(::java::nio::channels::FileChannel$MapMode* mode, int64_t position, int64_t size) override;
	int64_t map0(int32_t prot, int64_t position, int64_t length, bool isSync);
	virtual ::sun::nio::ch::FileChannelImpl$Unmapper* mapInternal(::java::nio::channels::FileChannel$MapMode* mode, int64_t position, int64_t size);
	::sun::nio::ch::FileChannelImpl$Unmapper* mapInternal(::java::nio::channels::FileChannel$MapMode* mode, int64_t position, int64_t size, int32_t prot, bool isSync);
	static ::java::nio::channels::FileChannel* open(::java::io::FileDescriptor* fd, $String* path, bool readable, bool writable, bool direct, Object$* parent);
	virtual int64_t position() override;
	virtual ::java::nio::channels::SeekableByteChannel* position(int64_t newPosition) override;
	using ::java::nio::channels::FileChannel::read;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override;
	virtual int32_t read(::java::nio::ByteBuffer* dst, int64_t position) override;
	int32_t readInternal(::java::nio::ByteBuffer* dst, int64_t position);
	virtual void release(::sun::nio::ch::FileLockImpl* fli);
	virtual void setUninterruptible();
	virtual int64_t size() override;
	int32_t toProt(::java::nio::channels::FileChannel$MapMode* mode);
	virtual int64_t transferFrom(::java::nio::channels::ReadableByteChannel* src, int64_t position, int64_t count) override;
	int64_t transferFromArbitraryChannel(::java::nio::channels::ReadableByteChannel* src, int64_t position, int64_t count);
	int64_t transferFromFileChannel(::sun::nio::ch::FileChannelImpl* src, int64_t position, int64_t count);
	virtual int64_t transferTo(int64_t position, int64_t count, ::java::nio::channels::WritableByteChannel* target) override;
	int64_t transferTo0(::java::io::FileDescriptor* src, int64_t position, int64_t count, ::java::io::FileDescriptor* dst);
	int64_t transferToArbitraryChannel(int64_t position, int32_t icount, ::java::nio::channels::WritableByteChannel* target);
	int64_t transferToDirectly(int64_t position, int32_t icount, ::java::nio::channels::WritableByteChannel* target);
	int64_t transferToDirectlyInternal(int64_t position, int32_t icount, ::java::nio::channels::WritableByteChannel* target, ::java::io::FileDescriptor* targetFD);
	int64_t transferToTrustedChannel(int64_t position, int64_t count, ::java::nio::channels::WritableByteChannel* target);
	virtual ::java::nio::channels::SeekableByteChannel* truncate(int64_t newSize) override;
	using ::java::nio::channels::FileChannel::tryLock;
	virtual ::java::nio::channels::FileLock* tryLock(int64_t position, int64_t size, bool shared) override;
	static void unmap(::java::nio::MappedByteBuffer* bb);
	static int32_t unmap0(int64_t address, int64_t length);
	using ::java::nio::channels::FileChannel::write;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override;
	virtual int32_t write(::java::nio::ByteBuffer* src, int64_t position) override;
	int32_t writeInternal(::java::nio::ByteBuffer* src, int64_t position);
	static bool $assertionsDisabled;
	static int64_t allocationGranularity;
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	::sun::nio::ch::FileDispatcher* nd = nullptr;
	::java::io::FileDescriptor* fd = nullptr;
	bool writable = false;
	bool readable = false;
	$Object* parent = nullptr;
	$String* path = nullptr;
	::sun::nio::ch::NativeThreadSet* threads = nullptr;
	$Object* positionLock = nullptr;
	$volatile(bool) uninterruptible = false;
	bool direct = false;
	int32_t alignment = 0;
	::java::lang::ref::Cleaner$Cleanable* closer = nullptr;
	static $volatile(bool) transferSupported;
	static $volatile(bool) pipeSupported;
	static $volatile(bool) fileSupported;
	static const int64_t MAPPED_TRANSFER_SIZE = 8388608; // (int64_t)8 * (int64_t)1024 * (int64_t)1024
	static const int32_t TRANSFER_SIZE = 8192;
	static const int32_t MAP_INVALID = (-1);
	static const int32_t MAP_RO = 0;
	static const int32_t MAP_RW = 1;
	static const int32_t MAP_PV = 2;
	$volatile(::sun::nio::ch::FileLockTable*) fileLockTable$ = nullptr;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("MAPPED_TRANSFER_SIZE")
#pragma pop_macro("TRANSFER_SIZE")
#pragma pop_macro("MAP_RW")
#pragma pop_macro("MAP_PV")
#pragma pop_macro("MAP_INVALID")
#pragma pop_macro("MAP_RO")

#endif // _sun_nio_ch_FileChannelImpl_h_