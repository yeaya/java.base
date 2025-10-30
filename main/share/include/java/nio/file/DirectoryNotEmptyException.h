#ifndef _java_nio_file_DirectoryNotEmptyException_h_
#define _java_nio_file_DirectoryNotEmptyException_h_
//$ class java.nio.file.DirectoryNotEmptyException
//$ extends java.nio.file.FileSystemException

#include <java/nio/file/FileSystemException.h>

namespace java {
	namespace nio {
		namespace file {

class $import DirectoryNotEmptyException : public ::java::nio::file::FileSystemException {
	$class(DirectoryNotEmptyException, $NO_CLASS_INIT, ::java::nio::file::FileSystemException)
public:
	DirectoryNotEmptyException();
	void init$($String* dir);
	static const int64_t serialVersionUID = (int64_t)0x2A6B773C0727657B;
	DirectoryNotEmptyException(const DirectoryNotEmptyException& e);
	virtual void throw$() override;
	inline DirectoryNotEmptyException* operator ->() {
		return (DirectoryNotEmptyException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_DirectoryNotEmptyException_h_