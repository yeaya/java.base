#ifndef _sun_nio_ch_Invoker$GroupAndInvokeCount_h_
#define _sun_nio_ch_Invoker$GroupAndInvokeCount_h_
//$ class sun.nio.ch.Invoker$GroupAndInvokeCount
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Invoker$GroupAndInvokeCount : public ::java::lang::Object {
	$class(Invoker$GroupAndInvokeCount, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Invoker$GroupAndInvokeCount();
	void init$(::sun::nio::ch::AsynchronousChannelGroupImpl* group);
	virtual ::sun::nio::ch::AsynchronousChannelGroupImpl* group();
	virtual void incrementInvokeCount();
	virtual int32_t invokeCount();
	virtual void resetInvokeCount();
	virtual void setInvokeCount(int32_t value);
	::sun::nio::ch::AsynchronousChannelGroupImpl* group$ = nullptr;
	int32_t handlerInvokeCount = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Invoker$GroupAndInvokeCount_h_