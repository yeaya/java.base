#include <jdk/internal/icu/text/BidiBase$IsoRun.h>

#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiBase$IsoRun_FieldInfo_[] = {
	{"contextPos", "I", nullptr, 0, $field(BidiBase$IsoRun, contextPos)},
	{"start", "S", nullptr, 0, $field(BidiBase$IsoRun, start)},
	{"limit", "S", nullptr, 0, $field(BidiBase$IsoRun, limit)},
	{"level", "B", nullptr, 0, $field(BidiBase$IsoRun, level)},
	{"lastStrong", "B", nullptr, 0, $field(BidiBase$IsoRun, lastStrong)},
	{"lastBase", "B", nullptr, 0, $field(BidiBase$IsoRun, lastBase)},
	{"contextDir", "B", nullptr, 0, $field(BidiBase$IsoRun, contextDir)},
	{}
};

$MethodInfo _BidiBase$IsoRun_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(BidiBase$IsoRun, init$, void)},
	{}
};

$InnerClassInfo _BidiBase$IsoRun_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$IsoRun", "jdk.internal.icu.text.BidiBase", "IsoRun", $STATIC},
	{}
};

$ClassInfo _BidiBase$IsoRun_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.text.BidiBase$IsoRun",
	"java.lang.Object",
	nullptr,
	_BidiBase$IsoRun_FieldInfo_,
	_BidiBase$IsoRun_MethodInfo_,
	nullptr,
	nullptr,
	_BidiBase$IsoRun_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase"
};

$Object* allocate$BidiBase$IsoRun($Class* clazz) {
	return $of($alloc(BidiBase$IsoRun));
}

void BidiBase$IsoRun::init$() {
}

BidiBase$IsoRun::BidiBase$IsoRun() {
}

$Class* BidiBase$IsoRun::load$($String* name, bool initialize) {
	$loadClass(BidiBase$IsoRun, name, initialize, &_BidiBase$IsoRun_ClassInfo_, allocate$BidiBase$IsoRun);
	return class$;
}

$Class* BidiBase$IsoRun::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk