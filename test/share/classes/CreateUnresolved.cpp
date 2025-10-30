#include <CreateUnresolved.h>

#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;

$MethodInfo _CreateUnresolved_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CreateUnresolved::*)()>(&CreateUnresolved::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CreateUnresolved::main))},
	{}
};

$ClassInfo _CreateUnresolved_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CreateUnresolved",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CreateUnresolved_MethodInfo_
};

$Object* allocate$CreateUnresolved($Class* clazz) {
	return $of($alloc(CreateUnresolved));
}

void CreateUnresolved::init$() {
}

void CreateUnresolved::main($StringArray* args) {
	$var($InetSocketAddress, a, $InetSocketAddress::createUnresolved("unresolved"_s, 1234));
	if (!$nc(a)->isUnresolved()) {
		$throwNew($RuntimeException, "Address is not flagged as \'unresolved\'"_s);
	}
}

CreateUnresolved::CreateUnresolved() {
}

$Class* CreateUnresolved::load$($String* name, bool initialize) {
	$loadClass(CreateUnresolved, name, initialize, &_CreateUnresolved_ClassInfo_, allocate$CreateUnresolved);
	return class$;
}

$Class* CreateUnresolved::class$ = nullptr;