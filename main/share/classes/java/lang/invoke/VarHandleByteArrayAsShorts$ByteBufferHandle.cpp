#include <java/lang/invoke/VarHandleByteArrayAsShorts$ByteBufferHandle.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsShorts$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsShorts.h>
#include <java/lang/invoke/VarHandleByteArrayBase.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef BUFFER_ADDRESS
#undef BUFFER_LIMIT
#undef BYTE_BUFFER_HB
#undef BYTE_BUFFER_IS_READ_ONLY
#undef FORM
#undef NIO_ACCESS
#undef SCOPED_MEMORY_ACCESS
#undef TYPE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsShorts = ::java::lang::invoke::VarHandleByteArrayAsShorts;
using $VarHandleByteArrayAsShorts$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $BiFunction = ::java::util::function::BiFunction;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleByteArrayAsShorts$ByteBufferHandle::FORM = nullptr;

void VarHandleByteArrayAsShorts$ByteBufferHandle::init$(bool be) {
	VarHandleByteArrayAsShorts$ByteBufferHandle::init$(be, false);
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsShorts$ByteBufferHandle::FORM, be, exact);
}

VarHandleByteArrayAsShorts$ByteBufferHandle* VarHandleByteArrayAsShorts$ByteBufferHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsShorts$ByteBufferHandle, this->be, true);
}

VarHandleByteArrayAsShorts$ByteBufferHandle* VarHandleByteArrayAsShorts$ByteBufferHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsShorts$ByteBufferHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsShorts$ByteBufferHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($ByteBuffer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Short::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsShorts$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$init($VarHandleByteArrayAsShorts);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsShorts::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 1, nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsShorts$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$init($VarHandleByteArrayAsShorts);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsShorts::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? segmentProxy->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

int32_t VarHandleByteArrayAsShorts$ByteBufferHandle::indexRO($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	if ($nc($MethodHandleStatics::UNSAFE)->getBoolean(bb, $VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY)) {
		$throwNew($ReadOnlyBufferException);
	}
	return VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index);
}

int64_t VarHandleByteArrayAsShorts$ByteBufferHandle::address($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	int64_t address = ((int64_t)index) + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	if ((address & 1) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int16_t VarHandleByteArrayAsShorts$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index);
	return $nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->getShortUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)indexRO(bb, index);
	$nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->putShortUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), value, $nc(handle)->be);
}

int16_t VarHandleByteArrayAsShorts$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->getShortVolatile(var$0, var$1, address(bb, VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::setVolatile($VarHandle* ob, Object$* obb, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->putShortVolatile(var$0, var$1, var$2, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

int16_t VarHandleByteArrayAsShorts$ByteBufferHandle::getAcquire($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->getShortAcquire(var$0, var$1, address(bb, VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::setRelease($VarHandle* ob, Object$* obb, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->putShortRelease(var$0, var$1, var$2, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

int16_t VarHandleByteArrayAsShorts$ByteBufferHandle::getOpaque($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->getShortOpaque(var$0, var$1, address(bb, VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::setOpaque($VarHandle* ob, Object$* obb, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->putShortOpaque(var$0, var$1, var$2, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::clinit$($Class* clazz) {
	$load($ByteBuffer);
	$assignStatic(VarHandleByteArrayAsShorts$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsShorts$ByteBufferHandle::class$, $ByteBuffer::class$, $Short::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsShorts$ByteBufferHandle::VarHandleByteArrayAsShorts$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsShorts$ByteBufferHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts$ByteBufferHandle, FORM)},
		{}
	};
	$CompoundAttribute addressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute indexmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute indexROmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute scopemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsShorts$ByteBufferHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsShorts$ByteBufferHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, address, int64_t, $ByteBuffer*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, get, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, getAcquire, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, getOpaque, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, getVolatile, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, index, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, indexRO, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexROmethodAnnotations$$},
		{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, scope, $ScopedMemoryAccess$Scope*, $ByteBuffer*), nullptr, nullptr, scopemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, set, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, setRelease, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsShorts$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, withInvokeBehavior, VarHandleByteArrayAsShorts$ByteBufferHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsShorts$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsShorts$ByteBufferHandle, withInvokeExactBehavior, VarHandleByteArrayAsShorts$ByteBufferHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsShorts$ByteBufferHandle",
		"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsShorts"
	};
	$loadClass(VarHandleByteArrayAsShorts$ByteBufferHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsShorts$ByteBufferHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsShorts$ByteBufferHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsShorts$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java