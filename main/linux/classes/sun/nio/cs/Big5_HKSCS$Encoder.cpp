#include <sun/nio/cs/Big5_HKSCS$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/Big5.h>
#include <sun/nio/cs/Big5_HKSCS.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/HKSCS$Encoder.h>
#include <sun/nio/cs/HKSCSMapping.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Big5 = ::sun::nio::cs::Big5;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HKSCS$Encoder = ::sun::nio::cs::HKSCS$Encoder;
using $HKSCSMapping = ::sun::nio::cs::HKSCSMapping;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _Big5_HKSCS$Encoder_FieldInfo_[] = {
	{"big5", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Big5_HKSCS$Encoder, big5)},
	{"c2bBmp", "[[C", nullptr, $STATIC | $FINAL, $staticField(Big5_HKSCS$Encoder, c2bBmp)},
	{"c2bSupp", "[[C", nullptr, $STATIC | $FINAL, $staticField(Big5_HKSCS$Encoder, c2bSupp)},
	{}
};

$MethodInfo _Big5_HKSCS$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(Big5_HKSCS$Encoder, init$, void, $Charset*)},
	{}
};

$InnerClassInfo _Big5_HKSCS$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.Big5_HKSCS$Encoder", "sun.nio.cs.Big5_HKSCS", "Encoder", $STATIC},
	{"sun.nio.cs.HKSCS$Encoder", "sun.nio.cs.HKSCS", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Big5_HKSCS$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.Big5_HKSCS$Encoder",
	"sun.nio.cs.HKSCS$Encoder",
	nullptr,
	_Big5_HKSCS$Encoder_FieldInfo_,
	_Big5_HKSCS$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_Big5_HKSCS$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.Big5_HKSCS"
};

$Object* allocate$Big5_HKSCS$Encoder($Class* clazz) {
	return $of($alloc(Big5_HKSCS$Encoder));
}

$DoubleByte$Encoder* Big5_HKSCS$Encoder::big5 = nullptr;
$charArray2* Big5_HKSCS$Encoder::c2bBmp = nullptr;
$charArray2* Big5_HKSCS$Encoder::c2bSupp = nullptr;

void Big5_HKSCS$Encoder::init$($Charset* cs) {
	$HKSCS$Encoder::init$(cs, Big5_HKSCS$Encoder::big5, Big5_HKSCS$Encoder::c2bBmp, Big5_HKSCS$Encoder::c2bSupp);
}

void clinit$Big5_HKSCS$Encoder($Class* class$) {
	$assignStatic(Big5_HKSCS$Encoder::big5, $cast($DoubleByte$Encoder, $$new($Big5)->newEncoder()));
	$assignStatic(Big5_HKSCS$Encoder::c2bBmp, $new($charArray2, 256));
	$assignStatic(Big5_HKSCS$Encoder::c2bSupp, $new($charArray2, 256));
	{
		$init($HKSCSMapping);
		$HKSCS$Encoder::initc2b(Big5_HKSCS$Encoder::c2bBmp, $HKSCSMapping::b2cBmpStr, $HKSCSMapping::pua);
		$HKSCS$Encoder::initc2b(Big5_HKSCS$Encoder::c2bSupp, $HKSCSMapping::b2cSuppStr, nullptr);
	}
}

Big5_HKSCS$Encoder::Big5_HKSCS$Encoder() {
}

$Class* Big5_HKSCS$Encoder::load$($String* name, bool initialize) {
	$loadClass(Big5_HKSCS$Encoder, name, initialize, &_Big5_HKSCS$Encoder_ClassInfo_, clinit$Big5_HKSCS$Encoder, allocate$Big5_HKSCS$Encoder);
	return class$;
}

$Class* Big5_HKSCS$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun