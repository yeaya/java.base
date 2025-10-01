#ifndef _java_nio_file_ClosedFileSystemException_h_
#define _java_nio_file_ClosedFileSystemException_h_
//$ class java.nio.file.ClosedFileSystemException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace file {

class $import ClosedFileSystemException : public ::java::lang::IllegalStateException {
	$class(ClosedFileSystemException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	ClosedFileSystemException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x8EC7C48FFCE40A30;
	ClosedFileSystemException(const ClosedFileSystemException& e);
	ClosedFileSystemException wrapper$();
	virtual void throwWrapper$() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_ClosedFileSystemException_h_