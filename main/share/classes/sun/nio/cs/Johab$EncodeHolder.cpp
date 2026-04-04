#include <sun/nio/cs/Johab$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/Johab$DecodeHolder.h>
#include <sun/nio/cs/Johab.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $Johab$DecodeHolder = ::sun::nio::cs::Johab$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$chars* Johab$EncodeHolder::c2b = nullptr;
$chars* Johab$EncodeHolder::c2bIndex = nullptr;

void Johab$EncodeHolder::init$() {
}

void Johab$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Johab$EncodeHolder::c2b, $new($chars, 0x00009200));
	$assignStatic(Johab$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($Johab$DecodeHolder);
		$DoubleByte$Encoder::initC2B($Johab$DecodeHolder::b2cStr, $Johab$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 49, 254, Johab$EncodeHolder::c2b, Johab$EncodeHolder::c2bIndex);
	}
}

Johab$EncodeHolder::Johab$EncodeHolder() {
}

$Class* Johab$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(Johab$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(Johab$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Johab$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.Johab$EncodeHolder", "sun.nio.cs.Johab", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.Johab$EncodeHolder",
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
		"sun.nio.cs.Johab"
	};
	$loadClass(Johab$EncodeHolder, name, initialize, &classInfo$$, Johab$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Johab$EncodeHolder);
	});
	return class$;
}

$Class* Johab$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun