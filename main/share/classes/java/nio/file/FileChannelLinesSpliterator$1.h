#ifndef _java_nio_file_FileChannelLinesSpliterator$1_h_
#define _java_nio_file_FileChannelLinesSpliterator$1_h_
//$ class java.nio.file.FileChannelLinesSpliterator$1
//$ extends java.nio.channels.ReadableByteChannel

#include <java/nio/channels/ReadableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileChannelLinesSpliterator;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class FileChannelLinesSpliterator$1 : public ::java::nio::channels::ReadableByteChannel {
	$class(FileChannelLinesSpliterator$1, $NO_CLASS_INIT, ::java::nio::channels::ReadableByteChannel)
public:
	FileChannelLinesSpliterator$1();
	void init$(::java::nio::file::FileChannelLinesSpliterator* this$0);
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
	::java::nio::file::FileChannelLinesSpliterator* this$0 = nullptr;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileChannelLinesSpliterator$1_h_