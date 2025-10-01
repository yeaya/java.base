#ifndef _FileLockSub_h_
#define _FileLockSub_h_
//$ class FileLockSub
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

class FileLockSub : public ::java::nio::channels::FileLock {
	$class(FileLockSub, $NO_CLASS_INIT, ::java::nio::channels::FileLock)
public:
	FileLockSub();
	void init$(::java::nio::channels::FileChannel* channel, int64_t position, int64_t size, bool shared);
	void init$(::java::nio::channels::AsynchronousFileChannel* channel, int64_t position, int64_t size, bool shared);
	virtual bool isValid() override;
	virtual void release() override;
};

#endif // _FileLockSub_h_