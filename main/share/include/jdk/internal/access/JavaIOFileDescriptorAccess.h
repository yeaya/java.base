#ifndef _jdk_internal_access_JavaIOFileDescriptorAccess_h_
#define _jdk_internal_access_JavaIOFileDescriptorAccess_h_
//$ interface jdk.internal.access.JavaIOFileDescriptorAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaIOFileDescriptorAccess : public ::java::lang::Object {
	$interface(JavaIOFileDescriptorAccess, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void close(::java::io::FileDescriptor* fdo) {}
	virtual int32_t get(::java::io::FileDescriptor* fdo) {return 0;}
	virtual bool getAppend(::java::io::FileDescriptor* fdo) {return false;}
	virtual int64_t getHandle(::java::io::FileDescriptor* fdo) {return 0;}
	virtual void registerCleanup(::java::io::FileDescriptor* fdo) {}
	virtual void registerCleanup(::java::io::FileDescriptor* fdo, ::jdk::internal::ref::PhantomCleanable* cleanable) {}
	virtual void set(::java::io::FileDescriptor* fdo, int32_t fd) {}
	virtual void setAppend(::java::io::FileDescriptor* fdo, bool append) {}
	virtual void setHandle(::java::io::FileDescriptor* fdo, int64_t handle) {}
	virtual void unregisterCleanup(::java::io::FileDescriptor* fdo) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaIOFileDescriptorAccess_h_