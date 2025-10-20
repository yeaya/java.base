#include <sun/nio/cs/DoubleByte$Encoder.h>

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
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/util/Arrays.h>
#include <sun/nio/cs/DoubleByte.h>
#include <sun/nio/cs/StringUTF16.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef MAX_SINGLEBYTE
#undef OVERFLOW
#undef UNDERFLOW

using $charArray2 = $Array<char16_t, 2>;
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
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Arrays = ::java::util::Arrays;
using $ArrayEncoder = ::sun::nio::cs::ArrayEncoder;
using $DoubleByte = ::sun::nio::cs::DoubleByte;
using $StringUTF16 = ::sun::nio::cs::StringUTF16;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _DoubleByte$Encoder_FieldInfo_[] = {
	{"MAX_SINGLEBYTE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DoubleByte$Encoder, MAX_SINGLEBYTE)},
	{"c2b", "[C", nullptr, $PRIVATE | $FINAL, $field(DoubleByte$Encoder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $FINAL, $field(DoubleByte$Encoder, c2bIndex)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PROTECTED, $field(DoubleByte$Encoder, sgp$)},
	{"isASCIICompatible", "Z", nullptr, $FINAL, $field(DoubleByte$Encoder, isASCIICompatible$)},
	{"repl", "[B", nullptr, $PROTECTED, $field(DoubleByte$Encoder, repl)},
	{}
};

$MethodInfo _DoubleByte$Encoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/charset/Charset;[C[C)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Encoder::*)($Charset*,$chars*,$chars*)>(&DoubleByte$Encoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[C[CZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Encoder::*)($Charset*,$chars*,$chars*,bool)>(&DoubleByte$Encoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;FF[B[C[CZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Encoder::*)($Charset*,float,float,$bytes*,$chars*,$chars*,bool)>(&DoubleByte$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encode", "([CII[B)I", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeChar", "(C)I", nullptr, $PUBLIC},
	{"encodeFromLatin1", "([BII[B)I", nullptr, $PUBLIC},
	{"encodeFromUTF16", "([BII[B)I", nullptr, $PUBLIC},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReplaceWith", "([B)V", nullptr, $PROTECTED},
	{"initC2B", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II[C[C)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*,$String*,$String*,$String*,int32_t,int32_t,$chars*,$chars*)>(&DoubleByte$Encoder::initC2B))},
	{"isASCIICompatible", "()Z", nullptr, $PUBLIC},
	{"sgp", "()Lsun/nio/cs/Surrogate$Parser;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DoubleByte$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DoubleByte$Encoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.DoubleByte$Encoder",
	"java.nio.charset.CharsetEncoder",
	"sun.nio.cs.ArrayEncoder",
	_DoubleByte$Encoder_FieldInfo_,
	_DoubleByte$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleByte$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.DoubleByte"
};

$Object* allocate$DoubleByte$Encoder($Class* clazz) {
	return $of($alloc(DoubleByte$Encoder));
}

int32_t DoubleByte$Encoder::hashCode() {
	 return this->$CharsetEncoder::hashCode();
}

bool DoubleByte$Encoder::equals(Object$* obj) {
	 return this->$CharsetEncoder::equals(obj);
}

$Object* DoubleByte$Encoder::clone() {
	 return this->$CharsetEncoder::clone();
}

$String* DoubleByte$Encoder::toString() {
	 return this->$CharsetEncoder::toString();
}

void DoubleByte$Encoder::finalize() {
	this->$CharsetEncoder::finalize();
}

void DoubleByte$Encoder::init$($Charset* cs, $chars* c2b, $chars* c2bIndex) {
	DoubleByte$Encoder::init$(cs, c2b, c2bIndex, false);
}

void DoubleByte$Encoder::init$($Charset* cs, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible) {
	$CharsetEncoder::init$(cs, 2.0f, 2.0f);
	$set(this, repl, replacement());
	$set(this, c2b, c2b);
	$set(this, c2bIndex, c2bIndex);
	this->isASCIICompatible$ = isASCIICompatible;
}

void DoubleByte$Encoder::init$($Charset* cs, float avg, float max, $bytes* repl, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible) {
	$CharsetEncoder::init$(cs, avg, max, repl);
	$set(this, repl, replacement());
	$set(this, c2b, c2b);
	$set(this, c2bIndex, c2bIndex);
	this->isASCIICompatible$ = isASCIICompatible;
}

bool DoubleByte$Encoder::canEncode(char16_t c) {
	return encodeChar(c) != 0x0000FFFD;
}

$Surrogate$Parser* DoubleByte$Encoder::sgp() {
	if (this->sgp$ == nullptr) {
		$set(this, sgp$, $new($Surrogate$Parser));
	}
	return this->sgp$;
}

$CoderResult* DoubleByte$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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

$CoderResult* DoubleByte$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
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

$CoderResult* DoubleByte$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

void DoubleByte$Encoder::implReplaceWith($bytes* newReplacement) {
	$set(this, repl, newReplacement);
}

int32_t DoubleByte$Encoder::encode($chars* src, int32_t sp, int32_t len, $bytes* dst) {
	int32_t dp = 0;
	int32_t sl = sp + len;
	int32_t dl = $nc(dst)->length;
	while (sp < sl) {
		char16_t c = $nc(src)->get(sp++);
		int32_t bb = encodeChar(c);
		if (bb == 0x0000FFFD) {
			bool var$0 = $Character::isHighSurrogate(c) && sp < sl;
			if (var$0 && $Character::isLowSurrogate(src->get(sp))) {
				++sp;
			}
			dst->set(dp++, $nc(this->repl)->get(0));
			if ($nc(this->repl)->length > 1) {
				dst->set(dp++, $nc(this->repl)->get(1));
			}
			continue;
		}
		if (bb > this->MAX_SINGLEBYTE) {
			dst->set(dp++, (int8_t)(bb >> 8));
			dst->set(dp++, (int8_t)bb);
		} else {
			dst->set(dp++, (int8_t)bb);
		}
	}
	return dp;
}

int32_t DoubleByte$Encoder::encodeFromLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
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
			$nc(dst)->set(dp++, (int8_t)(bb >> 8));
			dst->set(dp++, (int8_t)bb);
		} else {
			$nc(dst)->set(dp++, (int8_t)bb);
		}
	}
	return dp;
}

int32_t DoubleByte$Encoder::encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
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
			$nc(dst)->set(dp++, (int8_t)(bb >> 8));
			dst->set(dp++, (int8_t)bb);
		} else {
			$nc(dst)->set(dp++, (int8_t)bb);
		}
	}
	return dp;
}

bool DoubleByte$Encoder::isASCIICompatible() {
	return this->isASCIICompatible$;
}

int32_t DoubleByte$Encoder::encodeChar(char16_t ch) {
	return $nc(this->c2b)->get($nc(this->c2bIndex)->get(ch >> 8) + ((int32_t)(ch & (uint32_t)255)));
}

void DoubleByte$Encoder::initC2B($StringArray* b2c, $String* b2cSB, $String* b2cNR, $String* c2bNR, int32_t b2Min, int32_t b2Max, $chars* c2b, $chars* c2bIndex) {
	$init(DoubleByte$Encoder);
	$useLocalCurrentObjectStackCache();
	$Arrays::fill(c2b, (char16_t)0x0000FFFD);
	int32_t off = 256;
	$var($charArray2, b2c_ca, $new($charArray2, $nc(b2c)->length));
	$var($chars, b2cSB_ca, nullptr);
	if (b2cSB != nullptr) {
		$assign(b2cSB_ca, b2cSB->toCharArray());
	}
	for (int32_t i = 0; i < b2c->length; ++i) {
		if (b2c->get(i) == nullptr) {
			continue;
		}
		b2c_ca->set(i, $($nc(b2c->get(i))->toCharArray()));
	}
	if (b2cNR != nullptr) {
		int32_t j = 0;
		while (j < b2cNR->length()) {
			char16_t b = b2cNR->charAt(j++);
			char16_t c = b2cNR->charAt(j++);
			if (b < 256 && b2cSB_ca != nullptr) {
				if (b2cSB_ca->get(b) == c) {
					b2cSB_ca->set(b, (char16_t)0xFFFD);
				}
			} else if ($nc(b2c_ca->get(b >> 8))->get(((int32_t)(b & (uint32_t)255)) - b2Min) == c) {
				$nc(b2c_ca->get(b >> 8))->set(((int32_t)(b & (uint32_t)255)) - b2Min, (char16_t)0xFFFD);
			}
		}
	}
	if (b2cSB_ca != nullptr) {
		for (int32_t b = 0; b < b2cSB_ca->length; ++b) {
			char16_t c = b2cSB_ca->get(b);
			if (c == (char16_t)0xFFFD) {
				continue;
			}
			int32_t index = $nc(c2bIndex)->get(c >> 8);
			if (index == 0) {
				index = off;
				off += 256;
				c2bIndex->set(c >> 8, (char16_t)index);
			}
			$nc(c2b)->set(index + ((int32_t)(c & (uint32_t)255)), (char16_t)b);
		}
	}
	for (int32_t b1 = 0; b1 < b2c->length; ++b1) {
		$var($chars, db, b2c_ca->get(b1));
		if (db == nullptr) {
			continue;
		}
		for (int32_t b2 = b2Min; b2 <= b2Max; ++b2) {
			char16_t c = $nc(db)->get(b2 - b2Min);
			if (c == (char16_t)0xFFFD) {
				continue;
			}
			int32_t index = $nc(c2bIndex)->get(c >> 8);
			if (index == 0) {
				index = off;
				off += 256;
				c2bIndex->set(c >> 8, (char16_t)index);
			}
			$nc(c2b)->set(index + ((int32_t)(c & (uint32_t)255)), (char16_t)((b1 << 8) | b2));
		}
	}
	if (c2bNR != nullptr) {
		for (int32_t i = 0; i < c2bNR->length(); i += 2) {
			char16_t b = c2bNR->charAt(i);
			char16_t c = c2bNR->charAt(i + 1);
			int32_t index = (c >> 8);
			if ($nc(c2bIndex)->get(index) == 0) {
				c2bIndex->set(index, (char16_t)off);
				off += 256;
			}
			index = $nc(c2bIndex)->get(index) + ((int32_t)(c & (uint32_t)255));
			$nc(c2b)->set(index, b);
		}
	}
}

DoubleByte$Encoder::DoubleByte$Encoder() {
}

$Class* DoubleByte$Encoder::load$($String* name, bool initialize) {
	$loadClass(DoubleByte$Encoder, name, initialize, &_DoubleByte$Encoder_ClassInfo_, allocate$DoubleByte$Encoder);
	return class$;
}

$Class* DoubleByte$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun