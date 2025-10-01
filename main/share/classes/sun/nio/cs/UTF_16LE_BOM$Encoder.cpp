#include <sun/nio/cs/UTF_16LE_BOM$Encoder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/UTF_16LE_BOM.h>
#include <sun/nio/cs/UnicodeEncoder.h>
#include <jcpp.h>

#undef LITTLE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UTF_16LE_BOM = ::sun::nio::cs::UTF_16LE_BOM;
using $UnicodeEncoder = ::sun::nio::cs::UnicodeEncoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _UTF_16LE_BOM$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(UTF_16LE_BOM$Encoder::*)($Charset*)>(&UTF_16LE_BOM$Encoder::init$))},
	{}
};

$InnerClassInfo _UTF_16LE_BOM$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_16LE_BOM$Encoder", "sun.nio.cs.UTF_16LE_BOM", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UTF_16LE_BOM$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.UTF_16LE_BOM$Encoder",
	"sun.nio.cs.UnicodeEncoder",
	nullptr,
	nullptr,
	_UTF_16LE_BOM$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_16LE_BOM$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_16LE_BOM"
};

$Object* allocate$UTF_16LE_BOM$Encoder($Class* clazz) {
	return $of($alloc(UTF_16LE_BOM$Encoder));
}

void UTF_16LE_BOM$Encoder::init$($Charset* cs) {
	$UnicodeEncoder::init$(cs, $UnicodeEncoder::LITTLE, true);
}

UTF_16LE_BOM$Encoder::UTF_16LE_BOM$Encoder() {
}

$Class* UTF_16LE_BOM$Encoder::load$($String* name, bool initialize) {
	$loadClass(UTF_16LE_BOM$Encoder, name, initialize, &_UTF_16LE_BOM$Encoder_ClassInfo_, allocate$UTF_16LE_BOM$Encoder);
	return class$;
}

$Class* UTF_16LE_BOM$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun