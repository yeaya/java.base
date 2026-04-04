#include <sun/nio/cs/Big5$EncodeHolder.h>
#include <sun/nio/cs/Big5$DecodeHolder.h>
#include <sun/nio/cs/Big5.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Big5$DecodeHolder = ::sun::nio::cs::Big5$DecodeHolder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;

namespace sun {
	namespace nio {
		namespace cs {

$chars* Big5$EncodeHolder::c2b = nullptr;
$chars* Big5$EncodeHolder::c2bIndex = nullptr;

void Big5$EncodeHolder::init$() {
}

void Big5$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Big5$EncodeHolder::c2b, $new($chars, 25600));
	$assignStatic(Big5$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"ꅚ＿ꇾ╱ꉀ╲ꋌ十ꋎ卅"_s);
		$var($String, c2bNR, nullptr);
		$init($Big5$DecodeHolder);
		$DoubleByte$Encoder::initC2B($Big5$DecodeHolder::b2cStr, $Big5$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, Big5$EncodeHolder::c2b, Big5$EncodeHolder::c2bIndex);
	}
}

Big5$EncodeHolder::Big5$EncodeHolder() {
}

$Class* Big5$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Big5$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.Big5$EncodeHolder", "sun.nio.cs.Big5", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.Big5$EncodeHolder",
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
		"sun.nio.cs.Big5"
	};
	$loadClass(Big5$EncodeHolder, name, initialize, &classInfo$$, Big5$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Big5$EncodeHolder);
	});
	return class$;
}

$Class* Big5$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun