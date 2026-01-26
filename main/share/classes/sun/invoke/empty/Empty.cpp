#include <sun/invoke/empty/Empty.h>

#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace invoke {
		namespace empty {

$MethodInfo _Empty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Empty, init$, void)},
	{}
};

$ClassInfo _Empty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.invoke.empty.Empty",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Empty_MethodInfo_
};

$Object* allocate$Empty($Class* clazz) {
	return $of($alloc(Empty));
}

void Empty::init$() {
	$throwNew($InternalError);
}

Empty::Empty() {
}

$Class* Empty::load$($String* name, bool initialize) {
	$loadClass(Empty, name, initialize, &_Empty_ClassInfo_, allocate$Empty);
	return class$;
}

$Class* Empty::class$ = nullptr;

		} // empty
	} // invoke
} // sun