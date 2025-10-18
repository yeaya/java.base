#ifndef _java_lang_ProcessImpl$DeferredCloseInputStream_h_
#define _java_lang_ProcessImpl$DeferredCloseInputStream_h_
//$ class java.lang.ProcessImpl$DeferredCloseInputStream
//$ extends java.lang.Process$PipeInputStream

#include <java/lang/Array.h>
#include <java/lang/Process$PipeInputStream.h>

namespace java {
	namespace io {
		class FileDescriptor;
		class InputStream;
	}
}

namespace java {
	namespace lang {

class ProcessImpl$DeferredCloseInputStream : public ::java::lang::Process$PipeInputStream {
	$class(ProcessImpl$DeferredCloseInputStream, $NO_CLASS_INIT, ::java::lang::Process$PipeInputStream)
public:
	ProcessImpl$DeferredCloseInputStream();
	void init$(::java::io::FileDescriptor* fd);
	virtual int32_t available() override;
	virtual void close() override;
	void closeDeferred(::java::io::InputStream* stc);
	void lower();
	void raise();
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	using ::java::lang::Process$PipeInputStream::readNBytes;
	virtual int64_t skip(int64_t n) override;
	$Object* lock = nullptr;
	bool closePending = false;
	int32_t useCount = 0;
	::java::io::InputStream* streamToClose = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessImpl$DeferredCloseInputStream_h_