#include <sun/nio/cs/MS950_HKSCS_XP$Encoder.h>
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
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HKSCS$Encoder = ::sun::nio::cs::HKSCS$Encoder;
using $HKSCS_XPMapping = ::sun::nio::cs::HKSCS_XPMapping;
using $MS950 = ::sun::nio::cs::MS950;

namespace sun {
	namespace nio {
		namespace cs {

$DoubleByte$Encoder* MS950_HKSCS_XP$Encoder::ms950 = nullptr;
$charArray2* MS950_HKSCS_XP$Encoder::c2bBmp = nullptr;

int32_t MS950_HKSCS_XP$Encoder::encodeSupp(int32_t cp) {
	return 0x0000fffd;
}

void MS950_HKSCS_XP$Encoder::init$($Charset* cs) {
	$HKSCS$Encoder::init$(cs, MS950_HKSCS_XP$Encoder::ms950, MS950_HKSCS_XP$Encoder::c2bBmp, nullptr);
}

void MS950_HKSCS_XP$Encoder::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"ms950", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $STATIC, $staticField(MS950_HKSCS_XP$Encoder, ms950)},
		{"c2bBmp", "[[C", nullptr, $STATIC | $FINAL, $staticField(MS950_HKSCS_XP$Encoder, c2bBmp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(MS950_HKSCS_XP$Encoder, init$, void, $Charset*)},
		{"encodeSupp", "(I)I", nullptr, $PUBLIC, $virtualMethod(MS950_HKSCS_XP$Encoder, encodeSupp, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.MS950_HKSCS_XP$Encoder", "sun.nio.cs.MS950_HKSCS_XP", "Encoder", $PRIVATE | $STATIC},
		{"sun.nio.cs.HKSCS$Encoder", "sun.nio.cs.HKSCS", "Encoder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.MS950_HKSCS_XP$Encoder",
		"sun.nio.cs.HKSCS$Encoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.MS950_HKSCS_XP"
	};
	$loadClass(MS950_HKSCS_XP$Encoder, name, initialize, &classInfo$$, MS950_HKSCS_XP$Encoder::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MS950_HKSCS_XP$Encoder));
	});
	return class$;
}

$Class* MS950_HKSCS_XP$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun