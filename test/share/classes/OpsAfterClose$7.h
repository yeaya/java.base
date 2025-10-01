#ifndef _OpsAfterClose$7_h_
#define _OpsAfterClose$7_h_
//$ class OpsAfterClose$7
//$ extends OpsAfterClose

#include <OpsAfterClose.h>

namespace java {
	namespace io {
		class Reader;
	}
}

class OpsAfterClose$7 : public ::OpsAfterClose {
	$class(OpsAfterClose$7, $NO_CLASS_INIT, ::OpsAfterClose)
public:
	OpsAfterClose$7();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::Reader* r) override;
};

#endif // _OpsAfterClose$7_h_