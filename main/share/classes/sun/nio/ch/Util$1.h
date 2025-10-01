#ifndef _sun_nio_ch_Util$1_h_
#define _sun_nio_ch_Util$1_h_
//$ class sun.nio.ch.Util$1
//$ extends jdk.internal.misc.TerminatingThreadLocal

#include <jdk/internal/misc/TerminatingThreadLocal.h>

namespace sun {
	namespace nio {
		namespace ch {
			class Util$BufferCache;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Util$1 : public ::jdk::internal::misc::TerminatingThreadLocal {
	$class(Util$1, $NO_CLASS_INIT, ::jdk::internal::misc::TerminatingThreadLocal)
public:
	Util$1();
	void init$();
	virtual $Object* initialValue() override;
	virtual void threadTerminated(::sun::nio::ch::Util$BufferCache* cache);
	virtual void threadTerminated(Object$* cache) override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Util$1_h_