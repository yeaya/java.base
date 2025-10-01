#ifndef _LotsOfWrites$Writer_h_
#define _LotsOfWrites$Writer_h_
//$ class LotsOfWrites$Writer
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Integer;
		class Throwable;
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
			class AsynchronousFileChannel;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export LotsOfWrites$Writer : public ::java::nio::channels::CompletionHandler {
	$class(LotsOfWrites$Writer, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	LotsOfWrites$Writer();
	void init$(::java::io::File* file, int64_t size, ::java::util::concurrent::CountDownLatch* latch);
	virtual void completed(::java::lang::Integer* nwrote, ::java::nio::ByteBuffer* buf);
	virtual void completed(Object$* nwrote, Object$* buf) override;
	void done();
	virtual void failed($Throwable* exc, ::java::nio::ByteBuffer* buf);
	virtual void failed($Throwable* exc, Object$* buf) override;
	virtual ::java::io::File* file();
	::java::nio::ByteBuffer* genNextBuffer();
	virtual int64_t size();
	virtual void start();
	int64_t updatePosition(int64_t nwrote);
	::java::io::File* file$ = nullptr;
	int64_t size$ = 0;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
	::java::nio::channels::AsynchronousFileChannel* channel = nullptr;
	$volatile(int64_t) position = 0;
	$volatile(int8_t) nextByte = 0;
};

#endif // _LotsOfWrites$Writer_h_