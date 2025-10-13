#include <jdk/internal/misc/ScopedMemoryAccess$BufferAccess.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef BUFFER_ADDRESS
#undef BYTE_BUFFER_HB
#undef NIO_ACCESS
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace jdk {
	namespace internal {
		namespace misc {

$CompoundAttribute _ScopedMemoryAccess$BufferAccess_MethodAnnotations_bufferAddress1[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess$BufferAccess_MethodAnnotations_bufferBase2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess$BufferAccess_MethodAnnotations_scope3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _ScopedMemoryAccess$BufferAccess_FieldInfo_[] = {
	{"BUFFER_ADDRESS", "J", nullptr, $STATIC | $FINAL, $staticField(ScopedMemoryAccess$BufferAccess, BUFFER_ADDRESS)},
	{"BYTE_BUFFER_HB", "J", nullptr, $STATIC | $FINAL, $staticField(ScopedMemoryAccess$BufferAccess, BYTE_BUFFER_HB)},
	{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(ScopedMemoryAccess$BufferAccess, NIO_ACCESS)},
	{}
};

$MethodInfo _ScopedMemoryAccess$BufferAccess_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ScopedMemoryAccess$BufferAccess::*)()>(&ScopedMemoryAccess$BufferAccess::init$))},
	{"bufferAddress", "(Ljava/nio/ByteBuffer;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int64_t)>(&ScopedMemoryAccess$BufferAccess::bufferAddress)), nullptr, nullptr, _ScopedMemoryAccess$BufferAccess_MethodAnnotations_bufferAddress1},
	{"bufferBase", "(Ljava/nio/ByteBuffer;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($ByteBuffer*)>(&ScopedMemoryAccess$BufferAccess::bufferBase)), nullptr, nullptr, _ScopedMemoryAccess$BufferAccess_MethodAnnotations_bufferBase2},
	{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $method(static_cast<$ScopedMemoryAccess$Scope*(*)($ByteBuffer*)>(&ScopedMemoryAccess$BufferAccess::scope)), nullptr, nullptr, _ScopedMemoryAccess$BufferAccess_MethodAnnotations_scope3},
	{}
};

$InnerClassInfo _ScopedMemoryAccess$BufferAccess_InnerClassesInfo_[] = {
	{"jdk.internal.misc.ScopedMemoryAccess$BufferAccess", "jdk.internal.misc.ScopedMemoryAccess", "BufferAccess", $STATIC | $FINAL},
	{}
};

$ClassInfo _ScopedMemoryAccess$BufferAccess_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.misc.ScopedMemoryAccess$BufferAccess",
	"java.lang.Object",
	nullptr,
	_ScopedMemoryAccess$BufferAccess_FieldInfo_,
	_ScopedMemoryAccess$BufferAccess_MethodInfo_,
	nullptr,
	nullptr,
	_ScopedMemoryAccess$BufferAccess_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.ScopedMemoryAccess"
};

$Object* allocate$ScopedMemoryAccess$BufferAccess($Class* clazz) {
	return $of($alloc(ScopedMemoryAccess$BufferAccess));
}

int64_t ScopedMemoryAccess$BufferAccess::BUFFER_ADDRESS = 0;
int64_t ScopedMemoryAccess$BufferAccess::BYTE_BUFFER_HB = 0;
$JavaNioAccess* ScopedMemoryAccess$BufferAccess::NIO_ACCESS = nullptr;

void ScopedMemoryAccess$BufferAccess::init$() {
}

$Object* ScopedMemoryAccess$BufferAccess::bufferBase($ByteBuffer* bb) {
	$init(ScopedMemoryAccess$BufferAccess);
	$init($ScopedMemoryAccess);
	return $of($nc($ScopedMemoryAccess::UNSAFE)->getReference(bb, ScopedMemoryAccess$BufferAccess::BYTE_BUFFER_HB));
}

int64_t ScopedMemoryAccess$BufferAccess::bufferAddress($ByteBuffer* bb, int64_t offset) {
	$init(ScopedMemoryAccess$BufferAccess);
	$init($ScopedMemoryAccess);
	return $nc($ScopedMemoryAccess::UNSAFE)->getLong(bb, ScopedMemoryAccess$BufferAccess::BUFFER_ADDRESS) + offset;
}

$ScopedMemoryAccess$Scope* ScopedMemoryAccess$BufferAccess::scope($ByteBuffer* bb) {
	$init(ScopedMemoryAccess$BufferAccess);
	$var($MemorySegmentProxy, segmentProxy, $nc(ScopedMemoryAccess$BufferAccess::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? $nc(segmentProxy)->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

void clinit$ScopedMemoryAccess$BufferAccess($Class* class$) {
	$init($ScopedMemoryAccess);
	$load($Buffer);
	ScopedMemoryAccess$BufferAccess::BUFFER_ADDRESS = $nc($ScopedMemoryAccess::UNSAFE)->objectFieldOffset($Buffer::class$, "address"_s);
	$load($ByteBuffer);
	ScopedMemoryAccess$BufferAccess::BYTE_BUFFER_HB = $nc($ScopedMemoryAccess::UNSAFE)->objectFieldOffset($ByteBuffer::class$, "hb"_s);
	$assignStatic(ScopedMemoryAccess$BufferAccess::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
}

ScopedMemoryAccess$BufferAccess::ScopedMemoryAccess$BufferAccess() {
}

$Class* ScopedMemoryAccess$BufferAccess::load$($String* name, bool initialize) {
	$loadClass(ScopedMemoryAccess$BufferAccess, name, initialize, &_ScopedMemoryAccess$BufferAccess_ClassInfo_, clinit$ScopedMemoryAccess$BufferAccess, allocate$ScopedMemoryAccess$BufferAccess);
	return class$;
}

$Class* ScopedMemoryAccess$BufferAccess::class$ = nullptr;

		} // misc
	} // internal
} // jdk