#include <sun/nio/cs/UTF_16BE$Encoder.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16BE.h>
#include <sun/nio/cs/UnicodeEncoder.h>
#include <jcpp.h>

#undef BIG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UnicodeEncoder = ::sun::nio::cs::UnicodeEncoder;

namespace sun {
	namespace nio {
		namespace cs {

void UTF_16BE$Encoder::init$($Charset* cs) {
	$UnicodeEncoder::init$(cs, $UnicodeEncoder::BIG, false);
}

UTF_16BE$Encoder::UTF_16BE$Encoder() {
}

$Class* UTF_16BE$Encoder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(UTF_16BE$Encoder, init$, void, $Charset*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.UTF_16BE$Encoder", "sun.nio.cs.UTF_16BE", "Encoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.UTF_16BE$Encoder",
		"sun.nio.cs.UnicodeEncoder",
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
	$loadClass(UTF_16BE$Encoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UTF_16BE$Encoder);
	});
	return class$;
}

$Class* UTF_16BE$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun