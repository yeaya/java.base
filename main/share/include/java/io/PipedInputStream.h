#ifndef _java_io_PipedInputStream_h_
#define _java_io_PipedInputStream_h_
//$ class java.io.PipedInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_PIPE_SIZE")
#undef DEFAULT_PIPE_SIZE
#pragma push_macro("PIPE_SIZE")
#undef PIPE_SIZE

namespace java {
	namespace io {
		class PipedOutputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}

namespace java {
	namespace io {

class $import PipedInputStream : public ::java::io::InputStream {
	$class(PipedInputStream, 0, ::java::io::InputStream)
public:
	PipedInputStream();
	void init$(::java::io::PipedOutputStream* src);
	void init$(::java::io::PipedOutputStream* src, int32_t pipeSize);
	void init$();
	void init$(int32_t pipeSize);
	virtual int32_t available() override;
	void awaitSpace();
	void checkStateForReceive();
	virtual void close() override;
	virtual void connect(::java::io::PipedOutputStream* src);
	void initPipe(int32_t pipeSize);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void receive(int32_t b);
	virtual void receive($bytes* b, int32_t off, int32_t len);
	virtual void receivedLast();
	static bool $assertionsDisabled;
	bool closedByWriter = false;
	$volatile(bool) closedByReader = false;
	bool connected = false;
	$Thread* readSide = nullptr;
	$Thread* writeSide = nullptr;
	static const int32_t DEFAULT_PIPE_SIZE = 1024;
	static const int32_t PIPE_SIZE = DEFAULT_PIPE_SIZE;
	$bytes* buffer = nullptr;
	int32_t in = 0;
	int32_t out = 0;
};

	} // io
} // java

#pragma pop_macro("DEFAULT_PIPE_SIZE")
#pragma pop_macro("PIPE_SIZE")

#endif // _java_io_PipedInputStream_h_