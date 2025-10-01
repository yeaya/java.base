#ifndef _java_nio_file_NotLinkException_h_
#define _java_nio_file_NotLinkException_h_
//$ class java.nio.file.NotLinkException
//$ extends java.nio.file.FileSystemException

#include <java/nio/file/FileSystemException.h>

namespace java {
	namespace nio {
		namespace file {

class $export NotLinkException : public ::java::nio::file::FileSystemException {
	$class(NotLinkException, $NO_CLASS_INIT, ::java::nio::file::FileSystemException)
public:
	NotLinkException();
	void init$($String* file);
	void init$($String* file, $String* other, $String* reason);
	static const int64_t serialVersionUID = (int64_t)0xFA9B37CB53A0387B;
	NotLinkException(const NotLinkException& e);
	NotLinkException wrapper$();
	virtual void throwWrapper$() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_NotLinkException_h_