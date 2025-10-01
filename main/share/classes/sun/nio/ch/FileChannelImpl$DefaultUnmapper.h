#ifndef _sun_nio_ch_FileChannelImpl$DefaultUnmapper_h_
#define _sun_nio_ch_FileChannelImpl$DefaultUnmapper_h_
//$ class sun.nio.ch.FileChannelImpl$DefaultUnmapper
//$ extends sun.nio.ch.FileChannelImpl$Unmapper

#include <sun/nio/ch/FileChannelImpl$Unmapper.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class FileChannelImpl$DefaultUnmapper : public ::sun::nio::ch::FileChannelImpl$Unmapper {
	$class(FileChannelImpl$DefaultUnmapper, $NO_CLASS_INIT, ::sun::nio::ch::FileChannelImpl$Unmapper)
public:
	FileChannelImpl$DefaultUnmapper();
	void init$(int64_t address, int64_t size, int64_t cap, ::java::io::FileDescriptor* fd, int32_t pagePosition);
	virtual void decrementStats() override;
	virtual void incrementStats() override;
	virtual bool isSync() override;
	static $volatile(int32_t) count;
	static $volatile(int64_t) totalSize;
	static $volatile(int64_t) totalCapacity;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_FileChannelImpl$DefaultUnmapper_h_