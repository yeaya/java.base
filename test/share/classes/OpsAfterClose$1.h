#ifndef _OpsAfterClose$1_h_
#define _OpsAfterClose$1_h_
//$ class OpsAfterClose$1
//$ extends OpsAfterClose

#include <OpsAfterClose.h>

namespace java {
	namespace io {
		class Reader;
	}
}

class OpsAfterClose$1 : public ::OpsAfterClose {
	$class(OpsAfterClose$1, $NO_CLASS_INIT, ::OpsAfterClose)
public:
	OpsAfterClose$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::Reader* r) override;
};

#endif // _OpsAfterClose$1_h_