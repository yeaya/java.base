#ifndef _OpsAfterClose$6_h_
#define _OpsAfterClose$6_h_
//$ class OpsAfterClose$6
//$ extends OpsAfterClose

#include <OpsAfterClose.h>

namespace java {
	namespace io {
		class Reader;
	}
}

class OpsAfterClose$6 : public ::OpsAfterClose {
	$class(OpsAfterClose$6, $NO_CLASS_INIT, ::OpsAfterClose)
public:
	OpsAfterClose$6();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::Reader* r) override;
};

#endif // _OpsAfterClose$6_h_