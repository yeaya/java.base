#include <jdk/internal/icu/text/BidiBase$Isolate.h>

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

$FieldInfo _BidiBase$Isolate_FieldInfo_[] = {
	{"startON", "I", nullptr, 0, $field(BidiBase$Isolate, startON)},
	{"start1", "I", nullptr, 0, $field(BidiBase$Isolate, start1)},
	{"stateImp", "S", nullptr, 0, $field(BidiBase$Isolate, stateImp)},
	{"state", "S", nullptr, 0, $field(BidiBase$Isolate, state)},
	{}
};

$MethodInfo _BidiBase$Isolate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BidiBase$Isolate::*)()>(&BidiBase$Isolate::init$))},
	{}
};

$InnerClassInfo _BidiBase$Isolate_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$Isolate", "jdk.internal.icu.text.BidiBase", "Isolate", $STATIC},
	{}
};

$ClassInfo _BidiBase$Isolate_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.text.BidiBase$Isolate",
	"java.lang.Object",
	nullptr,
	_BidiBase$Isolate_FieldInfo_,
	_BidiBase$Isolate_MethodInfo_,
	nullptr,
	nullptr,
	_BidiBase$Isolate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase"
};

$Object* allocate$BidiBase$Isolate($Class* clazz) {
	return $of($alloc(BidiBase$Isolate));
}

void BidiBase$Isolate::init$() {
}

BidiBase$Isolate::BidiBase$Isolate() {
}

$Class* BidiBase$Isolate::load$($String* name, bool initialize) {
	$loadClass(BidiBase$Isolate, name, initialize, &_BidiBase$Isolate_ClassInfo_, allocate$BidiBase$Isolate);
	return class$;
}

$Class* BidiBase$Isolate::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk