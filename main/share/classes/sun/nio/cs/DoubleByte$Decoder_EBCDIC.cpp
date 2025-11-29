#include <sun/nio/cs/DoubleByte$Decoder_EBCDIC.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte.h>
#include <jcpp.h>

#undef DBCS
#undef OVERFLOW
#undef SBCS
#undef SI
#undef SO
#undef UNDERFLOW

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _DoubleByte$Decoder_EBCDIC_FieldInfo_[] = {
	{"SBCS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleByte$Decoder_EBCDIC, SBCS)},
	{"DBCS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleByte$Decoder_EBCDIC, DBCS)},
	{"SO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleByte$Decoder_EBCDIC, SO)},
	{"SI", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleByte$Decoder_EBCDIC, SI)},
	{"currentState", "I", nullptr, $PRIVATE, $field(DoubleByte$Decoder_EBCDIC, currentState)},
	{}
};

$MethodInfo _DoubleByte$Decoder_EBCDIC_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;[[C[CIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Decoder_EBCDIC::*)($Charset*,$charArray2*,$chars*,int32_t,int32_t,bool)>(&DoubleByte$Decoder_EBCDIC::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[[C[CII)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Decoder_EBCDIC::*)($Charset*,$charArray2*,$chars*,int32_t,int32_t)>(&DoubleByte$Decoder_EBCDIC::init$))},
	{"decode", "([BII[C)I", nullptr, $PUBLIC},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PUBLIC},
	{"isDoubleByte", "(II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&DoubleByte$Decoder_EBCDIC::isDoubleByte))},
	{}
};

$InnerClassInfo _DoubleByte$Decoder_EBCDIC_InnerClassesInfo_[] = {
	{"sun.nio.cs.DoubleByte$Decoder_EBCDIC", "sun.nio.cs.DoubleByte", "Decoder_EBCDIC", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Decoder", "sun.nio.cs.DoubleByte", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DoubleByte$Decoder_EBCDIC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.DoubleByte$Decoder_EBCDIC",
	"sun.nio.cs.DoubleByte$Decoder",
	nullptr,
	_DoubleByte$Decoder_EBCDIC_FieldInfo_,
	_DoubleByte$Decoder_EBCDIC_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleByte$Decoder_EBCDIC_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.DoubleByte"
};

$Object* allocate$DoubleByte$Decoder_EBCDIC($Class* clazz) {
	return $of($alloc(DoubleByte$Decoder_EBCDIC));
}

void DoubleByte$Decoder_EBCDIC::init$($Charset* cs, $charArray2* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible) {
	$DoubleByte$Decoder::init$(cs, b2c, b2cSB, b2Min, b2Max, isASCIICompatible);
}

void DoubleByte$Decoder_EBCDIC::init$($Charset* cs, $charArray2* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max) {
	$DoubleByte$Decoder::init$(cs, b2c, b2cSB, b2Min, b2Max, false);
}

void DoubleByte$Decoder_EBCDIC::implReset() {
	this->currentState = DoubleByte$Decoder_EBCDIC::SBCS;
}

bool DoubleByte$Decoder_EBCDIC::isDoubleByte(int32_t b1, int32_t b2) {
	$init(DoubleByte$Decoder_EBCDIC);
	return (65 <= b1 && b1 <= 254 && 65 <= b2 && b2 <= 254) || (b1 == 64 && b2 == 64);
}

$CoderResult* DoubleByte$Decoder_EBCDIC::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
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
				int32_t inSize = 1;
				if (b1 == DoubleByte$Decoder_EBCDIC::SO) {
					if (this->currentState != DoubleByte$Decoder_EBCDIC::SBCS) {
						$assign(var$6, $CoderResult::malformedForLength(1));
						return$5 = true;
						goto $finally;
					} else {
						this->currentState = DoubleByte$Decoder_EBCDIC::DBCS;
					}
				} else if (b1 == DoubleByte$Decoder_EBCDIC::SI) {
					if (this->currentState != DoubleByte$Decoder_EBCDIC::DBCS) {
						$assign(var$6, $CoderResult::malformedForLength(1));
						return$5 = true;
						goto $finally;
					} else {
						this->currentState = DoubleByte$Decoder_EBCDIC::SBCS;
					}
				} else {
					char16_t c = 0;
					if (this->currentState == DoubleByte$Decoder_EBCDIC::SBCS) {
						c = $nc(this->b2cSB)->get(b1);
						if (c == (char16_t)0xFFFD) {
							$assign(var$6, $CoderResult::unmappableForLength(1));
							return$5 = true;
							goto $finally;
						}
					} else {
						if (sl - sp < 2) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						int32_t b2 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
						if (b2 < this->b2Min || b2 > this->b2Max || (c = $nc($nc(this->b2c)->get(b1))->get(b2 - this->b2Min)) == (char16_t)0xFFFD) {
							if (!isDoubleByte(b1, b2)) {
								$assign(var$6, $CoderResult::malformedForLength(2));
								return$5 = true;
								goto $finally;
							}
							$assign(var$6, $CoderResult::unmappableForLength(2));
							return$5 = true;
							goto $finally;
						}
						++inSize;
					}
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
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

$CoderResult* DoubleByte$Decoder_EBCDIC::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				int32_t b1 = (int32_t)(src->get() & (uint32_t)255);
				int32_t inSize = 1;
				if (b1 == DoubleByte$Decoder_EBCDIC::SO) {
					if (this->currentState != DoubleByte$Decoder_EBCDIC::SBCS) {
						$assign(var$2, $CoderResult::malformedForLength(1));
						return$1 = true;
						goto $finally;
					} else {
						this->currentState = DoubleByte$Decoder_EBCDIC::DBCS;
					}
				} else if (b1 == DoubleByte$Decoder_EBCDIC::SI) {
					if (this->currentState != DoubleByte$Decoder_EBCDIC::DBCS) {
						$assign(var$2, $CoderResult::malformedForLength(1));
						return$1 = true;
						goto $finally;
					} else {
						this->currentState = DoubleByte$Decoder_EBCDIC::SBCS;
					}
				} else {
					char16_t c = (char16_t)0xFFFD;
					if (this->currentState == DoubleByte$Decoder_EBCDIC::SBCS) {
						c = $nc(this->b2cSB)->get(b1);
						if (c == (char16_t)0xFFFD) {
							$assign(var$2, $CoderResult::unmappableForLength(1));
							return$1 = true;
							goto $finally;
						}
					} else {
						if (src->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						int32_t b2 = (int32_t)(src->get() & (uint32_t)255);
						if (b2 < this->b2Min || b2 > this->b2Max || (c = $nc($nc(this->b2c)->get(b1))->get(b2 - this->b2Min)) == (char16_t)0xFFFD) {
							if (!isDoubleByte(b1, b2)) {
								$assign(var$2, $CoderResult::malformedForLength(2));
								return$1 = true;
								goto $finally;
							}
							$assign(var$2, $CoderResult::unmappableForLength(2));
							return$1 = true;
							goto $finally;
						}
						++inSize;
					}
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
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

int32_t DoubleByte$Decoder_EBCDIC::decode($bytes* src, int32_t sp, int32_t len, $chars* dst) {
	int32_t dp = 0;
	int32_t sl = sp + len;
	this->currentState = DoubleByte$Decoder_EBCDIC::SBCS;
	char16_t repl = $nc($(replacement()))->charAt(0);
	while (sp < sl) {
		int32_t b1 = (int32_t)($nc(src)->get(sp++) & (uint32_t)255);
		if (b1 == DoubleByte$Decoder_EBCDIC::SO) {
			if (this->currentState != DoubleByte$Decoder_EBCDIC::SBCS) {
				$nc(dst)->set(dp++, repl);
			} else {
				this->currentState = DoubleByte$Decoder_EBCDIC::DBCS;
			}
		} else if (b1 == DoubleByte$Decoder_EBCDIC::SI) {
			if (this->currentState != DoubleByte$Decoder_EBCDIC::DBCS) {
				$nc(dst)->set(dp++, repl);
			} else {
				this->currentState = DoubleByte$Decoder_EBCDIC::SBCS;
			}
		} else {
			char16_t c = (char16_t)0xFFFD;
			if (this->currentState == DoubleByte$Decoder_EBCDIC::SBCS) {
				c = $nc(this->b2cSB)->get(b1);
				if (c == (char16_t)0xFFFD) {
					c = repl;
				}
			} else if (sl == sp) {
				c = repl;
			} else {
				int32_t b2 = (int32_t)(src->get(sp++) & (uint32_t)255);
				if (b2 < this->b2Min || b2 > this->b2Max || (c = $nc($nc(this->b2c)->get(b1))->get(b2 - this->b2Min)) == (char16_t)0xFFFD) {
					c = repl;
				}
			}
			$nc(dst)->set(dp++, c);
		}
	}
	return dp;
}

DoubleByte$Decoder_EBCDIC::DoubleByte$Decoder_EBCDIC() {
}

$Class* DoubleByte$Decoder_EBCDIC::load$($String* name, bool initialize) {
	$loadClass(DoubleByte$Decoder_EBCDIC, name, initialize, &_DoubleByte$Decoder_EBCDIC_ClassInfo_, allocate$DoubleByte$Decoder_EBCDIC);
	return class$;
}

$Class* DoubleByte$Decoder_EBCDIC::class$ = nullptr;

		} // cs
	} // nio
} // sun