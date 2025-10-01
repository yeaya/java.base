#ifndef _AtomicAppend_h_
#define _AtomicAppend_h_
//$ class AtomicAppend
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class OutputStream;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export AtomicAppend : public ::java::lang::Object {
	$class(AtomicAppend, 0, ::java::lang::Object)
public:
	AtomicAppend();
	void init$();
	static void main($StringArray* args);
	static ::java::nio::channels::FileChannel* newFileChannel(::java::io::File* file);
	static ::java::io::OutputStream* newOutputStream(::java::io::File* file);
	static void write(::java::nio::channels::FileChannel* fc, int32_t b);
	static ::java::util::Random* rand;
};

#endif // _AtomicAppend_h_