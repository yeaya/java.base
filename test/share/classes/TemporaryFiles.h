#ifndef _TemporaryFiles_h_
#define _TemporaryFiles_h_
//$ class TemporaryFiles
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export TemporaryFiles : public ::java::lang::Object {
	$class(TemporaryFiles, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TemporaryFiles();
	void init$();
	static void checkInDirectory(::java::nio::file::Path* file, ::java::nio::file::Path* dir);
	static void main($StringArray* args);
	static void testInvalidFileTemp($String* prefix, $String* suffix);
	static void testTempDirectory($String* prefix, ::java::nio::file::Path* dir);
	static void testTempDirectory($String* prefix);
	static void testTempFile($String* prefix, $String* suffix, ::java::nio::file::Path* dir);
	static void testTempFile($String* prefix, $String* suffix);
};

#endif // _TemporaryFiles_h_