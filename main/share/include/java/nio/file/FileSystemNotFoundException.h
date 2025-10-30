#ifndef _java_nio_file_FileSystemNotFoundException_h_
#define _java_nio_file_FileSystemNotFoundException_h_
//$ class java.nio.file.FileSystemNotFoundException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace nio {
		namespace file {

class $import FileSystemNotFoundException : public ::java::lang::RuntimeException {
	$class(FileSystemNotFoundException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	FileSystemNotFoundException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x6F04393B2D85375D;
	FileSystemNotFoundException(const FileSystemNotFoundException& e);
	virtual void throw$() override;
	inline FileSystemNotFoundException* operator ->() {
		return (FileSystemNotFoundException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileSystemNotFoundException_h_