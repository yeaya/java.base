#include <NoAction.h>
#include <java/net/SocketPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SocketPermission = ::java::net::SocketPermission;

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
		$assign(sp, $new($SocketPermission, "localhost"_s, nullptr));
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException& npe) {
		$nc($System::out)->println("Expected NullPointerException thrown"_s);
	}
}

NoAction::NoAction() {
}

$Class* NoAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoAction, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NoAction, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NoAction",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NoAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoAction);
	});
	return class$;
}

$Class* NoAction::class$ = nullptr;