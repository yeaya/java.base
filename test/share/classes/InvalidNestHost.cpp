#include <InvalidNestHost.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InvalidNestHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidNestHost::*)()>(&InvalidNestHost::init$))},
	{}
};

$ClassInfo _InvalidNestHost_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InvalidNestHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InvalidNestHost_MethodInfo_
};

$Object* allocate$InvalidNestHost($Class* clazz) {
	return $of($alloc(InvalidNestHost));
}

void InvalidNestHost::init$() {
}

InvalidNestHost::InvalidNestHost() {
}

$Class* InvalidNestHost::load$($String* name, bool initialize) {
	$loadClass(InvalidNestHost, name, initialize, &_InvalidNestHost_ClassInfo_, allocate$InvalidNestHost);
	return class$;
}

$Class* InvalidNestHost::class$ = nullptr;