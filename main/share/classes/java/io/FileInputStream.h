#ifndef _java_io_FileInputStream_h_
#define _java_io_FileInputStream_h_
//$ class java.io.FileInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE

namespace java {
	namespace io {
		class File;
		class FileDescriptor;
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
	namespace io {

class $export FileInputStream : public ::java::io::InputStream {
	$class(FileInputStream, $PRELOAD, ::java::io::InputStream)
public:
	FileInputStream();
	void init$($String* name);
	void init$(::java::io::File* file);
	void init$(::java::io::FileDescriptor* fdObj);
	virtual int32_t available() override;
	int32_t available0();
	virtual void close() override;
	virtual ::java::nio::channels::FileChannel* getChannel();
	::java::io::FileDescriptor* getFD();
	static void initIDs();
	int64_t length();
	int64_t length0();
	void open($String* name);
	void open0($String* name);
	int64_t position();
	int64_t position0();
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	int32_t read0();
	virtual $bytes* readAllBytes() override;
	int32_t readBytes($bytes* b, int32_t off, int32_t len);
	using ::java::io::InputStream::readNBytes;
	virtual $bytes* readNBytes(int32_t len) override;
	virtual int64_t skip(int64_t n) override;
	int64_t skip0(int64_t n);
	static const int32_t DEFAULT_BUFFER_SIZE = 8192;
	::java::io::FileDescriptor* fd = nullptr;
	$String* path = nullptr;
	$volatile(::java::nio::channels::FileChannel*) channel = nullptr;
	$Object* closeLock = nullptr;
	$volatile(bool) closed = false;
};

	} // io
} // java

#pragma pop_macro("DEFAULT_BUFFER_SIZE")

#endif // _java_io_FileInputStream_h_