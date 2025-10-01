#ifndef _sun_nio_ch_FileLockImpl_h_
#define _sun_nio_ch_FileLockImpl_h_
//$ class sun.nio.ch.FileLockImpl
//$ extends java.nio.channels.FileLock

#include <java/nio/channels/FileLock.h>

namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousFileChannel;
			class FileChannel;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import FileLockImpl : public ::java::nio::channels::FileLock {
	$class(FileLockImpl, 0, ::java::nio::channels::FileLock)
public:
	FileLockImpl();
	void init$(::java::nio::channels::FileChannel* channel, int64_t position, int64_t size, bool shared);
	void init$(::java::nio::channels::AsynchronousFileChannel* channel, int64_t position, int64_t size, bool shared);
	virtual void invalidate();
	virtual bool isValid() override;
	virtual void release() override;
	static bool $assertionsDisabled;
	$volatile(bool) invalid = false;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_FileLockImpl_h_