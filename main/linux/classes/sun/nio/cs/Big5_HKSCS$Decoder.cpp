#include <sun/nio/cs/Big5_HKSCS$Decoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/Big5.h>
#include <sun/nio/cs/Big5_HKSCS.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/HKSCS$Decoder.h>
#include <sun/nio/cs/HKSCSMapping.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Big5 = ::sun::nio::cs::Big5;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $HKSCS$Decoder = ::sun::nio::cs::HKSCS$Decoder;
using $HKSCSMapping = ::sun::nio::cs::HKSCSMapping;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _Big5_HKSCS$Decoder_FieldInfo_[] = {
	{"big5", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Big5_HKSCS$Decoder, big5)},
	{"b2cBmp", "[[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Big5_HKSCS$Decoder, b2cBmp)},
	{"b2cSupp", "[[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Big5_HKSCS$Decoder, b2cSupp)},
	{}
};

$MethodInfo _Big5_HKSCS$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(Big5_HKSCS$Decoder::*)($Charset*)>(&Big5_HKSCS$Decoder::init$))},
	{}
};

$InnerClassInfo _Big5_HKSCS$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.Big5_HKSCS$Decoder", "sun.nio.cs.Big5_HKSCS", "Decoder", $STATIC},
	{"sun.nio.cs.HKSCS$Decoder", "sun.nio.cs.HKSCS", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Big5_HKSCS$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.Big5_HKSCS$Decoder",
	"sun.nio.cs.HKSCS$Decoder",
	nullptr,
	_Big5_HKSCS$Decoder_FieldInfo_,
	_Big5_HKSCS$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_Big5_HKSCS$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.Big5_HKSCS"
};

$Object* allocate$Big5_HKSCS$Decoder($Class* clazz) {
	return $of($alloc(Big5_HKSCS$Decoder));
}

$DoubleByte$Decoder* Big5_HKSCS$Decoder::big5 = nullptr;
$charArray2* Big5_HKSCS$Decoder::b2cBmp = nullptr;
$charArray2* Big5_HKSCS$Decoder::b2cSupp = nullptr;

void Big5_HKSCS$Decoder::init$($Charset* cs) {
	$HKSCS$Decoder::init$(cs, Big5_HKSCS$Decoder::big5, Big5_HKSCS$Decoder::b2cBmp, Big5_HKSCS$Decoder::b2cSupp);
}

void clinit$Big5_HKSCS$Decoder($Class* class$) {
	$assignStatic(Big5_HKSCS$Decoder::big5, $cast($DoubleByte$Decoder, $$new($Big5)->newDecoder()));
	$assignStatic(Big5_HKSCS$Decoder::b2cBmp, $new($charArray2, 256));
	$assignStatic(Big5_HKSCS$Decoder::b2cSupp, $new($charArray2, 256));
	{
		$init($HKSCSMapping);
		$HKSCS$Decoder::initb2c(Big5_HKSCS$Decoder::b2cBmp, $HKSCSMapping::b2cBmpStr);
		$HKSCS$Decoder::initb2c(Big5_HKSCS$Decoder::b2cSupp, $HKSCSMapping::b2cSuppStr);
	}
}

Big5_HKSCS$Decoder::Big5_HKSCS$Decoder() {
}

$Class* Big5_HKSCS$Decoder::load$($String* name, bool initialize) {
	$loadClass(Big5_HKSCS$Decoder, name, initialize, &_Big5_HKSCS$Decoder_ClassInfo_, clinit$Big5_HKSCS$Decoder, allocate$Big5_HKSCS$Decoder);
	return class$;
}

$Class* Big5_HKSCS$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun