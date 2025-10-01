#ifndef _java_nio_file_FileSystemLoopException_h_
#define _java_nio_file_FileSystemLoopException_h_
//$ class java.nio.file.FileSystemLoopException
//$ extends java.nio.file.FileSystemException

#include <java/nio/file/FileSystemException.h>

namespace java {
	namespace nio {
		namespace file {

class $import FileSystemLoopException : public ::java::nio::file::FileSystemException {
	$class(FileSystemLoopException, $NO_CLASS_INIT, ::java::nio::file::FileSystemException)
public:
	FileSystemLoopException();
	void init$($String* file);
	static const int64_t serialVersionUID = (int64_t)0x4335EED96F492F51;
	FileSystemLoopException(const FileSystemLoopException& e);
	FileSystemLoopException wrapper$();
	virtual void throwWrapper$() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileSystemLoopException_h_