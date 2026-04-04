#include <java/lang/invoke/VarHandleByteArrayAsChars$ByteBufferHandle.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsChars$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsChars.h>
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

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsChars = ::java::lang::invoke::VarHandleByteArrayAsChars;
using $VarHandleByteArrayAsChars$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle;
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

$VarForm* VarHandleByteArrayAsChars$ByteBufferHandle::FORM = nullptr;

void VarHandleByteArrayAsChars$ByteBufferHandle::init$(bool be) {
	VarHandleByteArrayAsChars$ByteBufferHandle::init$(be, false);
}

void VarHandleByteArrayAsChars$ByteBufferHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsChars$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsChars$ByteBufferHandle::FORM, be, exact);
}

VarHandleByteArrayAsChars$ByteBufferHandle* VarHandleByteArrayAsChars$ByteBufferHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsChars$ByteBufferHandle, this->be, true);
}

VarHandleByteArrayAsChars$ByteBufferHandle* VarHandleByteArrayAsChars$ByteBufferHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsChars$ByteBufferHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsChars$ByteBufferHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($ByteBuffer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Character::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsChars$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$init($VarHandleByteArrayAsChars);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsChars::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 1, nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsChars$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$init($VarHandleByteArrayAsChars);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsChars::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? segmentProxy->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

int32_t VarHandleByteArrayAsChars$ByteBufferHandle::indexRO($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	if ($nc($MethodHandleStatics::UNSAFE)->getBoolean(bb, $VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY)) {
		$throwNew($ReadOnlyBufferException);
	}
	return VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index);
}

int64_t VarHandleByteArrayAsChars$ByteBufferHandle::address($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	int64_t address = ((int64_t)index) + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	if ((address & 1) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

char16_t VarHandleByteArrayAsChars$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index);
	return $nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->getCharUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
}

void VarHandleByteArrayAsChars$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)indexRO(bb, index);
	$nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->putCharUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), value, $nc(handle)->be);
}

char16_t VarHandleByteArrayAsChars$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->getCharVolatile(var$0, var$1, address(bb, VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsChars$ByteBufferHandle::setVolatile($VarHandle* ob, Object$* obb, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->putCharVolatile(var$0, var$1, var$2, $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, value));
}

char16_t VarHandleByteArrayAsChars$ByteBufferHandle::getAcquire($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->getCharAcquire(var$0, var$1, address(bb, VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsChars$ByteBufferHandle::setRelease($VarHandle* ob, Object$* obb, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->putCharRelease(var$0, var$1, var$2, $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, value));
}

char16_t VarHandleByteArrayAsChars$ByteBufferHandle::getOpaque($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->getCharOpaque(var$0, var$1, address(bb, VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsChars$ByteBufferHandle::setOpaque($VarHandle* ob, Object$* obb, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->putCharOpaque(var$0, var$1, var$2, $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, value));
}

void VarHandleByteArrayAsChars$ByteBufferHandle::clinit$($Class* clazz) {
	$load($ByteBuffer);
	$assignStatic(VarHandleByteArrayAsChars$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsChars$ByteBufferHandle::class$, $ByteBuffer::class$, $Character::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsChars$ByteBufferHandle::VarHandleByteArrayAsChars$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsChars$ByteBufferHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsChars$ByteBufferHandle, FORM)},
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
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsChars$ByteBufferHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsChars$ByteBufferHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsChars$ByteBufferHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, address, int64_t, $ByteBuffer*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, get, char16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, getAcquire, char16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, getOpaque, char16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, getVolatile, char16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, index, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, indexRO, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexROmethodAnnotations$$},
		{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, scope, $ScopedMemoryAccess$Scope*, $ByteBuffer*), nullptr, nullptr, scopemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, set, void, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, setRelease, void, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars$ByteBufferHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsChars$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsChars$ByteBufferHandle, withInvokeBehavior, VarHandleByteArrayAsChars$ByteBufferHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsChars$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsChars$ByteBufferHandle, withInvokeExactBehavior, VarHandleByteArrayAsChars$ByteBufferHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsChars$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsChars$ByteBufferHandle",
		"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsChars"
	};
	$loadClass(VarHandleByteArrayAsChars$ByteBufferHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsChars$ByteBufferHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsChars$ByteBufferHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsChars$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java