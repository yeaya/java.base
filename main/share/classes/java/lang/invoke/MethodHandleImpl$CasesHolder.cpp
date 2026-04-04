#include <java/lang/invoke/MethodHandleImpl$CasesHolder.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void MethodHandleImpl$CasesHolder::init$($MethodHandleArray* cases) {
	$set(this, cases, cases);
}

MethodHandleImpl$CasesHolder::MethodHandleImpl$CasesHolder() {
}

$Class* MethodHandleImpl$CasesHolder::load$($String* name, bool initialize) {
	$CompoundAttribute casesfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"cases", "[Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(MethodHandleImpl$CasesHolder, cases), casesfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $method(MethodHandleImpl$CasesHolder, init$, void, $MethodHandleArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleImpl$CasesHolder", "java.lang.invoke.MethodHandleImpl", "CasesHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodHandleImpl$CasesHolder",
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
		"java.lang.invoke.MethodHandleImpl"
	};
	$loadClass(MethodHandleImpl$CasesHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleImpl$CasesHolder);
	});
	return class$;
}

$Class* MethodHandleImpl$CasesHolder::class$ = nullptr;

		} // invoke
	} // lang
} // java