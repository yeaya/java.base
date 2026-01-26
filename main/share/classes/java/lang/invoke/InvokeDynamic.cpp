#include <java/lang/invoke/InvokeDynamic.h>

#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _InvokeDynamic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(InvokeDynamic, init$, void)},
	{}
};

$ClassInfo _InvokeDynamic_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.InvokeDynamic",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InvokeDynamic_MethodInfo_
};

$Object* allocate$InvokeDynamic($Class* clazz) {
	return $of($alloc(InvokeDynamic));
}

void InvokeDynamic::init$() {
	$throwNew($InternalError);
}

InvokeDynamic::InvokeDynamic() {
}

$Class* InvokeDynamic::load$($String* name, bool initialize) {
	$loadClass(InvokeDynamic, name, initialize, &_InvokeDynamic_ClassInfo_, allocate$InvokeDynamic);
	return class$;
}

$Class* InvokeDynamic::class$ = nullptr;

		} // invoke
	} // lang
} // java