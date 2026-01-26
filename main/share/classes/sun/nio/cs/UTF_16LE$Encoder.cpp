#include <sun/nio/cs/UTF_16LE$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16LE.h>
#include <sun/nio/cs/UnicodeEncoder.h>
#include <jcpp.h>

#undef LITTLE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UnicodeEncoder = ::sun::nio::cs::UnicodeEncoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _UTF_16LE$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(UTF_16LE$Encoder, init$, void, $Charset*)},
	{}
};

$InnerClassInfo _UTF_16LE$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_16LE$Encoder", "sun.nio.cs.UTF_16LE", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UTF_16LE$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.UTF_16LE$Encoder",
	"sun.nio.cs.UnicodeEncoder",
	nullptr,
	nullptr,
	_UTF_16LE$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_16LE$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_16LE"
};

$Object* allocate$UTF_16LE$Encoder($Class* clazz) {
	return $of($alloc(UTF_16LE$Encoder));
}

void UTF_16LE$Encoder::init$($Charset* cs) {
	$UnicodeEncoder::init$(cs, $UnicodeEncoder::LITTLE, false);
}

UTF_16LE$Encoder::UTF_16LE$Encoder() {
}

$Class* UTF_16LE$Encoder::load$($String* name, bool initialize) {
	$loadClass(UTF_16LE$Encoder, name, initialize, &_UTF_16LE$Encoder_ClassInfo_, allocate$UTF_16LE$Encoder);
	return class$;
}

$Class* UTF_16LE$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun