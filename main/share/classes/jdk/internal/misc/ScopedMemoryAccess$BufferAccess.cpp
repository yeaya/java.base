#include <jdk/internal/misc/ScopedMemoryAccess$BufferAccess.h>
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

namespace jdk {
	namespace internal {
		namespace misc {

int64_t ScopedMemoryAccess$BufferAccess::BUFFER_ADDRESS = 0;
int64_t ScopedMemoryAccess$BufferAccess::BYTE_BUFFER_HB = 0;
$JavaNioAccess* ScopedMemoryAccess$BufferAccess::NIO_ACCESS = nullptr;

void ScopedMemoryAccess$BufferAccess::init$() {
}

$Object* ScopedMemoryAccess$BufferAccess::bufferBase($ByteBuffer* bb) {
	$init(ScopedMemoryAccess$BufferAccess);
	$init($ScopedMemoryAccess);
	return $nc($ScopedMemoryAccess::UNSAFE)->getReference(bb, ScopedMemoryAccess$BufferAccess::BYTE_BUFFER_HB);
}

int64_t ScopedMemoryAccess$BufferAccess::bufferAddress($ByteBuffer* bb, int64_t offset) {
	$init(ScopedMemoryAccess$BufferAccess);
	$init($ScopedMemoryAccess);
	return $nc($ScopedMemoryAccess::UNSAFE)->getLong(bb, ScopedMemoryAccess$BufferAccess::BUFFER_ADDRESS) + offset;
}

$ScopedMemoryAccess$Scope* ScopedMemoryAccess$BufferAccess::scope($ByteBuffer* bb) {
	$init(ScopedMemoryAccess$BufferAccess);
	$var($MemorySegmentProxy, segmentProxy, $nc(ScopedMemoryAccess$BufferAccess::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? segmentProxy->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

void ScopedMemoryAccess$BufferAccess::clinit$($Class* clazz) {
	$init($ScopedMemoryAccess);
	$load($Buffer);
	ScopedMemoryAccess$BufferAccess::BUFFER_ADDRESS = $nc($ScopedMemoryAccess::UNSAFE)->objectFieldOffset($Buffer::class$, "address"_s);
	$load($ByteBuffer);
	ScopedMemoryAccess$BufferAccess::BYTE_BUFFER_HB = $ScopedMemoryAccess::UNSAFE->objectFieldOffset($ByteBuffer::class$, "hb"_s);
	$assignStatic(ScopedMemoryAccess$BufferAccess::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
}

ScopedMemoryAccess$BufferAccess::ScopedMemoryAccess$BufferAccess() {
}

$Class* ScopedMemoryAccess$BufferAccess::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BUFFER_ADDRESS", "J", nullptr, $STATIC | $FINAL, $staticField(ScopedMemoryAccess$BufferAccess, BUFFER_ADDRESS)},
		{"BYTE_BUFFER_HB", "J", nullptr, $STATIC | $FINAL, $staticField(ScopedMemoryAccess$BufferAccess, BYTE_BUFFER_HB)},
		{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(ScopedMemoryAccess$BufferAccess, NIO_ACCESS)},
		{}
	};
	$CompoundAttribute bufferAddressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute bufferBasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute scopemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ScopedMemoryAccess$BufferAccess, init$, void)},
		{"bufferAddress", "(Ljava/nio/ByteBuffer;J)J", nullptr, $STATIC, $staticMethod(ScopedMemoryAccess$BufferAccess, bufferAddress, int64_t, $ByteBuffer*, int64_t), nullptr, nullptr, bufferAddressmethodAnnotations$$},
		{"bufferBase", "(Ljava/nio/ByteBuffer;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(ScopedMemoryAccess$BufferAccess, bufferBase, $Object*, $ByteBuffer*), nullptr, nullptr, bufferBasemethodAnnotations$$},
		{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $staticMethod(ScopedMemoryAccess$BufferAccess, scope, $ScopedMemoryAccess$Scope*, $ByteBuffer*), nullptr, nullptr, scopemethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.ScopedMemoryAccess$BufferAccess", "jdk.internal.misc.ScopedMemoryAccess", "BufferAccess", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.misc.ScopedMemoryAccess$BufferAccess",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.ScopedMemoryAccess"
	};
	$loadClass(ScopedMemoryAccess$BufferAccess, name, initialize, &classInfo$$, ScopedMemoryAccess$BufferAccess::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ScopedMemoryAccess$BufferAccess);
	});
	return class$;
}

$Class* ScopedMemoryAccess$BufferAccess::class$ = nullptr;

		} // misc
	} // internal
} // jdk