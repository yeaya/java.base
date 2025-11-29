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

$FieldInfo _EUC_KR$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_KR$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_KR$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _EUC_KR$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EUC_KR$EncodeHolder::*)()>(&EUC_KR$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _EUC_KR$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_KR$EncodeHolder", "sun.nio.cs.EUC_KR", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _EUC_KR$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.EUC_KR$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_EUC_KR$EncodeHolder_FieldInfo_,
	_EUC_KR$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_KR$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_KR"
};

$Object* allocate$EUC_KR$EncodeHolder($Class* clazz) {
	return $of($alloc(EUC_KR$EncodeHolder));
}

$chars* EUC_KR$EncodeHolder::c2b = nullptr;
$chars* EUC_KR$EncodeHolder::c2bIndex = nullptr;

void EUC_KR$EncodeHolder::init$() {
}

void clinit$EUC_KR$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(EUC_KR$EncodeHolder, name, initialize, &_EUC_KR$EncodeHolder_ClassInfo_, clinit$EUC_KR$EncodeHolder, allocate$EUC_KR$EncodeHolder);
	return class$;
}

$Class* EUC_KR$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun