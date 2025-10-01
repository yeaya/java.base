#ifndef _OpsAfterClose$3_h_
#define _OpsAfterClose$3_h_
//$ class OpsAfterClose$3
//$ extends OpsAfterClose

#include <OpsAfterClose.h>

namespace java {
	namespace io {
		class Reader;
	}
}

class OpsAfterClose$3 : public ::OpsAfterClose {
	$class(OpsAfterClose$3, $NO_CLASS_INIT, ::OpsAfterClose)
public:
	OpsAfterClose$3();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::Reader* r) override;
};

#endif // _OpsAfterClose$3_h_