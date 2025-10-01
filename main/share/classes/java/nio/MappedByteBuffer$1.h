#ifndef _java_nio_MappedByteBuffer$1_h_
#define _java_nio_MappedByteBuffer$1_h_
//$ class java.nio.MappedByteBuffer$1
//$ extends jdk.internal.access.foreign.UnmapperProxy

#include <jdk/internal/access/foreign/UnmapperProxy.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		class MappedByteBuffer;
	}
}

namespace java {
	namespace nio {

class MappedByteBuffer$1 : public ::jdk::internal::access::foreign::UnmapperProxy {
	$class(MappedByteBuffer$1, $NO_CLASS_INIT, ::jdk::internal::access::foreign::UnmapperProxy)
public:
	MappedByteBuffer$1();
	void init$(::java::nio::MappedByteBuffer* this$0);
	virtual int64_t address() override;
	virtual ::java::io::FileDescriptor* fileDescriptor() override;
	virtual bool isSync() override;
	virtual void unmap() override;
	::java::nio::MappedByteBuffer* this$0 = nullptr;
};

	} // nio
} // java

#endif // _java_nio_MappedByteBuffer$1_h_