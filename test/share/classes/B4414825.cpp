#include <B4414825.h>

#include <java/net/SocketPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SocketPermission = ::java::net::SocketPermission;
using $Permission = ::java::security::Permission;

$MethodInfo _B4414825_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B4414825::*)()>(&B4414825::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B4414825::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _B4414825_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B4414825",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B4414825_MethodInfo_
};

$Object* allocate$B4414825($Class* clazz) {
	return $of($alloc(B4414825));
}

void B4414825::init$() {
}

void B4414825::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($SocketPermission, p, $new($SocketPermission, "invlidhost"_s, "connect"_s));
	if (!p->implies(p)) {
		$throwNew($RuntimeException, "Test failed: SocketPermission instance should imply itself."_s);
	}
	$var($SocketPermission, p1, $new($SocketPermission, "invlidhost"_s, "connect"_s));
	if (!p->implies(p1)) {
		$throwNew($RuntimeException, "Test failed: Equaled SocketPermission instances should imply each other."_s);
	}
}

B4414825::B4414825() {
}

$Class* B4414825::load$($String* name, bool initialize) {
	$loadClass(B4414825, name, initialize, &_B4414825_ClassInfo_, allocate$B4414825);
	return class$;
}

$Class* B4414825::class$ = nullptr;