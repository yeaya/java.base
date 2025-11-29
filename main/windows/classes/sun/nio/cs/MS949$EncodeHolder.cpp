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

$FieldInfo _MS949$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(MS949$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(MS949$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _MS949$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MS949$EncodeHolder::*)()>(&MS949$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _MS949$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS949$EncodeHolder", "sun.nio.cs.MS949", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _MS949$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS949$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_MS949$EncodeHolder_FieldInfo_,
	_MS949$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_MS949$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS949"
};

$Object* allocate$MS949$EncodeHolder($Class* clazz) {
	return $of($alloc(MS949$EncodeHolder));
}

$chars* MS949$EncodeHolder::c2b = nullptr;
$chars* MS949$EncodeHolder::c2bIndex = nullptr;

void MS949$EncodeHolder::init$() {
}

void clinit$MS949$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(MS949$EncodeHolder, name, initialize, &_MS949$EncodeHolder_ClassInfo_, clinit$MS949$EncodeHolder, allocate$MS949$EncodeHolder);
	return class$;
}

$Class* MS949$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun