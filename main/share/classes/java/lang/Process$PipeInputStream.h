#ifndef _java_lang_Process$PipeInputStream_h_
#define _java_lang_Process$PipeInputStream_h_
//$ class java.lang.Process$PipeInputStream
//$ extends java.io.FileInputStream

#include <java/io/FileInputStream.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

namespace java {
	namespace lang {

class $export Process$PipeInputStream : public ::java::io::FileInputStream {
	$class(Process$PipeInputStream, $NO_CLASS_INIT, ::java::io::FileInputStream)
public:
	Process$PipeInputStream();
	void init$(::java::io::FileDescriptor* fd);
	using ::java::io::FileInputStream::readNBytes;
	virtual int64_t skip(int64_t n) override;
};

	} // lang
} // java

#endif // _java_lang_Process$PipeInputStream_h_