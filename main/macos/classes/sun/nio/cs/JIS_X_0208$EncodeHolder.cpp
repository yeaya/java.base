#include <sun/nio/cs/JIS_X_0208$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/JIS_X_0208$DecodeHolder.h>
#include <sun/nio/cs/JIS_X_0208.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0208$DecodeHolder = ::sun::nio::cs::JIS_X_0208$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _JIS_X_0208$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _JIS_X_0208$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JIS_X_0208$EncodeHolder::*)()>(&JIS_X_0208$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _JIS_X_0208$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.JIS_X_0208$EncodeHolder", "sun.nio.cs.JIS_X_0208", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _JIS_X_0208$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.JIS_X_0208$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_JIS_X_0208$EncodeHolder_FieldInfo_,
	_JIS_X_0208$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0208$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.JIS_X_0208"
};

$Object* allocate$JIS_X_0208$EncodeHolder($Class* clazz) {
	return $of($alloc(JIS_X_0208$EncodeHolder));
}

$chars* JIS_X_0208$EncodeHolder::c2b = nullptr;
$chars* JIS_X_0208$EncodeHolder::c2bIndex = nullptr;

void JIS_X_0208$EncodeHolder::init$() {
}

void clinit$JIS_X_0208$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JIS_X_0208$EncodeHolder::c2b, $new($chars, 24064));
	$assignStatic(JIS_X_0208$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($JIS_X_0208$DecodeHolder);
		$DoubleByte$Encoder::initC2B($JIS_X_0208$DecodeHolder::b2cStr, $JIS_X_0208$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 33, 126, JIS_X_0208$EncodeHolder::c2b, JIS_X_0208$EncodeHolder::c2bIndex);
	}
}

JIS_X_0208$EncodeHolder::JIS_X_0208$EncodeHolder() {
}

$Class* JIS_X_0208$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0208$EncodeHolder, name, initialize, &_JIS_X_0208$EncodeHolder_ClassInfo_, clinit$JIS_X_0208$EncodeHolder, allocate$JIS_X_0208$EncodeHolder);
	return class$;
}

$Class* JIS_X_0208$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun