#ifndef _java_nio_channels_FileChannel_h_
#define _java_nio_channels_FileChannel_h_
//$ class java.nio.channels.FileChannel
//$ extends java.nio.channels.spi.AbstractInterruptibleChannel
//$ implements java.nio.channels.SeekableByteChannel,java.nio.channels.GatheringByteChannel,java.nio.channels.ScatteringByteChannel

#include <java/lang/Array.h>
#include <java/nio/channels/GatheringByteChannel.h>
#include <java/nio/channels/ScatteringByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>

#pragma push_macro("NO_ATTRIBUTES")
#undef NO_ATTRIBUTES

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
			class WritableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class OpenOption;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileAttribute;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $import FileChannel : public ::java::nio::channels::spi::AbstractInterruptibleChannel, public ::java::nio::channels::SeekableByteChannel, public ::java::nio::channels::GatheringByteChannel, public ::java::nio::channels::ScatteringByteChannel {
	$class(FileChannel, 0, ::java::nio::channels::spi::AbstractInterruptibleChannel, ::java::nio::channels::SeekableByteChannel, ::java::nio::channels::GatheringByteChannel, ::java::nio::channels::ScatteringByteChannel)
public:
	FileChannel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isOpen() override;
	void init$();
	virtual void force(bool metaData) {}
	virtual ::java::nio::channels::FileLock* lock(int64_t position, int64_t size, bool shared) {return nullptr;}
	::java::nio::channels::FileLock* lock();
	virtual ::java::nio::MappedByteBuffer* map(::java::nio::channels::FileChannel$MapMode* mode, int64_t position, int64_t size) {return nullptr;}
	static ::java::nio::channels::FileChannel* open(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::channels::FileChannel* open(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options);
	virtual int64_t position() override {return 0;}
	virtual ::java::nio::channels::SeekableByteChannel* position(int64_t newPosition) override {return nullptr;}
	virtual int32_t read(::java::nio::ByteBuffer* dst) override {return 0;}
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override {return 0;}
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts) override;
	virtual int32_t read(::java::nio::ByteBuffer* dst, int64_t position) {return 0;}
	virtual int64_t size() override {return 0;}
	virtual $String* toString() override;
	virtual int64_t transferFrom(::java::nio::channels::ReadableByteChannel* src, int64_t position, int64_t count) {return 0;}
	virtual int64_t transferTo(int64_t position, int64_t count, ::java::nio::channels::WritableByteChannel* target) {return 0;}
	virtual ::java::nio::channels::SeekableByteChannel* truncate(int64_t size) override {return nullptr;}
	virtual ::java::nio::channels::FileLock* tryLock(int64_t position, int64_t size, bool shared) {return nullptr;}
	::java::nio::channels::FileLock* tryLock();
	virtual int32_t write(::java::nio::ByteBuffer* src) override {return 0;}
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override {return 0;}
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs) override;
	virtual int32_t write(::java::nio::ByteBuffer* src, int64_t position) {return 0;}
	static $Array<::java::nio::file::attribute::FileAttribute>* NO_ATTRIBUTES;
};

		} // channels
	} // nio
} // java

#pragma pop_macro("NO_ATTRIBUTES")

#endif // _java_nio_channels_FileChannel_h_