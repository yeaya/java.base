#include <sun/nio/cs/EUC_JP$Encoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/EUC_JP.h>
#include <sun/nio/cs/JIS_X_0201.h>
#include <sun/nio/cs/JIS_X_0208.h>
#include <sun/nio/cs/JIS_X_0212.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0201 = ::sun::nio::cs::JIS_X_0201;
using $JIS_X_0208 = ::sun::nio::cs::JIS_X_0208;
using $JIS_X_0212 = ::sun::nio::cs::JIS_X_0212;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _EUC_JP$Encoder_FieldInfo_[] = {
	{"ENC0201", "Lsun/nio/cs/SingleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(EUC_JP$Encoder, ENC0201)},
	{"ENC0208", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(EUC_JP$Encoder, ENC0208)},
	{"ENC0212", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(EUC_JP$Encoder, ENC0212)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(EUC_JP$Encoder, sgp)},
	{"enc0201", "Lsun/nio/cs/SingleByte$Encoder;", nullptr, $PRIVATE | $FINAL, $field(EUC_JP$Encoder, enc0201)},
	{"enc0208", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $FINAL, $field(EUC_JP$Encoder, enc0208)},
	{"enc0212", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $FINAL, $field(EUC_JP$Encoder, enc0212)},
	{}
};

$MethodInfo _EUC_JP$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(EUC_JP$Encoder, init$, void, $Charset*)},
	{"<init>", "(Ljava/nio/charset/Charset;FFLsun/nio/cs/SingleByte$Encoder;Lsun/nio/cs/DoubleByte$Encoder;Lsun/nio/cs/DoubleByte$Encoder;)V", nullptr, $PROTECTED, $method(EUC_JP$Encoder, init$, void, $Charset*, float, float, $SingleByte$Encoder*, $DoubleByte$Encoder*, $DoubleByte$Encoder*)},
	{"canEncode", "(C)Z", nullptr, $PUBLIC, $virtualMethod(EUC_JP$Encoder, canEncode, bool, char16_t)},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(EUC_JP$Encoder, encodeArrayLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(EUC_JP$Encoder, encodeBufferLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
	{"encodeDouble", "(C)I", nullptr, $PROTECTED, $virtualMethod(EUC_JP$Encoder, encodeDouble, int32_t, char16_t)},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(EUC_JP$Encoder, encodeLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
	{"encodeSingle", "(C[B)I", nullptr, $PROTECTED, $virtualMethod(EUC_JP$Encoder, encodeSingle, int32_t, char16_t, $bytes*)},
	{}
};

$InnerClassInfo _EUC_JP$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_JP$Encoder", "sun.nio.cs.EUC_JP", "Encoder", $STATIC},
	{}
};

$ClassInfo _EUC_JP$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.EUC_JP$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_EUC_JP$Encoder_FieldInfo_,
	_EUC_JP$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_JP$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_JP"
};

$Object* allocate$EUC_JP$Encoder($Class* clazz) {
	return $of($alloc(EUC_JP$Encoder));
}

$SingleByte$Encoder* EUC_JP$Encoder::ENC0201 = nullptr;
$DoubleByte$Encoder* EUC_JP$Encoder::ENC0208 = nullptr;
$DoubleByte$Encoder* EUC_JP$Encoder::ENC0212 = nullptr;

void EUC_JP$Encoder::init$($Charset* cs) {
	EUC_JP$Encoder::init$(cs, 3.0f, 3.0f, EUC_JP$Encoder::ENC0201, EUC_JP$Encoder::ENC0208, EUC_JP$Encoder::ENC0212);
}

void EUC_JP$Encoder::init$($Charset* cs, float avgBpc, float maxBpc, $SingleByte$Encoder* enc0201, $DoubleByte$Encoder* enc0208, $DoubleByte$Encoder* enc0212) {
	$CharsetEncoder::init$(cs, avgBpc, maxBpc);
	$set(this, sgp, $new($Surrogate$Parser));
	$set(this, enc0201, enc0201);
	$set(this, enc0208, enc0208);
	$set(this, enc0212, enc0212);
}

bool EUC_JP$Encoder::canEncode(char16_t c) {
	$var($bytes, encodedBytes, $new($bytes, 3));
	bool var$0 = encodeSingle(c, encodedBytes) != 0;
	return var$0 || encodeDouble(c) != 0x0000FFFD;
}

int32_t EUC_JP$Encoder::encodeSingle(char16_t inputChar, $bytes* outputByte) {
	int32_t b = $nc(this->enc0201)->encode(inputChar);
	if (b == 0x0000FFFD) {
		return 0;
	}
	if (b >= 0 && b < 128) {
		$nc(outputByte)->set(0, (int8_t)b);
		return 1;
	}
	$nc(outputByte)->set(0, (int8_t)142);
	outputByte->set(1, (int8_t)b);
	return 2;
}

int32_t EUC_JP$Encoder::encodeDouble(char16_t ch) {
	int32_t b = $nc(this->enc0208)->encodeChar(ch);
	if (b != 0x0000FFFD) {
		return b + 0x00008080;
	}
	if (this->enc0212 != nullptr) {
		b = $nc(this->enc0212)->encodeChar(ch);
		if (b != 0x0000FFFD) {
			b += 0x008F8080;
		}
	}
	return b;
}

$CoderResult* EUC_JP$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
	int32_t outputSize = 0;
	$var($bytes, outputByte, nullptr);
	int32_t inputSize = 0;
	$var($bytes, tmpBuf, $new($bytes, 3));
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				$assign(outputByte, tmpBuf);
				char16_t c = $nc(sa)->get(sp);
				if ($Character::isSurrogate(c)) {
					if ($nc(this->sgp)->parse(c, sa, sp, sl) < 0) {
						$assign(var$6, $nc(this->sgp)->error());
						return$5 = true;
						goto $finally;
					}
					$assign(var$6, $nc(this->sgp)->unmappableResult());
					return$5 = true;
					goto $finally;
				}
				outputSize = encodeSingle(c, outputByte);
				if (outputSize == 0) {
					int32_t ncode = encodeDouble(c);
					if (ncode != 0x0000FFFD) {
						if (((int32_t)(ncode & (uint32_t)0x00FF0000)) == 0) {
							outputByte->set(0, (int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
							outputByte->set(1, (int8_t)((int32_t)(ncode & (uint32_t)255)));
							outputSize = 2;
						} else {
							outputByte->set(0, (int8_t)143);
							outputByte->set(1, (int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
							outputByte->set(2, (int8_t)((int32_t)(ncode & (uint32_t)255)));
							outputSize = 3;
						}
					} else {
						$assign(var$6, $CoderResult::unmappableForLength(1));
						return$5 = true;
						goto $finally;
					}
				}
				if (dl - dp < outputSize) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				for (int32_t i = 0; i < outputSize; ++i) {
					$nc(da)->set(dp++, outputByte->get(i));
				}
				++sp;
			}
			$init($CoderResult);
			$assign(var$6, $CoderResult::UNDERFLOW);
			return$5 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$4, var$7);
		} $finally: {
			src->position(sp - src->arrayOffset());
			dst->position(dp - dst->arrayOffset());
		}
		if (var$4 != nullptr) {
			$throw(var$4);
		}
		if (return$5) {
			return var$6;
		}
	}
	$shouldNotReachHere();
}

$CoderResult* EUC_JP$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t outputSize = 0;
	$var($bytes, outputByte, nullptr);
	int32_t inputSize = 0;
	$var($bytes, tmpBuf, $new($bytes, 3));
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				$assign(outputByte, tmpBuf);
				char16_t c = src->get();
				if ($Character::isSurrogate(c)) {
					if ($nc(this->sgp)->parse(c, src) < 0) {
						$assign(var$2, $nc(this->sgp)->error());
						return$1 = true;
						goto $finally;
					}
					$assign(var$2, $nc(this->sgp)->unmappableResult());
					return$1 = true;
					goto $finally;
				}
				outputSize = encodeSingle(c, outputByte);
				if (outputSize == 0) {
					int32_t ncode = encodeDouble(c);
					if (ncode != 0x0000FFFD) {
						if (((int32_t)(ncode & (uint32_t)0x00FF0000)) == 0) {
							outputByte->set(0, (int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
							outputByte->set(1, (int8_t)((int32_t)(ncode & (uint32_t)255)));
							outputSize = 2;
						} else {
							outputByte->set(0, (int8_t)143);
							outputByte->set(1, (int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
							outputByte->set(2, (int8_t)((int32_t)(ncode & (uint32_t)255)));
							outputSize = 3;
						}
					} else {
						$assign(var$2, $CoderResult::unmappableForLength(1));
						return$1 = true;
						goto $finally;
					}
				}
				if ($nc(dst)->remaining() < outputSize) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				for (int32_t i = 0; i < outputSize; ++i) {
					$nc(dst)->put(outputByte->get(i));
				}
				++mark;
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

$CoderResult* EUC_JP$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

void clinit$EUC_JP$Encoder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(EUC_JP$Encoder::ENC0201, $cast($SingleByte$Encoder, $$new($JIS_X_0201)->newEncoder()));
	$assignStatic(EUC_JP$Encoder::ENC0208, $cast($DoubleByte$Encoder, $$new($JIS_X_0208)->newEncoder()));
	$assignStatic(EUC_JP$Encoder::ENC0212, $cast($DoubleByte$Encoder, $$new($JIS_X_0212)->newEncoder()));
}

EUC_JP$Encoder::EUC_JP$Encoder() {
}

$Class* EUC_JP$Encoder::load$($String* name, bool initialize) {
	$loadClass(EUC_JP$Encoder, name, initialize, &_EUC_JP$Encoder_ClassInfo_, clinit$EUC_JP$Encoder, allocate$EUC_JP$Encoder);
	return class$;
}

$Class* EUC_JP$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun