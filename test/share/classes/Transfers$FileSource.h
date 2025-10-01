#ifndef _Transfers$FileSource_h_
#define _Transfers$FileSource_h_
//$ class Transfers$FileSource
//$ extends Transfers$Source

#include <Transfers$Source.h>

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
			class ReadableByteChannel;
		}
	}
}

class $export Transfers$FileSource : public ::Transfers$Source {
	$class(Transfers$FileSource, $NO_CLASS_INIT, ::Transfers$Source)
public:
	Transfers$FileSource();
	void init$(int32_t size, int64_t seed);
	virtual ::java::nio::channels::ReadableByteChannel* channel() override;
	virtual void verify() override;
	::java::io::File* fn = nullptr;
	::java::io::RandomAccessFile* raf = nullptr;
	::java::nio::channels::FileChannel* fc = nullptr;
};

#endif // _Transfers$FileSource_h_