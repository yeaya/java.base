#include <sun/nio/cs/UTF_16$Decoder.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16.h>
#include <sun/nio/cs/UnicodeDecoder.h>
#include <jcpp.h>

#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UnicodeDecoder = ::sun::nio::cs::UnicodeDecoder;

namespace sun {
	namespace nio {
		namespace cs {

void UTF_16$Decoder::init$($Charset* cs) {
	$UnicodeDecoder::init$(cs, $UnicodeDecoder::NONE);
}

UTF_16$Decoder::UTF_16$Decoder() {
}

$Class* UTF_16$Decoder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(UTF_16$Decoder, init$, void, $Charset*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.UTF_16$Decoder", "sun.nio.cs.UTF_16", "Decoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.UTF_16$Decoder",
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
		"sun.nio.cs.UTF_16"
	};
	$loadClass(UTF_16$Decoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UTF_16$Decoder);
	});
	return class$;
}

$Class* UTF_16$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun