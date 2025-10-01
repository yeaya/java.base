#ifndef _java_io_FileNotFoundException_h_
#define _java_io_FileNotFoundException_h_
//$ class java.io.FileNotFoundException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {

class $import FileNotFoundException : public ::java::io::IOException {
	$class(FileNotFoundException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	FileNotFoundException();
	void init$();
	void init$($String* s);
	void init$($String* path, $String* reason);
	static const int64_t serialVersionUID = (int64_t)0xF38A2BD6E0216AE4;
	FileNotFoundException(const FileNotFoundException& e);
	FileNotFoundException wrapper$();
	virtual void throwWrapper$() override;
};

	} // io
} // java

#endif // _java_io_FileNotFoundException_h_