#include <sun/nio/cs/HKSCS$Encoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/util/Arrays.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/HKSCS.h>
#include <sun/nio/cs/StringUTF16.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef C2B_UNMAPPABLE
#undef MAX_SINGLEBYTE
#undef OVERFLOW
#undef UNDERFLOW

using $charArray2 = $Array<char16_t, 2>;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Arrays = ::java::util::Arrays;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $StringUTF16 = ::sun::nio::cs::StringUTF16;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _HKSCS$Encoder_FieldInfo_[] = {
	{"big5Enc", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE, $field(HKSCS$Encoder, big5Enc)},
	{"c2bBmp", "[[C", nullptr, $PRIVATE, $field(HKSCS$Encoder, c2bBmp)},
	{"c2bSupp", "[[C", nullptr, $PRIVATE, $field(HKSCS$Encoder, c2bSupp)},
	{"repl", "[B", nullptr, $PRIVATE, $field(HKSCS$Encoder, repl)},
	{"C2B_UNMAPPABLE", "[C", nullptr, $STATIC, $staticField(HKSCS$Encoder, C2B_UNMAPPABLE)},
	{}
};

$MethodInfo _HKSCS$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;Lsun/nio/cs/DoubleByte$Encoder;[[C[[C)V", nullptr, $PROTECTED, $method(static_cast<void(HKSCS$Encoder::*)($Charset*,$DoubleByte$Encoder*,$charArray2*,$charArray2*)>(&HKSCS$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encode", "([CII[B)I", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeBig5", "(C)I", nullptr, $PUBLIC},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeChar", "(C)I", nullptr, $PUBLIC},
	{"encodeFromUTF16", "([BII[B)I", nullptr, $PUBLIC},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeSupp", "(I)I", nullptr, $PUBLIC},
	{"implReplaceWith", "([B)V", nullptr, $PROTECTED},
	{"initc2b", "([[C[Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($charArray2*,$StringArray*,$String*)>(&HKSCS$Encoder::initc2b))},
	{}
};

$InnerClassInfo _HKSCS$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.HKSCS$Encoder", "sun.nio.cs.HKSCS", "Encoder", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HKSCS$Encoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.HKSCS$Encoder",
	"sun.nio.cs.DoubleByte$Encoder",
	nullptr,
	_HKSCS$Encoder_FieldInfo_,
	_HKSCS$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_HKSCS$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.HKSCS"
};

$Object* allocate$HKSCS$Encoder($Class* clazz) {
	return $of($alloc(HKSCS$Encoder));
}

$chars* HKSCS$Encoder::C2B_UNMAPPABLE = nullptr;

void HKSCS$Encoder::init$($Charset* cs, $DoubleByte$Encoder* big5Enc, $charArray2* c2bBmp, $charArray2* c2bSupp) {
	$DoubleByte$Encoder::init$(cs, nullptr, nullptr, true);
	$set(this, repl, replacement());
	$set(this, big5Enc, big5Enc);
	$set(this, c2bBmp, c2bBmp);
	$set(this, c2bSupp, c2bSupp);
}

int32_t HKSCS$Encoder::encodeBig5(char16_t ch) {
	return $nc(this->big5Enc)->encodeChar(ch);
}

int32_t HKSCS$Encoder::encodeChar(char16_t ch) {
	int32_t bb = $nc($nc(this->c2bBmp)->get(ch >> 8))->get((int32_t)(ch & (uint32_t)255));
	if (bb == 0x0000FFFD) {
		return encodeBig5(ch);
	}
	return bb;
}

int32_t HKSCS$Encoder::encodeSupp(int32_t cp) {
	if (((int32_t)(cp & (uint32_t)0x000F0000)) != 0x00020000) {
		return 0x0000FFFD;
	}
	return $nc($nc(this->c2bSupp)->get((int32_t)((cp >> 8) & (uint32_t)255)))->get((int32_t)(cp & (uint32_t)255));
}

bool HKSCS$Encoder::canEncode(char16_t c) {
	return encodeChar(c) != 0x0000FFFD;
}

$CoderResult* HKSCS$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				char16_t c = $nc(sa)->get(sp);
				int32_t inSize = 1;
				int32_t bb = encodeChar(c);
				if (bb == 0x0000FFFD) {
					if ($Character::isSurrogate(c)) {
						int32_t cp = 0;
						if ((cp = $nc($(sgp()))->parse(c, sa, sp, sl)) < 0) {
							$assign(var$6, $nc(this->sgp$)->error());
							return$5 = true;
							goto $finally;
						}
						bb = encodeSupp(cp);
						if (bb == 0x0000FFFD) {
							$assign(var$6, $CoderResult::unmappableForLength(2));
							return$5 = true;
							goto $finally;
						}
						inSize = 2;
					} else {
						$assign(var$6, $CoderResult::unmappableForLength(1));
						return$5 = true;
						goto $finally;
					}
				}
				if (bb > $DoubleByte$Encoder::MAX_SINGLEBYTE) {
					if (dl - dp < 2) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)(bb >> 8));
					da->set(dp++, (int8_t)bb);
				} else {
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)bb);
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

$CoderResult* HKSCS$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				int32_t inSize = 1;
				char16_t c = src->get();
				int32_t bb = encodeChar(c);
				if (bb == 0x0000FFFD) {
					if ($Character::isSurrogate(c)) {
						int32_t cp = 0;
						if ((cp = $nc($(sgp()))->parse(c, src)) < 0) {
							$assign(var$2, $nc(this->sgp$)->error());
							return$1 = true;
							goto $finally;
						}
						bb = encodeSupp(cp);
						if (bb == 0x0000FFFD) {
							$assign(var$2, $CoderResult::unmappableForLength(2));
							return$1 = true;
							goto $finally;
						}
						inSize = 2;
					} else {
						$assign(var$2, $CoderResult::unmappableForLength(1));
						return$1 = true;
						goto $finally;
					}
				}
				if (bb > $DoubleByte$Encoder::MAX_SINGLEBYTE) {
					if ($nc(dst)->remaining() < 2) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)(bb >> 8));
					dst->put((int8_t)(bb));
				} else {
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)bb);
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

$CoderResult* HKSCS$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

void HKSCS$Encoder::implReplaceWith($bytes* newReplacement) {
	$set(this, repl, newReplacement);
}

int32_t HKSCS$Encoder::encode($chars* src, int32_t sp, int32_t len, $bytes* dst) {
	int32_t dp = 0;
	int32_t sl = sp + len;
	while (sp < sl) {
		char16_t c = $nc(src)->get(sp++);
		int32_t bb = encodeChar(c);
		if (bb == 0x0000FFFD) {
			bool var$1 = !$Character::isHighSurrogate(c) || sp == sl;
			bool var$0 = var$1 || !$Character::isLowSurrogate(src->get(sp));
			if (var$0 || (bb = encodeSupp($Character::toCodePoint(c, src->get(sp++)))) == 0x0000FFFD) {
				$nc(dst)->set(dp++, $nc(this->repl)->get(0));
				if ($nc(this->repl)->length > 1) {
					dst->set(dp++, $nc(this->repl)->get(1));
				}
				continue;
			}
		}
		if (bb > $DoubleByte$Encoder::MAX_SINGLEBYTE) {
			$nc(dst)->set(dp++, (int8_t)(bb >> 8));
			dst->set(dp++, (int8_t)bb);
		} else {
			$nc(dst)->set(dp++, (int8_t)bb);
		}
	}
	return dp;
}

int32_t HKSCS$Encoder::encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
	int32_t dp = 0;
	int32_t sl = sp + len;
	int32_t dl = $nc(dst)->length;
	while (sp < sl) {
		char16_t c = $StringUTF16::getChar(src, sp++);
		int32_t bb = encodeChar(c);
		if (bb == 0x0000FFFD) {
			bool var$1 = !$Character::isHighSurrogate(c) || sp == sl;
			bool var$0 = var$1 || !$Character::isLowSurrogate($StringUTF16::getChar(src, sp));
			if (var$0 || (bb = encodeSupp($Character::toCodePoint(c, $StringUTF16::getChar(src, sp++)))) == 0x0000FFFD) {
				dst->set(dp++, $nc(this->repl)->get(0));
				if ($nc(this->repl)->length > 1) {
					dst->set(dp++, $nc(this->repl)->get(1));
				}
				continue;
			}
		}
		if (bb > $DoubleByte$Encoder::MAX_SINGLEBYTE) {
			dst->set(dp++, (int8_t)(bb >> 8));
			dst->set(dp++, (int8_t)bb);
		} else {
			dst->set(dp++, (int8_t)bb);
		}
	}
	return dp;
}

void HKSCS$Encoder::initc2b($charArray2* c2b, $StringArray* b2cStr, $String* pua) {
	$init(HKSCS$Encoder);
	$useLocalCurrentObjectStackCache();
	int32_t b2Min = 64;
	$Arrays::fill(static_cast<$ObjectArray*>(static_cast<$Object*>(static_cast<$charArray2*>(c2b))), $of(HKSCS$Encoder::C2B_UNMAPPABLE));
	for (int32_t b1 = 0; b1 < 256; ++b1) {
		$var($String, s, $nc(b2cStr)->get(b1));
		if (s == nullptr) {
			continue;
		}
		for (int32_t i = 0; i < $nc(s)->length(); ++i) {
			char16_t c = s->charAt(i);
			if (c == (char16_t)0xFFFD) {
				continue;
			}
			int32_t hi = c >> 8;
			if ($nc(c2b)->get(hi) == HKSCS$Encoder::C2B_UNMAPPABLE) {
				c2b->set(hi, $$new($chars, 256));
				$Arrays::fill(c2b->get(hi), (char16_t)0x0000FFFD);
			}
			$nc($nc(c2b)->get(hi))->set((int32_t)(c & (uint32_t)255), (char16_t)((b1 << 8) | (i + b2Min)));
		}
	}
	if (pua != nullptr) {
		char16_t c = (char16_t)0xE000;
		for (int32_t i = 0; i < pua->length(); ++i) {
			char16_t bb = pua->charAt(i);
			if (bb != (char16_t)0xFFFD) {
				int32_t hi = c >> 8;
				if ($nc(c2b)->get(hi) == HKSCS$Encoder::C2B_UNMAPPABLE) {
					c2b->set(hi, $$new($chars, 256));
					$Arrays::fill(c2b->get(hi), (char16_t)0x0000FFFD);
				}
				$nc($nc(c2b)->get(hi))->set((int32_t)(c & (uint32_t)255), bb);
			}
			++c;
		}
	}
}

void clinit$HKSCS$Encoder($Class* class$) {
	$assignStatic(HKSCS$Encoder::C2B_UNMAPPABLE, $new($chars, 256));
	{
		$Arrays::fill(HKSCS$Encoder::C2B_UNMAPPABLE, (char16_t)0x0000FFFD);
	}
}

HKSCS$Encoder::HKSCS$Encoder() {
}

$Class* HKSCS$Encoder::load$($String* name, bool initialize) {
	$loadClass(HKSCS$Encoder, name, initialize, &_HKSCS$Encoder_ClassInfo_, clinit$HKSCS$Encoder, allocate$HKSCS$Encoder);
	return class$;
}

$Class* HKSCS$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun