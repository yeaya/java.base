#include <sun/nio/cs/UTF_16$Decoder.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16.h>
#include <sun/nio/cs/UnicodeDecoder.h>
#include <jcpp.h>

#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UTF_16 = ::sun::nio::cs::UTF_16;
using $UnicodeDecoder = ::sun::nio::cs::UnicodeDecoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _UTF_16$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(UTF_16$Decoder::*)($Charset*)>(&UTF_16$Decoder::init$))},
	{}
};

$InnerClassInfo _UTF_16$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_16$Decoder", "sun.nio.cs.UTF_16", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UTF_16$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.UTF_16$Decoder",
	"sun.nio.cs.UnicodeDecoder",
	nullptr,
	nullptr,
	_UTF_16$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_16$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_16"
};

$Object* allocate$UTF_16$Decoder($Class* clazz) {
	return $of($alloc(UTF_16$Decoder));
}

void UTF_16$Decoder::init$($Charset* cs) {
	$UnicodeDecoder::init$(cs, $UnicodeDecoder::NONE);
}

UTF_16$Decoder::UTF_16$Decoder() {
}

$Class* UTF_16$Decoder::load$($String* name, bool initialize) {
	$loadClass(UTF_16$Decoder, name, initialize, &_UTF_16$Decoder_ClassInfo_, allocate$UTF_16$Decoder);
	return class$;
}

$Class* UTF_16$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun