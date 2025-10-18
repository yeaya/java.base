#ifndef _java_lang_ProcessImpl$DeferredCloseProcessPipeInputStream_h_
#define _java_lang_ProcessImpl$DeferredCloseProcessPipeInputStream_h_
//$ class java.lang.ProcessImpl$DeferredCloseProcessPipeInputStream
//$ extends java.io.BufferedInputStream

#include <java/io/BufferedInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace java {
	namespace lang {

class ProcessImpl$DeferredCloseProcessPipeInputStream : public ::java::io::BufferedInputStream {
	$class(ProcessImpl$DeferredCloseProcessPipeInputStream, $NO_CLASS_INIT, ::java::io::BufferedInputStream)
public:
	ProcessImpl$DeferredCloseProcessPipeInputStream();
	void init$(int32_t fd);
	virtual int32_t available() override;
	virtual void close() override;
	::java::io::InputStream* drainInputStream(::java::io::InputStream* in);
	void lower();
	virtual void processExited();
	void raise();
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int64_t skip(int64_t n) override;
	$Object* closeLock = nullptr;
	int32_t useCount = 0;
	bool closePending = false;
};

	} // lang
} // java

#endif // _java_lang_ProcessImpl$DeferredCloseProcessPipeInputStream_h_