#include <sun/nio/cs/HKSCS$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte.h>
#include <sun/nio/cs/HKSCS.h>
#include <sun/nio/cs/Surrogate.h>
#include <jcpp.h>

#undef B2C_UNMAPPABLE
#undef OVERFLOW
#undef UNDERFLOW

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DoubleByte = ::sun::nio::cs::DoubleByte;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $HKSCS = ::sun::nio::cs::HKSCS;
using $Surrogate = ::sun::nio::cs::Surrogate;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _HKSCS$Decoder_FieldInfo_[] = {
	{"b2Min", "I", nullptr, $STATIC, $staticField(HKSCS$Decoder, b2Min)},
	{"b2Max", "I", nullptr, $STATIC, $staticField(HKSCS$Decoder, b2Max)},
	{"b2cBmp", "[[C", nullptr, $PRIVATE, $field(HKSCS$Decoder, b2cBmp)},
	{"b2cSupp", "[[C", nullptr, $PRIVATE, $field(HKSCS$Decoder, b2cSupp)},
	{"big5Dec", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE, $field(HKSCS$Decoder, big5Dec)},
	{}
};

$MethodInfo _HKSCS$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;Lsun/nio/cs/DoubleByte$Decoder;[[C[[C)V", nullptr, $PROTECTED, $method(static_cast<void(HKSCS$Decoder::*)($Charset*,$DoubleByte$Decoder*,$charArray2*,$charArray2*)>(&HKSCS$Decoder::init$))},
	{"decode", "([BII[C)I", nullptr, $PUBLIC},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decodeBig5", "(II)C", nullptr, $PUBLIC},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decodeDouble", "(II)C", nullptr, $PUBLIC},
	{"decodeDoubleEx", "(II)C", nullptr, $PUBLIC},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"decodeSingle", "(I)C", nullptr, $PUBLIC},
	{"initb2c", "([[C[Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($charArray2*,$StringArray*)>(&HKSCS$Decoder::initb2c))},
	{}
};

$InnerClassInfo _HKSCS$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.HKSCS$Decoder", "sun.nio.cs.HKSCS", "Decoder", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Decoder", "sun.nio.cs.DoubleByte", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HKSCS$Decoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.HKSCS$Decoder",
	"sun.nio.cs.DoubleByte$Decoder",
	nullptr,
	_HKSCS$Decoder_FieldInfo_,
	_HKSCS$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_HKSCS$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.HKSCS"
};

$Object* allocate$HKSCS$Decoder($Class* clazz) {
	return $of($alloc(HKSCS$Decoder));
}

int32_t HKSCS$Decoder::b2Min = 0;
int32_t HKSCS$Decoder::b2Max = 0;

void HKSCS$Decoder::init$($Charset* cs, $DoubleByte$Decoder* big5Dec, $charArray2* b2cBmp, $charArray2* b2cSupp) {
	$DoubleByte$Decoder::init$(cs, 0.5f, 1.0f, nullptr, nullptr, 0, 0, true);
	$set(this, big5Dec, big5Dec);
	$set(this, b2cBmp, b2cBmp);
	$set(this, b2cSupp, b2cSupp);
}

char16_t HKSCS$Decoder::decodeSingle(int32_t b) {
	return $nc(this->big5Dec)->decodeSingle(b);
}

char16_t HKSCS$Decoder::decodeBig5(int32_t b1, int32_t b2) {
	return $nc(this->big5Dec)->decodeDouble(b1, b2);
}

char16_t HKSCS$Decoder::decodeDouble(int32_t b1, int32_t b2) {
	return $nc($nc(this->b2cBmp)->get(b1))->get(b2 - HKSCS$Decoder::b2Min);
}

char16_t HKSCS$Decoder::decodeDoubleEx(int32_t b1, int32_t b2) {
	return $nc($nc(this->b2cSupp)->get(b1))->get(b2 - HKSCS$Decoder::b2Min);
}

$CoderResult* HKSCS$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, sa, $cast($bytes, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	$var($chars, da, $cast($chars, $nc(dst)->array()));
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
				int32_t b1 = (int32_t)($nc(sa)->get(sp) & (uint32_t)255);
				char16_t c = decodeSingle(b1);
				int32_t inSize = 1;
				int32_t outSize = 1;
				$var($chars, cc, nullptr);
				if (c == (char16_t)0xFFFD) {
					if (sl - sp < 2) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					int32_t b2 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
					++inSize;
					if (b2 < HKSCS$Decoder::b2Min || b2 > HKSCS$Decoder::b2Max) {
						$assign(var$6, $CoderResult::unmappableForLength(2));
						return$5 = true;
						goto $finally;
					}
					c = decodeDouble(b1, b2);
					if (c == (char16_t)0xFFFD) {
						c = decodeDoubleEx(b1, b2);
						if (c == (char16_t)0xFFFD) {
							c = decodeBig5(b1, b2);
							if (c == (char16_t)0xFFFD) {
								$assign(var$6, $CoderResult::unmappableForLength(2));
								return$5 = true;
								goto $finally;
							}
						} else {
							outSize = 2;
						}
					}
				}
				if (dl - dp < outSize) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				if (outSize == 2) {
					$nc(da)->set(dp++, $Surrogate::high(0x00020000 + c));
					da->set(dp++, $Surrogate::low(0x00020000 + c));
				} else {
					$nc(da)->set(dp++, c);
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

$CoderResult* HKSCS$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				$var($chars, cc, nullptr);
				int32_t b1 = (int32_t)(src->get() & (uint32_t)255);
				int32_t inSize = 1;
				int32_t outSize = 1;
				char16_t c = decodeSingle(b1);
				if (c == (char16_t)0xFFFD) {
					if (src->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					int32_t b2 = (int32_t)(src->get() & (uint32_t)255);
					++inSize;
					if (b2 < HKSCS$Decoder::b2Min || b2 > HKSCS$Decoder::b2Max) {
						$assign(var$2, $CoderResult::unmappableForLength(2));
						return$1 = true;
						goto $finally;
					}
					c = decodeDouble(b1, b2);
					if (c == (char16_t)0xFFFD) {
						c = decodeDoubleEx(b1, b2);
						if (c == (char16_t)0xFFFD) {
							c = decodeBig5(b1, b2);
							if (c == (char16_t)0xFFFD) {
								$assign(var$2, $CoderResult::unmappableForLength(2));
								return$1 = true;
								goto $finally;
							}
						} else {
							outSize = 2;
						}
					}
				}
				if ($nc(dst)->remaining() < outSize) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				if (outSize == 2) {
					$nc(dst)->put($Surrogate::high(0x00020000 + c));
					dst->put($Surrogate::low(0x00020000 + c));
				} else {
					$nc(dst)->put(c);
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

int32_t HKSCS$Decoder::decode($bytes* src, int32_t sp, int32_t len, $chars* dst) {
	int32_t dp = 0;
	int32_t sl = sp + len;
	char16_t repl = $nc($(replacement()))->charAt(0);
	while (sp < sl) {
		int32_t b1 = (int32_t)($nc(src)->get(sp++) & (uint32_t)255);
		char16_t c = decodeSingle(b1);
		if (c == (char16_t)0xFFFD) {
			if (sl == sp) {
				c = repl;
			} else {
				int32_t b2 = (int32_t)(src->get(sp++) & (uint32_t)255);
				if (b2 < HKSCS$Decoder::b2Min || b2 > HKSCS$Decoder::b2Max) {
					c = repl;
				} else if ((c = decodeDouble(b1, b2)) == (char16_t)0xFFFD) {
					c = decodeDoubleEx(b1, b2);
					if (c == (char16_t)0xFFFD) {
						c = decodeBig5(b1, b2);
						if (c == (char16_t)0xFFFD) {
							c = repl;
						}
					} else {
						$nc(dst)->set(dp++, $Surrogate::high(0x00020000 + c));
						dst->set(dp++, $Surrogate::low(0x00020000 + c));
						continue;
					}
				}
			}
		}
		$nc(dst)->set(dp++, c);
	}
	return dp;
}

$CoderResult* HKSCS$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

void HKSCS$Decoder::initb2c($charArray2* b2c, $StringArray* b2cStr) {
	$init(HKSCS$Decoder);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(b2cStr)->length; ++i) {
		if (b2cStr->get(i) == nullptr) {
			$init($DoubleByte);
			$nc(b2c)->set(i, $DoubleByte::B2C_UNMAPPABLE);
		} else {
			$nc(b2c)->set(i, $($nc(b2cStr->get(i))->toCharArray()));
		}
	}
}

void clinit$HKSCS$Decoder($Class* class$) {
	HKSCS$Decoder::b2Min = 64;
	HKSCS$Decoder::b2Max = 254;
}

HKSCS$Decoder::HKSCS$Decoder() {
}

$Class* HKSCS$Decoder::load$($String* name, bool initialize) {
	$loadClass(HKSCS$Decoder, name, initialize, &_HKSCS$Decoder_ClassInfo_, clinit$HKSCS$Decoder, allocate$HKSCS$Decoder);
	return class$;
}

$Class* HKSCS$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun