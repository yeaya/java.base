#include <java/lang/invoke/MethodType$OffsetHolder.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

int64_t MethodType$OffsetHolder::rtypeOffset = 0;
int64_t MethodType$OffsetHolder::ptypesOffset = 0;

void MethodType$OffsetHolder::init$() {
}

void MethodType$OffsetHolder::clinit$($Class* clazz) {
	$init($MethodHandleStatics);
	$load($MethodType);
	MethodType$OffsetHolder::rtypeOffset = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset($MethodType::class$, "rtype"_s);
	MethodType$OffsetHolder::ptypesOffset = $MethodHandleStatics::UNSAFE->objectFieldOffset($MethodType::class$, "ptypes"_s);
}

MethodType$OffsetHolder::MethodType$OffsetHolder() {
}

$Class* MethodType$OffsetHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rtypeOffset", "J", nullptr, $STATIC | $FINAL, $staticField(MethodType$OffsetHolder, rtypeOffset)},
		{"ptypesOffset", "J", nullptr, $STATIC | $FINAL, $staticField(MethodType$OffsetHolder, ptypesOffset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MethodType$OffsetHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodType$OffsetHolder", "java.lang.invoke.MethodType", "OffsetHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodType$OffsetHolder",
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
		"java.lang.invoke.MethodType"
	};
	$loadClass(MethodType$OffsetHolder, name, initialize, &classInfo$$, MethodType$OffsetHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodType$OffsetHolder);
	});
	return class$;
}

$Class* MethodType$OffsetHolder::class$ = nullptr;

		} // invoke
	} // lang
} // java