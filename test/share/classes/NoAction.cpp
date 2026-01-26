#include <NoAction.h>

#include <java/net/SocketPermission.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SocketPermission = ::java::net::SocketPermission;

$MethodInfo _NoAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NoAction, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NoAction, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _NoAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NoAction",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NoAction_MethodInfo_
};

$Object* allocate$NoAction($Class* clazz) {
	return $of($alloc(NoAction));
}

void NoAction::init$() {
}

void NoAction::main($StringArray* args) {
	$var($SocketPermission, sp, nullptr);
	try {
		$assign(sp, $new($SocketPermission, "localhost"_s, ""_s));
		$throwNew($Exception, "Expected IllegalArgumentException not thrown"_s);
	} catch ($IllegalArgumentException& iae) {
		$nc($System::out)->println("Expected IllegalArgumentException thrown"_s);
	}
	try {
		$assign(sp, $new($SocketPermission, "localhost"_s, ($String*)nullptr));
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException& npe) {
		$nc($System::out)->println("Expected NullPointerException thrown"_s);
	}
}

NoAction::NoAction() {
}

$Class* NoAction::load$($String* name, bool initialize) {
	$loadClass(NoAction, name, initialize, &_NoAction_ClassInfo_, allocate$NoAction);
	return class$;
}

$Class* NoAction::class$ = nullptr;