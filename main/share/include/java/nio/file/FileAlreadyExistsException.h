#ifndef _java_nio_file_FileAlreadyExistsException_h_
#define _java_nio_file_FileAlreadyExistsException_h_
//$ class java.nio.file.FileAlreadyExistsException
//$ extends java.nio.file.FileSystemException

#include <java/nio/file/FileSystemException.h>

namespace java {
	namespace nio {
		namespace file {

class $import FileAlreadyExistsException : public ::java::nio::file::FileSystemException {
	$class(FileAlreadyExistsException, $NO_CLASS_INIT, ::java::nio::file::FileSystemException)
public:
	FileAlreadyExistsException();
	void init$($String* file);
	void init$($String* file, $String* other, $String* reason);
	static const int64_t serialVersionUID = (int64_t)0x692FF0526155CB4D;
	FileAlreadyExistsException(const FileAlreadyExistsException& e);
	virtual void throw$() override;
	inline FileAlreadyExistsException* operator ->() {
		return (FileAlreadyExistsException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileAlreadyExistsException_h_