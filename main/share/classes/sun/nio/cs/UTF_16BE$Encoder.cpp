#include <sun/nio/cs/UTF_16BE$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16BE.h>
#include <sun/nio/cs/UnicodeEncoder.h>
#include <jcpp.h>

#undef BIG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UTF_16BE = ::sun::nio::cs::UTF_16BE;
using $UnicodeEncoder = ::sun::nio::cs::UnicodeEncoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _UTF_16BE$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(UTF_16BE$Encoder::*)($Charset*)>(&UTF_16BE$Encoder::init$))},
	{}
};

$InnerClassInfo _UTF_16BE$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_16BE$Encoder", "sun.nio.cs.UTF_16BE", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UTF_16BE$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.UTF_16BE$Encoder",
	"sun.nio.cs.UnicodeEncoder",
	nullptr,
	nullptr,
	_UTF_16BE$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_16BE$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_16BE"
};

$Object* allocate$UTF_16BE$Encoder($Class* clazz) {
	return $of($alloc(UTF_16BE$Encoder));
}

void UTF_16BE$Encoder::init$($Charset* cs) {
	$UnicodeEncoder::init$(cs, $UnicodeEncoder::BIG, false);
}

UTF_16BE$Encoder::UTF_16BE$Encoder() {
}

$Class* UTF_16BE$Encoder::load$($String* name, bool initialize) {
	$loadClass(UTF_16BE$Encoder, name, initialize, &_UTF_16BE$Encoder_ClassInfo_, allocate$UTF_16BE$Encoder);
	return class$;
}

$Class* UTF_16BE$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun