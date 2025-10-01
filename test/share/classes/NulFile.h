#ifndef _NulFile_h_
#define _NulFile_h_
//$ class NulFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHAR_NUL")
#undef CHAR_NUL

namespace java {
	namespace io {
		class File;
	}
}

class $export NulFile : public ::java::lang::Object {
	$class(NulFile, 0, ::java::lang::Object)
public:
	NulFile();
	void init$();
	static void main($StringArray* args);
	static void test($String* name);
	static void test(::java::io::File* testFile);
	static void test(::java::io::File* testFile, bool derived);
	static void testCreateTempFile($String* prefix, $String* suffix, ::java::io::File* directory);
	static void testFile();
	static void testFileInUnix();
	static void testFileInWindows();
	static void testFileInputStream($String* str);
	static void testFileOutputStream($String* str);
	static void testRandomAccessFile($String* str);
	static void testSerialization(::java::io::File* testFile);
	static void testTempFile();
	static const char16_t CHAR_NUL = ((char16_t)0);
	static $String* ExceptionMsg;
};

#pragma pop_macro("CHAR_NUL")

#endif // _NulFile_h_