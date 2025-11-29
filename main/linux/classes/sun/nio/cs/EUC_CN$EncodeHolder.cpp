#include <sun/nio/cs/EUC_CN$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/EUC_CN$DecodeHolder.h>
#include <sun/nio/cs/EUC_CN.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $EUC_CN$DecodeHolder = ::sun::nio::cs::EUC_CN$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _EUC_CN$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_CN$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(EUC_CN$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _EUC_CN$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EUC_CN$EncodeHolder::*)()>(&EUC_CN$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _EUC_CN$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_CN$EncodeHolder", "sun.nio.cs.EUC_CN", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _EUC_CN$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.EUC_CN$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_EUC_CN$EncodeHolder_FieldInfo_,
	_EUC_CN$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_CN$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_CN"
};

$Object* allocate$EUC_CN$EncodeHolder($Class* clazz) {
	return $of($alloc(EUC_CN$EncodeHolder));
}

$chars* EUC_CN$EncodeHolder::c2b = nullptr;
$chars* EUC_CN$EncodeHolder::c2bIndex = nullptr;

void EUC_CN$EncodeHolder::init$() {
}

void clinit$EUC_CN$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(EUC_CN$EncodeHolder::c2b, $new($chars, 25088));
	$assignStatic(EUC_CN$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($EUC_CN$DecodeHolder);
		$DoubleByte$Encoder::initC2B($EUC_CN$DecodeHolder::b2cStr, $EUC_CN$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 161, 254, EUC_CN$EncodeHolder::c2b, EUC_CN$EncodeHolder::c2bIndex);
	}
}

EUC_CN$EncodeHolder::EUC_CN$EncodeHolder() {
}

$Class* EUC_CN$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(EUC_CN$EncodeHolder, name, initialize, &_EUC_CN$EncodeHolder_ClassInfo_, clinit$EUC_CN$EncodeHolder, allocate$EUC_CN$EncodeHolder);
	return class$;
}

$Class* EUC_CN$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun