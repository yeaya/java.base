#ifndef _sun_nio_cs_HistoricallyNamedCharset_h_
#define _sun_nio_cs_HistoricallyNamedCharset_h_
//$ interface sun.nio.cs.HistoricallyNamedCharset
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace cs {

class $import HistoricallyNamedCharset : public ::java::lang::Object {
	$interface(HistoricallyNamedCharset, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* historicalName() {return nullptr;}
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_HistoricallyNamedCharset_h_