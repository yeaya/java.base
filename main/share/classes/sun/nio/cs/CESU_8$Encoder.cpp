#include <sun/nio/cs/CESU_8$Encoder.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
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
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <sun/nio/cs/CESU_8.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef OVERFLOW
#undef REPLACE
#undef UNDERFLOW

using $Character = ::java::lang::Character;
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
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $ArrayEncoder = ::sun::nio::cs::ArrayEncoder;
using $CESU_8 = ::sun::nio::cs::CESU_8;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _CESU_8$Encoder_FieldInfo_[] = {
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE, $field(CESU_8$Encoder, sgp)},
	{"c2", "[C", nullptr, $PRIVATE, $field(CESU_8$Encoder, c2)},
	{}
};

$MethodInfo _CESU_8$Encoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(CESU_8$Encoder::*)($Charset*)>(&CESU_8$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encode", "([CII[B)I", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(CESU_8$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&CESU_8$Encoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(CESU_8$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&CESU_8$Encoder::encodeBufferLoop))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED | $FINAL},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{"overflow", "(Ljava/nio/CharBuffer;ILjava/nio/ByteBuffer;I)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($CharBuffer*,int32_t,$ByteBuffer*,int32_t)>(&CESU_8$Encoder::overflow))},
	{"overflow", "(Ljava/nio/CharBuffer;I)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($CharBuffer*,int32_t)>(&CESU_8$Encoder::overflow))},
	{"to3Bytes", "([BIC)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,char16_t)>(&CESU_8$Encoder::to3Bytes))},
	{"to3Bytes", "(Ljava/nio/ByteBuffer;C)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ByteBuffer*,char16_t)>(&CESU_8$Encoder::to3Bytes))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CESU_8$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.CESU_8$Encoder", "sun.nio.cs.CESU_8", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CESU_8$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.CESU_8$Encoder",
	"java.nio.charset.CharsetEncoder",
	"sun.nio.cs.ArrayEncoder",
	_CESU_8$Encoder_FieldInfo_,
	_CESU_8$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_CESU_8$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.CESU_8"
};

$Object* allocate$CESU_8$Encoder($Class* clazz) {
	return $of($alloc(CESU_8$Encoder));
}

int32_t CESU_8$Encoder::hashCode() {
	 return this->$CharsetEncoder::hashCode();
}

bool CESU_8$Encoder::equals(Object$* obj) {
	 return this->$CharsetEncoder::equals(obj);
}

$Object* CESU_8$Encoder::clone() {
	 return this->$CharsetEncoder::clone();
}

$String* CESU_8$Encoder::toString() {
	 return this->$CharsetEncoder::toString();
}

void CESU_8$Encoder::finalize() {
	this->$CharsetEncoder::finalize();
}

void CESU_8$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 1.1f, 3.0f);
}

bool CESU_8$Encoder::canEncode(char16_t c) {
	return !$Character::isSurrogate(c);
}

bool CESU_8$Encoder::isLegalReplacement($bytes* repl) {
	return (($nc(repl)->length == 1 && repl->get(0) >= 0) || $CharsetEncoder::isLegalReplacement(repl));
}

$CoderResult* CESU_8$Encoder::overflow($CharBuffer* src, int32_t sp, $ByteBuffer* dst, int32_t dp) {
	$init(CESU_8$Encoder);
	$CESU_8::updatePositions(src, sp, dst, dp);
	$init($CoderResult);
	return $CoderResult::OVERFLOW;
}

$CoderResult* CESU_8$Encoder::overflow($CharBuffer* src, int32_t mark) {
	$init(CESU_8$Encoder);
	$nc(src)->position(mark);
	$init($CoderResult);
	return $CoderResult::OVERFLOW;
}

void CESU_8$Encoder::to3Bytes($bytes* da, int32_t dp, char16_t c) {
	$init(CESU_8$Encoder);
	$nc(da)->set(dp, (int8_t)(224 | (c >> 12)));
	da->set(dp + 1, (int8_t)(128 | ((int32_t)((c >> 6) & (uint32_t)63))));
	da->set(dp + 2, (int8_t)(128 | ((int32_t)(c & (uint32_t)63))));
}

void CESU_8$Encoder::to3Bytes($ByteBuffer* dst, char16_t c) {
	$init(CESU_8$Encoder);
	$nc(dst)->put((int8_t)(224 | (c >> 12)));
	dst->put((int8_t)(128 | ((int32_t)((c >> 6) & (uint32_t)63))));
	dst->put((int8_t)(128 | ((int32_t)(c & (uint32_t)63))));
}

$CoderResult* CESU_8$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($chars, sa, $cast($chars, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	$var($bytes, da, $cast($bytes, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	int32_t dlASCII = dp + $Math::min(sl - sp, dl - dp);
	while (dp < dlASCII && $nc(sa)->get(sp) < (char16_t)0x80) {
		$nc(da)->set(dp++, (int8_t)sa->get(sp++));
	}
	while (sp < sl) {
		char16_t c = $nc(sa)->get(sp);
		if (c < 128) {
			if (dp >= dl) {
				return overflow(src, sp, dst, dp);
			}
			$nc(da)->set(dp++, (int8_t)c);
		} else if (c < 2048) {
			if (dl - dp < 2) {
				return overflow(src, sp, dst, dp);
			}
			$nc(da)->set(dp++, (int8_t)(192 | (c >> 6)));
			da->set(dp++, (int8_t)(128 | ((int32_t)(c & (uint32_t)63))));
		} else if ($Character::isSurrogate(c)) {
			if (this->sgp == nullptr) {
				$set(this, sgp, $new($Surrogate$Parser));
			}
			int32_t uc = $nc(this->sgp)->parse(c, sa, sp, sl);
			if (uc < 0) {
				$CESU_8::updatePositions(src, sp, dst, dp);
				return $nc(this->sgp)->error();
			}
			if (dl - dp < 6) {
				return overflow(src, sp, dst, dp);
			}
			to3Bytes(da, dp, $Character::highSurrogate(uc));
			dp += 3;
			to3Bytes(da, dp, $Character::lowSurrogate(uc));
			dp += 3;
			++sp;
		} else {
			if (dl - dp < 3) {
				return overflow(src, sp, dst, dp);
			}
			to3Bytes(da, dp, c);
			dp += 3;
		}
		++sp;
	}
	$CESU_8::updatePositions(src, sp, dst, dp);
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* CESU_8$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	int32_t mark = $nc(src)->position();
	while (src->hasRemaining()) {
		char16_t c = src->get();
		if (c < 128) {
			if (!$nc(dst)->hasRemaining()) {
				return overflow(src, mark);
			}
			$nc(dst)->put((int8_t)c);
		} else if (c < 2048) {
			if ($nc(dst)->remaining() < 2) {
				return overflow(src, mark);
			}
			$nc(dst)->put((int8_t)(192 | (c >> 6)));
			dst->put((int8_t)(128 | ((int32_t)(c & (uint32_t)63))));
		} else if ($Character::isSurrogate(c)) {
			if (this->sgp == nullptr) {
				$set(this, sgp, $new($Surrogate$Parser));
			}
			int32_t uc = $nc(this->sgp)->parse(c, src);
			if (uc < 0) {
				src->position(mark);
				return $nc(this->sgp)->error();
			}
			if ($nc(dst)->remaining() < 6) {
				return overflow(src, mark);
			}
			to3Bytes(dst, $Character::highSurrogate(uc));
			to3Bytes(dst, $Character::lowSurrogate(uc));
			++mark;
		} else {
			if ($nc(dst)->remaining() < 3) {
				return overflow(src, mark);
			}
			to3Bytes(dst, c);
		}
		++mark;
	}
	src->position(mark);
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* CESU_8$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

int32_t CESU_8$Encoder::encode($chars* sa, int32_t sp, int32_t len, $bytes* da) {
	$useLocalCurrentObjectStackCache();
	int32_t sl = sp + len;
	int32_t dp = 0;
	int32_t dlASCII = dp + $Math::min(len, $nc(da)->length);
	while (dp < dlASCII && $nc(sa)->get(sp) < (char16_t)0x80) {
		$nc(da)->set(dp++, (int8_t)sa->get(sp++));
	}
	while (sp < sl) {
		char16_t c = $nc(sa)->get(sp++);
		if (c < 128) {
			$nc(da)->set(dp++, (int8_t)c);
		} else if (c < 2048) {
			$nc(da)->set(dp++, (int8_t)(192 | (c >> 6)));
			da->set(dp++, (int8_t)(128 | ((int32_t)(c & (uint32_t)63))));
		} else if ($Character::isSurrogate(c)) {
			if (this->sgp == nullptr) {
				$set(this, sgp, $new($Surrogate$Parser));
			}
			int32_t uc = $nc(this->sgp)->parse(c, sa, sp - 1, sl);
			if (uc < 0) {
				$init($CodingErrorAction);
				if (malformedInputAction() != $CodingErrorAction::REPLACE) {
					return -1;
				}
				$nc(da)->set(dp++, $nc($(replacement()))->get(0));
			} else {
				to3Bytes(da, dp, $Character::highSurrogate(uc));
				dp += 3;
				to3Bytes(da, dp, $Character::lowSurrogate(uc));
				dp += 3;
				++sp;
			}
		} else {
			to3Bytes(da, dp, c);
			dp += 3;
		}
	}
	return dp;
}

CESU_8$Encoder::CESU_8$Encoder() {
}

$Class* CESU_8$Encoder::load$($String* name, bool initialize) {
	$loadClass(CESU_8$Encoder, name, initialize, &_CESU_8$Encoder_ClassInfo_, allocate$CESU_8$Encoder);
	return class$;
}

$Class* CESU_8$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun