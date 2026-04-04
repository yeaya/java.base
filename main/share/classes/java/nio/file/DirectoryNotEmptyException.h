#ifndef _java_nio_file_DirectoryNotEmptyException_h_
#define _java_nio_file_DirectoryNotEmptyException_h_
//$ class java.nio.file.DirectoryNotEmptyException
//$ extends java.nio.file.FileSystemException

#include <java/nio/file/FileSystemException.h>

namespace java {
	namespace nio {
		namespace file {

class $export DirectoryNotEmptyException : public ::java::nio::file::FileSystemException {
	$class(DirectoryNotEmptyException, $NO_CLASS_INIT, ::java::nio::file::FileSystemException)
public:
	DirectoryNotEmptyException();
	void init$($String* dir);
	static const int64_t serialVersionUID = (int64_t)0x2a6b773c0727657b;
	DirectoryNotEmptyException(const DirectoryNotEmptyException& e);
	virtual void throw$() override;
	inline DirectoryNotEmptyException* operator ->() const {
		return (DirectoryNotEmptyException*)throwing$;
	}
	inline operator DirectoryNotEmptyException*() const {
		return (DirectoryNotEmptyException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_DirectoryNotEmptyException_h_