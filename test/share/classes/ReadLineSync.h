#ifndef _ReadLineSync_h_
#define _ReadLineSync_h_
//$ class ReadLineSync
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export ReadLineSync : public ::java::lang::Object {
	$class(ReadLineSync, 0, ::java::lang::Object)
public:
	ReadLineSync();
	void init$();
	static void createFile(::java::io::File* f);
	static void main($StringArray* args);
	static int32_t lineCount;
};

#endif // _ReadLineSync_h_