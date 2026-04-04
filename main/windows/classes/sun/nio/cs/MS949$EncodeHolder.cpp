#include <sun/nio/cs/MS949$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS949$DecodeHolder.h>
#include <sun/nio/cs/MS949.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $MS949$DecodeHolder = ::sun::nio::cs::MS949$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$chars* MS949$EncodeHolder::c2b = nullptr;
$chars* MS949$EncodeHolder::c2bIndex = nullptr;

void MS949$EncodeHolder::init$() {
}

void MS949$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MS949$EncodeHolder::c2b, $new($chars, 0x00009300));
	$assignStatic(MS949$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($MS949$DecodeHolder);
		$DoubleByte$Encoder::initC2B($MS949$DecodeHolder::b2cStr, $MS949$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 65, 254, MS949$EncodeHolder::c2b, MS949$EncodeHolder::c2bIndex);
	}
}

MS949$EncodeHolder::MS949$EncodeHolder() {
}

$Class* MS949$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(MS949$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(MS949$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MS949$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.MS949$EncodeHolder", "sun.nio.cs.MS949", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.MS949$EncodeHolder",
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
		"sun.nio.cs.MS949"
	};
	$loadClass(MS949$EncodeHolder, name, initialize, &classInfo$$, MS949$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MS949$EncodeHolder);
	});
	return class$;
}

$Class* MS949$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun