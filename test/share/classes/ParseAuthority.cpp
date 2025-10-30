#include <ParseAuthority.h>

#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;

$MethodInfo _ParseAuthority_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParseAuthority::*)()>(&ParseAuthority::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ParseAuthority::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ParseAuthority_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ParseAuthority",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParseAuthority_MethodInfo_
};

$Object* allocate$ParseAuthority($Class* clazz) {
	return $of($alloc(ParseAuthority));
}

void ParseAuthority::init$() {
}

void ParseAuthority::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($URL, u1, $new($URL, "http://[fe80::]9999/path1/path2/"_s));
		$throwNew($RuntimeException, "URL parser didn\'t catch invalid authority field"_s);
	} catch ($MalformedURLException& me) {
		if (!$nc($(me->getMessage()))->startsWith("Invalid authority field"_s)) {
			$throwNew($RuntimeException, "URL parser didn\'t catch invalid authority field"_s);
		}
	}
	try {
		$var($URL, u2, $new($URL, "http://[www.sun.com]:9999/path1/path2/"_s));
		$throwNew($RuntimeException, "URL parser didn\'t catch invalid host"_s);
	} catch ($MalformedURLException& me) {
		if (!$nc($(me->getMessage()))->startsWith("Invalid host"_s)) {
			$throwNew($RuntimeException, "URL parser didn\'t catch invalid host"_s);
		}
	}
}

ParseAuthority::ParseAuthority() {
}

$Class* ParseAuthority::load$($String* name, bool initialize) {
	$loadClass(ParseAuthority, name, initialize, &_ParseAuthority_ClassInfo_, allocate$ParseAuthority);
	return class$;
}

$Class* ParseAuthority::class$ = nullptr;