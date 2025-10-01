#ifndef _Finalize_h_
#define _Finalize_h_
//$ class Finalize
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export Finalize : public ::java::lang::Object {
	$class(Finalize, 0, ::java::lang::Object)
public:
	Finalize();
	void init$();
	static void doFileChannel();
	static void doFileInputStream();
	static void doFileOutputStream();
	static void doRandomAccessFile();
	static void main($StringArray* args);
	static void writeToInFile();
	static $bytes* data;
	static $String* inFileName;
	static $String* outFileName;
	static ::java::io::File* inFile;
	static ::java::io::File* outFile;
};

#endif // _Finalize_h_