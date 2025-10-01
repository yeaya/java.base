#ifndef _java_io_FileWriter_h_
#define _java_io_FileWriter_h_
//$ class java.io.FileWriter
//$ extends java.io.OutputStreamWriter

#include <java/io/OutputStreamWriter.h>

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

class $export FileWriter : public ::java::io::OutputStreamWriter {
	$class(FileWriter, $NO_CLASS_INIT, ::java::io::OutputStreamWriter)
public:
	FileWriter();
	using ::java::io::OutputStreamWriter::append;
	void init$($String* fileName);
	void init$($String* fileName, bool append);
	void init$(::java::io::File* file);
	void init$(::java::io::File* file, bool append);
	void init$(::java::io::FileDescriptor* fd);
	void init$($String* fileName, ::java::nio::charset::Charset* charset);
	void init$($String* fileName, ::java::nio::charset::Charset* charset, bool append);
	void init$(::java::io::File* file, ::java::nio::charset::Charset* charset);
	void init$(::java::io::File* file, ::java::nio::charset::Charset* charset, bool append);
	using ::java::io::OutputStreamWriter::write;
};

	} // io
} // java

#endif // _java_io_FileWriter_h_