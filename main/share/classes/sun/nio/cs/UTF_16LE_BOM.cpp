#include <sun/nio/cs/UTF_16LE_BOM.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <sun/nio/cs/UTF_16LE_BOM$Decoder.h>
#include <sun/nio/cs/UTF_16LE_BOM$Encoder.h>
#include <sun/nio/cs/Unicode.h>
#include <jcpp.h>

#undef UTF_16LE_BOM

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;
using $UTF_16LE_BOM$Decoder = ::sun::nio::cs::UTF_16LE_BOM$Decoder;
using $UTF_16LE_BOM$Encoder = ::sun::nio::cs::UTF_16LE_BOM$Encoder;
using $Unicode = ::sun::nio::cs::Unicode;

namespace sun {
	namespace nio {
		namespace cs {

void UTF_16LE_BOM::init$() {
	$Unicode::init$("x-UTF-16LE-BOM"_s, $($StandardCharsets::aliases_UTF_16LE_BOM()));
}

$String* UTF_16LE_BOM::historicalName() {
	return "UnicodeLittle"_s;
}

$CharsetDecoder* UTF_16LE_BOM::newDecoder() {
	return $new($UTF_16LE_BOM$Decoder, this);
}

$CharsetEncoder* UTF_16LE_BOM::newEncoder() {
	return $new($UTF_16LE_BOM$Encoder, this);
}

UTF_16LE_BOM::UTF_16LE_BOM() {
}

$Class* UTF_16LE_BOM::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UTF_16LE_BOM, init$, void)},
		{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UTF_16LE_BOM, historicalName, $String*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(UTF_16LE_BOM, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(UTF_16LE_BOM, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.UTF_16LE_BOM$Encoder", "sun.nio.cs.UTF_16LE_BOM", "Encoder", $PRIVATE | $STATIC},
		{"sun.nio.cs.UTF_16LE_BOM$Decoder", "sun.nio.cs.UTF_16LE_BOM", "Decoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.UTF_16LE_BOM",
		"sun.nio.cs.Unicode",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.cs.UTF_16LE_BOM$Encoder,sun.nio.cs.UTF_16LE_BOM$Decoder"
	};
	$loadClass(UTF_16LE_BOM, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(UTF_16LE_BOM));
	});
	return class$;
}

$Class* UTF_16LE_BOM::class$ = nullptr;

		} // cs
	} // nio
} // sun