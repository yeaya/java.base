#ifndef _java_io_PipedReader_h_
#define _java_io_PipedReader_h_
//$ class java.io.PipedReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_PIPE_SIZE")
#undef DEFAULT_PIPE_SIZE

namespace java {
	namespace io {
		class PipedWriter;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}

namespace java {
	namespace io {

class $export PipedReader : public ::java::io::Reader {
	$class(PipedReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	PipedReader();
	void init$(::java::io::PipedWriter* src);
	void init$(::java::io::PipedWriter* src, int32_t pipeSize);
	void init$();
	void init$(int32_t pipeSize);
	virtual void close() override;
	virtual void connect(::java::io::PipedWriter* src);
	void initPipe(int32_t pipeSize);
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual bool ready() override;
	virtual void receive(int32_t c);
	virtual void receive($chars* c, int32_t off, int32_t len);
	virtual void receivedLast();
	bool closedByWriter = false;
	bool closedByReader = false;
	bool connected = false;
	$Thread* readSide = nullptr;
	$Thread* writeSide = nullptr;
	static const int32_t DEFAULT_PIPE_SIZE = 1024;
	$chars* buffer = nullptr;
	int32_t in = 0;
	int32_t out = 0;
};

	} // io
} // java

#pragma pop_macro("DEFAULT_PIPE_SIZE")

#endif // _java_io_PipedReader_h_