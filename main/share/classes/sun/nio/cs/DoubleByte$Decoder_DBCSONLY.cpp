#include <sun/nio/cs/DoubleByte$Decoder_DBCSONLY.h>
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
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;

namespace sun {
	namespace nio {
		namespace cs {

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

void DoubleByte$Decoder_DBCSONLY::clinit$($Class* clazz) {
	{
		$assignStatic(DoubleByte$Decoder_DBCSONLY::b2cSB_UNMAPPABLE, $new($chars, 256));
		$Arrays::fill(DoubleByte$Decoder_DBCSONLY::b2cSB_UNMAPPABLE, (char16_t)0xfffd);
	}
}

DoubleByte$Decoder_DBCSONLY::DoubleByte$Decoder_DBCSONLY() {
}

$Class* DoubleByte$Decoder_DBCSONLY::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cSB_UNMAPPABLE", "[C", nullptr, $STATIC | $FINAL, $staticField(DoubleByte$Decoder_DBCSONLY, b2cSB_UNMAPPABLE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;[[C[CIIZ)V", nullptr, $PUBLIC, $method(DoubleByte$Decoder_DBCSONLY, init$, void, $Charset*, $charArray2*, $chars*, int32_t, int32_t, bool)},
		{"<init>", "(Ljava/nio/charset/Charset;[[C[CII)V", nullptr, $PUBLIC, $method(DoubleByte$Decoder_DBCSONLY, init$, void, $Charset*, $charArray2*, $chars*, int32_t, int32_t)},
		{"crMalformedOrUnmappable", "(II)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(DoubleByte$Decoder_DBCSONLY, crMalformedOrUnmappable, $CoderResult*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.DoubleByte$Decoder_DBCSONLY", "sun.nio.cs.DoubleByte", "Decoder_DBCSONLY", $PUBLIC | $STATIC},
		{"sun.nio.cs.DoubleByte$Decoder", "sun.nio.cs.DoubleByte", "Decoder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.DoubleByte$Decoder_DBCSONLY",
		"sun.nio.cs.DoubleByte$Decoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.DoubleByte"
	};
	$loadClass(DoubleByte$Decoder_DBCSONLY, name, initialize, &classInfo$$, DoubleByte$Decoder_DBCSONLY::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DoubleByte$Decoder_DBCSONLY));
	});
	return class$;
}

$Class* DoubleByte$Decoder_DBCSONLY::class$ = nullptr;

		} // cs
	} // nio
} // sun