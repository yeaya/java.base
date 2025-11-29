#include <jdk/internal/icu/text/BidiBase$InsertPoints.h>

#include <jdk/internal/icu/text/BidiBase$Point.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

using $BidiBase$PointArray = $Array<::jdk::internal::icu::text::BidiBase$Point>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiBase$InsertPoints_FieldInfo_[] = {
	{"size", "I", nullptr, 0, $field(BidiBase$InsertPoints, size)},
	{"confirmed", "I", nullptr, 0, $field(BidiBase$InsertPoints, confirmed)},
	{"points", "[Ljdk/internal/icu/text/BidiBase$Point;", nullptr, 0, $field(BidiBase$InsertPoints, points)},
	{}
};

$MethodInfo _BidiBase$InsertPoints_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BidiBase$InsertPoints::*)()>(&BidiBase$InsertPoints::init$))},
	{}
};

$InnerClassInfo _BidiBase$InsertPoints_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$InsertPoints", "jdk.internal.icu.text.BidiBase", "InsertPoints", $STATIC},
	{}
};

$ClassInfo _BidiBase$InsertPoints_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.text.BidiBase$InsertPoints",
	"java.lang.Object",
	nullptr,
	_BidiBase$InsertPoints_FieldInfo_,
	_BidiBase$InsertPoints_MethodInfo_,
	nullptr,
	nullptr,
	_BidiBase$InsertPoints_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase"
};

$Object* allocate$BidiBase$InsertPoints($Class* clazz) {
	return $of($alloc(BidiBase$InsertPoints));
}

void BidiBase$InsertPoints::init$() {
	$set(this, points, $new($BidiBase$PointArray, 0));
}

BidiBase$InsertPoints::BidiBase$InsertPoints() {
}

$Class* BidiBase$InsertPoints::load$($String* name, bool initialize) {
	$loadClass(BidiBase$InsertPoints, name, initialize, &_BidiBase$InsertPoints_ClassInfo_, allocate$BidiBase$InsertPoints);
	return class$;
}

$Class* BidiBase$InsertPoints::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk