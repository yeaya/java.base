#ifndef _java_nio_file_FileChannelLinesSpliterator_h_
#define _java_nio_file_FileChannelLinesSpliterator_h_
//$ class java.nio.file.FileChannelLinesSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

#pragma push_macro("SUPPORTED_CHARSET_NAMES")
#undef SUPPORTED_CHARSET_NAMES

namespace java {
	namespace io {
		class BufferedReader;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class FileChannelLinesSpliterator : public ::java::util::Spliterator {
	$class(FileChannelLinesSpliterator, 0, ::java::util::Spliterator)
public:
	FileChannelLinesSpliterator();
	void init$(::java::nio::channels::FileChannel* fc, ::java::nio::charset::Charset* cs, int32_t index, int32_t fence);
	void init$(::java::nio::channels::FileChannel* fc, ::java::nio::charset::Charset* cs, int32_t index, int32_t fence, ::java::nio::ByteBuffer* buffer, ::java::util::concurrent::atomic::AtomicInteger* bufRefCount);
	virtual int32_t characteristics() override;
	void close();
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	::java::io::BufferedReader* getBufferedReader();
	virtual int64_t getExactSizeIfKnown() override;
	::java::nio::ByteBuffer* getMappedByteBuffer();
	$String* readLine();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	void unmap();
	static ::java::util::Set* SUPPORTED_CHARSET_NAMES;
	::java::nio::channels::FileChannel* fc = nullptr;
	::java::nio::charset::Charset* cs = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	::java::nio::ByteBuffer* buffer = nullptr;
	::java::io::BufferedReader* reader = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* bufRefCount = nullptr;
};

		} // file
	} // nio
} // java

#pragma pop_macro("SUPPORTED_CHARSET_NAMES")

#endif // _java_nio_file_FileChannelLinesSpliterator_h_