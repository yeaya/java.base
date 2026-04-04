#include <sun/nio/cs/EUC_JP_Open$Decoder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/EUC_JP$Decoder.h>
#include <sun/nio/cs/EUC_JP_Open.h>
#include <sun/nio/cs/JIS_X_0208_Solaris.h>
#include <sun/nio/cs/JIS_X_0212_Solaris.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $EUC_JP$Decoder = ::sun::nio::cs::EUC_JP$Decoder;
using $JIS_X_0208_Solaris = ::sun::nio::cs::JIS_X_0208_Solaris;
using $JIS_X_0212_Solaris = ::sun::nio::cs::JIS_X_0212_Solaris;

namespace sun {
	namespace nio {
		namespace cs {

$DoubleByte$Decoder* EUC_JP_Open$Decoder::DEC0208_Solaris = nullptr;
$DoubleByte$Decoder* EUC_JP_Open$Decoder::DEC0212_Solaris = nullptr;

void EUC_JP_Open$Decoder::init$($Charset* cs) {
	$init($EUC_JP$Decoder);
	$EUC_JP$Decoder::init$(cs, 0.5f, 1.0f, $EUC_JP$Decoder::DEC0201, $EUC_JP$Decoder::DEC0208, EUC_JP_Open$Decoder::DEC0212_Solaris);
}

char16_t EUC_JP_Open$Decoder::decodeDouble(int32_t byte1, int32_t byte2) {
	char16_t c = $EUC_JP$Decoder::decodeDouble(byte1, byte2);
	if (c == (char16_t)0xfffd) {
		return $nc(EUC_JP_Open$Decoder::DEC0208_Solaris)->decodeDouble(byte1 - 128, byte2 - 128);
	}
	return c;
}

void EUC_JP_Open$Decoder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(EUC_JP_Open$Decoder::DEC0208_Solaris, $cast($DoubleByte$Decoder, $$new($JIS_X_0208_Solaris)->newDecoder()));
	$assignStatic(EUC_JP_Open$Decoder::DEC0212_Solaris, $cast($DoubleByte$Decoder, $$new($JIS_X_0212_Solaris)->newDecoder()));
}

EUC_JP_Open$Decoder::EUC_JP_Open$Decoder() {
}

$Class* EUC_JP_Open$Decoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEC0208_Solaris", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC, $staticField(EUC_JP_Open$Decoder, DEC0208_Solaris)},
		{"DEC0212_Solaris", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC, $staticField(EUC_JP_Open$Decoder, DEC0212_Solaris)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(EUC_JP_Open$Decoder, init$, void, $Charset*)},
		{"decodeDouble", "(II)C", nullptr, $PROTECTED, $virtualMethod(EUC_JP_Open$Decoder, decodeDouble, char16_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.EUC_JP_Open$Decoder", "sun.nio.cs.EUC_JP_Open", "Decoder", $PRIVATE | $STATIC},
		{"sun.nio.cs.EUC_JP$Decoder", "sun.nio.cs.EUC_JP", "Decoder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.EUC_JP_Open$Decoder",
		"sun.nio.cs.EUC_JP$Decoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.EUC_JP_Open"
	};
	$loadClass(EUC_JP_Open$Decoder, name, initialize, &classInfo$$, EUC_JP_Open$Decoder::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(EUC_JP_Open$Decoder));
	});
	return class$;
}

$Class* EUC_JP_Open$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun