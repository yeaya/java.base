#include <sun/nio/cs/MS950$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS950$DecodeHolder.h>
#include <sun/nio/cs/MS950.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $MS950$DecodeHolder = ::sun::nio::cs::MS950$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$chars* MS950$EncodeHolder::c2b = nullptr;
$chars* MS950$EncodeHolder::c2bIndex = nullptr;

void MS950$EncodeHolder::init$() {
}

void MS950$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MS950$EncodeHolder::c2b, $new($chars, 31488));
	$assignStatic(MS950$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"ꊤ═ꊥ╞ꊦ╪ꊧ╡ꋌ十ꋎ卅狀╭炙╮識╰什╯"_s);
		$var($String, c2bNR, nullptr);
		$init($MS950$DecodeHolder);
		$DoubleByte$Encoder::initC2B($MS950$DecodeHolder::b2cStr, $MS950$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, MS950$EncodeHolder::c2b, MS950$EncodeHolder::c2bIndex);
	}
}

MS950$EncodeHolder::MS950$EncodeHolder() {
}

$Class* MS950$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(MS950$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(MS950$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MS950$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.MS950$EncodeHolder", "sun.nio.cs.MS950", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.MS950$EncodeHolder",
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
		"sun.nio.cs.MS950"
	};
	$loadClass(MS950$EncodeHolder, name, initialize, &classInfo$$, MS950$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MS950$EncodeHolder);
	});
	return class$;
}

$Class* MS950$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun