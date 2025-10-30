#include <sun/nio/cs/UTF_8$Encoder.h>

#include <java/lang/Math.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <sun/nio/cs/UTF_8.h>
#include <jcpp.h>

#undef OVERFLOW
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
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;
using $UTF_8 = ::sun::nio::cs::UTF_8;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _UTF_8$Encoder_FieldInfo_[] = {
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE, $field(UTF_8$Encoder, sgp)},
	{}
};

$MethodInfo _UTF_8$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(UTF_8$Encoder::*)($Charset*)>(&UTF_8$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(UTF_8$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&UTF_8$Encoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(UTF_8$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&UTF_8$Encoder::encodeBufferLoop))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED | $FINAL},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{"overflow", "(Ljava/nio/CharBuffer;ILjava/nio/ByteBuffer;I)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($CharBuffer*,int32_t,$ByteBuffer*,int32_t)>(&UTF_8$Encoder::overflow))},
	{"overflow", "(Ljava/nio/CharBuffer;I)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CoderResult*(*)($CharBuffer*,int32_t)>(&UTF_8$Encoder::overflow))},
	{}
};

$InnerClassInfo _UTF_8$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_8$Encoder", "sun.nio.cs.UTF_8", "Encoder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _UTF_8$Encoder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.cs.UTF_8$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_UTF_8$Encoder_FieldInfo_,
	_UTF_8$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_8$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_8"
};

$Object* allocate$UTF_8$Encoder($Class* clazz) {
	return $of($alloc(UTF_8$Encoder));
}

void UTF_8$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 1.1f, 3.0f);
}

bool UTF_8$Encoder::canEncode(char16_t c) {
	return !$Character::isSurrogate(c);
}

bool UTF_8$Encoder::isLegalReplacement($bytes* repl) {
	return (($nc(repl)->length == 1 && repl->get(0) >= 0) || $CharsetEncoder::isLegalReplacement(repl));
}

$CoderResult* UTF_8$Encoder::overflow($CharBuffer* src, int32_t sp, $ByteBuffer* dst, int32_t dp) {
	$init(UTF_8$Encoder);
	$UTF_8::updatePositions(src, sp, dst, dp);
	$init($CoderResult);
	return $CoderResult::OVERFLOW;
}

$CoderResult* UTF_8$Encoder::overflow($CharBuffer* src, int32_t mark) {
	$init(UTF_8$Encoder);
	$nc(src)->position(mark);
	$init($CoderResult);
	return $CoderResult::OVERFLOW;
}

$CoderResult* UTF_8$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
				$UTF_8::updatePositions(src, sp, dst, dp);
				return $nc(this->sgp)->error();
			}
			if (dl - dp < 4) {
				return overflow(src, sp, dst, dp);
			}
			$nc(da)->set(dp++, (int8_t)(240 | (uc >> 18)));
			da->set(dp++, (int8_t)(128 | ((int32_t)((uc >> 12) & (uint32_t)63))));
			da->set(dp++, (int8_t)(128 | ((int32_t)((uc >> 6) & (uint32_t)63))));
			da->set(dp++, (int8_t)(128 | ((int32_t)(uc & (uint32_t)63))));
			++sp;
		} else {
			if (dl - dp < 3) {
				return overflow(src, sp, dst, dp);
			}
			$nc(da)->set(dp++, (int8_t)(224 | (c >> 12)));
			da->set(dp++, (int8_t)(128 | ((int32_t)((c >> 6) & (uint32_t)63))));
			da->set(dp++, (int8_t)(128 | ((int32_t)(c & (uint32_t)63))));
		}
		++sp;
	}
	$UTF_8::updatePositions(src, sp, dst, dp);
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* UTF_8$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
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
			if ($nc(dst)->remaining() < 4) {
				return overflow(src, mark);
			}
			$nc(dst)->put((int8_t)(240 | (uc >> 18)));
			dst->put((int8_t)(128 | ((int32_t)((uc >> 12) & (uint32_t)63))));
			dst->put((int8_t)(128 | ((int32_t)((uc >> 6) & (uint32_t)63))));
			dst->put((int8_t)(128 | ((int32_t)(uc & (uint32_t)63))));
			++mark;
		} else {
			if ($nc(dst)->remaining() < 3) {
				return overflow(src, mark);
			}
			$nc(dst)->put((int8_t)(224 | (c >> 12)));
			dst->put((int8_t)(128 | ((int32_t)((c >> 6) & (uint32_t)63))));
			dst->put((int8_t)(128 | ((int32_t)(c & (uint32_t)63))));
		}
		++mark;
	}
	src->position(mark);
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* UTF_8$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

UTF_8$Encoder::UTF_8$Encoder() {
}

$Class* UTF_8$Encoder::load$($String* name, bool initialize) {
	$loadClass(UTF_8$Encoder, name, initialize, &_UTF_8$Encoder_ClassInfo_, allocate$UTF_8$Encoder);
	return class$;
}

$Class* UTF_8$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun