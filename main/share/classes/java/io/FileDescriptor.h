#ifndef _java_io_FileDescriptor_h_
#define _java_io_FileDescriptor_h_
//$ class java.io.FileDescriptor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class Closeable;
	}
}
namespace java {
	namespace util {
		class List;
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

class $export FileDescriptor : public ::java::lang::Object {
	$class(FileDescriptor, $PRELOAD, ::java::lang::Object)
public:
	FileDescriptor();
	void init$();
	void init$(int32_t fd);
	void attach(::java::io::Closeable* c);
	void close();
	void close0();
	void closeAll(::java::io::Closeable* releaser);
	static bool getAppend(int32_t fd);
	static int64_t getHandle(int32_t d);
	static void initIDs();
	void registerCleanup(::jdk::internal::ref::PhantomCleanable* cleanable);
	void set(int32_t fd);
	void setHandle(int64_t handle);
	void sync();
	void unregisterCleanup();
	bool valid();
	int32_t fd = 0;
	int64_t handle = 0;
	::java::io::Closeable* parent = nullptr;
	::java::util::List* otherParents = nullptr;
	bool closed = false;
	bool append = false;
	::jdk::internal::ref::PhantomCleanable* cleanup = nullptr;
	static ::java::io::FileDescriptor* in;
	static ::java::io::FileDescriptor* out;
	static ::java::io::FileDescriptor* err;
};

	} // io
} // java

#endif // _java_io_FileDescriptor_h_