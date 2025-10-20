#include <sun/nio/cs/DoubleByte$Encoder_EBCDIC.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte.h>
#include <sun/nio/cs/StringUTF16.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef DBCS
#undef MAX_SINGLEBYTE
#undef OVERFLOW
#undef SBCS
#undef SI
#undef SO
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DoubleByte = ::sun::nio::cs::DoubleByte;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $StringUTF16 = ::sun::nio::cs::StringUTF16;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _DoubleByte$Encoder_EBCDIC_FieldInfo_[] = {
	{"SBCS", "I", nullptr, $STATIC | $FINAL, $constField(DoubleByte$Encoder_EBCDIC, SBCS)},
	{"DBCS", "I", nullptr, $STATIC | $FINAL, $constField(DoubleByte$Encoder_EBCDIC, DBCS)},
	{"SO", "B", nullptr, $STATIC | $FINAL, $constField(DoubleByte$Encoder_EBCDIC, SO)},
	{"SI", "B", nullptr, $STATIC | $FINAL, $constField(DoubleByte$Encoder_EBCDIC, SI)},
	{"currentState", "I", nullptr, $PROTECTED, $field(DoubleByte$Encoder_EBCDIC, currentState)},
	{}
};

$MethodInfo _DoubleByte$Encoder_EBCDIC_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;[C[CZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Encoder_EBCDIC::*)($Charset*,$chars*,$chars*,bool)>(&DoubleByte$Encoder_EBCDIC::init$))},
	{"encode", "([CII[B)I", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeFromLatin1", "([BII[B)I", nullptr, $PUBLIC},
	{"encodeFromUTF16", "([BII[B)I", nullptr, $PUBLIC},
	{"implFlush", "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DoubleByte$Encoder_EBCDIC_InnerClassesInfo_[] = {
	{"sun.nio.cs.DoubleByte$Encoder_EBCDIC", "sun.nio.cs.DoubleByte", "Encoder_EBCDIC", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DoubleByte$Encoder_EBCDIC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.DoubleByte$Encoder_EBCDIC",
	"sun.nio.cs.DoubleByte$Encoder",
	nullptr,
	_DoubleByte$Encoder_EBCDIC_FieldInfo_,
	_DoubleByte$Encoder_EBCDIC_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleByte$Encoder_EBCDIC_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.DoubleByte"
};

$Object* allocate$DoubleByte$Encoder_EBCDIC($Class* clazz) {
	return $of($alloc(DoubleByte$Encoder_EBCDIC));
}

void DoubleByte$Encoder_EBCDIC::init$($Charset* cs, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible) {
	$DoubleByte$Encoder::init$(cs, 4.0f, 5.0f, $$new($bytes, {(int8_t)111}), c2b, c2bIndex, isASCIICompatible);
	this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
}

void DoubleByte$Encoder_EBCDIC::implReset() {
	this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
}

$CoderResult* DoubleByte$Encoder_EBCDIC::implFlush($ByteBuffer* out) {
	if (this->currentState == DoubleByte$Encoder_EBCDIC::DBCS) {
		if ($nc(out)->remaining() < 1) {
			$init($CoderResult);
			return $CoderResult::OVERFLOW;
		}
		$nc(out)->put(DoubleByte$Encoder_EBCDIC::SI);
	}
	implReset();
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* DoubleByte$Encoder_EBCDIC::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
				int32_t bb = encodeChar(c);
				if (bb == 0x0000FFFD) {
					if ($Character::isSurrogate(c)) {
						if ($nc($(sgp()))->parse(c, sa, sp, sl) < 0) {
							$assign(var$6, $nc(this->sgp$)->error());
							return$5 = true;
							goto $finally;
						}
						$assign(var$6, $nc(this->sgp$)->unmappableResult());
						return$5 = true;
						goto $finally;
					}
					$assign(var$6, $CoderResult::unmappableForLength(1));
					return$5 = true;
					goto $finally;
				}
				if (bb > this->MAX_SINGLEBYTE) {
					if (this->currentState == DoubleByte$Encoder_EBCDIC::SBCS) {
						if (dl - dp < 1) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						this->currentState = DoubleByte$Encoder_EBCDIC::DBCS;
						$nc(da)->set(dp++, DoubleByte$Encoder_EBCDIC::SO);
					}
					if (dl - dp < 2) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)(bb >> 8));
					da->set(dp++, (int8_t)bb);
				} else {
					if (this->currentState == DoubleByte$Encoder_EBCDIC::DBCS) {
						if (dl - dp < 1) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
						$nc(da)->set(dp++, DoubleByte$Encoder_EBCDIC::SI);
					}
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)bb);
				}
				++sp;
			}
			$init($CoderResult);
			$assign(var$6, $CoderResult::UNDERFLOW);
			return$5 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$4, $catch());
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

$CoderResult* DoubleByte$Encoder_EBCDIC::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = src->get();
				int32_t bb = encodeChar(c);
				if (bb == 0x0000FFFD) {
					if ($Character::isSurrogate(c)) {
						if ($nc($(sgp()))->parse(c, src) < 0) {
							$assign(var$2, $nc(this->sgp$)->error());
							return$1 = true;
							goto $finally;
						}
						$assign(var$2, $nc(this->sgp$)->unmappableResult());
						return$1 = true;
						goto $finally;
					}
					$assign(var$2, $CoderResult::unmappableForLength(1));
					return$1 = true;
					goto $finally;
				}
				if (bb > this->MAX_SINGLEBYTE) {
					if (this->currentState == DoubleByte$Encoder_EBCDIC::SBCS) {
						if ($nc(dst)->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						this->currentState = DoubleByte$Encoder_EBCDIC::DBCS;
						$nc(dst)->put(DoubleByte$Encoder_EBCDIC::SO);
					}
					if ($nc(dst)->remaining() < 2) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)(bb >> 8));
					dst->put((int8_t)(bb));
				} else {
					if (this->currentState == DoubleByte$Encoder_EBCDIC::DBCS) {
						if ($nc(dst)->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
						$nc(dst)->put(DoubleByte$Encoder_EBCDIC::SI);
					}
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)bb);
				}
				++mark;
			}
			$init($CoderResult);
			$assign(var$2, $CoderResult::UNDERFLOW);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

int32_t DoubleByte$Encoder_EBCDIC::encode($chars* src, int32_t sp, int32_t len, $bytes* dst) {
	int32_t dp = 0;
	int32_t sl = sp + len;
	while (sp < sl) {
		char16_t c = $nc(src)->get(sp++);
		int32_t bb = encodeChar(c);
		if (bb == 0x0000FFFD) {
			bool var$0 = $Character::isHighSurrogate(c) && sp < sl;
			if (var$0 && $Character::isLowSurrogate(src->get(sp))) {
				++sp;
			}
			$nc(dst)->set(dp++, $nc(this->repl)->get(0));
			if ($nc(this->repl)->length > 1) {
				dst->set(dp++, $nc(this->repl)->get(1));
			}
			continue;
		}
		if (bb > this->MAX_SINGLEBYTE) {
			if (this->currentState == DoubleByte$Encoder_EBCDIC::SBCS) {
				this->currentState = DoubleByte$Encoder_EBCDIC::DBCS;
				$nc(dst)->set(dp++, DoubleByte$Encoder_EBCDIC::SO);
			}
			$nc(dst)->set(dp++, (int8_t)(bb >> 8));
			dst->set(dp++, (int8_t)bb);
		} else {
			if (this->currentState == DoubleByte$Encoder_EBCDIC::DBCS) {
				this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
				$nc(dst)->set(dp++, DoubleByte$Encoder_EBCDIC::SI);
			}
			$nc(dst)->set(dp++, (int8_t)bb);
		}
	}
	if (this->currentState == DoubleByte$Encoder_EBCDIC::DBCS) {
		this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
		$nc(dst)->set(dp++, DoubleByte$Encoder_EBCDIC::SI);
	}
	return dp;
}

int32_t DoubleByte$Encoder_EBCDIC::encodeFromLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
	int32_t dp = 0;
	int32_t sl = sp + len;
	while (sp < sl) {
		char16_t c = (char16_t)((int32_t)($nc(src)->get(sp++) & (uint32_t)255));
		int32_t bb = encodeChar(c);
		if (bb == 0x0000FFFD) {
			$nc(dst)->set(dp++, $nc(this->repl)->get(0));
			if ($nc(this->repl)->length > 1) {
				dst->set(dp++, $nc(this->repl)->get(1));
			}
			continue;
		}
		if (bb > this->MAX_SINGLEBYTE) {
			if (this->currentState == DoubleByte$Encoder_EBCDIC::SBCS) {
				this->currentState = DoubleByte$Encoder_EBCDIC::DBCS;
				$nc(dst)->set(dp++, DoubleByte$Encoder_EBCDIC::SO);
			}
			$nc(dst)->set(dp++, (int8_t)(bb >> 8));
			dst->set(dp++, (int8_t)bb);
		} else {
			if (this->currentState == DoubleByte$Encoder_EBCDIC::DBCS) {
				this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
				$nc(dst)->set(dp++, DoubleByte$Encoder_EBCDIC::SI);
			}
			$nc(dst)->set(dp++, (int8_t)bb);
		}
	}
	if (this->currentState == DoubleByte$Encoder_EBCDIC::DBCS) {
		this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
		$nc(dst)->set(dp++, DoubleByte$Encoder_EBCDIC::SI);
	}
	return dp;
}

int32_t DoubleByte$Encoder_EBCDIC::encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
	int32_t dp = 0;
	int32_t sl = sp + len;
	while (sp < sl) {
		char16_t c = $StringUTF16::getChar(src, sp++);
		int32_t bb = encodeChar(c);
		if (bb == 0x0000FFFD) {
			bool var$0 = $Character::isHighSurrogate(c) && sp < sl;
			if (var$0 && $Character::isLowSurrogate($StringUTF16::getChar(src, sp))) {
				++sp;
			}
			$nc(dst)->set(dp++, $nc(this->repl)->get(0));
			if ($nc(this->repl)->length > 1) {
				dst->set(dp++, $nc(this->repl)->get(1));
			}
			continue;
		}
		if (bb > this->MAX_SINGLEBYTE) {
			if (this->currentState == DoubleByte$Encoder_EBCDIC::SBCS) {
				this->currentState = DoubleByte$Encoder_EBCDIC::DBCS;
				$nc(dst)->set(dp++, DoubleByte$Encoder_EBCDIC::SO);
			}
			$nc(dst)->set(dp++, (int8_t)(bb >> 8));
			dst->set(dp++, (int8_t)bb);
		} else {
			if (this->currentState == DoubleByte$Encoder_EBCDIC::DBCS) {
				this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
				$nc(dst)->set(dp++, DoubleByte$Encoder_EBCDIC::SI);
			}
			$nc(dst)->set(dp++, (int8_t)bb);
		}
	}
	if (this->currentState == DoubleByte$Encoder_EBCDIC::DBCS) {
		this->currentState = DoubleByte$Encoder_EBCDIC::SBCS;
		$nc(dst)->set(dp++, DoubleByte$Encoder_EBCDIC::SI);
	}
	return dp;
}

DoubleByte$Encoder_EBCDIC::DoubleByte$Encoder_EBCDIC() {
}

$Class* DoubleByte$Encoder_EBCDIC::load$($String* name, bool initialize) {
	$loadClass(DoubleByte$Encoder_EBCDIC, name, initialize, &_DoubleByte$Encoder_EBCDIC_ClassInfo_, allocate$DoubleByte$Encoder_EBCDIC);
	return class$;
}

$Class* DoubleByte$Encoder_EBCDIC::class$ = nullptr;

		} // cs
	} // nio
} // sun