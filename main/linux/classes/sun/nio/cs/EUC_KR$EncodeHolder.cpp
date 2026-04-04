#include <sun/nio/cs/EUC_KR$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/EUC_KR$DecodeHolder.h>
#include <sun/nio/cs/EUC_KR.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $EUC_KR$DecodeHolder = ::sun::nio::cs::EUC_KR$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$chars* EUC_KR$EncodeHolder::c2b = nullptr;
$chars* EUC_KR$EncodeHolder::c2bIndex = nullptr;

void EUC_KR$EncodeHolder::init$() {
}

void EUC_KR$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(EUC_KR$EncodeHolder::c2b, $new($chars, 0x00009200));
	$assignStatic(EUC_KR$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($EUC_KR$DecodeHolder);
		$DoubleByte$Encoder::initC2B($EUC_KR$DecodeHolder::b2cStr, $EUC_KR$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 161, 254, EUC_KR$EncodeHolder::c2b, EUC_KR$EncodeHolder::c2bIndex);
	}
}

EUC_KR$EncodeHolder::EUC_KR$EncodeHolder() {
}

$Class* EUC_KR$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_KR$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_KR$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EUC_KR$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.EUC_KR$EncodeHolder", "sun.nio.cs.EUC_KR", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.EUC_KR$EncodeHolder",
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
		"sun.nio.cs.EUC_KR"
	};
	$loadClass(EUC_KR$EncodeHolder, name, initialize, &classInfo$$, EUC_KR$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(EUC_KR$EncodeHolder);
	});
	return class$;
}

$Class* EUC_KR$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun