#include <sun/nio/cs/MS950_HKSCS$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/HKSCS$Encoder.h>
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
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HKSCS$Encoder = ::sun::nio::cs::HKSCS$Encoder;
using $HKSCSMapping = ::sun::nio::cs::HKSCSMapping;
using $MS950 = ::sun::nio::cs::MS950;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS950_HKSCS$Encoder_FieldInfo_[] = {
	{"ms950", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $STATIC, $staticField(MS950_HKSCS$Encoder, ms950)},
	{"c2bBmp", "[[C", nullptr, $STATIC | $FINAL, $staticField(MS950_HKSCS$Encoder, c2bBmp)},
	{"c2bSupp", "[[C", nullptr, $STATIC | $FINAL, $staticField(MS950_HKSCS$Encoder, c2bSupp)},
	{}
};

$MethodInfo _MS950_HKSCS$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(MS950_HKSCS$Encoder::*)($Charset*)>(&MS950_HKSCS$Encoder::init$))},
	{}
};

$InnerClassInfo _MS950_HKSCS$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS950_HKSCS$Encoder", "sun.nio.cs.MS950_HKSCS", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.HKSCS$Encoder", "sun.nio.cs.HKSCS", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MS950_HKSCS$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS950_HKSCS$Encoder",
	"sun.nio.cs.HKSCS$Encoder",
	nullptr,
	_MS950_HKSCS$Encoder_FieldInfo_,
	_MS950_HKSCS$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_MS950_HKSCS$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS950_HKSCS"
};

$Object* allocate$MS950_HKSCS$Encoder($Class* clazz) {
	return $of($alloc(MS950_HKSCS$Encoder));
}

$DoubleByte$Encoder* MS950_HKSCS$Encoder::ms950 = nullptr;
$charArray2* MS950_HKSCS$Encoder::c2bBmp = nullptr;
$charArray2* MS950_HKSCS$Encoder::c2bSupp = nullptr;

void MS950_HKSCS$Encoder::init$($Charset* cs) {
	$HKSCS$Encoder::init$(cs, MS950_HKSCS$Encoder::ms950, MS950_HKSCS$Encoder::c2bBmp, MS950_HKSCS$Encoder::c2bSupp);
}

void clinit$MS950_HKSCS$Encoder($Class* class$) {
	$assignStatic(MS950_HKSCS$Encoder::ms950, $cast($DoubleByte$Encoder, $$new($MS950)->newEncoder()));
	$assignStatic(MS950_HKSCS$Encoder::c2bBmp, $new($charArray2, 256));
	$assignStatic(MS950_HKSCS$Encoder::c2bSupp, $new($charArray2, 256));
	{
		$init($HKSCSMapping);
		$HKSCS$Encoder::initc2b(MS950_HKSCS$Encoder::c2bBmp, $HKSCSMapping::b2cBmpStr, $HKSCSMapping::pua);
		$HKSCS$Encoder::initc2b(MS950_HKSCS$Encoder::c2bSupp, $HKSCSMapping::b2cSuppStr, nullptr);
	}
}

MS950_HKSCS$Encoder::MS950_HKSCS$Encoder() {
}

$Class* MS950_HKSCS$Encoder::load$($String* name, bool initialize) {
	$loadClass(MS950_HKSCS$Encoder, name, initialize, &_MS950_HKSCS$Encoder_ClassInfo_, clinit$MS950_HKSCS$Encoder, allocate$MS950_HKSCS$Encoder);
	return class$;
}

$Class* MS950_HKSCS$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun