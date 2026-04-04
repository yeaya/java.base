#include <sun/nio/cs/EUC_JP_LINUX$Decoder.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/EUC_JP$Decoder.h>
#include <sun/nio/cs/EUC_JP_LINUX.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $EUC_JP$Decoder = ::sun::nio::cs::EUC_JP$Decoder;

namespace sun {
	namespace nio {
		namespace cs {

void EUC_JP_LINUX$Decoder::init$($Charset* cs) {
	$init($EUC_JP$Decoder);
	$EUC_JP$Decoder::init$(cs, 1.0f, 1.0f, $EUC_JP$Decoder::DEC0201, $EUC_JP$Decoder::DEC0208, nullptr);
}

EUC_JP_LINUX$Decoder::EUC_JP_LINUX$Decoder() {
}

$Class* EUC_JP_LINUX$Decoder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(EUC_JP_LINUX$Decoder, init$, void, $Charset*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.EUC_JP_LINUX$Decoder", "sun.nio.cs.EUC_JP_LINUX", "Decoder", $PRIVATE | $STATIC},
		{"sun.nio.cs.EUC_JP$Decoder", "sun.nio.cs.EUC_JP", "Decoder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.EUC_JP_LINUX$Decoder",
		"sun.nio.cs.EUC_JP$Decoder",
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
	$loadClass(EUC_JP_LINUX$Decoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(EUC_JP_LINUX$Decoder));
	});
	return class$;
}

$Class* EUC_JP_LINUX$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun