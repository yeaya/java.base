#include <sun/nio/cs/DoubleByte$Decoder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/cs/DoubleByte.h>
#include <jcpp.h>

#undef B2C_UNMAPPABLE
#undef JLA
#undef OVERFLOW
#undef UNDERFLOW

using $charArray2 = $Array<char16_t, 2>;
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
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ArrayDecoder = ::sun::nio::cs::ArrayDecoder;
using $DelegatableDecoder = ::sun::nio::cs::DelegatableDecoder;
using $DoubleByte = ::sun::nio::cs::DoubleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _DoubleByte$Decoder_FieldInfo_[] = {
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DoubleByte$Decoder, JLA)},
	{"b2c", "[[C", nullptr, $FINAL, $field(DoubleByte$Decoder, b2c)},
	{"b2cSB", "[C", nullptr, $FINAL, $field(DoubleByte$Decoder, b2cSB)},
	{"b2Min", "I", nullptr, $FINAL, $field(DoubleByte$Decoder, b2Min)},
	{"b2Max", "I", nullptr, $FINAL, $field(DoubleByte$Decoder, b2Max)},
	{"isASCIICompatible", "Z", nullptr, $FINAL, $field(DoubleByte$Decoder, isASCIICompatible$)},
	{}
};

$MethodInfo _DoubleByte$Decoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/charset/Charset;FF[[C[CIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Decoder::*)($Charset*,float,float,$charArray2*,$chars*,int32_t,int32_t,bool)>(&DoubleByte$Decoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[[C[CIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Decoder::*)($Charset*,$charArray2*,$chars*,int32_t,int32_t,bool)>(&DoubleByte$Decoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[[C[CII)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Decoder::*)($Charset*,$charArray2*,$chars*,int32_t,int32_t)>(&DoubleByte$Decoder::init$))},
	{"crMalformedOrUnderFlow", "(I)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"crMalformedOrUnmappable", "(II)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decode", "([BII[C)I", nullptr, $PUBLIC},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decodeDouble", "(II)C", nullptr, $PUBLIC},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"decodeSingle", "(I)C", nullptr, $PUBLIC},
	{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"implReset", "()V", nullptr, $PUBLIC},
	{"isASCIICompatible", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DoubleByte$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.DoubleByte$Decoder", "sun.nio.cs.DoubleByte", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DoubleByte$Decoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.DoubleByte$Decoder",
	"java.nio.charset.CharsetDecoder",
	"sun.nio.cs.DelegatableDecoder,sun.nio.cs.ArrayDecoder",
	_DoubleByte$Decoder_FieldInfo_,
	_DoubleByte$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleByte$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.DoubleByte"
};

$Object* allocate$DoubleByte$Decoder($Class* clazz) {
	return $of($alloc(DoubleByte$Decoder));
}

int32_t DoubleByte$Decoder::hashCode() {
	 return this->$CharsetDecoder::hashCode();
}

bool DoubleByte$Decoder::equals(Object$* obj) {
	 return this->$CharsetDecoder::equals(obj);
}

$Object* DoubleByte$Decoder::clone() {
	 return this->$CharsetDecoder::clone();
}

$String* DoubleByte$Decoder::toString() {
	 return this->$CharsetDecoder::toString();
}

void DoubleByte$Decoder::finalize() {
	this->$CharsetDecoder::finalize();
}

$JavaLangAccess* DoubleByte$Decoder::JLA = nullptr;

$CoderResult* DoubleByte$Decoder::crMalformedOrUnderFlow(int32_t b) {
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* DoubleByte$Decoder::crMalformedOrUnmappable(int32_t b1, int32_t b2) {
	$init($DoubleByte);
	if ($nc(this->b2c)->get(b1) == $DoubleByte::B2C_UNMAPPABLE || $nc(this->b2c)->get(b2) != $DoubleByte::B2C_UNMAPPABLE || decodeSingle(b2) != (char16_t)0xFFFD) {
		return $CoderResult::malformedForLength(1);
	}
	return $CoderResult::unmappableForLength(2);
}

void DoubleByte$Decoder::init$($Charset* cs, float avgcpb, float maxcpb, $charArray2* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible) {
	$CharsetDecoder::init$(cs, avgcpb, maxcpb);
	$set(this, b2c, b2c);
	$set(this, b2cSB, b2cSB);
	this->b2Min = b2Min;
	this->b2Max = b2Max;
	this->isASCIICompatible$ = isASCIICompatible;
}

void DoubleByte$Decoder::init$($Charset* cs, $charArray2* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible) {
	DoubleByte$Decoder::init$(cs, 0.5f, 1.0f, b2c, b2cSB, b2Min, b2Max, isASCIICompatible);
}

void DoubleByte$Decoder::init$($Charset* cs, $charArray2* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max) {
	DoubleByte$Decoder::init$(cs, 0.5f, 1.0f, b2c, b2cSB, b2Min, b2Max, false);
}

$CoderResult* DoubleByte$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
	$var($bytes, sa, $cast($bytes, $nc(src)->array()));
	int32_t soff = src->arrayOffset();
	int32_t sp = soff + src->position();
	int32_t sl = soff + src->limit();
	$var($chars, da, $cast($chars, $nc(dst)->array()));
	int32_t doff = dst->arrayOffset();
	int32_t dp = doff + dst->position();
	int32_t dl = doff + dst->limit();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			if (this->isASCIICompatible$) {
				int32_t n = $nc(DoubleByte$Decoder::JLA)->decodeASCII(sa, sp, da, dp, $Math::min(dl - dp, sl - sp));
				dp += n;
				sp += n;
			}
			while (sp < sl && dp < dl) {
				int32_t inSize = 1;
				int32_t b1 = (int32_t)($nc(sa)->get(sp) & (uint32_t)255);
				char16_t c = $nc(this->b2cSB)->get(b1);
				if (c == (char16_t)0xFFFD) {
					if (sl - sp < 2) {
						$assign(var$2, crMalformedOrUnderFlow(b1));
						return$1 = true;
						goto $finally;
					}
					int32_t b2 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
					if (b2 < this->b2Min || b2 > this->b2Max || (c = $nc($nc(this->b2c)->get(b1))->get(b2 - this->b2Min)) == (char16_t)0xFFFD) {
						$assign(var$2, crMalformedOrUnmappable(b1, b2));
						return$1 = true;
						goto $finally;
					}
					++inSize;
				}
				$nc(da)->set(dp++, c);
				sp += inSize;
			}
			$init($CoderResult);
			$assign(var$2, (sp >= sl) ? $CoderResult::UNDERFLOW : $CoderResult::OVERFLOW);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			src->position(sp - soff);
			dst->position(dp - doff);
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

$CoderResult* DoubleByte$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (true) {
				bool var$3 = src->hasRemaining();
				if (!(var$3 && $nc(dst)->hasRemaining())) {
					break;
				}
				{
					int32_t b1 = (int32_t)(src->get() & (uint32_t)255);
					char16_t c = $nc(this->b2cSB)->get(b1);
					int32_t inSize = 1;
					if (c == (char16_t)0xFFFD) {
						if (src->remaining() < 1) {
							$assign(var$2, crMalformedOrUnderFlow(b1));
							return$1 = true;
							goto $finally;
						}
						int32_t b2 = (int32_t)(src->get() & (uint32_t)255);
						if (b2 < this->b2Min || b2 > this->b2Max || (c = $nc($nc(this->b2c)->get(b1))->get(b2 - this->b2Min)) == (char16_t)0xFFFD) {
							$assign(var$2, crMalformedOrUnmappable(b1, b2));
							return$1 = true;
							goto $finally;
						}
						++inSize;
					}
					dst->put(c);
					mark += inSize;
				}
			}
			$init($CoderResult);
			$assign(var$2, src->hasRemaining() ? $CoderResult::OVERFLOW : $CoderResult::UNDERFLOW);
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

$CoderResult* DoubleByte$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

int32_t DoubleByte$Decoder::decode($bytes* src, int32_t sp, int32_t len, $chars* dst) {
	int32_t dp = 0;
	int32_t sl = sp + len;
	char16_t repl = $nc($(replacement()))->charAt(0);
	while (sp < sl) {
		int32_t b1 = (int32_t)($nc(src)->get(sp++) & (uint32_t)255);
		char16_t c = $nc(this->b2cSB)->get(b1);
		if (c == (char16_t)0xFFFD) {
			if (sp < sl) {
				int32_t b2 = (int32_t)(src->get(sp++) & (uint32_t)255);
				if (b2 < this->b2Min || b2 > this->b2Max || (c = $nc($nc(this->b2c)->get(b1))->get(b2 - this->b2Min)) == (char16_t)0xFFFD) {
					if ($nc($(crMalformedOrUnmappable(b1, b2)))->length() == 1) {
						--sp;
					}
				}
			}
			if (c == (char16_t)0xFFFD) {
				c = repl;
			}
		}
		$nc(dst)->set(dp++, c);
	}
	return dp;
}

bool DoubleByte$Decoder::isASCIICompatible() {
	return this->isASCIICompatible$;
}

void DoubleByte$Decoder::implReset() {
	$CharsetDecoder::implReset();
}

$CoderResult* DoubleByte$Decoder::implFlush($CharBuffer* out) {
	return $CharsetDecoder::implFlush(out);
}

char16_t DoubleByte$Decoder::decodeSingle(int32_t b) {
	return $nc(this->b2cSB)->get(b);
}

char16_t DoubleByte$Decoder::decodeDouble(int32_t b1, int32_t b2) {
	if (b1 < 0 || b1 > $nc(this->b2c)->length || b2 < this->b2Min || b2 > this->b2Max) {
		return (char16_t)0xFFFD;
	}
	return $nc($nc(this->b2c)->get(b1))->get(b2 - this->b2Min);
}

void clinit$DoubleByte$Decoder($Class* class$) {
	$assignStatic(DoubleByte$Decoder::JLA, $SharedSecrets::getJavaLangAccess());
}

DoubleByte$Decoder::DoubleByte$Decoder() {
}

$Class* DoubleByte$Decoder::load$($String* name, bool initialize) {
	$loadClass(DoubleByte$Decoder, name, initialize, &_DoubleByte$Decoder_ClassInfo_, clinit$DoubleByte$Decoder, allocate$DoubleByte$Decoder);
	return class$;
}

$Class* DoubleByte$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun