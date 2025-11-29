#include <java/nio/Buffer$1.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/DirectByteBuffer.h>
#include <java/nio/HeapByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/MappedMemoryUtils.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/access/foreign/UnmapperProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$Handle.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/VM$BufferPool.h>
#include <jcpp.h>

#undef BUFFER_POOL

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DirectByteBuffer = ::java::nio::DirectByteBuffer;
using $HeapByteBuffer = ::java::nio::HeapByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $MappedMemoryUtils = ::java::nio::MappedMemoryUtils;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $UnmapperProxy = ::jdk::internal::access::foreign::UnmapperProxy;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $ScopedMemoryAccess$Scope$Handle = ::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle;
using $VM$BufferPool = ::jdk::internal::misc::VM$BufferPool;

namespace java {
	namespace nio {

$MethodInfo _Buffer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Buffer$1::*)()>(&Buffer$1::init$))},
	{"acquireScope", "(Ljava/nio/Buffer;Z)Ljdk/internal/misc/ScopedMemoryAccess$Scope$Handle;", nullptr, $PUBLIC},
	{"bufferSegment", "(Ljava/nio/Buffer;)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $PUBLIC},
	{"force", "(Ljava/io/FileDescriptor;JZJJ)V", nullptr, $PUBLIC},
	{"getBufferAddress", "(Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC},
	{"getBufferBase", "(Ljava/nio/ByteBuffer;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDirectBufferPool", "()Ljdk/internal/misc/VM$BufferPool;", nullptr, $PUBLIC},
	{"isLoaded", "(JZJ)Z", nullptr, $PUBLIC},
	{"load", "(JZJ)V", nullptr, $PUBLIC},
	{"newDirectByteBuffer", "(JILjava/lang/Object;Ljdk/internal/access/foreign/MemorySegmentProxy;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"newHeapByteBuffer", "([BIILjdk/internal/access/foreign/MemorySegmentProxy;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"newMappedByteBuffer", "(Ljdk/internal/access/foreign/UnmapperProxy;JILjava/lang/Object;Ljdk/internal/access/foreign/MemorySegmentProxy;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"pageSize", "()I", nullptr, $PUBLIC},
	{"reserveMemory", "(JJ)V", nullptr, $PUBLIC},
	{"unload", "(JZJ)V", nullptr, $PUBLIC},
	{"unmapper", "(Ljava/nio/ByteBuffer;)Ljdk/internal/access/foreign/UnmapperProxy;", nullptr, $PUBLIC},
	{"unreserveMemory", "(JJ)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Buffer$1_EnclosingMethodInfo_ = {
	"java.nio.Buffer",
	nullptr,
	nullptr
};

$InnerClassInfo _Buffer$1_InnerClassesInfo_[] = {
	{"java.nio.Buffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Buffer$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.Buffer$1",
	"java.lang.Object",
	"jdk.internal.access.JavaNioAccess",
	nullptr,
	_Buffer$1_MethodInfo_,
	nullptr,
	&_Buffer$1_EnclosingMethodInfo_,
	_Buffer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.Buffer"
};

$Object* allocate$Buffer$1($Class* clazz) {
	return $of($alloc(Buffer$1));
}

void Buffer$1::init$() {
}

$VM$BufferPool* Buffer$1::getDirectBufferPool() {
	$init($Bits);
	return $Bits::BUFFER_POOL;
}

$ByteBuffer* Buffer$1::newDirectByteBuffer(int64_t addr, int32_t cap, Object$* obj, $MemorySegmentProxy* segment) {
	return $new($DirectByteBuffer, addr, cap, obj, segment);
}

$ByteBuffer* Buffer$1::newMappedByteBuffer($UnmapperProxy* unmapperProxy, int64_t address, int32_t cap, Object$* obj, $MemorySegmentProxy* segment) {
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = address;
	int32_t var$1 = cap;
	$var($Object, var$2, obj);
	$var($FileDescriptor, var$3, $nc(unmapperProxy)->fileDescriptor());
	return $new($DirectByteBuffer, var$0, var$1, var$2, var$3, unmapperProxy->isSync(), segment);
}

$ByteBuffer* Buffer$1::newHeapByteBuffer($bytes* hb, int32_t offset, int32_t capacity, $MemorySegmentProxy* segment) {
	return $new($HeapByteBuffer, hb, -1, 0, capacity, capacity, offset, segment);
}

$Object* Buffer$1::getBufferBase($ByteBuffer* bb) {
	return $of($nc(bb)->base());
}

int64_t Buffer$1::getBufferAddress($ByteBuffer* bb) {
	return $nc(bb)->address;
}

$UnmapperProxy* Buffer$1::unmapper($ByteBuffer* bb) {
	if ($instanceOf($MappedByteBuffer, bb)) {
		return $nc(($cast($MappedByteBuffer, bb)))->unmapper();
	} else {
		return nullptr;
	}
}

$MemorySegmentProxy* Buffer$1::bufferSegment($Buffer* buffer) {
	return $nc(buffer)->segment;
}

$ScopedMemoryAccess$Scope$Handle* Buffer$1::acquireScope($Buffer* buffer, bool async) {
	$var($ScopedMemoryAccess$Scope, scope, $nc(buffer)->scope());
	if (scope == nullptr) {
		return nullptr;
	}
	if (async && $nc(scope)->ownerThread() != nullptr) {
		$throwNew($IllegalStateException, "Confined scope not supported"_s);
	}
	return $nc(scope)->acquire();
}

void Buffer$1::force($FileDescriptor* fd, int64_t address, bool isSync, int64_t offset, int64_t size) {
	$MappedMemoryUtils::force(fd, address, isSync, offset, size);
}

void Buffer$1::load(int64_t address, bool isSync, int64_t size) {
	$MappedMemoryUtils::load(address, isSync, size);
}

void Buffer$1::unload(int64_t address, bool isSync, int64_t size) {
	$MappedMemoryUtils::unload(address, isSync, size);
}

bool Buffer$1::isLoaded(int64_t address, bool isSync, int64_t size) {
	return $MappedMemoryUtils::isLoaded(address, isSync, size);
}

void Buffer$1::reserveMemory(int64_t size, int64_t cap) {
	$Bits::reserveMemory(size, cap);
}

void Buffer$1::unreserveMemory(int64_t size, int64_t cap) {
	$Bits::unreserveMemory(size, cap);
}

int32_t Buffer$1::pageSize() {
	return $Bits::pageSize();
}

Buffer$1::Buffer$1() {
}

$Class* Buffer$1::load$($String* name, bool initialize) {
	$loadClass(Buffer$1, name, initialize, &_Buffer$1_ClassInfo_, allocate$Buffer$1);
	return class$;
}

$Class* Buffer$1::class$ = nullptr;

	} // nio
} // java