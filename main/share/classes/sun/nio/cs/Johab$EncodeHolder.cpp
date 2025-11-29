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

$FieldInfo _Johab$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(Johab$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(Johab$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _Johab$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Johab$EncodeHolder::*)()>(&Johab$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _Johab$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.Johab$EncodeHolder", "sun.nio.cs.Johab", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _Johab$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.Johab$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_Johab$EncodeHolder_FieldInfo_,
	_Johab$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_Johab$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.Johab"
};

$Object* allocate$Johab$EncodeHolder($Class* clazz) {
	return $of($alloc(Johab$EncodeHolder));
}

$chars* Johab$EncodeHolder::c2b = nullptr;
$chars* Johab$EncodeHolder::c2bIndex = nullptr;

void Johab$EncodeHolder::init$() {
}

void clinit$Johab$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(Johab$EncodeHolder, name, initialize, &_Johab$EncodeHolder_ClassInfo_, clinit$Johab$EncodeHolder, allocate$Johab$EncodeHolder);
	return class$;
}

$Class* Johab$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun