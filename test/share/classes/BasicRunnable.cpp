#include <BasicRunnable.h>

#include <java/lang/Appendable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _BasicRunnable_MethodInfo_[] = {
	{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BasicRunnable_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"BasicRunnable",
	nullptr,
	"java.lang.Runnable",
	nullptr,
	_BasicRunnable_MethodInfo_
};

$Object* allocate$BasicRunnable($Class* clazz) {
	return $of($alloc(BasicRunnable));
}

$Class* BasicRunnable::load$($String* name, bool initialize) {
	$loadClass(BasicRunnable, name, initialize, &_BasicRunnable_ClassInfo_, allocate$BasicRunnable);
	return class$;
}

$Class* BasicRunnable::class$ = nullptr;