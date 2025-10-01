#include <java/nio/BufferMismatch.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/LongBuffer.h>
#include <java/nio/ShortBuffer.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jcpp.h>

#undef LOG2_ARRAY_CHAR_INDEX_SCALE
#undef LOG2_ARRAY_FLOAT_INDEX_SCALE
#undef LOG2_ARRAY_BYTE_INDEX_SCALE
#undef LOG2_ARRAY_DOUBLE_INDEX_SCALE
#undef LOG2_ARRAY_SHORT_INDEX_SCALE
#undef LOG2_ARRAY_INT_INDEX_SCALE
#undef SCOPED_MEMORY_ACCESS
#undef LOG2_ARRAY_LONG_INDEX_SCALE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $LongBuffer = ::java::nio::LongBuffer;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;

namespace java {
	namespace nio {

$FieldInfo _BufferMismatch_FieldInfo_[] = {
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(BufferMismatch, SCOPED_MEMORY_ACCESS)},
	{}
};

$MethodInfo _BufferMismatch_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BufferMismatch::*)()>(&BufferMismatch::init$))},
	{"mismatch", "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t,$ByteBuffer*,int32_t,int32_t)>(&BufferMismatch::mismatch))},
	{"mismatch", "(Ljava/nio/CharBuffer;ILjava/nio/CharBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($CharBuffer*,int32_t,$CharBuffer*,int32_t,int32_t)>(&BufferMismatch::mismatch))},
	{"mismatch", "(Ljava/nio/ShortBuffer;ILjava/nio/ShortBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ShortBuffer*,int32_t,$ShortBuffer*,int32_t,int32_t)>(&BufferMismatch::mismatch))},
	{"mismatch", "(Ljava/nio/IntBuffer;ILjava/nio/IntBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($IntBuffer*,int32_t,$IntBuffer*,int32_t,int32_t)>(&BufferMismatch::mismatch))},
	{"mismatch", "(Ljava/nio/FloatBuffer;ILjava/nio/FloatBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($FloatBuffer*,int32_t,$FloatBuffer*,int32_t,int32_t)>(&BufferMismatch::mismatch))},
	{"mismatch", "(Ljava/nio/LongBuffer;ILjava/nio/LongBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($LongBuffer*,int32_t,$LongBuffer*,int32_t,int32_t)>(&BufferMismatch::mismatch))},
	{"mismatch", "(Ljava/nio/DoubleBuffer;ILjava/nio/DoubleBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($DoubleBuffer*,int32_t,$DoubleBuffer*,int32_t,int32_t)>(&BufferMismatch::mismatch))},
	{}
};

$ClassInfo _BufferMismatch_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.nio.BufferMismatch",
	"java.lang.Object",
	nullptr,
	_BufferMismatch_FieldInfo_,
	_BufferMismatch_MethodInfo_
};

$Object* allocate$BufferMismatch($Class* clazz) {
	return $of($alloc(BufferMismatch));
}

$ScopedMemoryAccess* BufferMismatch::SCOPED_MEMORY_ACCESS = nullptr;

void BufferMismatch::init$() {
}

int32_t BufferMismatch::mismatch($ByteBuffer* a, int32_t aOff, $ByteBuffer* b, int32_t bOff, int32_t length) {
	$init(BufferMismatch);
	int32_t i = 0;
	if (length > 7) {
		int8_t var$0 = $nc(a)->get(aOff);
		if (var$0 != $nc(b)->get(bOff)) {
			return 0;
		}
		$var($ScopedMemoryAccess$Scope, var$1, $nc(a)->scope());
		$var($ScopedMemoryAccess$Scope, var$2, $nc(b)->scope());
		$var($Object, var$3, a->base());
		int64_t var$4 = a->address + aOff;
		$init($ArraysSupport);
		i = $nc(BufferMismatch::SCOPED_MEMORY_ACCESS)->vectorizedMismatch(var$1, var$2, var$3, var$4, $(b->base()), b->address + bOff, length, $ArraysSupport::LOG2_ARRAY_BYTE_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		int8_t var$5 = $nc(a)->get(aOff + i);
		if (var$5 != $nc(b)->get(bOff + i)) {
			return i;
		}
	}
	return -1;
}

int32_t BufferMismatch::mismatch($CharBuffer* a, int32_t aOff, $CharBuffer* b, int32_t bOff, int32_t length) {
	$init(BufferMismatch);
	int32_t i = 0;
	bool var$2 = length > 3;
	if (var$2) {
		var$2 = $nc(a)->charRegionOrder() == $nc(b)->charRegionOrder();
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && a->charRegionOrder() != nullptr;
	if (var$0 && b->charRegionOrder() != nullptr) {
		char16_t var$3 = a->get(aOff);
		if (var$3 != b->get(bOff)) {
			return 0;
		}
		$var($ScopedMemoryAccess$Scope, var$4, a->scope());
		$var($ScopedMemoryAccess$Scope, var$5, b->scope());
		$var($Object, var$6, a->base());
		$init($ArraysSupport);
		int64_t var$7 = a->address + ($sl(aOff, $ArraysSupport::LOG2_ARRAY_CHAR_INDEX_SCALE));
		i = $nc(BufferMismatch::SCOPED_MEMORY_ACCESS)->vectorizedMismatch(var$4, var$5, var$6, var$7, $(b->base()), b->address + ($sl(bOff, $ArraysSupport::LOG2_ARRAY_CHAR_INDEX_SCALE)), length, $ArraysSupport::LOG2_ARRAY_CHAR_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		char16_t var$8 = $nc(a)->get(aOff + i);
		if (var$8 != $nc(b)->get(bOff + i)) {
			return i;
		}
	}
	return -1;
}

int32_t BufferMismatch::mismatch($ShortBuffer* a, int32_t aOff, $ShortBuffer* b, int32_t bOff, int32_t length) {
	$init(BufferMismatch);
	int32_t i = 0;
	bool var$0 = length > 3;
	if (var$0) {
		var$0 = $nc(a)->order() == $nc(b)->order();
	}
	if (var$0) {
		int16_t var$1 = a->get(aOff);
		if (var$1 != b->get(bOff)) {
			return 0;
		}
		$var($ScopedMemoryAccess$Scope, var$2, a->scope());
		$var($ScopedMemoryAccess$Scope, var$3, b->scope());
		$var($Object, var$4, a->base());
		$init($ArraysSupport);
		int64_t var$5 = a->address + ($sl(aOff, $ArraysSupport::LOG2_ARRAY_SHORT_INDEX_SCALE));
		i = $nc(BufferMismatch::SCOPED_MEMORY_ACCESS)->vectorizedMismatch(var$2, var$3, var$4, var$5, $(b->base()), b->address + ($sl(bOff, $ArraysSupport::LOG2_ARRAY_SHORT_INDEX_SCALE)), length, $ArraysSupport::LOG2_ARRAY_SHORT_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		int16_t var$6 = $nc(a)->get(aOff + i);
		if (var$6 != $nc(b)->get(bOff + i)) {
			return i;
		}
	}
	return -1;
}

int32_t BufferMismatch::mismatch($IntBuffer* a, int32_t aOff, $IntBuffer* b, int32_t bOff, int32_t length) {
	$init(BufferMismatch);
	int32_t i = 0;
	bool var$0 = length > 1;
	if (var$0) {
		var$0 = $nc(a)->order() == $nc(b)->order();
	}
	if (var$0) {
		int32_t var$1 = a->get(aOff);
		if (var$1 != b->get(bOff)) {
			return 0;
		}
		$var($ScopedMemoryAccess$Scope, var$2, a->scope());
		$var($ScopedMemoryAccess$Scope, var$3, b->scope());
		$var($Object, var$4, a->base());
		$init($ArraysSupport);
		int64_t var$5 = a->address + ($sl(aOff, $ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE));
		i = $nc(BufferMismatch::SCOPED_MEMORY_ACCESS)->vectorizedMismatch(var$2, var$3, var$4, var$5, $(b->base()), b->address + ($sl(bOff, $ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE)), length, $ArraysSupport::LOG2_ARRAY_INT_INDEX_SCALE);
		if (i >= 0) {
			return i;
		}
		i = length - ~i;
	}
	for (; i < length; ++i) {
		int32_t var$6 = $nc(a)->get(aOff + i);
		if (var$6 != $nc(b)->get(bOff + i)) {
			return i;
		}
	}
	return -1;
}

int32_t BufferMismatch::mismatch($FloatBuffer* a, int32_t aOff, $FloatBuffer* b, int32_t bOff, int32_t length) {
	$init(BufferMismatch);
	int32_t i = 0;
	bool var$0 = length > 1;
	if (var$0) {
		var$0 = $nc(a)->order() == $nc(b)->order();
	}
	if (var$0) {
		int32_t var$1 = $Float::floatToRawIntBits(a->get(aOff));
		if (var$1 == $Float::floatToRawIntBits(b->get(bOff))) {
			$var($ScopedMemoryAccess$Scope, var$2, a->scope());
			$var($ScopedMemoryAccess$Scope, var$3, b->scope());
			$var($Object, var$4, a->base());
			$init($ArraysSupport);
			int64_t var$5 = a->address + ($sl(aOff, $ArraysSupport::LOG2_ARRAY_FLOAT_INDEX_SCALE));
			i = $nc(BufferMismatch::SCOPED_MEMORY_ACCESS)->vectorizedMismatch(var$2, var$3, var$4, var$5, $(b->base()), b->address + ($sl(bOff, $ArraysSupport::LOG2_ARRAY_FLOAT_INDEX_SCALE)), length, $ArraysSupport::LOG2_ARRAY_FLOAT_INDEX_SCALE);
		}
		if (i >= 0) {
			float av = a->get(aOff + i);
			float bv = b->get(bOff + i);
			bool var$6 = av != bv;
			if (var$6) {
				bool var$7 = !$Float::isNaN(av);
				var$6 = (var$7 || !$Float::isNaN(bv));
			}
			if (var$6) {
				return i;
			}
			++i;
		} else {
			i = length - ~i;
		}
	}
	for (; i < length; ++i) {
		float av = $nc(a)->get(aOff + i);
		float bv = $nc(b)->get(bOff + i);
		bool var$8 = av != bv;
		if (var$8) {
			bool var$9 = !$Float::isNaN(av);
			var$8 = (var$9 || !$Float::isNaN(bv));
		}
		if (var$8) {
			return i;
		}
	}
	return -1;
}

int32_t BufferMismatch::mismatch($LongBuffer* a, int32_t aOff, $LongBuffer* b, int32_t bOff, int32_t length) {
	$init(BufferMismatch);
	int32_t i = 0;
	bool var$0 = length > 0;
	if (var$0) {
		var$0 = $nc(a)->order() == $nc(b)->order();
	}
	if (var$0) {
		int64_t var$1 = a->get(aOff);
		if (var$1 != b->get(bOff)) {
			return 0;
		}
		$var($ScopedMemoryAccess$Scope, var$2, a->scope());
		$var($ScopedMemoryAccess$Scope, var$3, b->scope());
		$var($Object, var$4, a->base());
		$init($ArraysSupport);
		int64_t var$5 = a->address + ($sl(aOff, $ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE));
		i = $nc(BufferMismatch::SCOPED_MEMORY_ACCESS)->vectorizedMismatch(var$2, var$3, var$4, var$5, $(b->base()), b->address + ($sl(bOff, $ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE)), length, $ArraysSupport::LOG2_ARRAY_LONG_INDEX_SCALE);
		return i >= 0 ? i : -1;
	}
	for (; i < length; ++i) {
		int64_t var$6 = $nc(a)->get(aOff + i);
		if (var$6 != $nc(b)->get(bOff + i)) {
			return i;
		}
	}
	return -1;
}

int32_t BufferMismatch::mismatch($DoubleBuffer* a, int32_t aOff, $DoubleBuffer* b, int32_t bOff, int32_t length) {
	$init(BufferMismatch);
	int32_t i = 0;
	bool var$0 = length > 0;
	if (var$0) {
		var$0 = $nc(a)->order() == $nc(b)->order();
	}
	if (var$0) {
		int64_t var$1 = $Double::doubleToRawLongBits(a->get(aOff));
		if (var$1 == $Double::doubleToRawLongBits(b->get(bOff))) {
			$var($ScopedMemoryAccess$Scope, var$2, a->scope());
			$var($ScopedMemoryAccess$Scope, var$3, b->scope());
			$var($Object, var$4, a->base());
			$init($ArraysSupport);
			int64_t var$5 = a->address + ($sl(aOff, $ArraysSupport::LOG2_ARRAY_DOUBLE_INDEX_SCALE));
			i = $nc(BufferMismatch::SCOPED_MEMORY_ACCESS)->vectorizedMismatch(var$2, var$3, var$4, var$5, $(b->base()), b->address + ($sl(bOff, $ArraysSupport::LOG2_ARRAY_DOUBLE_INDEX_SCALE)), length, $ArraysSupport::LOG2_ARRAY_DOUBLE_INDEX_SCALE);
		}
		if (i >= 0) {
			double av = a->get(aOff + i);
			double bv = b->get(bOff + i);
			bool var$6 = av != bv;
			if (var$6) {
				bool var$7 = !$Double::isNaN(av);
				var$6 = (var$7 || !$Double::isNaN(bv));
			}
			if (var$6) {
				return i;
			}
			++i;
		} else {
			return -1;
		}
	}
	for (; i < length; ++i) {
		double av = $nc(a)->get(aOff + i);
		double bv = $nc(b)->get(bOff + i);
		bool var$8 = av != bv;
		if (var$8) {
			bool var$9 = !$Double::isNaN(av);
			var$8 = (var$9 || !$Double::isNaN(bv));
		}
		if (var$8) {
			return i;
		}
	}
	return -1;
}

void clinit$BufferMismatch($Class* class$) {
	$assignStatic(BufferMismatch::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

BufferMismatch::BufferMismatch() {
}

$Class* BufferMismatch::load$($String* name, bool initialize) {
	$loadClass(BufferMismatch, name, initialize, &_BufferMismatch_ClassInfo_, clinit$BufferMismatch, allocate$BufferMismatch);
	return class$;
}

$Class* BufferMismatch::class$ = nullptr;

	} // nio
} // java