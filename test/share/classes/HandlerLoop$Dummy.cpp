#include <HandlerLoop$Dummy.h>

#include <HandlerLoop.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HandlerLoop$Dummy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(HandlerLoop$Dummy, init$, void)},
	{}
};

$InnerClassInfo _HandlerLoop$Dummy_InnerClassesInfo_[] = {
	{"HandlerLoop$Dummy", "HandlerLoop", "Dummy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HandlerLoop$Dummy_ClassInfo_ = {
	$ACC_SUPER,
	"HandlerLoop$Dummy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HandlerLoop$Dummy_MethodInfo_,
	nullptr,
	nullptr,
	_HandlerLoop$Dummy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HandlerLoop"
};

$Object* allocate$HandlerLoop$Dummy($Class* clazz) {
	return $of($alloc(HandlerLoop$Dummy));
}

void HandlerLoop$Dummy::init$() {
}

HandlerLoop$Dummy::HandlerLoop$Dummy() {
}

$Class* HandlerLoop$Dummy::load$($String* name, bool initialize) {
	$loadClass(HandlerLoop$Dummy, name, initialize, &_HandlerLoop$Dummy_ClassInfo_, allocate$HandlerLoop$Dummy);
	return class$;
}

$Class* HandlerLoop$Dummy::class$ = nullptr;