#ifndef _sun_nio_ch_FileChannelImpl$Closer_h_
#define _sun_nio_ch_FileChannelImpl$Closer_h_
//$ class sun.nio.ch.FileChannelImpl$Closer
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class FileChannelImpl$Closer : public ::java::lang::Runnable {
	$class(FileChannelImpl$Closer, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FileChannelImpl$Closer();
	void init$(::java::io::FileDescriptor* fd);
	virtual void run() override;
	::java::io::FileDescriptor* fd = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_FileChannelImpl$Closer_h_