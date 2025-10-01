#ifndef _sun_nio_ch_FileChannelImpl$Unmapper_h_
#define _sun_nio_ch_FileChannelImpl$Unmapper_h_
//$ class sun.nio.ch.FileChannelImpl$Unmapper
//$ extends java.lang.Runnable
//$ implements jdk.internal.access.foreign.UnmapperProxy

#include <java/lang/Runnable.h>
#include <jdk/internal/access/foreign/UnmapperProxy.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class NativeDispatcher;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class FileChannelImpl$Unmapper : public ::java::lang::Runnable, public ::jdk::internal::access::foreign::UnmapperProxy {
	$class(FileChannelImpl$Unmapper, 0, ::java::lang::Runnable, ::jdk::internal::access::foreign::UnmapperProxy)
public:
	FileChannelImpl$Unmapper();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t address, int64_t size, int64_t cap, ::java::io::FileDescriptor* fd, int32_t pagePosition);
	virtual int64_t address() override;
	virtual void decrementStats() {}
	virtual ::java::io::FileDescriptor* fileDescriptor() override;
	virtual void incrementStats() {}
	virtual void run() override;
	virtual $String* toString() override;
	virtual void unmap() override;
	static bool $assertionsDisabled;
	static ::sun::nio::ch::NativeDispatcher* nd;
	$volatile(int64_t) address$ = 0;
	int64_t size = 0;
	int64_t cap = 0;
	::java::io::FileDescriptor* fd = nullptr;
	int32_t pagePosition = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_FileChannelImpl$Unmapper_h_