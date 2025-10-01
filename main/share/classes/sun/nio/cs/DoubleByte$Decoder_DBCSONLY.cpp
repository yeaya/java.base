#include <sun/nio/cs/DoubleByte$Decoder_DBCSONLY.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CoderResult.h>
#include <java/util/Arrays.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Arrays = ::java::util::Arrays;
using $DoubleByte = ::sun::nio::cs::DoubleByte;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _DoubleByte$Decoder_DBCSONLY_FieldInfo_[] = {
	{"b2cSB_UNMAPPABLE", "[C", nullptr, $STATIC | $FINAL, $staticField(DoubleByte$Decoder_DBCSONLY, b2cSB_UNMAPPABLE)},
	{}
};

$MethodInfo _DoubleByte$Decoder_DBCSONLY_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;[[C[CIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Decoder_DBCSONLY::*)($Charset*,$charArray2*,$chars*,int32_t,int32_t,bool)>(&DoubleByte$Decoder_DBCSONLY::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[[C[CII)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Decoder_DBCSONLY::*)($Charset*,$charArray2*,$chars*,int32_t,int32_t)>(&DoubleByte$Decoder_DBCSONLY::init$))},
	{"crMalformedOrUnmappable", "(II)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DoubleByte$Decoder_DBCSONLY_InnerClassesInfo_[] = {
	{"sun.nio.cs.DoubleByte$Decoder_DBCSONLY", "sun.nio.cs.DoubleByte", "Decoder_DBCSONLY", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Decoder", "sun.nio.cs.DoubleByte", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DoubleByte$Decoder_DBCSONLY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.DoubleByte$Decoder_DBCSONLY",
	"sun.nio.cs.DoubleByte$Decoder",
	nullptr,
	_DoubleByte$Decoder_DBCSONLY_FieldInfo_,
	_DoubleByte$Decoder_DBCSONLY_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleByte$Decoder_DBCSONLY_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.DoubleByte"
};

$Object* allocate$DoubleByte$Decoder_DBCSONLY($Class* clazz) {
	return $of($alloc(DoubleByte$Decoder_DBCSONLY));
}

$chars* DoubleByte$Decoder_DBCSONLY::b2cSB_UNMAPPABLE = nullptr;

$CoderResult* DoubleByte$Decoder_DBCSONLY::crMalformedOrUnmappable(int32_t b1, int32_t b2) {
	return $CoderResult::unmappableForLength(2);
}

void DoubleByte$Decoder_DBCSONLY::init$($Charset* cs, $charArray2* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible) {
	$DoubleByte$Decoder::init$(cs, 0.5f, 1.0f, b2c, DoubleByte$Decoder_DBCSONLY::b2cSB_UNMAPPABLE, b2Min, b2Max, isASCIICompatible);
}

void DoubleByte$Decoder_DBCSONLY::init$($Charset* cs, $charArray2* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max) {
	$DoubleByte$Decoder::init$(cs, 0.5f, 1.0f, b2c, DoubleByte$Decoder_DBCSONLY::b2cSB_UNMAPPABLE, b2Min, b2Max, false);
}

void clinit$DoubleByte$Decoder_DBCSONLY($Class* class$) {
	{
		$assignStatic(DoubleByte$Decoder_DBCSONLY::b2cSB_UNMAPPABLE, $new($chars, 256));
		$Arrays::fill(DoubleByte$Decoder_DBCSONLY::b2cSB_UNMAPPABLE, (char16_t)0xFFFD);
	}
}

DoubleByte$Decoder_DBCSONLY::DoubleByte$Decoder_DBCSONLY() {
}

$Class* DoubleByte$Decoder_DBCSONLY::load$($String* name, bool initialize) {
	$loadClass(DoubleByte$Decoder_DBCSONLY, name, initialize, &_DoubleByte$Decoder_DBCSONLY_ClassInfo_, clinit$DoubleByte$Decoder_DBCSONLY, allocate$DoubleByte$Decoder_DBCSONLY);
	return class$;
}

$Class* DoubleByte$Decoder_DBCSONLY::class$ = nullptr;

		} // cs
	} // nio
} // sun