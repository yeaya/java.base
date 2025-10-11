#ifndef _sun_nio_cs_UTF_16LE_BOM_h_
#define _sun_nio_cs_UTF_16LE_BOM_h_
//$ class sun.nio.cs.UTF_16LE_BOM
//$ extends sun.nio.cs.Unicode

#include <sun/nio/cs/Unicode.h>

#pragma push_macro("UTF_16LE_BOM")
#undef UTF_16LE_BOM

namespace java {
	namespace nio {
		namespace charset {
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class UTF_16LE_BOM : public ::sun::nio::cs::Unicode {
	$class(UTF_16LE_BOM, $NO_CLASS_INIT, ::sun::nio::cs::Unicode)
public:
	UTF_16LE_BOM();
	void init$();
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("UTF_16LE_BOM")

#endif // _sun_nio_cs_UTF_16LE_BOM_h_