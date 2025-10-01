#include <sun/nio/cs/UTF_16BE$Decoder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16BE.h>
#include <sun/nio/cs/UnicodeDecoder.h>
#include <jcpp.h>

#undef BIG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UTF_16BE = ::sun::nio::cs::UTF_16BE;
using $UnicodeDecoder = ::sun::nio::cs::UnicodeDecoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _UTF_16BE$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(UTF_16BE$Decoder::*)($Charset*)>(&UTF_16BE$Decoder::init$))},
	{}
};

$InnerClassInfo _UTF_16BE$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_16BE$Decoder", "sun.nio.cs.UTF_16BE", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UTF_16BE$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.UTF_16BE$Decoder",
	"sun.nio.cs.UnicodeDecoder",
	nullptr,
	nullptr,
	_UTF_16BE$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_16BE$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_16BE"
};

$Object* allocate$UTF_16BE$Decoder($Class* clazz) {
	return $of($alloc(UTF_16BE$Decoder));
}

void UTF_16BE$Decoder::init$($Charset* cs) {
	$UnicodeDecoder::init$(cs, $UnicodeDecoder::BIG);
}

UTF_16BE$Decoder::UTF_16BE$Decoder() {
}

$Class* UTF_16BE$Decoder::load$($String* name, bool initialize) {
	$loadClass(UTF_16BE$Decoder, name, initialize, &_UTF_16BE$Decoder_ClassInfo_, allocate$UTF_16BE$Decoder);
	return class$;
}

$Class* UTF_16BE$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun