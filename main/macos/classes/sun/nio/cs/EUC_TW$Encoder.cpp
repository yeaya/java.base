#include <sun/nio/cs/EUC_TW$Encoder.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/util/Arrays.h>
#include <sun/nio/cs/EUC_TW$Decoder.h>
#include <sun/nio/cs/EUC_TW.h>
#include <sun/nio/cs/EUC_TWMapping.h>
#include <jcpp.h>

#undef C2BSIZE
#undef C2BSUPPSIZE
#undef OVERFLOW
#undef UNDERFLOW

using $CharSequence = ::java::lang::CharSequence;
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
using $Arrays = ::java::util::Arrays;
using $EUC_TW = ::sun::nio::cs::EUC_TW;
using $EUC_TW$Decoder = ::sun::nio::cs::EUC_TW$Decoder;
using $EUC_TWMapping = ::sun::nio::cs::EUC_TWMapping;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _EUC_TW$Encoder_FieldInfo_[] = {
	{"bb", "[B", nullptr, $PRIVATE, $field(EUC_TW$Encoder, bb)},
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_TW$Encoder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_TW$Encoder, c2bIndex)},
	{"c2bSupp", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_TW$Encoder, c2bSupp)},
	{"c2bSuppIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_TW$Encoder, c2bSuppIndex)},
	{"c2bPlane", "[B", nullptr, $STATIC | $FINAL, $staticField(EUC_TW$Encoder, c2bPlane)},
	{}
};

$MethodInfo _EUC_TW$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(EUC_TW$Encoder::*)($Charset*)>(&EUC_TW$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"canEncode", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC},
	{"encode", "(CC[B)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(char16_t,char16_t,$bytes*)>(&EUC_TW$Encoder::encode))},
	{"encode", "(C[B)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(char16_t,$bytes*)>(&EUC_TW$Encoder::encode))},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(EUC_TW$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&EUC_TW$Encoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(EUC_TW$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&EUC_TW$Encoder::encodeBufferLoop))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"toEUC", "(CC[B)I", nullptr, $PUBLIC},
	{"toEUC", "(C[B)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EUC_TW$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_TW$Encoder", "sun.nio.cs.EUC_TW", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _EUC_TW$Encoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.EUC_TW$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_EUC_TW$Encoder_FieldInfo_,
	_EUC_TW$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_TW$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_TW"
};

$Object* allocate$EUC_TW$Encoder($Class* clazz) {
	return $of($alloc(EUC_TW$Encoder));
}

$chars* EUC_TW$Encoder::c2b = nullptr;
$chars* EUC_TW$Encoder::c2bIndex = nullptr;
$chars* EUC_TW$Encoder::c2bSupp = nullptr;
$chars* EUC_TW$Encoder::c2bSuppIndex = nullptr;
$bytes* EUC_TW$Encoder::c2bPlane = nullptr;

void EUC_TW$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 4.0f, 4.0f);
	$set(this, bb, $new($bytes, 4));
}

bool EUC_TW$Encoder::canEncode(char16_t c) {
	return (c <= (char16_t)0x7F || toEUC(c, this->bb) != -1);
}

bool EUC_TW$Encoder::canEncode($CharSequence* cs) {
	int32_t i = 0;
	while (i < $nc(cs)->length()) {
		char16_t c = cs->charAt(i++);
		if ($Character::isHighSurrogate(c)) {
			if (i == cs->length()) {
				return false;
			}
			char16_t low = cs->charAt(i++);
			bool var$0 = !$Character::isLowSurrogate(low);
			if (var$0 || toEUC(c, low, this->bb) == -1) {
				return false;
			}
		} else if (!canEncode(c)) {
			return false;
		}
	}
	return true;
}

int32_t EUC_TW$Encoder::toEUC(char16_t hi, char16_t low, $bytes* bb) {
	return encode(hi, low, bb);
}

int32_t EUC_TW$Encoder::toEUC(char16_t c, $bytes* bb) {
	return encode(c, bb);
}

$CoderResult* EUC_TW$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
	int32_t inSize = 0;
	int32_t outSize = 0;
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				char16_t c = $nc(sa)->get(sp);
				inSize = 1;
				if (c < 128) {
					$nc(this->bb)->set(0, (int8_t)c);
					outSize = 1;
				} else {
					outSize = toEUC(c, this->bb);
					if (outSize == -1) {
						if ($Character::isHighSurrogate(c)) {
							if ((sp + 1) == sl) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::UNDERFLOW);
								return$5 = true;
								goto $finally;
							}
							if (!$Character::isLowSurrogate(sa->get(sp + 1))) {
								$assign(var$6, $CoderResult::malformedForLength(1));
								return$5 = true;
								goto $finally;
							}
							outSize = toEUC(c, sa->get(sp + 1), this->bb);
							inSize = 2;
						} else if ($Character::isLowSurrogate(c)) {
							$assign(var$6, $CoderResult::malformedForLength(1));
							return$5 = true;
							goto $finally;
						}
					}
				}
				if (outSize == -1) {
					$assign(var$6, $CoderResult::unmappableForLength(inSize));
					return$5 = true;
					goto $finally;
				}
				if (dl - dp < outSize) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				for (int32_t i = 0; i < outSize; ++i) {
					$nc(da)->set(dp++, $nc(this->bb)->get(i));
				}
				sp += inSize;
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

$CoderResult* EUC_TW$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t outSize = 0;
	int32_t inSize = 0;
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				inSize = 1;
				char16_t c = src->get();
				if (c < 128) {
					outSize = 1;
					$nc(this->bb)->set(0, (int8_t)c);
				} else {
					outSize = toEUC(c, this->bb);
					if (outSize == -1) {
						if ($Character::isHighSurrogate(c)) {
							if (!src->hasRemaining()) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::UNDERFLOW);
								return$1 = true;
								goto $finally;
							}
							char16_t c2 = src->get();
							if (!$Character::isLowSurrogate(c2)) {
								$assign(var$2, $CoderResult::malformedForLength(1));
								return$1 = true;
								goto $finally;
							}
							outSize = toEUC(c, c2, this->bb);
							inSize = 2;
						} else if ($Character::isLowSurrogate(c)) {
							$assign(var$2, $CoderResult::malformedForLength(1));
							return$1 = true;
							goto $finally;
						}
					}
				}
				if (outSize == -1) {
					$assign(var$2, $CoderResult::unmappableForLength(inSize));
					return$1 = true;
					goto $finally;
				}
				if ($nc(dst)->remaining() < outSize) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				for (int32_t i = 0; i < outSize; ++i) {
					$nc(dst)->put($nc(this->bb)->get(i));
				}
				mark += inSize;
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

$CoderResult* EUC_TW$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

int32_t EUC_TW$Encoder::encode(char16_t hi, char16_t low, $bytes* bb) {
	$init(EUC_TW$Encoder);
	int32_t c = $Character::toCodePoint(hi, low);
	if (((int32_t)(c & (uint32_t)0x000F0000)) != 0x00020000) {
		return -1;
	}
	c -= 0x00020000;
	int32_t index = $nc(EUC_TW$Encoder::c2bSuppIndex)->get(c >> 8);
	if (index == 0x0000FFFD) {
		return -1;
	}
	index = index + ((int32_t)(c & (uint32_t)255));
	int32_t db = $nc(EUC_TW$Encoder::c2bSupp)->get(index);
	if (db == 0x0000FFFD) {
		return -1;
	}
	int32_t p = (int32_t)(($nc(EUC_TW$Encoder::c2bPlane)->get(index) >> 4) & (uint32_t)15);
	$nc(bb)->set(0, (int8_t)142);
	bb->set(1, (int8_t)(160 | p));
	bb->set(2, (int8_t)(db >> 8));
	bb->set(3, (int8_t)db);
	return 4;
}

int32_t EUC_TW$Encoder::encode(char16_t c, $bytes* bb) {
	$init(EUC_TW$Encoder);
	int32_t index = $nc(EUC_TW$Encoder::c2bIndex)->get(c >> 8);
	if (index == 0x0000FFFD) {
		return -1;
	}
	index = index + ((int32_t)(c & (uint32_t)255));
	int32_t db = $nc(EUC_TW$Encoder::c2b)->get(index);
	if (db == 0x0000FFFD) {
		return -1;
	}
	int32_t p = (int32_t)($nc(EUC_TW$Encoder::c2bPlane)->get(index) & (uint32_t)15);
	if (p == 0) {
		$nc(bb)->set(0, (int8_t)(db >> 8));
		bb->set(1, (int8_t)db);
		return 2;
	} else {
		$nc(bb)->set(0, (int8_t)142);
		bb->set(1, (int8_t)(160 | p));
		bb->set(2, (int8_t)(db >> 8));
		bb->set(3, (int8_t)db);
		return 4;
	}
}

void clinit$EUC_TW$Encoder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t b1Min = $EUC_TW$Decoder::b1Min;
		int32_t b1Max = $EUC_TW$Decoder::b1Max;
		int32_t b2Min = $EUC_TW$Decoder::b2Min;
		int32_t b2Max = $EUC_TW$Decoder::b2Max;
		int32_t dbSegSize = $EUC_TW$Decoder::dbSegSize;
		$init($EUC_TW$Decoder);
		$var($StringArray, b2c, $EUC_TW$Decoder::b2c);
		$var($bytes, b2cIsSupp, $EUC_TW$Decoder::b2cIsSupp);
		$init($EUC_TWMapping);
		$assignStatic(EUC_TW$Encoder::c2bIndex, $EUC_TWMapping::c2bIndex);
		$assignStatic(EUC_TW$Encoder::c2bSuppIndex, $EUC_TWMapping::c2bSuppIndex);
		$var($chars, c2b0, $new($chars, $EUC_TWMapping::C2BSIZE));
		$var($chars, c2bSupp0, $new($chars, $EUC_TWMapping::C2BSUPPSIZE));
		$var($bytes, c2bPlane0, $new($bytes, $Math::max($EUC_TWMapping::C2BSIZE, $EUC_TWMapping::C2BSUPPSIZE)));
		$Arrays::fill(c2b0, (char16_t)0x0000FFFD);
		$Arrays::fill(c2bSupp0, (char16_t)0x0000FFFD);
		for (int32_t p = 0; p < $nc(b2c)->length; ++p) {
			$var($String, db, b2c->get(p));
			int32_t plane = p;
			if (plane == 7) {
				plane = 15;
			} else if (plane != 0) {
				plane = p + 1;
			}
			int32_t off = 0;
			for (int32_t b1 = b1Min; b1 <= b1Max; ++b1) {
				for (int32_t b2 = b2Min; b2 <= b2Max; ++b2) {
					char16_t c = $nc(db)->charAt(off);
					if (c != (char16_t)0xFFFD) {
						if (((int32_t)($nc(b2cIsSupp)->get(off) & (uint32_t)($sl(1, p)))) != 0) {
							int32_t index = $nc(EUC_TW$Encoder::c2bSuppIndex)->get(c >> 8) + ((int32_t)(c & (uint32_t)255));
							c2bSupp0->set(index, (char16_t)((b1 << 8) + b2));
							(*c2bPlane0)[index] |= (int8_t)(plane << 4);
						} else {
							int32_t index = $nc(EUC_TW$Encoder::c2bIndex)->get(c >> 8) + ((int32_t)(c & (uint32_t)255));
							c2b0->set(index, (char16_t)((b1 << 8) + b2));
							(*c2bPlane0)[index] |= (int8_t)plane;
						}
					}
					++off;
				}
			}
		}
		$assignStatic(EUC_TW$Encoder::c2b, c2b0);
		$assignStatic(EUC_TW$Encoder::c2bSupp, c2bSupp0);
		$assignStatic(EUC_TW$Encoder::c2bPlane, c2bPlane0);
	}
}

EUC_TW$Encoder::EUC_TW$Encoder() {
}

$Class* EUC_TW$Encoder::load$($String* name, bool initialize) {
	$loadClass(EUC_TW$Encoder, name, initialize, &_EUC_TW$Encoder_ClassInfo_, clinit$EUC_TW$Encoder, allocate$EUC_TW$Encoder);
	return class$;
}

$Class* EUC_TW$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun