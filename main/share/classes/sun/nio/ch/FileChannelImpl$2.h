#ifndef _sun_nio_ch_FileChannelImpl$2_h_
#define _sun_nio_ch_FileChannelImpl$2_h_
//$ class sun.nio.ch.FileChannelImpl$2
//$ extends jdk.internal.misc.VM$BufferPool

#include <jdk/internal/misc/VM$BufferPool.h>

namespace sun {
	namespace nio {
		namespace ch {

class FileChannelImpl$2 : public ::jdk::internal::misc::VM$BufferPool {
	$class(FileChannelImpl$2, $NO_CLASS_INIT, ::jdk::internal::misc::VM$BufferPool)
public:
	FileChannelImpl$2();
	void init$();
	virtual int64_t getCount() override;
	virtual int64_t getMemoryUsed() override;
	virtual $String* getName() override;
	virtual int64_t getTotalCapacity() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_FileChannelImpl$2_h_