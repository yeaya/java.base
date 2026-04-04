#include <sun/nio/cs/MS936$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS936$DecodeHolder.h>
#include <sun/nio/cs/MS936.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $MS936$DecodeHolder = ::sun::nio::cs::MS936$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$chars* MS936$EncodeHolder::c2b = nullptr;
$chars* MS936$EncodeHolder::c2bIndex = nullptr;

void MS936$EncodeHolder::init$() {
}

void MS936$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MS936$EncodeHolder::c2b, $new($chars, 28672));
	$assignStatic(MS936$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($MS936$DecodeHolder);
		$DoubleByte$Encoder::initC2B($MS936$DecodeHolder::b2cStr, $MS936$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, MS936$EncodeHolder::c2b, MS936$EncodeHolder::c2bIndex);
	}
}

MS936$EncodeHolder::MS936$EncodeHolder() {
}

$Class* MS936$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(MS936$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(MS936$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MS936$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.MS936$EncodeHolder", "sun.nio.cs.MS936", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.MS936$EncodeHolder",
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
		"sun.nio.cs.MS936"
	};
	$loadClass(MS936$EncodeHolder, name, initialize, &classInfo$$, MS936$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MS936$EncodeHolder);
	});
	return class$;
}

$Class* MS936$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun