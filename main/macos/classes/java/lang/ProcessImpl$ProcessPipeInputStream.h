#ifndef _java_lang_ProcessImpl$ProcessPipeInputStream_h_
#define _java_lang_ProcessImpl$ProcessPipeInputStream_h_
//$ class java.lang.ProcessImpl$ProcessPipeInputStream
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

class ProcessImpl$ProcessPipeInputStream : public ::java::io::BufferedInputStream {
	$class(ProcessImpl$ProcessPipeInputStream, $NO_CLASS_INIT, ::java::io::BufferedInputStream)
public:
	ProcessImpl$ProcessPipeInputStream();
	void init$(int32_t fd);
	virtual void close() override;
	static $bytes* drainInputStream(::java::io::InputStream* in);
	virtual void processExited();
	using ::java::io::BufferedInputStream::read;
	$Object* closeLock = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessImpl$ProcessPipeInputStream_h_