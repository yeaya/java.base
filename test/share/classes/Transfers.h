#ifndef _Transfers_h_
#define _Transfers_h_
//$ class Transfers
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_FILE_SIZE")
#undef MAX_FILE_SIZE
#pragma push_macro("MAX_XFER_SIZE")
#undef MAX_XFER_SIZE

class Transfers$Source;
class Transfers$Target;
namespace java {
	namespace io {
		class File;
		class PrintStream;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class $export Transfers : public ::java::lang::Object {
	$class(Transfers, 0, ::java::lang::Object)
public:
	Transfers();
	void init$();
	static void checkBytes(::java::nio::channels::FileChannel* fc, int32_t off, int32_t len, $bytes* bytes);
	static void checkRandomBytes(::java::nio::channels::FileChannel* fc, int32_t off, int32_t len, int64_t seed);
	static void checkZeroBytes(::java::nio::channels::FileChannel* fc, int32_t off, int32_t len);
	static void dump(::java::nio::channels::FileChannel* fc);
	static void main($StringArray* args);
	static void show($String* dir, $String* channelName, int32_t off, int32_t len);
	static void testFrom(int64_t seed, ::Transfers$Source* src, ::java::nio::channels::FileChannel* fc, int32_t off, int32_t len);
	static void testTo(int64_t seed, ::java::nio::channels::FileChannel* fc, int32_t off, int32_t len, ::Transfers$Target* tgt);
	static void writeBytes($bytes* ba, ::java::nio::channels::FileChannel* fc, int32_t off, int32_t len);
	static void writeRandomBytes(int64_t seed, ::java::nio::channels::FileChannel* fc, int32_t off, int32_t len);
	static void writeZeroBytes(::java::nio::channels::FileChannel* fc, int32_t off, int32_t len);
	static ::java::io::PrintStream* out;
	static ::java::io::File* sourceFile;
	static ::java::io::File* targetFile;
	static const int32_t MAX_XFER_SIZE = 16384; // 1 << 14
	static const int32_t MAX_FILE_SIZE = 32768; // MAX_XFER_SIZE << 1
	static bool debug;
	static bool verbose;
};

#pragma pop_macro("MAX_FILE_SIZE")
#pragma pop_macro("MAX_XFER_SIZE")

#endif // _Transfers_h_