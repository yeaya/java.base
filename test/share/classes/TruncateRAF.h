#ifndef _TruncateRAF_h_
#define _TruncateRAF_h_
//$ class TruncateRAF
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class RandomAccessFile;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class $export TruncateRAF : public ::java::lang::Object {
	$class(TruncateRAF, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TruncateRAF();
	void init$();
	static void checkState(::java::io::RandomAccessFile* raf, ::java::nio::channels::FileChannel* fch, int64_t expectedOffset, int64_t expectedLength);
	static void main($StringArray* args);
};

#endif // _TruncateRAF_h_