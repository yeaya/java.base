#include <sun/nio/cs/UTF_16LE_BOM$Decoder.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16LE_BOM.h>
#include <sun/nio/cs/UnicodeDecoder.h>
#include <jcpp.h>

#undef LITTLE
#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UnicodeDecoder = ::sun::nio::cs::UnicodeDecoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _UTF_16LE_BOM$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(UTF_16LE_BOM$Decoder::*)($Charset*)>(&UTF_16LE_BOM$Decoder::init$))},
	{}
};

$InnerClassInfo _UTF_16LE_BOM$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_16LE_BOM$Decoder", "sun.nio.cs.UTF_16LE_BOM", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UTF_16LE_BOM$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.UTF_16LE_BOM$Decoder",
	"sun.nio.cs.UnicodeDecoder",
	nullptr,
	nullptr,
	_UTF_16LE_BOM$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_16LE_BOM$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_16LE_BOM"
};

$Object* allocate$UTF_16LE_BOM$Decoder($Class* clazz) {
	return $of($alloc(UTF_16LE_BOM$Decoder));
}

void UTF_16LE_BOM$Decoder::init$($Charset* cs) {
	$UnicodeDecoder::init$(cs, $UnicodeDecoder::NONE, $UnicodeDecoder::LITTLE);
}

UTF_16LE_BOM$Decoder::UTF_16LE_BOM$Decoder() {
}

$Class* UTF_16LE_BOM$Decoder::load$($String* name, bool initialize) {
	$loadClass(UTF_16LE_BOM$Decoder, name, initialize, &_UTF_16LE_BOM$Decoder_ClassInfo_, allocate$UTF_16LE_BOM$Decoder);
	return class$;
}

$Class* UTF_16LE_BOM$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun