#ifndef _java_lang_ProcessImpl$ProcessPipeOutputStream_h_
#define _java_lang_ProcessImpl$ProcessPipeOutputStream_h_
//$ class java.lang.ProcessImpl$ProcessPipeOutputStream
//$ extends java.io.BufferedOutputStream

#include <java/io/BufferedOutputStream.h>

namespace java {
	namespace lang {

class ProcessImpl$ProcessPipeOutputStream : public ::java::io::BufferedOutputStream {
	$class(ProcessImpl$ProcessPipeOutputStream, $NO_CLASS_INIT, ::java::io::BufferedOutputStream)
public:
	ProcessImpl$ProcessPipeOutputStream();
	void init$(int32_t fd);
	virtual void processExited();
	using ::java::io::BufferedOutputStream::write;
};

	} // lang
} // java

#endif // _java_lang_ProcessImpl$ProcessPipeOutputStream_h_