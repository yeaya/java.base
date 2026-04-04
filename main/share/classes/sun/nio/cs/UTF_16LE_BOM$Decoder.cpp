#include <sun/nio/cs/UTF_16LE_BOM$Decoder.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16LE_BOM.h>
#include <sun/nio/cs/UnicodeDecoder.h>
#include <jcpp.h>

#undef LITTLE
#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UnicodeDecoder = ::sun::nio::cs::UnicodeDecoder;

namespace sun {
	namespace nio {
		namespace cs {

void UTF_16LE_BOM$Decoder::init$($Charset* cs) {
	$UnicodeDecoder::init$(cs, $UnicodeDecoder::NONE, $UnicodeDecoder::LITTLE);
}

UTF_16LE_BOM$Decoder::UTF_16LE_BOM$Decoder() {
}

$Class* UTF_16LE_BOM$Decoder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(UTF_16LE_BOM$Decoder, init$, void, $Charset*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.UTF_16LE_BOM$Decoder", "sun.nio.cs.UTF_16LE_BOM", "Decoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.UTF_16LE_BOM$Decoder",
		"sun.nio.cs.UnicodeDecoder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.UTF_16LE_BOM"
	};
	$loadClass(UTF_16LE_BOM$Decoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UTF_16LE_BOM$Decoder);
	});
	return class$;
}

$Class* UTF_16LE_BOM$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun