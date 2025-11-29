#include <sun/nio/cs/Big5$EncodeHolder.h>

#include <sun/nio/cs/Big5$DecodeHolder.h>
#include <sun/nio/cs/Big5.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Big5$DecodeHolder = ::sun::nio::cs::Big5$DecodeHolder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _Big5$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(Big5$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _Big5$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Big5$EncodeHolder::*)()>(&Big5$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _Big5$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.Big5$EncodeHolder", "sun.nio.cs.Big5", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _Big5$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.Big5$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_Big5$EncodeHolder_FieldInfo_,
	_Big5$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_Big5$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.Big5"
};

$Object* allocate$Big5$EncodeHolder($Class* clazz) {
	return $of($alloc(Big5$EncodeHolder));
}

$chars* Big5$EncodeHolder::c2b = nullptr;
$chars* Big5$EncodeHolder::c2bIndex = nullptr;

void Big5$EncodeHolder::init$() {
}

void clinit$Big5$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Big5$EncodeHolder::c2b, $new($chars, 25600));
	$assignStatic(Big5$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"\ua15a\uff3f\ua1fe\u2571\ua240\u2572\ua2cc\u5341\ua2ce\u5345"_s);
		$var($String, c2bNR, nullptr);
		$init($Big5$DecodeHolder);
		$DoubleByte$Encoder::initC2B($Big5$DecodeHolder::b2cStr, $Big5$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, Big5$EncodeHolder::c2b, Big5$EncodeHolder::c2bIndex);
	}
}

Big5$EncodeHolder::Big5$EncodeHolder() {
}

$Class* Big5$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(Big5$EncodeHolder, name, initialize, &_Big5$EncodeHolder_ClassInfo_, clinit$Big5$EncodeHolder, allocate$Big5$EncodeHolder);
	return class$;
}

$Class* Big5$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun