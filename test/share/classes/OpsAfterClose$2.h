#ifndef _OpsAfterClose$2_h_
#define _OpsAfterClose$2_h_
//$ class OpsAfterClose$2
//$ extends OpsAfterClose

#include <OpsAfterClose.h>

namespace java {
	namespace io {
		class Reader;
	}
}

class OpsAfterClose$2 : public ::OpsAfterClose {
	$class(OpsAfterClose$2, $NO_CLASS_INIT, ::OpsAfterClose)
public:
	OpsAfterClose$2();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::Reader* r) override;
};

#endif // _OpsAfterClose$2_h_