#ifndef _OpsAfterClose$4_h_
#define _OpsAfterClose$4_h_
//$ class OpsAfterClose$4
//$ extends OpsAfterClose

#include <OpsAfterClose.h>

namespace java {
	namespace io {
		class Reader;
	}
}

class OpsAfterClose$4 : public ::OpsAfterClose {
	$class(OpsAfterClose$4, $NO_CLASS_INIT, ::OpsAfterClose)
public:
	OpsAfterClose$4();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::Reader* r) override;
};

#endif // _OpsAfterClose$4_h_