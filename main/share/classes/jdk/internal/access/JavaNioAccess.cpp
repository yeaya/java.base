#include <jdk/internal/access/JavaNioAccess.h>

#include <java/io/FileDescriptor.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/access/foreign/UnmapperProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$Handle.h>
#include <jdk/internal/misc/VM$BufferPool.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $UnmapperProxy = ::jdk::internal::access::foreign::UnmapperProxy;
using $ScopedMemoryAccess$Scope$Handle = ::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle;
using $VM$BufferPool = ::jdk::internal::misc::VM$BufferPool;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaNioAccess_MethodInfo_[] = {
	{"acquireScope", "(Ljava/nio/Buffer;Z)Ljdk/internal/misc/ScopedMemoryAccess$Scope$Handle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, acquireScope, $ScopedMemoryAccess$Scope$Handle*, $Buffer*, bool)},
	{"bufferSegment", "(Ljava/nio/Buffer;)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, bufferSegment, $MemorySegmentProxy*, $Buffer*)},
	{"force", "(Ljava/io/FileDescriptor;JZJJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, force, void, $FileDescriptor*, int64_t, bool, int64_t, int64_t)},
	{"getBufferAddress", "(Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, getBufferAddress, int64_t, $ByteBuffer*)},
	{"getBufferBase", "(Ljava/nio/ByteBuffer;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, getBufferBase, $Object*, $ByteBuffer*)},
	{"getDirectBufferPool", "()Ljdk/internal/misc/VM$BufferPool;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, getDirectBufferPool, $VM$BufferPool*)},
	{"isLoaded", "(JZJ)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, isLoaded, bool, int64_t, bool, int64_t)},
	{"load", "(JZJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, load, void, int64_t, bool, int64_t)},
	{"newDirectByteBuffer", "(JILjava/lang/Object;Ljdk/internal/access/foreign/MemorySegmentProxy;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, newDirectByteBuffer, $ByteBuffer*, int64_t, int32_t, Object$*, $MemorySegmentProxy*)},
	{"newHeapByteBuffer", "([BIILjdk/internal/access/foreign/MemorySegmentProxy;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, newHeapByteBuffer, $ByteBuffer*, $bytes*, int32_t, int32_t, $MemorySegmentProxy*)},
	{"newMappedByteBuffer", "(Ljdk/internal/access/foreign/UnmapperProxy;JILjava/lang/Object;Ljdk/internal/access/foreign/MemorySegmentProxy;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, newMappedByteBuffer, $ByteBuffer*, $UnmapperProxy*, int64_t, int32_t, Object$*, $MemorySegmentProxy*)},
	{"pageSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, pageSize, int32_t)},
	{"reserveMemory", "(JJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, reserveMemory, void, int64_t, int64_t)},
	{"unload", "(JZJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, unload, void, int64_t, bool, int64_t)},
	{"unmapper", "(Ljava/nio/ByteBuffer;)Ljdk/internal/access/foreign/UnmapperProxy;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, unmapper, $UnmapperProxy*, $ByteBuffer*)},
	{"unreserveMemory", "(JJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNioAccess, unreserveMemory, void, int64_t, int64_t)},
	{}
};

$ClassInfo _JavaNioAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaNioAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaNioAccess_MethodInfo_
};

$Object* allocate$JavaNioAccess($Class* clazz) {
	return $of($alloc(JavaNioAccess));
}

$Class* JavaNioAccess::load$($String* name, bool initialize) {
	$loadClass(JavaNioAccess, name, initialize, &_JavaNioAccess_ClassInfo_, allocate$JavaNioAccess);
	return class$;
}

$Class* JavaNioAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk