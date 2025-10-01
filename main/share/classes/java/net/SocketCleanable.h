#ifndef _java_net_SocketCleanable_h_
#define _java_net_SocketCleanable_h_
//$ class java.net.SocketCleanable
//$ extends jdk.internal.ref.PhantomCleanable

#include <jdk/internal/ref/PhantomCleanable.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Cleaner;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaIOFileDescriptorAccess;
		}
	}
}

namespace java {
	namespace net {

class SocketCleanable : public ::jdk::internal::ref::PhantomCleanable {
	$class(SocketCleanable, 0, ::jdk::internal::ref::PhantomCleanable)
public:
	SocketCleanable();
	void init$(::java::io::FileDescriptor* obj, ::java::lang::ref::Cleaner* cleaner, int32_t fd, bool stream);
	static void cleanupClose0(int32_t fd);
	virtual void performCleanup() override;
	static void register$(::java::io::FileDescriptor* fdo, bool stream);
	static void unregister(::java::io::FileDescriptor* fdo);
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	int32_t fd = 0;
	bool stream = false;
};

	} // net
} // java

#endif // _java_net_SocketCleanable_h_