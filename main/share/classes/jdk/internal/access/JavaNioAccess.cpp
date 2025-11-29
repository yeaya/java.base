#include <jdk/internal/access/JavaNioAccess.h>

#include <java/io/FileDescriptor.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/access/foreign/UnmapperProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$Handle.h>
#include <jdk/internal/misc/VM$BufferPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaNioAccess_MethodInfo_[] = {
	{"acquireScope", "(Ljava/nio/Buffer;Z)Ljdk/internal/misc/ScopedMemoryAccess$Scope$Handle;", nullptr, $PUBLIC | $ABSTRACT},
	{"bufferSegment", "(Ljava/nio/Buffer;)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $PUBLIC | $ABSTRACT},
	{"force", "(Ljava/io/FileDescriptor;JZJJ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getBufferAddress", "(Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getBufferBase", "(Ljava/nio/ByteBuffer;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDirectBufferPool", "()Ljdk/internal/misc/VM$BufferPool;", nullptr, $PUBLIC | $ABSTRACT},
	{"isLoaded", "(JZJ)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"load", "(JZJ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"newDirectByteBuffer", "(JILjava/lang/Object;Ljdk/internal/access/foreign/MemorySegmentProxy;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"newHeapByteBuffer", "([BIILjdk/internal/access/foreign/MemorySegmentProxy;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"newMappedByteBuffer", "(Ljdk/internal/access/foreign/UnmapperProxy;JILjava/lang/Object;Ljdk/internal/access/foreign/MemorySegmentProxy;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"pageSize", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"reserveMemory", "(JJ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"unload", "(JZJ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"unmapper", "(Ljava/nio/ByteBuffer;)Ljdk/internal/access/foreign/UnmapperProxy;", nullptr, $PUBLIC | $ABSTRACT},
	{"unreserveMemory", "(JJ)V", nullptr, $PUBLIC | $ABSTRACT},
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