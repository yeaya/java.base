#include <NoAction.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoAction::*)()>(&NoAction::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NoAction::main)), "java.lang.Exception"},
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
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		$init($System);
		$nc($System::out)->println("Expected IllegalArgumentException thrown"_s);
	}
	try {
		$assign(sp, $new($SocketPermission, "localhost"_s, ($String*)nullptr));
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException&) {
		$var($NullPointerException, npe, $catch());
		$init($System);
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