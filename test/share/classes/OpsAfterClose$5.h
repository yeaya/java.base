#ifndef _OpsAfterClose$5_h_
#define _OpsAfterClose$5_h_
//$ class OpsAfterClose$5
//$ extends OpsAfterClose

#include <OpsAfterClose.h>

namespace java {
	namespace io {
		class Reader;
	}
}

class OpsAfterClose$5 : public ::OpsAfterClose {
	$class(OpsAfterClose$5, $NO_CLASS_INIT, ::OpsAfterClose)
public:
	OpsAfterClose$5();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::Reader* r) override;
};

#endif // _OpsAfterClose$5_h_