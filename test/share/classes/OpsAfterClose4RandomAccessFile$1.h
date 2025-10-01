#ifndef _OpsAfterClose4RandomAccessFile$1_h_
#define _OpsAfterClose4RandomAccessFile$1_h_
//$ class OpsAfterClose4RandomAccessFile$1
//$ extends OpsAfterClose4RandomAccessFile

#include <OpsAfterClose4RandomAccessFile.h>

namespace java {
	namespace io {
		class RandomAccessFile;
	}
}

class OpsAfterClose4RandomAccessFile$1 : public ::OpsAfterClose4RandomAccessFile {
	$class(OpsAfterClose4RandomAccessFile$1, $NO_CLASS_INIT, ::OpsAfterClose4RandomAccessFile)
public:
	OpsAfterClose4RandomAccessFile$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::RandomAccessFile* r) override;
};

#endif // _OpsAfterClose4RandomAccessFile$1_h_