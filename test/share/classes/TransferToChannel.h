#ifndef _TransferToChannel_h_
#define _TransferToChannel_h_
//$ class TransferToChannel
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHUNK_SIZE")
#undef CHUNK_SIZE

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class $export TransferToChannel : public ::java::lang::Object {
	$class(TransferToChannel, 0, ::java::lang::Object)
public:
	TransferToChannel();
	void init$();
	static void generateBigFile(::java::io::File* file);
	static void main($StringArray* args);
	static void test1();
	static void test2();
	static void transferFileToTrustedChannel();
	static void transferFileToUserChannel();
	static ::java::io::File* file;
	static ::java::io::File* outFile;
	static ::java::nio::channels::FileChannel* in;
	static int32_t CHUNK_SIZE;
};

#pragma pop_macro("CHUNK_SIZE")

#endif // _TransferToChannel_h_