#ifndef _jdk_internal_jrtfs_JrtFileSystem$1_h_
#define _jdk_internal_jrtfs_JrtFileSystem$1_h_
//$ class jdk.internal.jrtfs.JrtFileSystem$1
//$ extends java.nio.channels.SeekableByteChannel

#include <java/nio/channels/SeekableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class ReadableByteChannel;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jrtfs {
			class JrtFileSystem;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileSystem$1 : public ::java::nio::channels::SeekableByteChannel {
	$class(JrtFileSystem$1, $NO_CLASS_INIT, ::java::nio::channels::SeekableByteChannel)
public:
	JrtFileSystem$1();
	void init$(::jdk::internal::jrtfs::JrtFileSystem* this$0, ::java::nio::channels::ReadableByteChannel* val$rbc, int64_t val$size);
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int64_t position() override;
	virtual ::java::nio::channels::SeekableByteChannel* position(int64_t pos) override;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
	virtual int64_t size() override;
	virtual ::java::nio::channels::SeekableByteChannel* truncate(int64_t size) override;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
	::jdk::internal::jrtfs::JrtFileSystem* this$0 = nullptr;
	int64_t val$size = 0;
	::java::nio::channels::ReadableByteChannel* val$rbc = nullptr;
	int64_t read$ = 0;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtFileSystem$1_h_