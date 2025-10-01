#include <T8032711$I.h>

#include <T8032711.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $T8032711 = ::T8032711;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _T8032711$I_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _T8032711$I_InnerClassesInfo_[] = {
	{"T8032711$I", "T8032711", "I", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _T8032711$I_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"T8032711$I",
	nullptr,
	nullptr,
	nullptr,
	_T8032711$I_MethodInfo_,
	nullptr,
	nullptr,
	_T8032711$I_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"T8032711"
};

$Object* allocate$T8032711$I($Class* clazz) {
	return $of($alloc(T8032711$I));
}

$Class* T8032711$I::load$($String* name, bool initialize) {
	$loadClass(T8032711$I, name, initialize, &_T8032711$I_ClassInfo_, allocate$T8032711$I);
	return class$;
}

$Class* T8032711$I::class$ = nullptr;