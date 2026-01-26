#include <sun/nio/cs/UTF_32BE.h>

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
#undef UTF_32BE

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

$MethodInfo _UTF_32BE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UTF_32BE, init$, void)},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(UTF_32BE, contains, bool, $Charset*)},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UTF_32BE, historicalName, $String*)},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(UTF_32BE, newDecoder, $CharsetDecoder*)},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(UTF_32BE, newEncoder, $CharsetEncoder*)},
	{}
};

$ClassInfo _UTF_32BE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.UTF_32BE",
	"sun.nio.cs.Unicode",
	nullptr,
	nullptr,
	_UTF_32BE_MethodInfo_
};

$Object* allocate$UTF_32BE($Class* clazz) {
	return $of($alloc(UTF_32BE));
}

void UTF_32BE::init$() {
	$Unicode::init$("UTF-32BE"_s, $($StandardCharsets::aliases_UTF_32BE()));
}

$String* UTF_32BE::historicalName() {
	return "UTF-32BE"_s;
}

$CharsetDecoder* UTF_32BE::newDecoder() {
	return $new($UTF_32Coder$Decoder, this, $UTF_32Coder::BIG);
}

$CharsetEncoder* UTF_32BE::newEncoder() {
	return $new($UTF_32Coder$Encoder, this, $UTF_32Coder::BIG, false);
}

bool UTF_32BE::contains($Charset* cs) {
	return $Unicode::contains(cs);
}

UTF_32BE::UTF_32BE() {
}

$Class* UTF_32BE::load$($String* name, bool initialize) {
	$loadClass(UTF_32BE, name, initialize, &_UTF_32BE_ClassInfo_, allocate$UTF_32BE);
	return class$;
}

$Class* UTF_32BE::class$ = nullptr;

		} // cs
	} // nio
} // sun