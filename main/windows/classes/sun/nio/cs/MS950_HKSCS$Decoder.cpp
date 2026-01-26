#include <sun/nio/cs/MS950_HKSCS$Decoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/HKSCS$Decoder.h>
#include <sun/nio/cs/HKSCSMapping.h>
#include <sun/nio/cs/MS950.h>
#include <sun/nio/cs/MS950_HKSCS.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $HKSCS$Decoder = ::sun::nio::cs::HKSCS$Decoder;
using $HKSCSMapping = ::sun::nio::cs::HKSCSMapping;
using $MS950 = ::sun::nio::cs::MS950;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS950_HKSCS$Decoder_FieldInfo_[] = {
	{"ms950", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC, $staticField(MS950_HKSCS$Decoder, ms950)},
	{"b2cBmp", "[[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS950_HKSCS$Decoder, b2cBmp)},
	{"b2cSupp", "[[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS950_HKSCS$Decoder, b2cSupp)},
	{}
};

$MethodInfo _MS950_HKSCS$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(MS950_HKSCS$Decoder, init$, void, $Charset*)},
	{}
};

$InnerClassInfo _MS950_HKSCS$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS950_HKSCS$Decoder", "sun.nio.cs.MS950_HKSCS", "Decoder", $STATIC},
	{"sun.nio.cs.HKSCS$Decoder", "sun.nio.cs.HKSCS", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MS950_HKSCS$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS950_HKSCS$Decoder",
	"sun.nio.cs.HKSCS$Decoder",
	nullptr,
	_MS950_HKSCS$Decoder_FieldInfo_,
	_MS950_HKSCS$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_MS950_HKSCS$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS950_HKSCS"
};

$Object* allocate$MS950_HKSCS$Decoder($Class* clazz) {
	return $of($alloc(MS950_HKSCS$Decoder));
}

$DoubleByte$Decoder* MS950_HKSCS$Decoder::ms950 = nullptr;
$charArray2* MS950_HKSCS$Decoder::b2cBmp = nullptr;
$charArray2* MS950_HKSCS$Decoder::b2cSupp = nullptr;

void MS950_HKSCS$Decoder::init$($Charset* cs) {
	$HKSCS$Decoder::init$(cs, MS950_HKSCS$Decoder::ms950, MS950_HKSCS$Decoder::b2cBmp, MS950_HKSCS$Decoder::b2cSupp);
}

void clinit$MS950_HKSCS$Decoder($Class* class$) {
	$assignStatic(MS950_HKSCS$Decoder::ms950, $cast($DoubleByte$Decoder, $$new($MS950)->newDecoder()));
	$assignStatic(MS950_HKSCS$Decoder::b2cBmp, $new($charArray2, 256));
	$assignStatic(MS950_HKSCS$Decoder::b2cSupp, $new($charArray2, 256));
	{
		$init($HKSCSMapping);
		$HKSCS$Decoder::initb2c(MS950_HKSCS$Decoder::b2cBmp, $HKSCSMapping::b2cBmpStr);
		$HKSCS$Decoder::initb2c(MS950_HKSCS$Decoder::b2cSupp, $HKSCSMapping::b2cSuppStr);
	}
}

MS950_HKSCS$Decoder::MS950_HKSCS$Decoder() {
}

$Class* MS950_HKSCS$Decoder::load$($String* name, bool initialize) {
	$loadClass(MS950_HKSCS$Decoder, name, initialize, &_MS950_HKSCS$Decoder_ClassInfo_, clinit$MS950_HKSCS$Decoder, allocate$MS950_HKSCS$Decoder);
	return class$;
}

$Class* MS950_HKSCS$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun