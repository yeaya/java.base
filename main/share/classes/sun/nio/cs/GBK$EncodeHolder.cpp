#include <sun/nio/cs/GBK$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/GBK$DecodeHolder.h>
#include <sun/nio/cs/GBK.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $GBK$DecodeHolder = ::sun::nio::cs::GBK$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$chars* GBK$EncodeHolder::c2b = nullptr;
$chars* GBK$EncodeHolder::c2bIndex = nullptr;

void GBK$EncodeHolder::init$() {
}

void GBK$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(GBK$EncodeHolder::c2b, $new($chars, 28672));
	$assignStatic(GBK$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($GBK$DecodeHolder);
		$DoubleByte$Encoder::initC2B($GBK$DecodeHolder::b2cStr, $GBK$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, GBK$EncodeHolder::c2b, GBK$EncodeHolder::c2bIndex);
	}
}

GBK$EncodeHolder::GBK$EncodeHolder() {
}

$Class* GBK$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(GBK$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(GBK$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GBK$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.GBK$EncodeHolder", "sun.nio.cs.GBK", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.GBK$EncodeHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.GBK"
	};
	$loadClass(GBK$EncodeHolder, name, initialize, &classInfo$$, GBK$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GBK$EncodeHolder);
	});
	return class$;
}

$Class* GBK$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun