#include <sun/nio/cs/EUC_JP_LINUX$Encoder.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/EUC_JP$Encoder.h>
#include <sun/nio/cs/EUC_JP_LINUX.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $EUC_JP$Encoder = ::sun::nio::cs::EUC_JP$Encoder;

namespace sun {
	namespace nio {
		namespace cs {

void EUC_JP_LINUX$Encoder::init$($Charset* cs) {
	$init($EUC_JP$Encoder);
	$EUC_JP$Encoder::init$(cs, 2.0f, 2.0f, $EUC_JP$Encoder::ENC0201, $EUC_JP$Encoder::ENC0208, nullptr);
}

EUC_JP_LINUX$Encoder::EUC_JP_LINUX$Encoder() {
}

$Class* EUC_JP_LINUX$Encoder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(EUC_JP_LINUX$Encoder, init$, void, $Charset*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.EUC_JP_LINUX$Encoder", "sun.nio.cs.EUC_JP_LINUX", "Encoder", $PRIVATE | $STATIC},
		{"sun.nio.cs.EUC_JP$Encoder", "sun.nio.cs.EUC_JP", "Encoder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.EUC_JP_LINUX$Encoder",
		"sun.nio.cs.EUC_JP$Encoder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.EUC_JP_LINUX"
	};
	$loadClass(EUC_JP_LINUX$Encoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EUC_JP_LINUX$Encoder);
	});
	return class$;
}

$Class* EUC_JP_LINUX$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun