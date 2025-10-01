#ifndef _java_io_FileCleanable_h_
#define _java_io_FileCleanable_h_
//$ class java.io.FileCleanable
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
	namespace io {

class FileCleanable : public ::jdk::internal::ref::PhantomCleanable {
	$class(FileCleanable, 0, ::jdk::internal::ref::PhantomCleanable)
public:
	FileCleanable();
	void init$(::java::io::FileDescriptor* obj, ::java::lang::ref::Cleaner* cleaner, int32_t fd, int64_t handle);
	static void cleanupClose0(int32_t fd, int64_t handle);
	virtual void performCleanup() override;
	static void register$(::java::io::FileDescriptor* fdo);
	static void unregister(::java::io::FileDescriptor* fdo);
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	int32_t fd = 0;
	int64_t handle = 0;
};

	} // io
} // java

#endif // _java_io_FileCleanable_h_