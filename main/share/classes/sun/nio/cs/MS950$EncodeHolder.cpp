#include <sun/nio/cs/MS950$EncodeHolder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS950$DecodeHolder.h>
#include <sun/nio/cs/MS950.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $MS950 = ::sun::nio::cs::MS950;
using $MS950$DecodeHolder = ::sun::nio::cs::MS950$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS950$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(MS950$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(MS950$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _MS950$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MS950$EncodeHolder::*)()>(&MS950$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _MS950$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS950$EncodeHolder", "sun.nio.cs.MS950", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _MS950$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS950$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_MS950$EncodeHolder_FieldInfo_,
	_MS950$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_MS950$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS950"
};

$Object* allocate$MS950$EncodeHolder($Class* clazz) {
	return $of($alloc(MS950$EncodeHolder));
}

$chars* MS950$EncodeHolder::c2b = nullptr;
$chars* MS950$EncodeHolder::c2bIndex = nullptr;

void MS950$EncodeHolder::init$() {
}

void clinit$MS950$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS950$EncodeHolder::c2b, $new($chars, 31488));
	$assignStatic(MS950$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"\ua2a4\u2550\ua2a5\u255e\ua2a6\u256a\ua2a7\u2561\ua2cc\u5341\ua2ce\u5345\uf9fa\u256d\uf9fb\u256e\uf9fc\u2570\uf9fd\u256f"_s);
		$var($String, c2bNR, nullptr);
		$init($MS950$DecodeHolder);
		$DoubleByte$Encoder::initC2B($MS950$DecodeHolder::b2cStr, $MS950$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, MS950$EncodeHolder::c2b, MS950$EncodeHolder::c2bIndex);
	}
}

MS950$EncodeHolder::MS950$EncodeHolder() {
}

$Class* MS950$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(MS950$EncodeHolder, name, initialize, &_MS950$EncodeHolder_ClassInfo_, clinit$MS950$EncodeHolder, allocate$MS950$EncodeHolder);
	return class$;
}

$Class* MS950$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun