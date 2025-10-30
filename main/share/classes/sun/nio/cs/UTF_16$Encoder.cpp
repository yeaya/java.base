#include <sun/nio/cs/UTF_16$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16.h>
#include <sun/nio/cs/UnicodeEncoder.h>
#include <jcpp.h>

#undef BIG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UTF_16 = ::sun::nio::cs::UTF_16;
using $UnicodeEncoder = ::sun::nio::cs::UnicodeEncoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _UTF_16$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(UTF_16$Encoder::*)($Charset*)>(&UTF_16$Encoder::init$))},
	{}
};

$InnerClassInfo _UTF_16$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_16$Encoder", "sun.nio.cs.UTF_16", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UTF_16$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.UTF_16$Encoder",
	"sun.nio.cs.UnicodeEncoder",
	nullptr,
	nullptr,
	_UTF_16$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_16$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_16"
};

$Object* allocate$UTF_16$Encoder($Class* clazz) {
	return $of($alloc(UTF_16$Encoder));
}

void UTF_16$Encoder::init$($Charset* cs) {
	$UnicodeEncoder::init$(cs, $UnicodeEncoder::BIG, true);
}

UTF_16$Encoder::UTF_16$Encoder() {
}

$Class* UTF_16$Encoder::load$($String* name, bool initialize) {
	$loadClass(UTF_16$Encoder, name, initialize, &_UTF_16$Encoder_ClassInfo_, allocate$UTF_16$Encoder);
	return class$;
}

$Class* UTF_16$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun