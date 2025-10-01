#include <sun/nio/cs/MS950_HKSCS_XP$Encoder.h>

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
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/HKSCS$Encoder.h>
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
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HKSCS$Encoder = ::sun::nio::cs::HKSCS$Encoder;
using $HKSCS_XPMapping = ::sun::nio::cs::HKSCS_XPMapping;
using $MS950 = ::sun::nio::cs::MS950;
using $MS950_HKSCS_XP = ::sun::nio::cs::MS950_HKSCS_XP;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS950_HKSCS_XP$Encoder_FieldInfo_[] = {
	{"ms950", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $STATIC, $staticField(MS950_HKSCS_XP$Encoder, ms950)},
	{"c2bBmp", "[[C", nullptr, $STATIC | $FINAL, $staticField(MS950_HKSCS_XP$Encoder, c2bBmp)},
	{}
};

$MethodInfo _MS950_HKSCS_XP$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(MS950_HKSCS_XP$Encoder::*)($Charset*)>(&MS950_HKSCS_XP$Encoder::init$))},
	{"encodeSupp", "(I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MS950_HKSCS_XP$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS950_HKSCS_XP$Encoder", "sun.nio.cs.MS950_HKSCS_XP", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.HKSCS$Encoder", "sun.nio.cs.HKSCS", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MS950_HKSCS_XP$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS950_HKSCS_XP$Encoder",
	"sun.nio.cs.HKSCS$Encoder",
	nullptr,
	_MS950_HKSCS_XP$Encoder_FieldInfo_,
	_MS950_HKSCS_XP$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_MS950_HKSCS_XP$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS950_HKSCS_XP"
};

$Object* allocate$MS950_HKSCS_XP$Encoder($Class* clazz) {
	return $of($alloc(MS950_HKSCS_XP$Encoder));
}

$DoubleByte$Encoder* MS950_HKSCS_XP$Encoder::ms950 = nullptr;
$charArray2* MS950_HKSCS_XP$Encoder::c2bBmp = nullptr;

int32_t MS950_HKSCS_XP$Encoder::encodeSupp(int32_t cp) {
	return 0x0000FFFD;
}

void MS950_HKSCS_XP$Encoder::init$($Charset* cs) {
	$HKSCS$Encoder::init$(cs, MS950_HKSCS_XP$Encoder::ms950, MS950_HKSCS_XP$Encoder::c2bBmp, nullptr);
}

void clinit$MS950_HKSCS_XP$Encoder($Class* class$) {
	$assignStatic(MS950_HKSCS_XP$Encoder::ms950, $cast($DoubleByte$Encoder, $$new($MS950)->newEncoder()));
	$assignStatic(MS950_HKSCS_XP$Encoder::c2bBmp, $new($charArray2, 256));
	{
		$init($HKSCS_XPMapping);
		$HKSCS$Encoder::initc2b(MS950_HKSCS_XP$Encoder::c2bBmp, $HKSCS_XPMapping::b2cBmpStr, nullptr);
	}
}

MS950_HKSCS_XP$Encoder::MS950_HKSCS_XP$Encoder() {
}

$Class* MS950_HKSCS_XP$Encoder::load$($String* name, bool initialize) {
	$loadClass(MS950_HKSCS_XP$Encoder, name, initialize, &_MS950_HKSCS_XP$Encoder_ClassInfo_, clinit$MS950_HKSCS_XP$Encoder, allocate$MS950_HKSCS_XP$Encoder);
	return class$;
}

$Class* MS950_HKSCS_XP$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun