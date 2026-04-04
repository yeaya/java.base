#include <sun/nio/cs/UTF_16BE$Decoder.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16BE.h>
#include <sun/nio/cs/UnicodeDecoder.h>
#include <jcpp.h>

#undef BIG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UnicodeDecoder = ::sun::nio::cs::UnicodeDecoder;

namespace sun {
	namespace nio {
		namespace cs {

void UTF_16BE$Decoder::init$($Charset* cs) {
	$UnicodeDecoder::init$(cs, $UnicodeDecoder::BIG);
}

UTF_16BE$Decoder::UTF_16BE$Decoder() {
}

$Class* UTF_16BE$Decoder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(UTF_16BE$Decoder, init$, void, $Charset*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.UTF_16BE$Decoder", "sun.nio.cs.UTF_16BE", "Decoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.UTF_16BE$Decoder",
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
		"sun.nio.cs.UTF_16BE"
	};
	$loadClass(UTF_16BE$Decoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UTF_16BE$Decoder);
	});
	return class$;
}

$Class* UTF_16BE$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun