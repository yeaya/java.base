#ifndef _java_nio_file_FileSystemAlreadyExistsException_h_
#define _java_nio_file_FileSystemAlreadyExistsException_h_
//$ class java.nio.file.FileSystemAlreadyExistsException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace nio {
		namespace file {

class $export FileSystemAlreadyExistsException : public ::java::lang::RuntimeException {
	$class(FileSystemAlreadyExistsException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	FileSystemAlreadyExistsException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xB486DA9E28ADC274;
	FileSystemAlreadyExistsException(const FileSystemAlreadyExistsException& e);
	FileSystemAlreadyExistsException wrapper$();
	virtual void throwWrapper$() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileSystemAlreadyExistsException_h_