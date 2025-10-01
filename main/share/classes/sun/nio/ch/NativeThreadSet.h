#ifndef _sun_nio_ch_NativeThreadSet_h_
#define _sun_nio_ch_NativeThreadSet_h_
//$ class sun.nio.ch.NativeThreadSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace ch {

class NativeThreadSet : public ::java::lang::Object {
	$class(NativeThreadSet, 0, ::java::lang::Object)
public:
	NativeThreadSet();
	void init$(int32_t n);
	virtual int32_t add();
	virtual void remove(int32_t i);
	virtual void signalAndWait();
	static bool $assertionsDisabled;
	$longs* elts = nullptr;
	int32_t used = 0;
	bool waitingToEmpty = false;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_NativeThreadSet_h_