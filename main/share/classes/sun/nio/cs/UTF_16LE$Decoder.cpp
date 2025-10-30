#include <sun/nio/cs/UTF_16LE$Decoder.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16LE.h>
#include <sun/nio/cs/UnicodeDecoder.h>
#include <jcpp.h>

#undef LITTLE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UTF_16LE = ::sun::nio::cs::UTF_16LE;
using $UnicodeDecoder = ::sun::nio::cs::UnicodeDecoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _UTF_16LE$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(UTF_16LE$Decoder::*)($Charset*)>(&UTF_16LE$Decoder::init$))},
	{}
};

$InnerClassInfo _UTF_16LE$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_16LE$Decoder", "sun.nio.cs.UTF_16LE", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UTF_16LE$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.UTF_16LE$Decoder",
	"sun.nio.cs.UnicodeDecoder",
	nullptr,
	nullptr,
	_UTF_16LE$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_16LE$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_16LE"
};

$Object* allocate$UTF_16LE$Decoder($Class* clazz) {
	return $of($alloc(UTF_16LE$Decoder));
}

void UTF_16LE$Decoder::init$($Charset* cs) {
	$UnicodeDecoder::init$(cs, $UnicodeDecoder::LITTLE);
}

UTF_16LE$Decoder::UTF_16LE$Decoder() {
}

$Class* UTF_16LE$Decoder::load$($String* name, bool initialize) {
	$loadClass(UTF_16LE$Decoder, name, initialize, &_UTF_16LE$Decoder_ClassInfo_, allocate$UTF_16LE$Decoder);
	return class$;
}

$Class* UTF_16LE$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun