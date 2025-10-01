#include <sun/nio/cs/MS936$EncodeHolder.h>

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
#include <sun/nio/cs/MS936$DecodeHolder.h>
#include <sun/nio/cs/MS936.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $MS936 = ::sun::nio::cs::MS936;
using $MS936$DecodeHolder = ::sun::nio::cs::MS936$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS936$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(MS936$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(MS936$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _MS936$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MS936$EncodeHolder::*)()>(&MS936$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _MS936$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS936$EncodeHolder", "sun.nio.cs.MS936", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _MS936$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS936$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_MS936$EncodeHolder_FieldInfo_,
	_MS936$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_MS936$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS936"
};

$Object* allocate$MS936$EncodeHolder($Class* clazz) {
	return $of($alloc(MS936$EncodeHolder));
}

$chars* MS936$EncodeHolder::c2b = nullptr;
$chars* MS936$EncodeHolder::c2bIndex = nullptr;

void MS936$EncodeHolder::init$() {
}

void clinit$MS936$EncodeHolder($Class* class$) {
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
	$loadClass(MS936$EncodeHolder, name, initialize, &_MS936$EncodeHolder_ClassInfo_, clinit$MS936$EncodeHolder, allocate$MS936$EncodeHolder);
	return class$;
}

$Class* MS936$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun