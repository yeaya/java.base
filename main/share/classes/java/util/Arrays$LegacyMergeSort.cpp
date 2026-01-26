#include <java/util/Arrays$LegacyMergeSort.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <sun/security/action/GetBooleanAction.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;

namespace java {
	namespace util {

$FieldInfo _Arrays$LegacyMergeSort_FieldInfo_[] = {
	{"userRequested", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Arrays$LegacyMergeSort, userRequested)},
	{}
};

$MethodInfo _Arrays$LegacyMergeSort_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Arrays$LegacyMergeSort, init$, void)},
	{}
};

$InnerClassInfo _Arrays$LegacyMergeSort_InnerClassesInfo_[] = {
	{"java.util.Arrays$LegacyMergeSort", "java.util.Arrays", "LegacyMergeSort", $STATIC | $FINAL},
	{}
};

$ClassInfo _Arrays$LegacyMergeSort_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Arrays$LegacyMergeSort",
	"java.lang.Object",
	nullptr,
	_Arrays$LegacyMergeSort_FieldInfo_,
	_Arrays$LegacyMergeSort_MethodInfo_,
	nullptr,
	nullptr,
	_Arrays$LegacyMergeSort_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Arrays"
};

$Object* allocate$Arrays$LegacyMergeSort($Class* clazz) {
	return $of($alloc(Arrays$LegacyMergeSort));
}

bool Arrays$LegacyMergeSort::userRequested = false;

void Arrays$LegacyMergeSort::init$() {
}

void clinit$Arrays$LegacyMergeSort($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	Arrays$LegacyMergeSort::userRequested = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "java.util.Arrays.useLegacyMergeSort"_s)))))))->booleanValue();
}

Arrays$LegacyMergeSort::Arrays$LegacyMergeSort() {
}

$Class* Arrays$LegacyMergeSort::load$($String* name, bool initialize) {
	$loadClass(Arrays$LegacyMergeSort, name, initialize, &_Arrays$LegacyMergeSort_ClassInfo_, clinit$Arrays$LegacyMergeSort, allocate$Arrays$LegacyMergeSort);
	return class$;
}

$Class* Arrays$LegacyMergeSort::class$ = nullptr;

	} // util
} // java