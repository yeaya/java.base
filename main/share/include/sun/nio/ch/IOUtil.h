#ifndef _sun_nio_ch_IOUtil_h_
#define _sun_nio_ch_IOUtil_h_
//$ class sun.nio.ch.IOUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NIO_ACCESS")
#undef NIO_ACCESS
#pragma push_macro("IOV_MAX")
#undef IOV_MAX

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaNioAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess$Scope$Handle;
		}
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

class $import IOUtil : public ::java::lang::Object {
	$class(IOUtil, 0, ::java::lang::Object)
public:
	IOUtil();
	void init$();
	static ::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* acquireScope(::java::nio::ByteBuffer* bb, bool async);
	static ::java::lang::Runnable* acquireScopes($Array<::java::nio::ByteBuffer>* buffers);
	static ::java::lang::Runnable* acquireScopes(::java::nio::ByteBuffer* buf, $Array<::java::nio::ByteBuffer>* buffers);
	static int64_t bufferAddress(::java::nio::ByteBuffer* buf);
	static void configureBlocking(::java::io::FileDescriptor* fd, bool blocking);
	static bool drain(int32_t fd);
	static int32_t drain1(int32_t fd);
	static int32_t fdLimit();
	static int32_t fdVal(::java::io::FileDescriptor* fd);
	static void initIDs();
	static int32_t iovMax();
	static void load();
	static int64_t makePipe(bool blocking);
	static ::java::io::FileDescriptor* newFD(int32_t i);
	static bool randomBytes($bytes* someBytes);
	static int32_t read(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* dst, int64_t position, ::sun::nio::ch::NativeDispatcher* nd);
	static int32_t read(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* dst, int64_t position, bool async, ::sun::nio::ch::NativeDispatcher* nd);
	static int32_t read(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* dst, int64_t position, bool directIO, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static int32_t read(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* dst, int64_t position, bool directIO, bool async, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static int64_t read(::java::io::FileDescriptor* fd, $Array<::java::nio::ByteBuffer>* bufs, ::sun::nio::ch::NativeDispatcher* nd);
	static int64_t read(::java::io::FileDescriptor* fd, $Array<::java::nio::ByteBuffer>* bufs, bool async, ::sun::nio::ch::NativeDispatcher* nd);
	static int64_t read(::java::io::FileDescriptor* fd, $Array<::java::nio::ByteBuffer>* bufs, int32_t offset, int32_t length, ::sun::nio::ch::NativeDispatcher* nd);
	static int64_t read(::java::io::FileDescriptor* fd, $Array<::java::nio::ByteBuffer>* bufs, int32_t offset, int32_t length, bool directIO, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static int64_t read(::java::io::FileDescriptor* fd, $Array<::java::nio::ByteBuffer>* bufs, int32_t offset, int32_t length, bool directIO, bool async, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static int32_t readIntoNativeBuffer(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* bb, int64_t position, bool directIO, bool async, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static void releaseScope(::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* handle);
	static void releaseScopes(::java::lang::Runnable* releasers);
	static void setfdVal(::java::io::FileDescriptor* fd, int32_t value);
	static int32_t write(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* src, int64_t position, ::sun::nio::ch::NativeDispatcher* nd);
	static int32_t write(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* src, int64_t position, bool async, ::sun::nio::ch::NativeDispatcher* nd);
	static int32_t write(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* src, int64_t position, bool directIO, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static int32_t write(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* src, int64_t position, bool directIO, bool async, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static int64_t write(::java::io::FileDescriptor* fd, $Array<::java::nio::ByteBuffer>* bufs, bool async, ::sun::nio::ch::NativeDispatcher* nd);
	static int64_t write(::java::io::FileDescriptor* fd, $Array<::java::nio::ByteBuffer>* bufs, int32_t offset, int32_t length, ::sun::nio::ch::NativeDispatcher* nd);
	static int64_t write(::java::io::FileDescriptor* fd, $Array<::java::nio::ByteBuffer>* bufs, int32_t offset, int32_t length, bool direct, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static int64_t write(::java::io::FileDescriptor* fd, $Array<::java::nio::ByteBuffer>* bufs, int32_t offset, int32_t length, bool directIO, bool async, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static int32_t write1(int32_t fd, int8_t b);
	static int32_t writeFromNativeBuffer(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* bb, int64_t position, bool directIO, bool async, int32_t alignment, ::sun::nio::ch::NativeDispatcher* nd);
	static bool $assertionsDisabled;
	static int32_t IOV_MAX;
	static ::jdk::internal::access::JavaNioAccess* NIO_ACCESS;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("NIO_ACCESS")
#pragma pop_macro("IOV_MAX")

#endif // _sun_nio_ch_IOUtil_h_