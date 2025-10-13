#include <sun/nio/cs/UTF_32.h>

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

#undef BIG
#undef NONE
#undef UTF_32

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

$MethodInfo _UTF_32_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UTF_32::*)()>(&UTF_32::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UTF_32_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.UTF_32",
	"sun.nio.cs.Unicode",
	nullptr,
	nullptr,
	_UTF_32_MethodInfo_
};

$Object* allocate$UTF_32($Class* clazz) {
	return $of($alloc(UTF_32));
}

void UTF_32::init$() {
	$Unicode::init$("UTF-32"_s, $($StandardCharsets::aliases_UTF_32()));
}

$String* UTF_32::historicalName() {
	return "UTF-32"_s;
}

$CharsetDecoder* UTF_32::newDecoder() {
	return $new($UTF_32Coder$Decoder, this, $UTF_32Coder::NONE);
}

$CharsetEncoder* UTF_32::newEncoder() {
	return $new($UTF_32Coder$Encoder, this, $UTF_32Coder::BIG, false);
}

bool UTF_32::contains($Charset* cs) {
	return $Unicode::contains(cs);
}

UTF_32::UTF_32() {
}

$Class* UTF_32::load$($String* name, bool initialize) {
	$loadClass(UTF_32, name, initialize, &_UTF_32_ClassInfo_, allocate$UTF_32);
	return class$;
}

$Class* UTF_32::class$ = nullptr;

		} // cs
	} // nio
} // sun