#include <sun/nio/cs/CESU_8$Decoder.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/cs/CESU_8.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW
#undef REPLACE
#undef JLA

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ArrayDecoder = ::sun::nio::cs::ArrayDecoder;
using $CESU_8 = ::sun::nio::cs::CESU_8;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _CESU_8$Decoder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CESU_8$Decoder, $assertionsDisabled)},
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CESU_8$Decoder, JLA)},
	{}
};

$MethodInfo _CESU_8$Decoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(CESU_8$Decoder::*)($Charset*)>(&CESU_8$Decoder::init$))},
	{"decode", "([BII[C)I", nullptr, $PUBLIC},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(CESU_8$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&CESU_8$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(CESU_8$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&CESU_8$Decoder::decodeBufferLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"getByteBuffer", "(Ljava/nio/ByteBuffer;[BI)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ByteBuffer*(*)($ByteBuffer*,$bytes*,int32_t)>(&CESU_8$Decoder::getByteBuffer))},
	{"isMalformed3", "(III)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t,int32_t)>(&CESU_8$Decoder::isMalformed3))},
	{"isMalformed3_2", "(II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&CESU_8$Decoder::isMalformed3_2))},
	{"isNotContinuation", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&CESU_8$Decoder::isNotContinuation))},
	{"malformed", "(Ljava/nio/ByteBuffer;ILjava/nio/CharBuffer;II)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($ByteBuffer*,int32_t,$CharBuffer*,int32_t,int32_t)>(&CESU_8$Decoder::malformed))},
	{"malformed", "(Ljava/nio/ByteBuffer;II)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($ByteBuffer*,int32_t,int32_t)>(&CESU_8$Decoder::malformed))},
	{"malformedForLength", "(Ljava/nio/ByteBuffer;ILjava/nio/CharBuffer;II)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($ByteBuffer*,int32_t,$CharBuffer*,int32_t,int32_t)>(&CESU_8$Decoder::malformedForLength))},
	{"malformedForLength", "(Ljava/nio/ByteBuffer;II)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($ByteBuffer*,int32_t,int32_t)>(&CESU_8$Decoder::malformedForLength))},
	{"malformedN", "(Ljava/nio/ByteBuffer;I)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($ByteBuffer*,int32_t)>(&CESU_8$Decoder::malformedN))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"xflow", "(Ljava/nio/Buffer;IILjava/nio/Buffer;II)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($Buffer*,int32_t,int32_t,$Buffer*,int32_t,int32_t)>(&CESU_8$Decoder::xflow))},
	{"xflow", "(Ljava/nio/Buffer;II)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($Buffer*,int32_t,int32_t)>(&CESU_8$Decoder::xflow))},
	{}
};

$InnerClassInfo _CESU_8$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.CESU_8$Decoder", "sun.nio.cs.CESU_8", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CESU_8$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.CESU_8$Decoder",
	"java.nio.charset.CharsetDecoder",
	"sun.nio.cs.ArrayDecoder",
	_CESU_8$Decoder_FieldInfo_,
	_CESU_8$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_CESU_8$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.CESU_8"
};

$Object* allocate$CESU_8$Decoder($Class* clazz) {
	return $of($alloc(CESU_8$Decoder));
}

int32_t CESU_8$Decoder::hashCode() {
	 return this->$CharsetDecoder::hashCode();
}

bool CESU_8$Decoder::equals(Object$* obj) {
	 return this->$CharsetDecoder::equals(obj);
}

$Object* CESU_8$Decoder::clone() {
	 return this->$CharsetDecoder::clone();
}

$String* CESU_8$Decoder::toString() {
	 return this->$CharsetDecoder::toString();
}

void CESU_8$Decoder::finalize() {
	this->$CharsetDecoder::finalize();
}

bool CESU_8$Decoder::$assertionsDisabled = false;
$JavaLangAccess* CESU_8$Decoder::JLA = nullptr;

void CESU_8$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 1.0f, 1.0f);
}

bool CESU_8$Decoder::isNotContinuation(int32_t b) {
	$init(CESU_8$Decoder);
	return ((int32_t)(b & (uint32_t)192)) != 128;
}

bool CESU_8$Decoder::isMalformed3(int32_t b1, int32_t b2, int32_t b3) {
	$init(CESU_8$Decoder);
	return (b1 == (int8_t)224 && ((int32_t)(b2 & (uint32_t)224)) == 128) || ((int32_t)(b2 & (uint32_t)192)) != 128 || ((int32_t)(b3 & (uint32_t)192)) != 128;
}

bool CESU_8$Decoder::isMalformed3_2(int32_t b1, int32_t b2) {
	$init(CESU_8$Decoder);
	return (b1 == (int8_t)224 && ((int32_t)(b2 & (uint32_t)224)) == 128) || ((int32_t)(b2 & (uint32_t)192)) != 128;
}

$CoderResult* CESU_8$Decoder::malformedN($ByteBuffer* src, int32_t nb) {
	$init(CESU_8$Decoder);
	{
		int32_t b1 = 0;
		int32_t b2 = 0;
		switch (nb) {
		case 1:
			{}
		case 2:
			{
				return $CoderResult::malformedForLength(1);
			}
		case 3:
			{
				b1 = $nc(src)->get();
				b2 = src->get();
				return $CoderResult::malformedForLength(((b1 == (int8_t)224 && ((int32_t)(b2 & (uint32_t)224)) == 128) || isNotContinuation(b2)) ? 1 : 2);
			}
		case 4:
			{
				b1 = (int32_t)(src->get() & (uint32_t)255);
				b2 = (int32_t)(src->get() & (uint32_t)255);
				if (b1 > 244 || (b1 == 240 && (b2 < 144 || b2 > 191)) || (b1 == 244 && ((int32_t)(b2 & (uint32_t)240)) != 128) || isNotContinuation(b2)) {
					return $CoderResult::malformedForLength(1);
				}
				if (isNotContinuation(src->get())) {
					return $CoderResult::malformedForLength(2);
				}
				return $CoderResult::malformedForLength(3);
			}
		default:
			{
				if (!CESU_8$Decoder::$assertionsDisabled) {
					$throwNew($AssertionError);
				}
				return nullptr;
			}
		}
	}
}

$CoderResult* CESU_8$Decoder::malformed($ByteBuffer* src, int32_t sp, $CharBuffer* dst, int32_t dp, int32_t nb) {
	$init(CESU_8$Decoder);
	$nc(src)->position(sp - src->arrayOffset());
	$var($CoderResult, cr, malformedN(src, nb));
	$CESU_8::updatePositions(src, sp, dst, dp);
	return cr;
}

$CoderResult* CESU_8$Decoder::malformed($ByteBuffer* src, int32_t mark, int32_t nb) {
	$init(CESU_8$Decoder);
	$nc(src)->position(mark);
	$var($CoderResult, cr, malformedN(src, nb));
	src->position(mark);
	return cr;
}

$CoderResult* CESU_8$Decoder::malformedForLength($ByteBuffer* src, int32_t sp, $CharBuffer* dst, int32_t dp, int32_t malformedNB) {
	$init(CESU_8$Decoder);
	$CESU_8::updatePositions(src, sp, dst, dp);
	return $CoderResult::malformedForLength(malformedNB);
}

$CoderResult* CESU_8$Decoder::malformedForLength($ByteBuffer* src, int32_t mark, int32_t malformedNB) {
	$init(CESU_8$Decoder);
	$nc(src)->position(mark);
	return $CoderResult::malformedForLength(malformedNB);
}

$CoderResult* CESU_8$Decoder::xflow($Buffer* src, int32_t sp, int32_t sl, $Buffer* dst, int32_t dp, int32_t nb) {
	$init(CESU_8$Decoder);
	$CESU_8::updatePositions(src, sp, dst, dp);
	$init($CoderResult);
	return (nb == 0 || sl - sp < nb) ? $CoderResult::UNDERFLOW : $CoderResult::OVERFLOW;
}

$CoderResult* CESU_8$Decoder::xflow($Buffer* src, int32_t mark, int32_t nb) {
	$init(CESU_8$Decoder);
	$nc(src)->position(mark);
	$init($CoderResult);
	return (nb == 0 || src->remaining() < nb) ? $CoderResult::UNDERFLOW : $CoderResult::OVERFLOW;
}

$CoderResult* CESU_8$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
	$var($bytes, sa, $cast($bytes, $nc(src)->array()));
	int32_t soff = src->arrayOffset();
	int32_t sp = soff + src->position();
	int32_t sl = soff + src->limit();
	$var($chars, da, $cast($chars, $nc(dst)->array()));
	int32_t doff = dst->arrayOffset();
	int32_t dp = doff + dst->position();
	int32_t dl = doff + dst->limit();
	int32_t n = $nc(CESU_8$Decoder::JLA)->decodeASCII(sa, sp, da, dp, $Math::min(sl - sp, dl - dp));
	sp += n;
	dp += n;
	while (sp < sl) {
		int32_t b1 = $nc(sa)->get(sp);
		if (b1 >= 0) {
			if (dp >= dl) {
				return xflow(src, sp, sl, dst, dp, 1);
			}
			$nc(da)->set(dp++, (char16_t)b1);
			++sp;
		} else if ((b1 >> 5) == -2 && ((int32_t)(b1 & (uint32_t)30)) != 0) {
			if (sl - sp < 2 || dp >= dl) {
				return xflow(src, sp, sl, dst, dp, 2);
			}
			int32_t b2 = $nc(sa)->get(sp + 1);
			if (isNotContinuation(b2)) {
				return malformedForLength(src, sp, dst, dp, 1);
			}
			$nc(da)->set(dp++, (char16_t)(((b1 << 6) ^ b2) ^ (((int8_t)192 << 6) ^ ((int8_t)128 << 0))));
			sp += 2;
		} else if ((b1 >> 4) == -2) {
			int32_t srcRemaining = sl - sp;
			if (srcRemaining < 3 || dp >= dl) {
				if (srcRemaining > 1 && isMalformed3_2(b1, $nc(sa)->get(sp + 1))) {
					return malformedForLength(src, sp, dst, dp, 1);
				}
				return xflow(src, sp, sl, dst, dp, 3);
			}
			int32_t b2 = $nc(sa)->get(sp + 1);
			int32_t b3 = sa->get(sp + 2);
			if (isMalformed3(b1, b2, b3)) {
				return malformed(src, sp, dst, dp, 3);
			}
			$nc(da)->set(dp++, (char16_t)(((b1 << 12) ^ (b2 << 6)) ^ (b3 ^ ((((int8_t)224 << 12) ^ ((int8_t)128 << 6)) ^ ((int8_t)128 << 0)))));
			sp += 3;
		} else {
			return malformed(src, sp, dst, dp, 1);
		}
	}
	return xflow(src, sp, sl, dst, dp, 0);
}

$CoderResult* CESU_8$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	int32_t mark = $nc(src)->position();
	int32_t limit = src->limit();
	while (mark < limit) {
		int32_t b1 = src->get();
		if (b1 >= 0) {
			if ($nc(dst)->remaining() < 1) {
				return xflow(src, mark, 1);
			}
			$nc(dst)->put((char16_t)b1);
			++mark;
		} else if ((b1 >> 5) == -2 && ((int32_t)(b1 & (uint32_t)30)) != 0) {
			if (limit - mark < 2 || $nc(dst)->remaining() < 1) {
				return xflow(src, mark, 2);
			}
			int32_t b2 = $nc(src)->get();
			if (isNotContinuation(b2)) {
				return malformedForLength(src, mark, 1);
			}
			$nc(dst)->put((char16_t)(((b1 << 6) ^ b2) ^ (((int8_t)192 << 6) ^ ((int8_t)128 << 0))));
			mark += 2;
		} else if ((b1 >> 4) == -2) {
			int32_t srcRemaining = limit - mark;
			if (srcRemaining < 3 || $nc(dst)->remaining() < 1) {
				if (srcRemaining > 1 && isMalformed3_2(b1, $nc(src)->get())) {
					return malformedForLength(src, mark, 1);
				}
				return xflow(src, mark, 3);
			}
			int32_t b2 = $nc(src)->get();
			int32_t b3 = src->get();
			if (isMalformed3(b1, b2, b3)) {
				return malformed(src, mark, 3);
			}
			$nc(dst)->put((char16_t)(((b1 << 12) ^ (b2 << 6)) ^ (b3 ^ ((((int8_t)224 << 12) ^ ((int8_t)128 << 6)) ^ ((int8_t)128 << 0)))));
			mark += 3;
		} else {
			return malformed(src, mark, 1);
		}
	}
	return xflow(src, mark, 0);
}

$CoderResult* CESU_8$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

$ByteBuffer* CESU_8$Decoder::getByteBuffer($ByteBuffer* bb$renamed, $bytes* ba, int32_t sp) {
	$init(CESU_8$Decoder);
	$var($ByteBuffer, bb, bb$renamed);
	if (bb == nullptr) {
		$assign(bb, $ByteBuffer::wrap(ba));
	}
	$nc(bb)->position(sp);
	return bb;
}

int32_t CESU_8$Decoder::decode($bytes* sa, int32_t sp, int32_t len, $chars* da) {
	int32_t sl = sp + len;
	int32_t dp = 0;
	int32_t dlASCII = $Math::min(len, $nc(da)->length);
	$var($ByteBuffer, bb, nullptr);
	while (dp < dlASCII && $nc(sa)->get(sp) >= 0) {
		$nc(da)->set(dp++, (char16_t)sa->get(sp++));
	}
	while (sp < sl) {
		int32_t b1 = $nc(sa)->get(sp++);
		if (b1 >= 0) {
			$nc(da)->set(dp++, (char16_t)b1);
		} else if ((b1 >> 5) == -2 && ((int32_t)(b1 & (uint32_t)30)) != 0) {
			if (sp < sl) {
				int32_t b2 = $nc(sa)->get(sp++);
				if (isNotContinuation(b2)) {
					$init($CodingErrorAction);
					if (malformedInputAction() != $CodingErrorAction::REPLACE) {
						return -1;
					}
					$nc(da)->set(dp++, $nc($(replacement()))->charAt(0));
					--sp;
				} else {
					$nc(da)->set(dp++, (char16_t)(((b1 << 6) ^ b2) ^ (((int8_t)192 << 6) ^ ((int8_t)128 << 0))));
				}
				continue;
			}
			$init($CodingErrorAction);
			if (malformedInputAction() != $CodingErrorAction::REPLACE) {
				return -1;
			}
			$nc(da)->set(dp++, $nc($(replacement()))->charAt(0));
			return dp;
		} else if ((b1 >> 4) == -2) {
			if (sp + 1 < sl) {
				int32_t b2 = $nc(sa)->get(sp++);
				int32_t b3 = sa->get(sp++);
				if (isMalformed3(b1, b2, b3)) {
					$init($CodingErrorAction);
					if (malformedInputAction() != $CodingErrorAction::REPLACE) {
						return -1;
					}
					$nc(da)->set(dp++, $nc($(replacement()))->charAt(0));
					sp -= 3;
					$assign(bb, getByteBuffer(bb, sa, sp));
					sp += $nc($(malformedN(bb, 3)))->length();
				} else {
					$nc(da)->set(dp++, (char16_t)(((b1 << 12) ^ (b2 << 6)) ^ (b3 ^ ((((int8_t)224 << 12) ^ ((int8_t)128 << 6)) ^ ((int8_t)128 << 0)))));
				}
				continue;
			}
			$init($CodingErrorAction);
			if (malformedInputAction() != $CodingErrorAction::REPLACE) {
				return -1;
			}
			if (sp < sl && isMalformed3_2(b1, $nc(sa)->get(sp))) {
				$nc(da)->set(dp++, $nc($(replacement()))->charAt(0));
				continue;
			}
			$nc(da)->set(dp++, $nc($(replacement()))->charAt(0));
			return dp;
		} else {
			$init($CodingErrorAction);
			if (malformedInputAction() != $CodingErrorAction::REPLACE) {
				return -1;
			}
			$nc(da)->set(dp++, $nc($(replacement()))->charAt(0));
		}
	}
	return dp;
}

void clinit$CESU_8$Decoder($Class* class$) {
	$load($CESU_8);
	CESU_8$Decoder::$assertionsDisabled = !$CESU_8::class$->desiredAssertionStatus();
	$assignStatic(CESU_8$Decoder::JLA, $SharedSecrets::getJavaLangAccess());
}

CESU_8$Decoder::CESU_8$Decoder() {
}

$Class* CESU_8$Decoder::load$($String* name, bool initialize) {
	$loadClass(CESU_8$Decoder, name, initialize, &_CESU_8$Decoder_ClassInfo_, clinit$CESU_8$Decoder, allocate$CESU_8$Decoder);
	return class$;
}

$Class* CESU_8$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun