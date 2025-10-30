#ifndef _java_nio_file_FileSystemException_h_
#define _java_nio_file_FileSystemException_h_
//$ class java.nio.file.FileSystemException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace nio {
		namespace file {

class $import FileSystemException : public ::java::io::IOException {
	$class(FileSystemException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	FileSystemException();
	void init$($String* file);
	void init$($String* file, $String* other, $String* reason);
	virtual $String* getFile();
	virtual $String* getMessage() override;
	virtual $String* getOtherFile();
	virtual $String* getReason();
	static const int64_t serialVersionUID = (int64_t)0xD598F27876D360FC;
	$String* file = nullptr;
	$String* other = nullptr;
	FileSystemException(const FileSystemException& e);
	virtual void throw$() override;
	inline FileSystemException* operator ->() {
		return (FileSystemException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileSystemException_h_