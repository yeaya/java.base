#ifndef _OpsAfterClose4DataInputStream$10_h_
#define _OpsAfterClose4DataInputStream$10_h_
//$ class OpsAfterClose4DataInputStream$10
//$ extends OpsAfterClose4DataInputStream

#include <OpsAfterClose4DataInputStream.h>

namespace java {
	namespace io {
		class DataInputStream;
	}
}

class OpsAfterClose4DataInputStream$10 : public ::OpsAfterClose4DataInputStream {
	$class(OpsAfterClose4DataInputStream$10, $NO_CLASS_INIT, ::OpsAfterClose4DataInputStream)
public:
	OpsAfterClose4DataInputStream$10();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::DataInputStream* is) override;
};

#endif // _OpsAfterClose4DataInputStream$10_h_