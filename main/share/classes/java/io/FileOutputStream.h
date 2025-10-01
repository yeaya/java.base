#ifndef _java_io_FileOutputStream_h_
#define _java_io_FileOutputStream_h_
//$ class java.io.FileOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

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
namespace jdk {
	namespace internal {
		namespace access {
			class JavaIOFileDescriptorAccess;
		}
	}
}

namespace java {
	namespace io {

class $export FileOutputStream : public ::java::io::OutputStream {
	$class(FileOutputStream, $PRELOAD, ::java::io::OutputStream)
public:
	FileOutputStream();
	void init$($String* name);
	void init$($String* name, bool append);
	void init$(::java::io::File* file);
	void init$(::java::io::File* file, bool append);
	void init$(::java::io::FileDescriptor* fdObj);
	virtual void close() override;
	virtual ::java::nio::channels::FileChannel* getChannel();
	::java::io::FileDescriptor* getFD();
	static void initIDs();
	void open($String* name, bool append);
	void open0($String* name, bool append);
	void write(int32_t b, bool append);
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	void writeBytes($bytes* b, int32_t off, int32_t len, bool append);
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	::java::io::FileDescriptor* fd = nullptr;
	$volatile(::java::nio::channels::FileChannel*) channel = nullptr;
	$String* path = nullptr;
	$Object* closeLock = nullptr;
	$volatile(bool) closed = false;
};

	} // io
} // java

#endif // _java_io_FileOutputStream_h_