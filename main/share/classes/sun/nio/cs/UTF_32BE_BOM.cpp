#include <sun/nio/cs/UTF_32BE_BOM.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <sun/nio/cs/UTF_32Coder$Decoder.h>
#include <sun/nio/cs/UTF_32Coder$Encoder.h>
#include <sun/nio/cs/UTF_32Coder.h>
#include <sun/nio/cs/Unicode.h>
#include <jcpp.h>

#undef BIG
#undef UTF_32BE_BOM

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;
using $UTF_32Coder = ::sun::nio::cs::UTF_32Coder;
using $UTF_32Coder$Decoder = ::sun::nio::cs::UTF_32Coder$Decoder;
using $UTF_32Coder$Encoder = ::sun::nio::cs::UTF_32Coder$Encoder;
using $Unicode = ::sun::nio::cs::Unicode;

namespace sun {
	namespace nio {
		namespace cs {

void UTF_32BE_BOM::init$() {
	$Unicode::init$("X-UTF-32BE-BOM"_s, $($StandardCharsets::aliases_UTF_32BE_BOM()));
}

$String* UTF_32BE_BOM::historicalName() {
	return "X-UTF-32BE-BOM"_s;
}

$CharsetDecoder* UTF_32BE_BOM::newDecoder() {
	return $new($UTF_32Coder$Decoder, this, $UTF_32Coder::BIG);
}

$CharsetEncoder* UTF_32BE_BOM::newEncoder() {
	return $new($UTF_32Coder$Encoder, this, $UTF_32Coder::BIG, true);
}

bool UTF_32BE_BOM::contains($Charset* cs) {
	return $Unicode::contains(cs);
}

UTF_32BE_BOM::UTF_32BE_BOM() {
}

$Class* UTF_32BE_BOM::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UTF_32BE_BOM, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(UTF_32BE_BOM, contains, bool, $Charset*)},
		{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UTF_32BE_BOM, historicalName, $String*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(UTF_32BE_BOM, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(UTF_32BE_BOM, newEncoder, $CharsetEncoder*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.UTF_32BE_BOM",
		"sun.nio.cs.Unicode",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UTF_32BE_BOM, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(UTF_32BE_BOM));
	});
	return class$;
}

$Class* UTF_32BE_BOM::class$ = nullptr;

		} // cs
	} // nio
} // sun