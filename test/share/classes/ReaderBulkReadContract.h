#ifndef _ReaderBulkReadContract_h_
#define _ReaderBulkReadContract_h_
//$ class ReaderBulkReadContract
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class FileReader;
		class PipedReader;
		class Reader;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

class $export ReaderBulkReadContract : public ::java::lang::Object {
	$class(ReaderBulkReadContract, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReaderBulkReadContract();
	void init$();
	::java::util::Iterator* args();
	static ::java::io::File* createTempFileWithContents($String* contents);
	static ::java::io::Reader* lambda$args$0($String* s);
	static ::java::io::Reader* lambda$args$1($String* s);
	static ::java::io::Reader* lambda$args$2($String* s);
	static ::java::io::Reader* lambda$args$3($String* s);
	::java::io::Reader* lambda$args$4($String* s);
	static ::java::io::Reader* lambda$args$5($String* s);
	static ::java::io::Reader* lambda$args$6($String* s);
	static ::java::io::Reader* lambda$args$7($String* s);
	static void main($StringArray* args);
	::java::io::FileReader* newFileReader($String* contents);
	static ::java::io::PipedReader* newPipedReader($String* contents);
	void read(::java::io::Reader* r, int32_t size, int32_t off, int32_t len);
	void test();
	::java::util::concurrent::ConcurrentHashMap* cache = nullptr;
};

#endif // _ReaderBulkReadContract_h_