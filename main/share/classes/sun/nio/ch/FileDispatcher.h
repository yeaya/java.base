#ifndef _sun_nio_ch_FileDispatcher_h_
#define _sun_nio_ch_FileDispatcher_h_
//$ class sun.nio.ch.FileDispatcher
//$ extends sun.nio.ch.NativeDispatcher

#include <sun/nio/ch/NativeDispatcher.h>

#pragma push_macro("LOCKED")
#undef LOCKED
#pragma push_macro("NO_LOCK")
#undef NO_LOCK
#pragma push_macro("RET_EX_LOCK")
#undef RET_EX_LOCK
#pragma push_macro("INTERRUPTED")
#undef INTERRUPTED

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SelectableChannel;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class FileDispatcher : public ::sun::nio::ch::NativeDispatcher {
	$class(FileDispatcher, $NO_CLASS_INIT, ::sun::nio::ch::NativeDispatcher)
public:
	FileDispatcher();
	void init$();
	virtual bool canTransferToDirectly(::java::nio::channels::SelectableChannel* sc) {return false;}
	virtual ::java::io::FileDescriptor* duplicateForMapping(::java::io::FileDescriptor* fd) {return nullptr;}
	virtual int32_t force(::java::io::FileDescriptor* fd, bool metaData) {return 0;}
	virtual int32_t lock(::java::io::FileDescriptor* fd, bool blocking, int64_t pos, int64_t size, bool shared) {return 0;}
	virtual void release(::java::io::FileDescriptor* fd, int64_t pos, int64_t size) {}
	virtual int64_t seek(::java::io::FileDescriptor* fd, int64_t offset) {return 0;}
	virtual int32_t setDirectIO(::java::io::FileDescriptor* fd, $String* path) {return 0;}
	virtual int64_t size(::java::io::FileDescriptor* fd) {return 0;}
	virtual bool transferToDirectlyNeedsPositionLock() {return false;}
	virtual int32_t truncate(::java::io::FileDescriptor* fd, int64_t size) {return 0;}
	static const int32_t NO_LOCK = (-1);
	static const int32_t LOCKED = 0;
	static const int32_t RET_EX_LOCK = 1;
	static const int32_t INTERRUPTED = 2;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("LOCKED")
#pragma pop_macro("NO_LOCK")
#pragma pop_macro("RET_EX_LOCK")
#pragma pop_macro("INTERRUPTED")

#endif // _sun_nio_ch_FileDispatcher_h_