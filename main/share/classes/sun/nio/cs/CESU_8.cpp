#include <sun/nio/cs/CESU_8.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/CESU_8$Decoder.h>
#include <sun/nio/cs/CESU_8$Encoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <sun/nio/cs/Unicode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CESU_8$Decoder = ::sun::nio::cs::CESU_8$Decoder;
using $CESU_8$Encoder = ::sun::nio::cs::CESU_8$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;
using $Unicode = ::sun::nio::cs::Unicode;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _CESU_8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CESU_8::*)()>(&CESU_8::init$))},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"updatePositions", "(Ljava/nio/Buffer;ILjava/nio/Buffer;I)V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)($Buffer*,int32_t,$Buffer*,int32_t)>(&CESU_8::updatePositions))},
	{}
};

$InnerClassInfo _CESU_8_InnerClassesInfo_[] = {
	{"sun.nio.cs.CESU_8$Encoder", "sun.nio.cs.CESU_8", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.CESU_8$Decoder", "sun.nio.cs.CESU_8", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CESU_8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.CESU_8",
	"sun.nio.cs.Unicode",
	nullptr,
	nullptr,
	_CESU_8_MethodInfo_,
	nullptr,
	nullptr,
	_CESU_8_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.CESU_8$Encoder,sun.nio.cs.CESU_8$Decoder"
};

$Object* allocate$CESU_8($Class* clazz) {
	return $of($alloc(CESU_8));
}

void CESU_8::init$() {
	$Unicode::init$("CESU-8"_s, $($StandardCharsets::aliases_CESU_8()));
}

$String* CESU_8::historicalName() {
	return "CESU8"_s;
}

$CharsetDecoder* CESU_8::newDecoder() {
	return $new($CESU_8$Decoder, this);
}

$CharsetEncoder* CESU_8::newEncoder() {
	return $new($CESU_8$Encoder, this);
}

void CESU_8::updatePositions($Buffer* src, int32_t sp, $Buffer* dst, int32_t dp) {
	$init(CESU_8);
	$nc(src)->position(sp - src->arrayOffset());
	$nc(dst)->position(dp - dst->arrayOffset());
}

CESU_8::CESU_8() {
}

$Class* CESU_8::load$($String* name, bool initialize) {
	$loadClass(CESU_8, name, initialize, &_CESU_8_ClassInfo_, allocate$CESU_8);
	return class$;
}

$Class* CESU_8::class$ = nullptr;

		} // cs
	} // nio
} // sun