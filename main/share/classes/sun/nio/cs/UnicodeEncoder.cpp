#include <sun/nio/cs/UnicodeEncoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef BIG
#undef BYTE_ORDER_MARK
#undef LITTLE
#undef OVERFLOW
#undef REVERSED_MARK
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _UnicodeEncoder_FieldInfo_[] = {
	{"BYTE_ORDER_MARK", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UnicodeEncoder, BYTE_ORDER_MARK)},
	{"REVERSED_MARK", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UnicodeEncoder, REVERSED_MARK)},
	{"BIG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UnicodeEncoder, BIG)},
	{"LITTLE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UnicodeEncoder, LITTLE)},
	{"byteOrder", "I", nullptr, $PRIVATE, $field(UnicodeEncoder, byteOrder)},
	{"usesMark", "Z", nullptr, $PRIVATE, $field(UnicodeEncoder, usesMark)},
	{"needsMark", "Z", nullptr, $PRIVATE, $field(UnicodeEncoder, needsMark)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(UnicodeEncoder, sgp)},
	{}
};

$MethodInfo _UnicodeEncoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;IZ)V", nullptr, $PROTECTED, $method(static_cast<void(UnicodeEncoder::*)($Charset*,int32_t,bool)>(&UnicodeEncoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{"put", "(CLjava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(UnicodeEncoder::*)(char16_t,$ByteBuffer*)>(&UnicodeEncoder::put))},
	{}
};

$ClassInfo _UnicodeEncoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.nio.cs.UnicodeEncoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_UnicodeEncoder_FieldInfo_,
	_UnicodeEncoder_MethodInfo_
};

$Object* allocate$UnicodeEncoder($Class* clazz) {
	return $of($alloc(UnicodeEncoder));
}

void UnicodeEncoder::init$($Charset* cs, int32_t bo, bool m) {
	$useLocalCurrentObjectStackCache();
	$CharsetEncoder::init$(cs, 2.0f, m ? 4.0f : 2.0f, ((bo == UnicodeEncoder::BIG) ? $$new($bytes, {
		(int8_t)255,
		(int8_t)253
	}) : $$new($bytes, {
		(int8_t)253,
		(int8_t)255
	})));
	$set(this, sgp, $new($Surrogate$Parser));
	this->usesMark = (this->needsMark = m);
	this->byteOrder = bo;
}

void UnicodeEncoder::put(char16_t c, $ByteBuffer* dst) {
	if (this->byteOrder == UnicodeEncoder::BIG) {
		$nc(dst)->put((int8_t)(c >> 8));
		dst->put((int8_t)((int32_t)(c & (uint32_t)255)));
	} else {
		$nc(dst)->put((int8_t)((int32_t)(c & (uint32_t)255)));
		dst->put((int8_t)(c >> 8));
	}
}

$CoderResult* UnicodeEncoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	if (this->needsMark && src->hasRemaining()) {
		if ($nc(dst)->remaining() < 2) {
			$init($CoderResult);
			return $CoderResult::OVERFLOW;
		}
		put(UnicodeEncoder::BYTE_ORDER_MARK, dst);
		this->needsMark = false;
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = src->get();
				if (!$Character::isSurrogate(c)) {
					if ($nc(dst)->remaining() < 2) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					++mark;
					put(c, dst);
					continue;
				}
				int32_t d = $nc(this->sgp)->parse(c, src);
				if (d < 0) {
					$assign(var$2, $nc(this->sgp)->error());
					return$1 = true;
					goto $finally;
				}
				if ($nc(dst)->remaining() < 4) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				mark += 2;
				put($Character::highSurrogate(d), dst);
				put($Character::lowSurrogate(d), dst);
			}
			$init($CoderResult);
			$assign(var$2, $CoderResult::UNDERFLOW);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			src->position(mark);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void UnicodeEncoder::implReset() {
	this->needsMark = this->usesMark;
}

bool UnicodeEncoder::canEncode(char16_t c) {
	return !$Character::isSurrogate(c);
}

UnicodeEncoder::UnicodeEncoder() {
}

$Class* UnicodeEncoder::load$($String* name, bool initialize) {
	$loadClass(UnicodeEncoder, name, initialize, &_UnicodeEncoder_ClassInfo_, allocate$UnicodeEncoder);
	return class$;
}

$Class* UnicodeEncoder::class$ = nullptr;

		} // cs
	} // nio
} // sun