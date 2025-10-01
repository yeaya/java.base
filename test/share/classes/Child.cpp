#include <Child.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$MethodInfo _Child_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Child::*)()>(&Child::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Child::main)), "java.net.MalformedURLException"},
	{}
};

$ClassInfo _Child_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Child",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Child_MethodInfo_
};

$Object* allocate$Child($Class* clazz) {
	return $of($alloc(Child));
}

void Child::init$() {
}

void Child::main($StringArray* args) {
	if ($nc(args)->length != 1) {
		$init($System);
		$nc($System::err)->println("Usage: java Child <protocol>"_s);
		return;
	}
	$var($String, protocol, $nc(args)->get(0));
	$var($URL, url, $new($URL, $$str({protocol, "://"_s})));
	$var($String, s, url->toExternalForm());
	if (!$nc(s)->equals(protocol)) {
		$init($System);
		$nc($System::err)->println($$str({"Expected url.toExternalForm to return "_s, protocol, ", but got: "_s, s}));
		$System::exit(1);
	}
}

Child::Child() {
}

$Class* Child::load$($String* name, bool initialize) {
	$loadClass(Child, name, initialize, &_Child_ClassInfo_, allocate$Child);
	return class$;
}

$Class* Child::class$ = nullptr;