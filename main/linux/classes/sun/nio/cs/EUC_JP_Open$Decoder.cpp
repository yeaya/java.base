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

$FieldInfo _EUC_JP_Open$Decoder_FieldInfo_[] = {
	{"DEC0208_Solaris", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC, $staticField(EUC_JP_Open$Decoder, DEC0208_Solaris)},
	{"DEC0212_Solaris", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC, $staticField(EUC_JP_Open$Decoder, DEC0212_Solaris)},
	{}
};

$MethodInfo _EUC_JP_Open$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(EUC_JP_Open$Decoder::*)($Charset*)>(&EUC_JP_Open$Decoder::init$))},
	{"decodeDouble", "(II)C", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _EUC_JP_Open$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_JP_Open$Decoder", "sun.nio.cs.EUC_JP_Open", "Decoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.EUC_JP$Decoder", "sun.nio.cs.EUC_JP", "Decoder", $STATIC},
	{}
};

$ClassInfo _EUC_JP_Open$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.EUC_JP_Open$Decoder",
	"sun.nio.cs.EUC_JP$Decoder",
	nullptr,
	_EUC_JP_Open$Decoder_FieldInfo_,
	_EUC_JP_Open$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_JP_Open$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_JP_Open"
};

$Object* allocate$EUC_JP_Open$Decoder($Class* clazz) {
	return $of($alloc(EUC_JP_Open$Decoder));
}

$DoubleByte$Decoder* EUC_JP_Open$Decoder::DEC0208_Solaris = nullptr;
$DoubleByte$Decoder* EUC_JP_Open$Decoder::DEC0212_Solaris = nullptr;

void EUC_JP_Open$Decoder::init$($Charset* cs) {
	$init($EUC_JP$Decoder);
	$EUC_JP$Decoder::init$(cs, 0.5f, 1.0f, $EUC_JP$Decoder::DEC0201, $EUC_JP$Decoder::DEC0208, EUC_JP_Open$Decoder::DEC0212_Solaris);
}

char16_t EUC_JP_Open$Decoder::decodeDouble(int32_t byte1, int32_t byte2) {
	char16_t c = $EUC_JP$Decoder::decodeDouble(byte1, byte2);
	if (c == (char16_t)0xFFFD) {
		return $nc(EUC_JP_Open$Decoder::DEC0208_Solaris)->decodeDouble(byte1 - 128, byte2 - 128);
	}
	return c;
}

void clinit$EUC_JP_Open$Decoder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(EUC_JP_Open$Decoder::DEC0208_Solaris, $cast($DoubleByte$Decoder, $$new($JIS_X_0208_Solaris)->newDecoder()));
	$assignStatic(EUC_JP_Open$Decoder::DEC0212_Solaris, $cast($DoubleByte$Decoder, $$new($JIS_X_0212_Solaris)->newDecoder()));
}

EUC_JP_Open$Decoder::EUC_JP_Open$Decoder() {
}

$Class* EUC_JP_Open$Decoder::load$($String* name, bool initialize) {
	$loadClass(EUC_JP_Open$Decoder, name, initialize, &_EUC_JP_Open$Decoder_ClassInfo_, clinit$EUC_JP_Open$Decoder, allocate$EUC_JP_Open$Decoder);
	return class$;
}

$Class* EUC_JP_Open$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun