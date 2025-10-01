#ifndef _OpsAfterClose4RandomAccessFile$8_h_
#define _OpsAfterClose4RandomAccessFile$8_h_
//$ class OpsAfterClose4RandomAccessFile$8
//$ extends OpsAfterClose4RandomAccessFile

#include <OpsAfterClose4RandomAccessFile.h>

namespace java {
	namespace io {
		class RandomAccessFile;
	}
}

class OpsAfterClose4RandomAccessFile$8 : public ::OpsAfterClose4RandomAccessFile {
	$class(OpsAfterClose4RandomAccessFile$8, $NO_CLASS_INIT, ::OpsAfterClose4RandomAccessFile)
public:
	OpsAfterClose4RandomAccessFile$8();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::RandomAccessFile* r) override;
};

#endif // _OpsAfterClose4RandomAccessFile$8_h_