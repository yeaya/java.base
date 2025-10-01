#include <sun/nio/cs/UTF_8.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <sun/nio/cs/UTF_8$Decoder.h>
#include <sun/nio/cs/UTF_8$Encoder.h>
#include <sun/nio/cs/Unicode.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;
using $UTF_8$Decoder = ::sun::nio::cs::UTF_8$Decoder;
using $UTF_8$Encoder = ::sun::nio::cs::UTF_8$Encoder;
using $Unicode = ::sun::nio::cs::Unicode;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _UTF_8_FieldInfo_[] = {
	{"INSTANCE", "Lsun/nio/cs/UTF_8;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(UTF_8, INSTANCE)},
	{}
};

$MethodInfo _UTF_8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UTF_8::*)()>(&UTF_8::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"updatePositions", "(Ljava/nio/Buffer;ILjava/nio/Buffer;I)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($Buffer*,int32_t,$Buffer*,int32_t)>(&UTF_8::updatePositions))},
	{}
};

$InnerClassInfo _UTF_8_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_8$Encoder", "sun.nio.cs.UTF_8", "Encoder", $PRIVATE | $STATIC | $FINAL},
	{"sun.nio.cs.UTF_8$Decoder", "sun.nio.cs.UTF_8", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UTF_8_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.nio.cs.UTF_8",
	"sun.nio.cs.Unicode",
	nullptr,
	_UTF_8_FieldInfo_,
	_UTF_8_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_8_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_8$Encoder,sun.nio.cs.UTF_8$Decoder"
};

$Object* allocate$UTF_8($Class* clazz) {
	return $of($alloc(UTF_8));
}

UTF_8* UTF_8::INSTANCE = nullptr;

void UTF_8::init$() {
	$Unicode::init$("UTF-8"_s, $($StandardCharsets::aliases_UTF_8()));
}

$String* UTF_8::historicalName() {
	return "UTF8"_s;
}

$CharsetDecoder* UTF_8::newDecoder() {
	return $new($UTF_8$Decoder, this);
}

$CharsetEncoder* UTF_8::newEncoder() {
	return $new($UTF_8$Encoder, this);
}

void UTF_8::updatePositions($Buffer* src, int32_t sp, $Buffer* dst, int32_t dp) {
	$init(UTF_8);
	$nc(src)->position(sp - src->arrayOffset());
	$nc(dst)->position(dp - dst->arrayOffset());
}

bool UTF_8::contains($Charset* cs) {
	return $Unicode::contains(cs);
}

void clinit$UTF_8($Class* class$) {
	$assignStatic(UTF_8::INSTANCE, $new(UTF_8));
}

UTF_8::UTF_8() {
}

$Class* UTF_8::load$($String* name, bool initialize) {
	$loadClass(UTF_8, name, initialize, &_UTF_8_ClassInfo_, clinit$UTF_8, allocate$UTF_8);
	return class$;
}

$Class* UTF_8::class$ = nullptr;

		} // cs
	} // nio
} // sun