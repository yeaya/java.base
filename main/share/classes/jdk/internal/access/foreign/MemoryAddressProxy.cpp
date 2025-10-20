#include <jdk/internal/access/foreign/MemoryAddressProxy.h>

#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;

namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {

$MethodInfo _MemoryAddressProxy_MethodInfo_[] = {
	{"addOffsets", "(JJLjdk/internal/access/foreign/MemoryAddressProxy;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,MemoryAddressProxy*)>(&MemoryAddressProxy::addOffsets))},
	{"checkAccess", "(JJZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"isSmall", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"multiplyOffsets", "(JJLjdk/internal/access/foreign/MemoryAddressProxy;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,MemoryAddressProxy*)>(&MemoryAddressProxy::multiplyOffsets))},
	{"overflowException", "(JJ)Ljava/lang/IndexOutOfBoundsException;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$IndexOutOfBoundsException*(*)(int64_t,int64_t)>(&MemoryAddressProxy::overflowException))},
	{"unsafeGetBase", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"unsafeGetOffset", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MemoryAddressProxy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.foreign.MemoryAddressProxy",
	nullptr,
	nullptr,
	nullptr,
	_MemoryAddressProxy_MethodInfo_
};

$Object* allocate$MemoryAddressProxy($Class* clazz) {
	return $of($alloc(MemoryAddressProxy));
}

int64_t MemoryAddressProxy::addOffsets(int64_t op1, int64_t op2, MemoryAddressProxy* addr) {
	$useLocalCurrentObjectStackCache();
	if ($nc(addr)->isSmall()) {
		if (op1 > $Integer::MAX_VALUE || op2 > $Integer::MAX_VALUE || op1 < $Integer::MIN_VALUE || op2 < $Integer::MIN_VALUE) {
			$throw($(overflowException($Integer::MIN_VALUE, $Integer::MAX_VALUE)));
		}
		int32_t i1 = (int32_t)op1;
		int32_t i2 = (int32_t)op2;
		try {
			return $Math::addExact(i1, i2);
		} catch ($ArithmeticException&) {
			$var($ArithmeticException, ex, $catch());
			$throw($(overflowException($Integer::MIN_VALUE, $Integer::MAX_VALUE)));
		}
	} else {
		try {
			return $Math::addExact(op1, op2);
		} catch ($ArithmeticException&) {
			$var($ArithmeticException, ex, $catch());
			$throw($(overflowException($Long::MIN_VALUE, $Long::MAX_VALUE)));
		}
	}
	$shouldNotReachHere();
}

int64_t MemoryAddressProxy::multiplyOffsets(int64_t op1, int64_t op2, MemoryAddressProxy* addr) {
	$useLocalCurrentObjectStackCache();
	if ($nc(addr)->isSmall()) {
		if (op1 > $Integer::MAX_VALUE || op2 > $Integer::MAX_VALUE || op1 < $Integer::MIN_VALUE || op2 < $Integer::MIN_VALUE) {
			$throw($(overflowException($Integer::MIN_VALUE, $Integer::MAX_VALUE)));
		}
		int32_t i1 = (int32_t)op1;
		int32_t i2 = (int32_t)op2;
		try {
			return $Math::multiplyExact(i1, i2);
		} catch ($ArithmeticException&) {
			$var($ArithmeticException, ex, $catch());
			$throw($(overflowException($Integer::MIN_VALUE, $Integer::MAX_VALUE)));
		}
	} else {
		try {
			return $Math::multiplyExact(op1, op2);
		} catch ($ArithmeticException&) {
			$var($ArithmeticException, ex, $catch());
			$throw($(overflowException($Long::MIN_VALUE, $Long::MAX_VALUE)));
		}
	}
	$shouldNotReachHere();
}

$IndexOutOfBoundsException* MemoryAddressProxy::overflowException(int64_t min, int64_t max) {
	$useLocalCurrentObjectStackCache();
	return $new($IndexOutOfBoundsException, $($String::format("Overflow occurred during offset computation ; offset exceeded range { %d .. %d }"_s, $$new($ObjectArray, {
		$($of($Long::valueOf(min))),
		$($of($Long::valueOf(max)))
	}))));
}

$Class* MemoryAddressProxy::load$($String* name, bool initialize) {
	$loadClass(MemoryAddressProxy, name, initialize, &_MemoryAddressProxy_ClassInfo_, allocate$MemoryAddressProxy);
	return class$;
}

$Class* MemoryAddressProxy::class$ = nullptr;

			} // foreign
		} // access
	} // internal
} // jdk