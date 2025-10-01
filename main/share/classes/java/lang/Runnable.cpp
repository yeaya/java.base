#include <java/lang/Runnable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
$CompoundAttribute _Runnable_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _Runnable_MethodInfo_[] = {
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Runnable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.Runnable",
	nullptr,
	nullptr,
	nullptr,
	_Runnable_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Runnable_Annotations_
};

$Object* allocate$Runnable($Class* clazz) {
	return $of($alloc(Runnable));
}

$Class* Runnable::load$($String* name, bool initialize) {
	$loadClass(Runnable, name, initialize, &_Runnable_ClassInfo_, allocate$Runnable);
	return class$;
}

$Class* Runnable::class$ = nullptr;

	} // lang
} // java