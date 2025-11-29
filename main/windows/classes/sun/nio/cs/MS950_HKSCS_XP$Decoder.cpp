#include <sun/nio/cs/MS950_HKSCS_XP$Decoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/HKSCS$Decoder.h>
#include <sun/nio/cs/HKSCS_XPMapping.h>
#include <sun/nio/cs/MS950.h>
#include <sun/nio/cs/MS950_HKSCS_XP.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $HKSCS$Decoder = ::sun::nio::cs::HKSCS$Decoder;
using $HKSCS_XPMapping = ::sun::nio::cs::HKSCS_XPMapping;
using $MS950 = ::sun::nio::cs::MS950;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS950_HKSCS_XP$Decoder_FieldInfo_[] = {
	{"ms950", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC, $staticField(MS950_HKSCS_XP$Decoder, ms950)},
	{"b2cBmp", "[[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS950_HKSCS_XP$Decoder, b2cBmp)},
	{}
};

$MethodInfo _MS950_HKSCS_XP$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(MS950_HKSCS_XP$Decoder::*)($Charset*)>(&MS950_HKSCS_XP$Decoder::init$))},
	{"decodeDoubleEx", "(II)C", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MS950_HKSCS_XP$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS950_HKSCS_XP$Decoder", "sun.nio.cs.MS950_HKSCS_XP", "Decoder", $STATIC},
	{"sun.nio.cs.HKSCS$Decoder", "sun.nio.cs.HKSCS", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MS950_HKSCS_XP$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS950_HKSCS_XP$Decoder",
	"sun.nio.cs.HKSCS$Decoder",
	nullptr,
	_MS950_HKSCS_XP$Decoder_FieldInfo_,
	_MS950_HKSCS_XP$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_MS950_HKSCS_XP$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS950_HKSCS_XP"
};

$Object* allocate$MS950_HKSCS_XP$Decoder($Class* clazz) {
	return $of($alloc(MS950_HKSCS_XP$Decoder));
}

$DoubleByte$Decoder* MS950_HKSCS_XP$Decoder::ms950 = nullptr;
$charArray2* MS950_HKSCS_XP$Decoder::b2cBmp = nullptr;

char16_t MS950_HKSCS_XP$Decoder::decodeDoubleEx(int32_t b1, int32_t b2) {
	return (char16_t)0xFFFD;
}

void MS950_HKSCS_XP$Decoder::init$($Charset* cs) {
	$HKSCS$Decoder::init$(cs, MS950_HKSCS_XP$Decoder::ms950, MS950_HKSCS_XP$Decoder::b2cBmp, nullptr);
}

void clinit$MS950_HKSCS_XP$Decoder($Class* class$) {
	$assignStatic(MS950_HKSCS_XP$Decoder::ms950, $cast($DoubleByte$Decoder, $$new($MS950)->newDecoder()));
	$assignStatic(MS950_HKSCS_XP$Decoder::b2cBmp, $new($charArray2, 256));
	{
		$init($HKSCS_XPMapping);
		$HKSCS$Decoder::initb2c(MS950_HKSCS_XP$Decoder::b2cBmp, $HKSCS_XPMapping::b2cBmpStr);
	}
}

MS950_HKSCS_XP$Decoder::MS950_HKSCS_XP$Decoder() {
}

$Class* MS950_HKSCS_XP$Decoder::load$($String* name, bool initialize) {
	$loadClass(MS950_HKSCS_XP$Decoder, name, initialize, &_MS950_HKSCS_XP$Decoder_ClassInfo_, clinit$MS950_HKSCS_XP$Decoder, allocate$MS950_HKSCS_XP$Decoder);
	return class$;
}

$Class* MS950_HKSCS_XP$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun