#include <java/util/Arrays$LegacyMergeSort.h>
#include <java/security/AccessController.h>
#include <java/util/Arrays.h>
#include <sun/security/action/GetBooleanAction.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;

namespace java {
	namespace util {

bool Arrays$LegacyMergeSort::userRequested = false;

void Arrays$LegacyMergeSort::init$() {
}

void Arrays$LegacyMergeSort::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	Arrays$LegacyMergeSort::userRequested = $$sure($Boolean, $AccessController::doPrivileged($$new($GetBooleanAction, "java.util.Arrays.useLegacyMergeSort"_s)))->booleanValue();
}

Arrays$LegacyMergeSort::Arrays$LegacyMergeSort() {
}

$Class* Arrays$LegacyMergeSort::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"userRequested", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Arrays$LegacyMergeSort, userRequested)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Arrays$LegacyMergeSort, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Arrays$LegacyMergeSort", "java.util.Arrays", "LegacyMergeSort", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.Arrays$LegacyMergeSort",
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
		"java.util.Arrays"
	};
	$loadClass(Arrays$LegacyMergeSort, name, initialize, &classInfo$$, Arrays$LegacyMergeSort::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Arrays$LegacyMergeSort);
	});
	return class$;
}

$Class* Arrays$LegacyMergeSort::class$ = nullptr;

	} // util
} // java