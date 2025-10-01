#ifndef _sun_nio_ch_OptionKey_h_
#define _sun_nio_ch_OptionKey_h_
//$ class sun.nio.ch.OptionKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {

class OptionKey : public ::java::lang::Object {
	$class(OptionKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OptionKey();
	void init$(int32_t level, int32_t name);
	virtual int32_t level();
	virtual int32_t name();
	int32_t level$ = 0;
	int32_t name$ = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_OptionKey_h_