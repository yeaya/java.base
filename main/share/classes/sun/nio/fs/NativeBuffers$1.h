#ifndef _sun_nio_fs_NativeBuffers$1_h_
#define _sun_nio_fs_NativeBuffers$1_h_
//$ class sun.nio.fs.NativeBuffers$1
//$ extends jdk.internal.misc.TerminatingThreadLocal

#include <java/lang/Array.h>
#include <jdk/internal/misc/TerminatingThreadLocal.h>

namespace sun {
	namespace nio {
		namespace fs {
			class NativeBuffer;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class NativeBuffers$1 : public ::jdk::internal::misc::TerminatingThreadLocal {
	$class(NativeBuffers$1, $NO_CLASS_INIT, ::jdk::internal::misc::TerminatingThreadLocal)
public:
	NativeBuffers$1();
	void init$();
	virtual void threadTerminated($Array<::sun::nio::fs::NativeBuffer>* buffers);
	virtual void threadTerminated(Object$* buffers) override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_NativeBuffers$1_h_