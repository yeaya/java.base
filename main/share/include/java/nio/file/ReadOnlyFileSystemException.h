#ifndef _java_nio_file_ReadOnlyFileSystemException_h_
#define _java_nio_file_ReadOnlyFileSystemException_h_
//$ class java.nio.file.ReadOnlyFileSystemException
//$ extends java.lang.UnsupportedOperationException

#include <java/lang/UnsupportedOperationException.h>

namespace java {
	namespace nio {
		namespace file {

class $import ReadOnlyFileSystemException : public ::java::lang::UnsupportedOperationException {
	$class(ReadOnlyFileSystemException, $NO_CLASS_INIT, ::java::lang::UnsupportedOperationException)
public:
	ReadOnlyFileSystemException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xA151EE9E9500D6A3;
	ReadOnlyFileSystemException(const ReadOnlyFileSystemException& e);
	virtual void throw$() override;
	inline ReadOnlyFileSystemException* operator ->() {
		return (ReadOnlyFileSystemException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_ReadOnlyFileSystemException_h_