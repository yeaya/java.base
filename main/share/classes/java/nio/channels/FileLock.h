#ifndef _java_nio_channels_FileLock_h_
#define _java_nio_channels_FileLock_h_
//$ class java.nio.channels.FileLock
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousFileChannel;
			class Channel;
			class FileChannel;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export FileLock : public ::java::lang::AutoCloseable {
	$class(FileLock, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	FileLock();
	void init$(::java::nio::channels::FileChannel* channel, int64_t position, int64_t size, bool shared);
	void init$(::java::nio::channels::AsynchronousFileChannel* channel, int64_t position, int64_t size, bool shared);
	virtual ::java::nio::channels::Channel* acquiredBy();
	::java::nio::channels::FileChannel* channel();
	virtual void close() override;
	bool isShared();
	virtual bool isValid() {return false;}
	bool overlaps(int64_t position, int64_t size);
	int64_t position();
	virtual void release() {}
	int64_t size();
	virtual $String* toString() override;
	::java::nio::channels::Channel* channel$ = nullptr;
	int64_t position$ = 0;
	int64_t size$ = 0;
	bool shared = false;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_FileLock_h_