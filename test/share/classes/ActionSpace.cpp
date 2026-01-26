#include <ActionSpace.h>

#include <java/net/SocketPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketPermission = ::java::net::SocketPermission;

$MethodInfo _ActionSpace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ActionSpace, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ActionSpace, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ActionSpace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ActionSpace",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ActionSpace_MethodInfo_
};

$Object* allocate$ActionSpace($Class* clazz) {
	return $of($alloc(ActionSpace));
}

void ActionSpace::init$() {
}

void ActionSpace::main($StringArray* args) {
	try {
		$var($SocketPermission, sp, $new($SocketPermission, "*"_s, "connect , accept"_s));
	} catch ($Exception& e) {
		$throwNew($Exception, "should not have caught an exception"_s);
	}
}

ActionSpace::ActionSpace() {
}

$Class* ActionSpace::load$($String* name, bool initialize) {
	$loadClass(ActionSpace, name, initialize, &_ActionSpace_ClassInfo_, allocate$ActionSpace);
	return class$;
}

$Class* ActionSpace::class$ = nullptr;