#include <Wildcard.h>

#include <java/net/SocketPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SocketPermission = ::java::net::SocketPermission;
using $Permission = ::java::security::Permission;

$MethodInfo _Wildcard_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Wildcard, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Wildcard, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Wildcard_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Wildcard",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Wildcard_MethodInfo_
};

$Object* allocate$Wildcard($Class* clazz) {
	return $of($alloc(Wildcard));
}

void Wildcard::init$() {
}

void Wildcard::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($SocketPermission, star_All, $new($SocketPermission, "*.blabla.bla"_s, "listen,accept,connect"_s));
	$var($SocketPermission, www_All, $new($SocketPermission, "bla.blabla.bla"_s, "listen,accept,connect"_s));
	if (!star_All->implies(www_All)) {
		$throwNew($RuntimeException, $$str({"Failed: "_s, star_All, " does not imply "_s, www_All}));
	}
}

Wildcard::Wildcard() {
}

$Class* Wildcard::load$($String* name, bool initialize) {
	$loadClass(Wildcard, name, initialize, &_Wildcard_ClassInfo_, allocate$Wildcard);
	return class$;
}

$Class* Wildcard::class$ = nullptr;