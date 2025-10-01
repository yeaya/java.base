#include <sun/nio/cs/DoubleByte$Decoder_EUC_SIM.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte.h>
#include <jcpp.h>

#undef SS3
#undef SS2
#undef UNDERFLOW

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DoubleByte = ::sun::nio::cs::DoubleByte;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _DoubleByte$Decoder_EUC_SIM_FieldInfo_[] = {
	{"SS2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleByte$Decoder_EUC_SIM, SS2)},
	{"SS3", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleByte$Decoder_EUC_SIM, SS3)},
	{}
};

$MethodInfo _DoubleByte$Decoder_EUC_SIM_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;[[C[CIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Decoder_EUC_SIM::*)($Charset*,$charArray2*,$chars*,int32_t,int32_t,bool)>(&DoubleByte$Decoder_EUC_SIM::init$))},
	{"crMalformedOrUnderFlow", "(I)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"crMalformedOrUnmappable", "(II)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decode", "([BII[C)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DoubleByte$Decoder_EUC_SIM_InnerClassesInfo_[] = {
	{"sun.nio.cs.DoubleByte$Decoder_EUC_SIM", "sun.nio.cs.DoubleByte", "Decoder_EUC_SIM", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Decoder", "sun.nio.cs.DoubleByte", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DoubleByte$Decoder_EUC_SIM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.DoubleByte$Decoder_EUC_SIM",
	"sun.nio.cs.DoubleByte$Decoder",
	nullptr,
	_DoubleByte$Decoder_EUC_SIM_FieldInfo_,
	_DoubleByte$Decoder_EUC_SIM_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleByte$Decoder_EUC_SIM_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.DoubleByte"
};

$Object* allocate$DoubleByte$Decoder_EUC_SIM($Class* clazz) {
	return $of($alloc(DoubleByte$Decoder_EUC_SIM));
}

void DoubleByte$Decoder_EUC_SIM::init$($Charset* cs, $charArray2* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible) {
	$DoubleByte$Decoder::init$(cs, b2c, b2cSB, b2Min, b2Max, isASCIICompatible);
}

$CoderResult* DoubleByte$Decoder_EUC_SIM::crMalformedOrUnderFlow(int32_t b) {
	if (b == this->SS2 || b == this->SS3) {
		return $CoderResult::malformedForLength(1);
	}
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* DoubleByte$Decoder_EUC_SIM::crMalformedOrUnmappable(int32_t b1, int32_t b2) {
	if (b1 == this->SS2 || b1 == this->SS3) {
		return $CoderResult::malformedForLength(1);
	}
	return $CoderResult::unmappableForLength(2);
}

int32_t DoubleByte$Decoder_EUC_SIM::decode($bytes* src, int32_t sp, int32_t len, $chars* dst) {
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
					if (b1 == this->SS2 || b1 == this->SS3) {
						--sp;
					}
					c = repl;
				}
			} else {
				c = repl;
			}
		}
		$nc(dst)->set(dp++, c);
	}
	return dp;
}

DoubleByte$Decoder_EUC_SIM::DoubleByte$Decoder_EUC_SIM() {
}

$Class* DoubleByte$Decoder_EUC_SIM::load$($String* name, bool initialize) {
	$loadClass(DoubleByte$Decoder_EUC_SIM, name, initialize, &_DoubleByte$Decoder_EUC_SIM_ClassInfo_, allocate$DoubleByte$Decoder_EUC_SIM);
	return class$;
}

$Class* DoubleByte$Decoder_EUC_SIM::class$ = nullptr;

		} // cs
	} // nio
} // sun