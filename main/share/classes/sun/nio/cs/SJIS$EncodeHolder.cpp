#include <sun/nio/cs/SJIS$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/SJIS$DecodeHolder.h>
#include <sun/nio/cs/SJIS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $SJIS$DecodeHolder = ::sun::nio::cs::SJIS$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _SJIS$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(SJIS$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(SJIS$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _SJIS$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SJIS$EncodeHolder::*)()>(&SJIS$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _SJIS$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.SJIS$EncodeHolder", "sun.nio.cs.SJIS", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _SJIS$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.SJIS$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_SJIS$EncodeHolder_FieldInfo_,
	_SJIS$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_SJIS$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.SJIS"
};

$Object* allocate$SJIS$EncodeHolder($Class* clazz) {
	return $of($alloc(SJIS$EncodeHolder));
}

$chars* SJIS$EncodeHolder::c2b = nullptr;
$chars* SJIS$EncodeHolder::c2bIndex = nullptr;

void SJIS$EncodeHolder::init$() {
}

void clinit$SJIS$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(SJIS$EncodeHolder::c2b, $new($chars, 24064));
	$assignStatic(SJIS$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\\\u00a5~\u203e"_s);
		$init($SJIS$DecodeHolder);
		$DoubleByte$Encoder::initC2B($SJIS$DecodeHolder::b2cStr, $SJIS$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 252, SJIS$EncodeHolder::c2b, SJIS$EncodeHolder::c2bIndex);
	}
}

SJIS$EncodeHolder::SJIS$EncodeHolder() {
}

$Class* SJIS$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(SJIS$EncodeHolder, name, initialize, &_SJIS$EncodeHolder_ClassInfo_, clinit$SJIS$EncodeHolder, allocate$SJIS$EncodeHolder);
	return class$;
}

$Class* SJIS$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun