#include <sun/nio/cs/EUC_JP_Open$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/EUC_JP$Encoder.h>
#include <sun/nio/cs/EUC_JP_Open.h>
#include <sun/nio/cs/JIS_X_0208_Solaris.h>
#include <sun/nio/cs/JIS_X_0212_Solaris.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $EUC_JP$Encoder = ::sun::nio::cs::EUC_JP$Encoder;
using $JIS_X_0208_Solaris = ::sun::nio::cs::JIS_X_0208_Solaris;
using $JIS_X_0212_Solaris = ::sun::nio::cs::JIS_X_0212_Solaris;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _EUC_JP_Open$Encoder_FieldInfo_[] = {
	{"ENC0208_Solaris", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $STATIC, $staticField(EUC_JP_Open$Encoder, ENC0208_Solaris)},
	{"ENC0212_Solaris", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $STATIC, $staticField(EUC_JP_Open$Encoder, ENC0212_Solaris)},
	{}
};

$MethodInfo _EUC_JP_Open$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(EUC_JP_Open$Encoder, init$, void, $Charset*)},
	{"encodeDouble", "(C)I", nullptr, $PROTECTED, $virtualMethod(EUC_JP_Open$Encoder, encodeDouble, int32_t, char16_t)},
	{}
};

$InnerClassInfo _EUC_JP_Open$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_JP_Open$Encoder", "sun.nio.cs.EUC_JP_Open", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.EUC_JP$Encoder", "sun.nio.cs.EUC_JP", "Encoder", $STATIC},
	{}
};

$ClassInfo _EUC_JP_Open$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.EUC_JP_Open$Encoder",
	"sun.nio.cs.EUC_JP$Encoder",
	nullptr,
	_EUC_JP_Open$Encoder_FieldInfo_,
	_EUC_JP_Open$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_JP_Open$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_JP_Open"
};

$Object* allocate$EUC_JP_Open$Encoder($Class* clazz) {
	return $of($alloc(EUC_JP_Open$Encoder));
}

$DoubleByte$Encoder* EUC_JP_Open$Encoder::ENC0208_Solaris = nullptr;
$DoubleByte$Encoder* EUC_JP_Open$Encoder::ENC0212_Solaris = nullptr;

void EUC_JP_Open$Encoder::init$($Charset* cs) {
	$EUC_JP$Encoder::init$(cs);
}

int32_t EUC_JP_Open$Encoder::encodeDouble(char16_t ch) {
	int32_t b = $EUC_JP$Encoder::encodeDouble(ch);
	if (b != 0x0000FFFD) {
		return b;
	}
	b = $nc(EUC_JP_Open$Encoder::ENC0208_Solaris)->encodeChar(ch);
	if (b != 0x0000FFFD && b > 29952) {
		return 0x008F8080 + $nc(EUC_JP_Open$Encoder::ENC0212_Solaris)->encodeChar(ch);
	}
	return b == 0x0000FFFD ? b : b + 0x00008080;
}

void clinit$EUC_JP_Open$Encoder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(EUC_JP_Open$Encoder::ENC0208_Solaris, $cast($DoubleByte$Encoder, $$new($JIS_X_0208_Solaris)->newEncoder()));
	$assignStatic(EUC_JP_Open$Encoder::ENC0212_Solaris, $cast($DoubleByte$Encoder, $$new($JIS_X_0212_Solaris)->newEncoder()));
}

EUC_JP_Open$Encoder::EUC_JP_Open$Encoder() {
}

$Class* EUC_JP_Open$Encoder::load$($String* name, bool initialize) {
	$loadClass(EUC_JP_Open$Encoder, name, initialize, &_EUC_JP_Open$Encoder_ClassInfo_, clinit$EUC_JP_Open$Encoder, allocate$EUC_JP_Open$Encoder);
	return class$;
}

$Class* EUC_JP_Open$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun