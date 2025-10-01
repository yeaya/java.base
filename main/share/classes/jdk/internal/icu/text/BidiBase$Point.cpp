#include <jdk/internal/icu/text/BidiBase$Point.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BidiBase = ::jdk::internal::icu::text::BidiBase;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiBase$Point_FieldInfo_[] = {
	{"pos", "I", nullptr, 0, $field(BidiBase$Point, pos)},
	{"flag", "I", nullptr, 0, $field(BidiBase$Point, flag)},
	{}
};

$MethodInfo _BidiBase$Point_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BidiBase$Point::*)()>(&BidiBase$Point::init$))},
	{}
};

$InnerClassInfo _BidiBase$Point_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$Point", "jdk.internal.icu.text.BidiBase", "Point", $STATIC},
	{}
};

$ClassInfo _BidiBase$Point_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.text.BidiBase$Point",
	"java.lang.Object",
	nullptr,
	_BidiBase$Point_FieldInfo_,
	_BidiBase$Point_MethodInfo_,
	nullptr,
	nullptr,
	_BidiBase$Point_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase"
};

$Object* allocate$BidiBase$Point($Class* clazz) {
	return $of($alloc(BidiBase$Point));
}

void BidiBase$Point::init$() {
}

BidiBase$Point::BidiBase$Point() {
}

$Class* BidiBase$Point::load$($String* name, bool initialize) {
	$loadClass(BidiBase$Point, name, initialize, &_BidiBase$Point_ClassInfo_, allocate$BidiBase$Point);
	return class$;
}

$Class* BidiBase$Point::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk