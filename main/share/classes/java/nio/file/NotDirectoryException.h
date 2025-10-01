#ifndef _java_nio_file_NotDirectoryException_h_
#define _java_nio_file_NotDirectoryException_h_
//$ class java.nio.file.NotDirectoryException
//$ extends java.nio.file.FileSystemException

#include <java/nio/file/FileSystemException.h>

namespace java {
	namespace nio {
		namespace file {

class $export NotDirectoryException : public ::java::nio::file::FileSystemException {
	$class(NotDirectoryException, $NO_CLASS_INIT, ::java::nio::file::FileSystemException)
public:
	NotDirectoryException();
	void init$($String* file);
	static const int64_t serialVersionUID = (int64_t)0x82F0DF36F87CE379;
	NotDirectoryException(const NotDirectoryException& e);
	NotDirectoryException wrapper$();
	virtual void throwWrapper$() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_NotDirectoryException_h_