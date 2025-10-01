#include <sun/nio/cs/UTF_32LE.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <sun/nio/cs/UTF_32Coder$Decoder.h>
#include <sun/nio/cs/UTF_32Coder$Encoder.h>
#include <sun/nio/cs/UTF_32Coder.h>
#include <sun/nio/cs/Unicode.h>
#include <jcpp.h>

#undef LITTLE

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

$MethodInfo _UTF_32LE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UTF_32LE::*)()>(&UTF_32LE::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UTF_32LE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.UTF_32LE",
	"sun.nio.cs.Unicode",
	nullptr,
	nullptr,
	_UTF_32LE_MethodInfo_
};

$Object* allocate$UTF_32LE($Class* clazz) {
	return $of($alloc(UTF_32LE));
}

void UTF_32LE::init$() {
	$Unicode::init$("UTF-32LE"_s, $($StandardCharsets::aliases_UTF_32LE()));
}

$String* UTF_32LE::historicalName() {
	return "UTF-32LE"_s;
}

$CharsetDecoder* UTF_32LE::newDecoder() {
	return $new($UTF_32Coder$Decoder, this, $UTF_32Coder::LITTLE);
}

$CharsetEncoder* UTF_32LE::newEncoder() {
	return $new($UTF_32Coder$Encoder, this, $UTF_32Coder::LITTLE, false);
}

bool UTF_32LE::contains($Charset* cs) {
	return $Unicode::contains(cs);
}

UTF_32LE::UTF_32LE() {
}

$Class* UTF_32LE::load$($String* name, bool initialize) {
	$loadClass(UTF_32LE, name, initialize, &_UTF_32LE_ClassInfo_, allocate$UTF_32LE);
	return class$;
}

$Class* UTF_32LE::class$ = nullptr;

		} // cs
	} // nio
} // sun