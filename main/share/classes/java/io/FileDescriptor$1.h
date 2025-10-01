#ifndef _java_io_FileDescriptor$1_h_
#define _java_io_FileDescriptor$1_h_
//$ class java.io.FileDescriptor$1
//$ extends jdk.internal.access.JavaIOFileDescriptorAccess

#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace jdk {
	namespace internal {
		namespace ref {
			class PhantomCleanable;
		}
	}
}

namespace java {
	namespace io {

class FileDescriptor$1 : public ::jdk::internal::access::JavaIOFileDescriptorAccess {
	$class(FileDescriptor$1, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::access::JavaIOFileDescriptorAccess)
public:
	FileDescriptor$1();
	void init$();
	virtual void close(::java::io::FileDescriptor* fdo) override;
	virtual int32_t get(::java::io::FileDescriptor* fdo) override;
	virtual bool getAppend(::java::io::FileDescriptor* fdo) override;
	virtual int64_t getHandle(::java::io::FileDescriptor* fdo) override;
	virtual void registerCleanup(::java::io::FileDescriptor* fdo) override;
	virtual void registerCleanup(::java::io::FileDescriptor* fdo, ::jdk::internal::ref::PhantomCleanable* cleanup) override;
	virtual void set(::java::io::FileDescriptor* fdo, int32_t fd) override;
	virtual void setAppend(::java::io::FileDescriptor* fdo, bool append) override;
	virtual void setHandle(::java::io::FileDescriptor* fdo, int64_t handle) override;
	virtual void unregisterCleanup(::java::io::FileDescriptor* fdo) override;
};

	} // io
} // java

#endif // _java_io_FileDescriptor$1_h_