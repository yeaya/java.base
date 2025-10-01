#ifndef _java_io_FileReader_h_
#define _java_io_FileReader_h_
//$ class java.io.FileReader
//$ extends java.io.InputStreamReader

#include <java/io/InputStreamReader.h>

namespace java {
	namespace io {
		class File;
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace java {
	namespace io {

class $export FileReader : public ::java::io::InputStreamReader {
	$class(FileReader, $NO_CLASS_INIT, ::java::io::InputStreamReader)
public:
	FileReader();
	void init$($String* fileName);
	void init$(::java::io::File* file);
	void init$(::java::io::FileDescriptor* fd);
	void init$($String* fileName, ::java::nio::charset::Charset* charset);
	void init$(::java::io::File* file, ::java::nio::charset::Charset* charset);
	using ::java::io::InputStreamReader::read;
};

	} // io
} // java

#endif // _java_io_FileReader_h_