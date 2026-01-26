#include <jdk/internal/access/foreign/MemorySegmentProxy.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {

$MethodInfo _MemorySegmentProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MemorySegmentProxy, init$, void)},
	{"addOffsets", "(JJLjdk/internal/access/foreign/MemorySegmentProxy;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(MemorySegmentProxy, addOffsets, int64_t, int64_t, int64_t, MemorySegmentProxy*)},
	{"checkAccess", "(JJZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemorySegmentProxy, checkAccess, void, int64_t, int64_t, bool)},
	{"isSmall", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemorySegmentProxy, isSmall, bool)},
	{"multiplyOffsets", "(JJLjdk/internal/access/foreign/MemorySegmentProxy;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(MemorySegmentProxy, multiplyOffsets, int64_t, int64_t, int64_t, MemorySegmentProxy*)},
	{"overflowException", "(JJ)Ljava/lang/IndexOutOfBoundsException;", nullptr, $PRIVATE | $STATIC, $staticMethod(MemorySegmentProxy, overflowException, $IndexOutOfBoundsException*, int64_t, int64_t)},
	{"scope", "()Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemorySegmentProxy, scope, $ScopedMemoryAccess$Scope*)},
	{"unsafeGetBase", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemorySegmentProxy, unsafeGetBase, $Object*)},
	{"unsafeGetOffset", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemorySegmentProxy, unsafeGetOffset, int64_t)},
	{}
};

$ClassInfo _MemorySegmentProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.access.foreign.MemorySegmentProxy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MemorySegmentProxy_MethodInfo_
};

$Object* allocate$MemorySegmentProxy($Class* clazz) {
	return $of($alloc(MemorySegmentProxy));
}

void MemorySegmentProxy::init$() {
}

int64_t MemorySegmentProxy::addOffsets(int64_t op1, int64_t op2, MemorySegmentProxy* segmentProxy) {
	$useLocalCurrentObjectStackCache();
	if ($nc(segmentProxy)->isSmall()) {
		if (op1 > $Integer::MAX_VALUE || op2 > $Integer::MAX_VALUE || op1 < $Integer::MIN_VALUE || op2 < $Integer::MIN_VALUE) {
			$throw($(overflowException($Integer::MIN_VALUE, $Integer::MAX_VALUE)));
		}
		int32_t i1 = (int32_t)op1;
		int32_t i2 = (int32_t)op2;
		try {
			return $Math::addExact(i1, i2);
		} catch ($ArithmeticException& ex) {
			$throw($(overflowException($Integer::MIN_VALUE, $Integer::MAX_VALUE)));
		}
	} else {
		try {
			return $Math::addExact(op1, op2);
		} catch ($ArithmeticException& ex) {
			$throw($(overflowException($Long::MIN_VALUE, $Long::MAX_VALUE)));
		}
	}
	$shouldNotReachHere();
}

int64_t MemorySegmentProxy::multiplyOffsets(int64_t op1, int64_t op2, MemorySegmentProxy* segmentProxy) {
	$useLocalCurrentObjectStackCache();
	if ($nc(segmentProxy)->isSmall()) {
		if (op1 > $Integer::MAX_VALUE || op2 > $Integer::MAX_VALUE || op1 < $Integer::MIN_VALUE || op2 < $Integer::MIN_VALUE) {
			$throw($(overflowException($Integer::MIN_VALUE, $Integer::MAX_VALUE)));
		}
		int32_t i1 = (int32_t)op1;
		int32_t i2 = (int32_t)op2;
		try {
			return $Math::multiplyExact(i1, i2);
		} catch ($ArithmeticException& ex) {
			$throw($(overflowException($Integer::MIN_VALUE, $Integer::MAX_VALUE)));
		}
	} else {
		try {
			return $Math::multiplyExact(op1, op2);
		} catch ($ArithmeticException& ex) {
			$throw($(overflowException($Long::MIN_VALUE, $Long::MAX_VALUE)));
		}
	}
	$shouldNotReachHere();
}

$IndexOutOfBoundsException* MemorySegmentProxy::overflowException(int64_t min, int64_t max) {
	$useLocalCurrentObjectStackCache();
	return $new($IndexOutOfBoundsException, $($String::format("Overflow occurred during offset computation ; offset exceeded range { %d .. %d }"_s, $$new($ObjectArray, {
		$($of($Long::valueOf(min))),
		$($of($Long::valueOf(max)))
	}))));
}

MemorySegmentProxy::MemorySegmentProxy() {
}

$Class* MemorySegmentProxy::load$($String* name, bool initialize) {
	$loadClass(MemorySegmentProxy, name, initialize, &_MemorySegmentProxy_ClassInfo_, allocate$MemorySegmentProxy);
	return class$;
}

$Class* MemorySegmentProxy::class$ = nullptr;

			} // foreign
		} // access
	} // internal
} // jdk