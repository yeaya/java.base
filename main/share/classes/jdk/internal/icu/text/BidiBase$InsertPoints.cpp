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

void BidiBase$InsertPoints::init$() {
	$set(this, points, $new($BidiBase$PointArray, 0));
}

BidiBase$InsertPoints::BidiBase$InsertPoints() {
}

$Class* BidiBase$InsertPoints::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"size", "I", nullptr, 0, $field(BidiBase$InsertPoints, size)},
		{"confirmed", "I", nullptr, 0, $field(BidiBase$InsertPoints, confirmed)},
		{"points", "[Ljdk/internal/icu/text/BidiBase$Point;", nullptr, 0, $field(BidiBase$InsertPoints, points)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BidiBase$InsertPoints, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$InsertPoints", "jdk.internal.icu.text.BidiBase", "InsertPoints", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$InsertPoints",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.BidiBase"
	};
	$loadClass(BidiBase$InsertPoints, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$InsertPoints);
	});
	return class$;
}

$Class* BidiBase$InsertPoints::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk