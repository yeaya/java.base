#include <jdk/internal/util/ArraysSupport.h>

#include <java/lang/Error.h>
#include <java/lang/Math.h>
#include <java/lang/OutOfMemoryError.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_BOOLEAN_BASE_OFFSET
#undef ARRAY_BOOLEAN_INDEX_SCALE
#undef ARRAY_BYTE_BASE_OFFSET
#undef ARRAY_BYTE_INDEX_SCALE
#undef ARRAY_CHAR_BASE_OFFSET
#undef ARRAY_CHAR_INDEX_SCALE
#undef ARRAY_DOUBLE_BASE_OFFSET
#undef ARRAY_DOUBLE_INDEX_SCALE
#undef ARRAY_FLOAT_BASE_OFFSET
#undef ARRAY_FLOAT_INDEX_SCALE
#undef ARRAY_INT_BASE_OFFSET
#undef ARRAY_INT_INDEX_SCALE
#undef ARRAY_LONG_BASE_OFFSET
#undef ARRAY_LONG_INDEX_SCALE
#undef ARRAY_SHORT_BASE_OFFSET
#undef ARRAY_SHORT_INDEX_SCALE
#undef BIG_ENDIAN
#undef LOG2_ARRAY_BOOLEAN_INDEX_SCALE
#undef LOG2_ARRAY_BYTE_INDEX_SCALE
#undef LOG2_ARRAY_CHAR_INDEX_SCALE
#undef LOG2_ARRAY_DOUBLE_INDEX_SCALE
#undef LOG2_ARRAY_FLOAT_INDEX_SCALE
#undef LOG2_ARRAY_INT_INDEX_SCALE
#undef LOG2_ARRAY_LONG_INDEX_SCALE
#undef LOG2_ARRAY_SHORT_INDEX_SCALE
#undef LOG2_BYTE_BIT_SIZE
#undef SIZE
#undef SOFT_MAX_ARRAY_LENGTH
#undef U

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace jdk {
	namespace internal {
		namespace util {

$CompoundAttribute _ArraysSupport_MethodAnnotations_vectorizedMismatch20[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _ArraysSupport_FieldInfo_[] = {
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC | $FINAL, $staticField(ArraysSupport, U)},
	{"BIG_ENDIAN", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ArraysSupport, BIG_ENDIAN)},
	{"LOG2_ARRAY_BOOLEAN_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ArraysSupport, LOG2_ARRAY_BOOLEAN_INDEX_SCALE)},
	{"LOG2_ARRAY_BYTE_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ArraysSupport, LOG2_ARRAY_BYTE_INDEX_SCALE)},
	{"LOG2_ARRAY_CHAR_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ArraysSupport, LOG2_ARRAY_CHAR_INDEX_SCALE)},
	{"LOG2_ARRAY_SHORT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ArraysSupport, LOG2_ARRAY_SHORT_INDEX_SCALE)},
	{"LOG2_ARRAY_INT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ArraysSupport, LOG2_ARRAY_INT_INDEX_SCALE)},
	{"LOG2_ARRAY_LONG_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ArraysSupport, LOG2_ARRAY_LONG_INDEX_SCALE)},
	{"LOG2_ARRAY_FLOAT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ArraysSupport, LOG2_ARRAY_FLOAT_INDEX_SCALE)},
	{"LOG2_ARRAY_DOUBLE_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ArraysSupport, LOG2_ARRAY_DOUBLE_INDEX_SCALE)},
	{"LOG2_BYTE_BIT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ArraysSupport, LOG2_BYTE_BIT_SIZE)},
	{"SOFT_MAX_ARRAY_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ArraysSupport, SOFT_MAX_ARRAY_LENGTH)},
	{}
};

$MethodInfo _ArraysSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArraysSupport::*)()>(&ArraysSupport::init$))},
	{"exactLog2", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ArraysSupport::exactLog2))},
	{"hugeLength", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&ArraysSupport::hugeLength))},
	{"mismatch", "([Z[ZI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($booleans*,$booleans*,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([ZI[ZII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($booleans*,int32_t,$booleans*,int32_t,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([B[BI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,$bytes*,int32_t,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([C[CI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,$chars*,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([CI[CII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,$chars*,int32_t,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([S[SI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,$shorts*,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([SI[SII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,int32_t,$shorts*,int32_t,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([I[II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,$ints*,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([II[III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,$ints*,int32_t,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([F[FI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($floats*,$floats*,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([FI[FII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($floats*,int32_t,$floats*,int32_t,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([J[JI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,$longs*,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([JI[JII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,int32_t,$longs*,int32_t,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([D[DI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,$doubles*,int32_t)>(&ArraysSupport::mismatch))},
	{"mismatch", "([DI[DII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,int32_t,$doubles*,int32_t,int32_t)>(&ArraysSupport::mismatch))},
	{"newLength", "(III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&ArraysSupport::newLength))},
	{"vectorizedMismatch", "(Ljava/lang/Object;JLjava/lang/Object;JII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*,int64_t,Object$*,int64_t,int32_t,int32_t)>(&ArraysSupport::vectorizedMismatch)), nullptr, nullptr, _ArraysSupport_MethodAnnotations_vectorizedMismatch20},
	{}
};

$ClassInfo _ArraysSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.ArraysSupport",
	"java.lang.Object",
	nullptr,
	_ArraysSupport_FieldInfo_,
	_ArraysSupport_MethodInfo_
};

$Object* allocate$ArraysSupport($Class* clazz) {
	return $of($alloc(ArraysSupport));
}

$Unsafe* ArraysSupport::U = nullptr;
bool ArraysSupport::BIG_ENDIAN = false;
int32_t ArraysSupport::LOG2_ARRAY_BOOLEAN_INDEX_SCALE = 0;
int32_t ArraysSupport::LOG2_ARRAY_BYTE_INDEX_SCALE = 0;
int32_t ArraysSupport::LOG2_ARRAY_CHAR_INDEX_SCALE = 0;
int32_t ArraysSupport::LOG2_ARRAY_SHORT_INDEX_SCALE = 0;
int32_t ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE = 0;
int32_t ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE = 0;
int32_t ArraysSupport::LOG2_ARRAY_FLOAT_INDEX_SCALE = 0;
int32_t ArraysSupport::LOG2_ARRAY_DOUBLE_INDEX_SCALE = 0;
int32_t ArraysSupport::LOG2_BYTE_BIT_SIZE = 0;

int32_t ArraysSupport::exactLog2(int32_t scale) {
	$init(ArraysSupport);
	if (((int32_t)(scale & (uint32_t)(scale - 1))) != 0) {
		$throwNew($Error, "data type scale not a power of two"_s);
	}
	return $Integer::numberOfTrailingZeros(scale);
}

void ArraysSupport::init$() {
}

int32_t ArraysSupport::vectorizedMismatch(Object$* a, int64_t aOffset, Object$* b, int64_t bOffset, int32_t length, int32_t log2ArrayIndexScale) {
	$init(ArraysSupport);
	int32_t log2ValuesPerWidth = ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE - log2ArrayIndexScale;
	int32_t wi = 0;
	for (; wi < $sr(length, log2ValuesPerWidth); ++wi) {
		int64_t bi = $sl((int64_t)wi, ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE);
		int64_t av = $nc(ArraysSupport::U)->getLongUnaligned(a, aOffset + bi);
		int64_t bv = $nc(ArraysSupport::U)->getLongUnaligned(b, bOffset + bi);
		if (av != bv) {
			int64_t x = av ^ bv;
			int32_t o = ArraysSupport::BIG_ENDIAN ? $sr($Long::numberOfLeadingZeros(x), ArraysSupport::LOG2_BYTE_BIT_SIZE + log2ArrayIndexScale) : $sr($Long::numberOfTrailingZeros(x), ArraysSupport::LOG2_BYTE_BIT_SIZE + log2ArrayIndexScale);
			return ($sl(wi, log2ValuesPerWidth)) + o;
		}
	}
	int32_t tail = length - ($sl(wi, log2ValuesPerWidth));
	if (log2ArrayIndexScale < ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE) {
		int32_t wordTail = $sl(1, ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE - log2ArrayIndexScale);
		if (tail >= wordTail) {
			int64_t bi = $sl((int64_t)wi, ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE);
			int32_t av = $nc(ArraysSupport::U)->getIntUnaligned(a, aOffset + bi);
			int32_t bv = $nc(ArraysSupport::U)->getIntUnaligned(b, bOffset + bi);
			if (av != bv) {
				int32_t x = av ^ bv;
				int32_t o = ArraysSupport::BIG_ENDIAN ? $sr($Integer::numberOfLeadingZeros(x), ArraysSupport::LOG2_BYTE_BIT_SIZE + log2ArrayIndexScale) : $sr($Integer::numberOfTrailingZeros(x), ArraysSupport::LOG2_BYTE_BIT_SIZE + log2ArrayIndexScale);
				return ($sl(wi, log2ValuesPerWidth)) + o;
			}
			tail -= wordTail;
		}
		return ~tail;
	} else {
		return ~tail;
	}
}

int32_t ArraysSupport::mismatch($booleans* a, $booleans* b, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 7) {
		if ($nc(a)->get(0) != $nc(b)->get(0)) {
			return 0;
		}
		$init($Unsafe);
		i = vectorizedMismatch(a, $Unsafe::ARRAY_BOOLEAN_BASE_OFFSET, b, $Unsafe::ARRAY_BOOLEAN_BASE_OFFSET, length, ArraysSupport::LOG2_ARRAY_BOOLEAN_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(i) != $nc(b)->get(i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($booleans* a, int32_t aFromIndex, $booleans* b, int32_t bFromIndex, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 7) {
		if ($nc(a)->get(aFromIndex) != $nc(b)->get(bFromIndex)) {
			return 0;
		}
		$init($Unsafe);
		int32_t aOffset = $Unsafe::ARRAY_BOOLEAN_BASE_OFFSET + aFromIndex;
		int32_t bOffset = $Unsafe::ARRAY_BOOLEAN_BASE_OFFSET + bFromIndex;
		i = vectorizedMismatch(a, aOffset, b, bOffset, length, ArraysSupport::LOG2_ARRAY_BOOLEAN_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(aFromIndex + i) != $nc(b)->get(bFromIndex + i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($bytes* a, $bytes* b, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 7) {
		if ($nc(a)->get(0) != $nc(b)->get(0)) {
			return 0;
		}
		$init($Unsafe);
		i = vectorizedMismatch(a, $Unsafe::ARRAY_BYTE_BASE_OFFSET, b, $Unsafe::ARRAY_BYTE_BASE_OFFSET, length, ArraysSupport::LOG2_ARRAY_BYTE_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(i) != $nc(b)->get(i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($bytes* a, int32_t aFromIndex, $bytes* b, int32_t bFromIndex, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 7) {
		if ($nc(a)->get(aFromIndex) != $nc(b)->get(bFromIndex)) {
			return 0;
		}
		$init($Unsafe);
		int32_t aOffset = $Unsafe::ARRAY_BYTE_BASE_OFFSET + aFromIndex;
		int32_t bOffset = $Unsafe::ARRAY_BYTE_BASE_OFFSET + bFromIndex;
		i = vectorizedMismatch(a, aOffset, b, bOffset, length, ArraysSupport::LOG2_ARRAY_BYTE_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(aFromIndex + i) != $nc(b)->get(bFromIndex + i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($chars* a, $chars* b, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 3) {
		if ($nc(a)->get(0) != $nc(b)->get(0)) {
			return 0;
		}
		$init($Unsafe);
		i = vectorizedMismatch(a, $Unsafe::ARRAY_CHAR_BASE_OFFSET, b, $Unsafe::ARRAY_CHAR_BASE_OFFSET, length, ArraysSupport::LOG2_ARRAY_CHAR_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(i) != $nc(b)->get(i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($chars* a, int32_t aFromIndex, $chars* b, int32_t bFromIndex, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 3) {
		if ($nc(a)->get(aFromIndex) != $nc(b)->get(bFromIndex)) {
			return 0;
		}
		$init($Unsafe);
		int32_t aOffset = $Unsafe::ARRAY_CHAR_BASE_OFFSET + ($sl(aFromIndex, ArraysSupport::LOG2_ARRAY_CHAR_INDEX_SCALE));
		int32_t bOffset = $Unsafe::ARRAY_CHAR_BASE_OFFSET + ($sl(bFromIndex, ArraysSupport::LOG2_ARRAY_CHAR_INDEX_SCALE));
		i = vectorizedMismatch(a, aOffset, b, bOffset, length, ArraysSupport::LOG2_ARRAY_CHAR_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(aFromIndex + i) != $nc(b)->get(bFromIndex + i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($shorts* a, $shorts* b, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 3) {
		if ($nc(a)->get(0) != $nc(b)->get(0)) {
			return 0;
		}
		$init($Unsafe);
		i = vectorizedMismatch(a, $Unsafe::ARRAY_SHORT_BASE_OFFSET, b, $Unsafe::ARRAY_SHORT_BASE_OFFSET, length, ArraysSupport::LOG2_ARRAY_SHORT_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(i) != $nc(b)->get(i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($shorts* a, int32_t aFromIndex, $shorts* b, int32_t bFromIndex, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 3) {
		if ($nc(a)->get(aFromIndex) != $nc(b)->get(bFromIndex)) {
			return 0;
		}
		$init($Unsafe);
		int32_t aOffset = $Unsafe::ARRAY_SHORT_BASE_OFFSET + ($sl(aFromIndex, ArraysSupport::LOG2_ARRAY_SHORT_INDEX_SCALE));
		int32_t bOffset = $Unsafe::ARRAY_SHORT_BASE_OFFSET + ($sl(bFromIndex, ArraysSupport::LOG2_ARRAY_SHORT_INDEX_SCALE));
		i = vectorizedMismatch(a, aOffset, b, bOffset, length, ArraysSupport::LOG2_ARRAY_SHORT_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(aFromIndex + i) != $nc(b)->get(bFromIndex + i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($ints* a, $ints* b, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 1) {
		if ($nc(a)->get(0) != $nc(b)->get(0)) {
			return 0;
		}
		$init($Unsafe);
		i = vectorizedMismatch(a, $Unsafe::ARRAY_INT_BASE_OFFSET, b, $Unsafe::ARRAY_INT_BASE_OFFSET, length, ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(i) != $nc(b)->get(i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($ints* a, int32_t aFromIndex, $ints* b, int32_t bFromIndex, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 1) {
		if ($nc(a)->get(aFromIndex) != $nc(b)->get(bFromIndex)) {
			return 0;
		}
		$init($Unsafe);
		int32_t aOffset = $Unsafe::ARRAY_INT_BASE_OFFSET + ($sl(aFromIndex, ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE));
		int32_t bOffset = $Unsafe::ARRAY_INT_BASE_OFFSET + ($sl(bFromIndex, ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE));
		i = vectorizedMismatch(a, aOffset, b, bOffset, length, ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		if ($nc(a)->get(aFromIndex + i) != $nc(b)->get(bFromIndex + i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($floats* a, $floats* b, int32_t length) {
	$init(ArraysSupport);
	return mismatch(a, 0, b, 0, length);
}

int32_t ArraysSupport::mismatch($floats* a, int32_t aFromIndex, $floats* b, int32_t bFromIndex, int32_t length) {
	$init(ArraysSupport);
	int32_t i = 0;
	if (length > 1) {
		int32_t var$0 = $Float::floatToRawIntBits($nc(a)->get(aFromIndex));
		if (var$0 == $Float::floatToRawIntBits($nc(b)->get(bFromIndex))) {
			$init($Unsafe);
			int32_t aOffset = $Unsafe::ARRAY_FLOAT_BASE_OFFSET + ($sl(aFromIndex, ArraysSupport::LOG2_ARRAY_FLOAT_INDEX_SCALE));
			int32_t bOffset = $Unsafe::ARRAY_FLOAT_BASE_OFFSET + ($sl(bFromIndex, ArraysSupport::LOG2_ARRAY_FLOAT_INDEX_SCALE));
			i = vectorizedMismatch(a, aOffset, b, bOffset, length, ArraysSupport::LOG2_ARRAY_FLOAT_INDEX_SCALE);
		}
		if (i >= 0) {
			bool var$1 = !$Float::isNaN($nc(a)->get(aFromIndex + i));
			if (var$1 || !$Float::isNaN($nc(b)->get(bFromIndex + i))) {
				return i;
			}
			++i;
		} else {
			i = length - ~i;
		}
	}
	for (; i < length; ++i) {
		int32_t var$2 = $Float::floatToIntBits($nc(a)->get(aFromIndex + i));
		if (var$2 != $Float::floatToIntBits($nc(b)->get(bFromIndex + i))) {
			return i;
		}
	}
	return -1;
}

int32_t ArraysSupport::mismatch($longs* a, $longs* b, int32_t length) {
	$init(ArraysSupport);
	if (length == 0) {
		return -1;
	}
	if ($nc(a)->get(0) != $nc(b)->get(0)) {
		return 0;
	}
	$init($Unsafe);
	int32_t i = vectorizedMismatch(a, $Unsafe::ARRAY_LONG_BASE_OFFSET, b, $Unsafe::ARRAY_LONG_BASE_OFFSET, length, ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE);
	return i >= 0 ? i : -1;
}

int32_t ArraysSupport::mismatch($longs* a, int32_t aFromIndex, $longs* b, int32_t bFromIndex, int32_t length) {
	$init(ArraysSupport);
	if (length == 0) {
		return -1;
	}
	if ($nc(a)->get(aFromIndex) != $nc(b)->get(bFromIndex)) {
		return 0;
	}
	$init($Unsafe);
	int32_t aOffset = $Unsafe::ARRAY_LONG_BASE_OFFSET + ($sl(aFromIndex, ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE));
	int32_t bOffset = $Unsafe::ARRAY_LONG_BASE_OFFSET + ($sl(bFromIndex, ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE));
	int32_t i = vectorizedMismatch(a, aOffset, b, bOffset, length, ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE);
	return i >= 0 ? i : -1;
}

int32_t ArraysSupport::mismatch($doubles* a, $doubles* b, int32_t length) {
	$init(ArraysSupport);
	return mismatch(a, 0, b, 0, length);
}

int32_t ArraysSupport::mismatch($doubles* a, int32_t aFromIndex, $doubles* b, int32_t bFromIndex, int32_t length) {
	$init(ArraysSupport);
	if (length == 0) {
		return -1;
	}
	int32_t i = 0;
	int64_t var$0 = $Double::doubleToRawLongBits($nc(a)->get(aFromIndex));
	if (var$0 == $Double::doubleToRawLongBits($nc(b)->get(bFromIndex))) {
		$init($Unsafe);
		int32_t aOffset = $Unsafe::ARRAY_DOUBLE_BASE_OFFSET + ($sl(aFromIndex, ArraysSupport::LOG2_ARRAY_DOUBLE_INDEX_SCALE));
		int32_t bOffset = $Unsafe::ARRAY_DOUBLE_BASE_OFFSET + ($sl(bFromIndex, ArraysSupport::LOG2_ARRAY_DOUBLE_INDEX_SCALE));
		i = vectorizedMismatch(a, aOffset, b, bOffset, length, ArraysSupport::LOG2_ARRAY_DOUBLE_INDEX_SCALE);
	}
	if (i >= 0) {
		bool var$1 = !$Double::isNaN($nc(a)->get(aFromIndex + i));
		if (var$1 || !$Double::isNaN($nc(b)->get(bFromIndex + i))) {
			return i;
		}
		++i;
		for (; i < length; ++i) {
			int64_t var$2 = $Double::doubleToLongBits($nc(a)->get(aFromIndex + i));
			if (var$2 != $Double::doubleToLongBits($nc(b)->get(bFromIndex + i))) {
				return i;
			}
		}
	}
	return -1;
}

int32_t ArraysSupport::newLength(int32_t oldLength, int32_t minGrowth, int32_t prefGrowth) {
	$init(ArraysSupport);
	int32_t prefLength = oldLength + $Math::max(minGrowth, prefGrowth);
	if (0 < prefLength && prefLength <= ArraysSupport::SOFT_MAX_ARRAY_LENGTH) {
		return prefLength;
	} else {
		return hugeLength(oldLength, minGrowth);
	}
}

int32_t ArraysSupport::hugeLength(int32_t oldLength, int32_t minGrowth) {
	$init(ArraysSupport);
	$useLocalCurrentObjectStackCache();
	int32_t minLength = oldLength + minGrowth;
	if (minLength < 0) {
		$throwNew($OutOfMemoryError, $$str({"Required array length "_s, $$str(oldLength), " + "_s, $$str(minGrowth), " is too large"_s}));
	} else if (minLength <= ArraysSupport::SOFT_MAX_ARRAY_LENGTH) {
		return ArraysSupport::SOFT_MAX_ARRAY_LENGTH;
	} else {
		return minLength;
	}
}

void clinit$ArraysSupport($Class* class$) {
	$assignStatic(ArraysSupport::U, $Unsafe::getUnsafe());
	ArraysSupport::BIG_ENDIAN = $nc(ArraysSupport::U)->isBigEndian();
	ArraysSupport::LOG2_ARRAY_BOOLEAN_INDEX_SCALE = ArraysSupport::exactLog2($Unsafe::ARRAY_BOOLEAN_INDEX_SCALE);
	ArraysSupport::LOG2_ARRAY_BYTE_INDEX_SCALE = ArraysSupport::exactLog2($Unsafe::ARRAY_BYTE_INDEX_SCALE);
	ArraysSupport::LOG2_ARRAY_CHAR_INDEX_SCALE = ArraysSupport::exactLog2($Unsafe::ARRAY_CHAR_INDEX_SCALE);
	ArraysSupport::LOG2_ARRAY_SHORT_INDEX_SCALE = ArraysSupport::exactLog2($Unsafe::ARRAY_SHORT_INDEX_SCALE);
	ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE = ArraysSupport::exactLog2($Unsafe::ARRAY_INT_INDEX_SCALE);
	ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE = ArraysSupport::exactLog2($Unsafe::ARRAY_LONG_INDEX_SCALE);
	ArraysSupport::LOG2_ARRAY_FLOAT_INDEX_SCALE = ArraysSupport::exactLog2($Unsafe::ARRAY_FLOAT_INDEX_SCALE);
	ArraysSupport::LOG2_ARRAY_DOUBLE_INDEX_SCALE = ArraysSupport::exactLog2($Unsafe::ARRAY_DOUBLE_INDEX_SCALE);
	ArraysSupport::LOG2_BYTE_BIT_SIZE = ArraysSupport::exactLog2($Byte::SIZE);
}

ArraysSupport::ArraysSupport() {
}

$Class* ArraysSupport::load$($String* name, bool initialize) {
	$loadClass(ArraysSupport, name, initialize, &_ArraysSupport_ClassInfo_, clinit$ArraysSupport, allocate$ArraysSupport);
	return class$;
}

$Class* ArraysSupport::class$ = nullptr;

		} // util
	} // internal
} // jdk