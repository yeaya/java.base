#include <sun/nio/cs/GBK$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/GBK$DecodeHolder.h>
#include <sun/nio/cs/GBK.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $GBK$DecodeHolder = ::sun::nio::cs::GBK$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _GBK$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(GBK$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(GBK$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _GBK$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(GBK$EncodeHolder, init$, void)},
	{}
};

$InnerClassInfo _GBK$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.GBK$EncodeHolder", "sun.nio.cs.GBK", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _GBK$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.GBK$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_GBK$EncodeHolder_FieldInfo_,
	_GBK$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_GBK$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.GBK"
};

$Object* allocate$GBK$EncodeHolder($Class* clazz) {
	return $of($alloc(GBK$EncodeHolder));
}

$chars* GBK$EncodeHolder::c2b = nullptr;
$chars* GBK$EncodeHolder::c2bIndex = nullptr;

void GBK$EncodeHolder::init$() {
}

void clinit$GBK$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(GBK$EncodeHolder::c2b, $new($chars, 28672));
	$assignStatic(GBK$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($GBK$DecodeHolder);
		$DoubleByte$Encoder::initC2B($GBK$DecodeHolder::b2cStr, $GBK$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, GBK$EncodeHolder::c2b, GBK$EncodeHolder::c2bIndex);
	}
}

GBK$EncodeHolder::GBK$EncodeHolder() {
}

$Class* GBK$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(GBK$EncodeHolder, name, initialize, &_GBK$EncodeHolder_ClassInfo_, clinit$GBK$EncodeHolder, allocate$GBK$EncodeHolder);
	return class$;
}

$Class* GBK$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun