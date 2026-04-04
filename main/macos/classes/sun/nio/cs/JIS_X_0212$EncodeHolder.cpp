#include <sun/nio/cs/JIS_X_0212$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/JIS_X_0212$DecodeHolder.h>
#include <sun/nio/cs/JIS_X_0212.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0212$DecodeHolder = ::sun::nio::cs::JIS_X_0212$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$chars* JIS_X_0212$EncodeHolder::c2b = nullptr;
$chars* JIS_X_0212$EncodeHolder::c2bIndex = nullptr;

void JIS_X_0212$EncodeHolder::init$() {
}

void JIS_X_0212$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JIS_X_0212$EncodeHolder::c2b, $new($chars, 23040));
	$assignStatic(JIS_X_0212$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($JIS_X_0212$DecodeHolder);
		$DoubleByte$Encoder::initC2B($JIS_X_0212$DecodeHolder::b2cStr, $JIS_X_0212$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 33, 126, JIS_X_0212$EncodeHolder::c2b, JIS_X_0212$EncodeHolder::c2bIndex);
	}
}

JIS_X_0212$EncodeHolder::JIS_X_0212$EncodeHolder() {
}

$Class* JIS_X_0212$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0212$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0212$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JIS_X_0212$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.JIS_X_0212$EncodeHolder", "sun.nio.cs.JIS_X_0212", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.JIS_X_0212$EncodeHolder",
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
		"sun.nio.cs.JIS_X_0212"
	};
	$loadClass(JIS_X_0212$EncodeHolder, name, initialize, &classInfo$$, JIS_X_0212$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JIS_X_0212$EncodeHolder);
	});
	return class$;
}

$Class* JIS_X_0212$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun