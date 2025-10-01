#ifndef _Transfers$FileTarget_h_
#define _Transfers$FileTarget_h_
//$ class Transfers$FileTarget
//$ extends Transfers$Target

#include <Transfers$Target.h>

namespace java {
	namespace io {
		class File;
		class RandomAccessFile;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
			class WritableByteChannel;
		}
	}
}

class $export Transfers$FileTarget : public ::Transfers$Target {
	$class(Transfers$FileTarget, $NO_CLASS_INIT, ::Transfers$Target)
public:
	Transfers$FileTarget();
	void init$(int32_t size, int64_t seed);
	virtual ::java::nio::channels::WritableByteChannel* channel() override;
	virtual void verify() override;
	::java::io::File* fn = nullptr;
	::java::io::RandomAccessFile* raf = nullptr;
	::java::nio::channels::FileChannel* fc = nullptr;
};

#endif // _Transfers$FileTarget_h_