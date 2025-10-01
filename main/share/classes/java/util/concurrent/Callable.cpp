#include <java/util/concurrent/Callable.h>

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
	namespace util {
		namespace concurrent {
$CompoundAttribute _Callable_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _Callable_MethodInfo_[] = {
	{"call", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _Callable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.Callable",
	nullptr,
	nullptr,
	nullptr,
	_Callable_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_Callable_Annotations_
};

$Object* allocate$Callable($Class* clazz) {
	return $of($alloc(Callable));
}

$Class* Callable::load$($String* name, bool initialize) {
	$loadClass(Callable, name, initialize, &_Callable_ClassInfo_, allocate$Callable);
	return class$;
}

$Class* Callable::class$ = nullptr;

		} // concurrent
	} // util
} // java