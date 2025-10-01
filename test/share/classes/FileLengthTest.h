#ifndef _FileLengthTest_h_
#define _FileLengthTest_h_
//$ class FileLengthTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUF_SIZE")
#undef BUF_SIZE

namespace java {
	namespace io {
		class RandomAccessFile;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
		class Thread;
	}
}

class $export FileLengthTest : public ::java::lang::Object {
	$class(FileLengthTest, 0, ::java::lang::Object)
public:
	FileLengthTest();
	void init$();
	static void createDummyFile($String* fileName);
	static void lambda$startLengthThread$0();
	static void lambda$startReaderThread$1();
	static void main($StringArray* args);
	static void startLengthThread();
	static void startReaderThread();
	static const int32_t BUF_SIZE = 4096;
	static ::java::io::RandomAccessFile* randomAccessFile;
	static $Thread* fileLengthCaller;
	static $Thread* fileContentReader;
	static ::java::lang::StringBuilder* fileContents;
	static $volatile(bool) isFailed;
};

#pragma pop_macro("BUF_SIZE")

#endif // _FileLengthTest_h_