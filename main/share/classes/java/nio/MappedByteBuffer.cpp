#include <java/nio/MappedByteBuffer.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer$1.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/access/foreign/UnmapperProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

#undef SCOPED_MEMORY_ACCESS

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer$1 = ::java::nio::MappedByteBuffer$1;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $UnmapperProxy = ::jdk::internal::access::foreign::UnmapperProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _MappedByteBuffer_FieldInfo_[] = {
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $FINAL, $field(MappedByteBuffer, fd)},
	{"isSync", "Z", nullptr, $PRIVATE | $FINAL, $field(MappedByteBuffer, isSync$)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MappedByteBuffer, SCOPED_MEMORY_ACCESS)},
	{}
};

$MethodInfo _MappedByteBuffer_MethodInfo_[] = {
	{"compact", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"duplicate", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(IIIILjava/io/FileDescriptor;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(MappedByteBuffer, init$, void, int32_t, int32_t, int32_t, int32_t, $FileDescriptor*, bool, $MemorySegmentProxy*)},
	{"<init>", "(IIIIZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(MappedByteBuffer, init$, void, int32_t, int32_t, int32_t, int32_t, bool, $MemorySegmentProxy*)},
	{"<init>", "(IIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(MappedByteBuffer, init$, void, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"clear", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MappedByteBuffer, clear, MappedByteBuffer*)},
	{"fileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $FINAL, $method(MappedByteBuffer, fileDescriptor, $FileDescriptor*)},
	{"flip", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MappedByteBuffer, flip, MappedByteBuffer*)},
	{"force", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $method(MappedByteBuffer, force, MappedByteBuffer*)},
	{"force", "(II)Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $method(MappedByteBuffer, force, MappedByteBuffer*, int32_t, int32_t)},
	{"isLoaded", "()Z", nullptr, $PUBLIC | $FINAL, $method(MappedByteBuffer, isLoaded, bool)},
	{"isSync", "()Z", nullptr, $FINAL, $method(MappedByteBuffer, isSync, bool)},
	{"limit", "(I)Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MappedByteBuffer, limit, MappedByteBuffer*, int32_t)},
	{"load", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $method(MappedByteBuffer, load, MappedByteBuffer*)},
	{"mark", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MappedByteBuffer, mark, MappedByteBuffer*)},
	{"position", "(I)Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MappedByteBuffer, position, MappedByteBuffer*, int32_t)},
	{"reset", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MappedByteBuffer, reset, MappedByteBuffer*)},
	{"rewind", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MappedByteBuffer, rewind, MappedByteBuffer*)},
	{"slice", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"slice", "(II)Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"unmapper", "()Ljdk/internal/access/foreign/UnmapperProxy;", nullptr, 0, $virtualMethod(MappedByteBuffer, unmapper, $UnmapperProxy*)},
	{}
};

$InnerClassInfo _MappedByteBuffer_InnerClassesInfo_[] = {
	{"java.nio.MappedByteBuffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MappedByteBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.MappedByteBuffer",
	"java.nio.ByteBuffer",
	nullptr,
	_MappedByteBuffer_FieldInfo_,
	_MappedByteBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_MappedByteBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.MappedByteBuffer$1"
};

$Object* allocate$MappedByteBuffer($Class* clazz) {
	return $of($alloc(MappedByteBuffer));
}

$ScopedMemoryAccess* MappedByteBuffer::SCOPED_MEMORY_ACCESS = nullptr;

void MappedByteBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $FileDescriptor* fd, bool isSync, $MemorySegmentProxy* segment) {
	$ByteBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, fd, fd);
	this->isSync$ = isSync;
}

void MappedByteBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, bool isSync, $MemorySegmentProxy* segment) {
	$ByteBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, fd, nullptr);
	this->isSync$ = isSync;
}

void MappedByteBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $MemorySegmentProxy* segment) {
	$ByteBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, fd, nullptr);
	this->isSync$ = false;
}

$UnmapperProxy* MappedByteBuffer::unmapper() {
	return this->fd != nullptr ? static_cast<$UnmapperProxy*>($new($MappedByteBuffer$1, this)) : ($UnmapperProxy*)nullptr;
}

bool MappedByteBuffer::isSync() {
	return this->isSync$;
}

$FileDescriptor* MappedByteBuffer::fileDescriptor() {
	return this->fd;
}

bool MappedByteBuffer::isLoaded() {
	if (this->fd == nullptr) {
		return true;
	}
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	int64_t var$1 = this->address;
	bool var$2 = this->isSync$;
	return $nc(MappedByteBuffer::SCOPED_MEMORY_ACCESS)->isLoaded(var$0, var$1, var$2, capacity());
}

MappedByteBuffer* MappedByteBuffer::load() {
	$useLocalCurrentObjectStackCache();
	if (this->fd == nullptr) {
		return this;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = this->address;
			bool var$3 = this->isSync$;
			$nc(MappedByteBuffer::SCOPED_MEMORY_ACCESS)->load(var$1, var$2, var$3, capacity());
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

MappedByteBuffer* MappedByteBuffer::force() {
	if (this->fd == nullptr) {
		return this;
	}
	int32_t capacity = this->capacity();
	if (this->isSync$ || ((this->address != 0) && (capacity != 0))) {
		return force(0, capacity);
	}
	return this;
}

MappedByteBuffer* MappedByteBuffer::force(int32_t index, int32_t length) {
	if (this->fd == nullptr) {
		return this;
	}
	int32_t capacity = this->capacity();
	if ((this->address != 0) && (capacity != 0)) {
		$Objects::checkFromIndexSize(index, length, capacity);
		$nc(MappedByteBuffer::SCOPED_MEMORY_ACCESS)->force($(scope()), this->fd, this->address, this->isSync$, index, length);
	}
	return this;
}

MappedByteBuffer* MappedByteBuffer::position(int32_t newPosition) {
	$ByteBuffer::position(newPosition);
	return this;
}

MappedByteBuffer* MappedByteBuffer::limit(int32_t newLimit) {
	$ByteBuffer::limit(newLimit);
	return this;
}

MappedByteBuffer* MappedByteBuffer::mark() {
	$ByteBuffer::mark();
	return this;
}

MappedByteBuffer* MappedByteBuffer::reset() {
	$ByteBuffer::reset();
	return this;
}

MappedByteBuffer* MappedByteBuffer::clear() {
	$ByteBuffer::clear();
	return this;
}

MappedByteBuffer* MappedByteBuffer::flip() {
	$ByteBuffer::flip();
	return this;
}

MappedByteBuffer* MappedByteBuffer::rewind() {
	$ByteBuffer::rewind();
	return this;
}

void clinit$MappedByteBuffer($Class* class$) {
	$assignStatic(MappedByteBuffer::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

MappedByteBuffer::MappedByteBuffer() {
}

$Class* MappedByteBuffer::load$($String* name, bool initialize) {
	$loadClass(MappedByteBuffer, name, initialize, &_MappedByteBuffer_ClassInfo_, clinit$MappedByteBuffer, allocate$MappedByteBuffer);
	return class$;
}

$Class* MappedByteBuffer::class$ = nullptr;

	} // nio
} // java