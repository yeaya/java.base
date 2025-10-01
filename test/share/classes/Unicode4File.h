#ifndef _Unicode4File_h_
#define _Unicode4File_h_
//$ class Unicode4File
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export Unicode4File : public ::java::lang::Object {
	$class(Unicode4File, 0, ::java::lang::Object)
public:
	Unicode4File();
	void init$();
	static bool creat(::java::io::File* f);
	static void fail($String* msg);
	static bool find(::java::io::File* f);
	static void main($StringArray* args);
	static void sanityCheck(::java::io::File* f);
	static int32_t fail$;
};

#endif // _Unicode4File_h_