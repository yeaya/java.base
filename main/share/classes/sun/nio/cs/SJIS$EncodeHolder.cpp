#include <sun/nio/cs/SJIS$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/SJIS$DecodeHolder.h>
#include <sun/nio/cs/SJIS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $SJIS$DecodeHolder = ::sun::nio::cs::SJIS$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$chars* SJIS$EncodeHolder::c2b = nullptr;
$chars* SJIS$EncodeHolder::c2bIndex = nullptr;

void SJIS$EncodeHolder::init$() {
}

void SJIS$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(SJIS$EncodeHolder::c2b, $new($chars, 24064));
	$assignStatic(SJIS$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\\¥~‾"_s);
		$init($SJIS$DecodeHolder);
		$DoubleByte$Encoder::initC2B($SJIS$DecodeHolder::b2cStr, $SJIS$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 252, SJIS$EncodeHolder::c2b, SJIS$EncodeHolder::c2bIndex);
	}
}

SJIS$EncodeHolder::SJIS$EncodeHolder() {
}

$Class* SJIS$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(SJIS$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(SJIS$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SJIS$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.SJIS$EncodeHolder", "sun.nio.cs.SJIS", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.SJIS$EncodeHolder",
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
		"sun.nio.cs.SJIS"
	};
	$loadClass(SJIS$EncodeHolder, name, initialize, &classInfo$$, SJIS$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SJIS$EncodeHolder);
	});
	return class$;
}

$Class* SJIS$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun