#include <sun/nio/cs/UTF_16$Encoder.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16.h>
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

void UTF_16$Encoder::init$($Charset* cs) {
	$UnicodeEncoder::init$(cs, $UnicodeEncoder::BIG, true);
}

UTF_16$Encoder::UTF_16$Encoder() {
}

$Class* UTF_16$Encoder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(UTF_16$Encoder, init$, void, $Charset*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.UTF_16$Encoder", "sun.nio.cs.UTF_16", "Encoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.UTF_16$Encoder",
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
		"sun.nio.cs.UTF_16"
	};
	$loadClass(UTF_16$Encoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UTF_16$Encoder);
	});
	return class$;
}

$Class* UTF_16$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun