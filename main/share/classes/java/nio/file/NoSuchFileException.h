#ifndef _java_nio_file_NoSuchFileException_h_
#define _java_nio_file_NoSuchFileException_h_
//$ class java.nio.file.NoSuchFileException
//$ extends java.nio.file.FileSystemException

#include <java/nio/file/FileSystemException.h>

namespace java {
	namespace nio {
		namespace file {

class $export NoSuchFileException : public ::java::nio::file::FileSystemException {
	$class(NoSuchFileException, $NO_CLASS_INIT, ::java::nio::file::FileSystemException)
public:
	NoSuchFileException();
	void init$($String* file);
	void init$($String* file, $String* other, $String* reason);
	static const int64_t serialVersionUID = (int64_t)0xECB4B0FEF4CD7A85;
	NoSuchFileException(const NoSuchFileException& e);
	NoSuchFileException wrapper$();
	virtual void throwWrapper$() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_NoSuchFileException_h_