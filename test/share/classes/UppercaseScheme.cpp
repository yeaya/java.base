#include <UppercaseScheme.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$MethodInfo _UppercaseScheme_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UppercaseScheme::*)()>(&UppercaseScheme::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UppercaseScheme::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _UppercaseScheme_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UppercaseScheme",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UppercaseScheme_MethodInfo_
};

$Object* allocate$UppercaseScheme($Class* clazz) {
	return $of($alloc(UppercaseScheme));
}

void UppercaseScheme::init$() {
}

void UppercaseScheme::main($StringArray* args) {
	$var($URL, u, $new($URL, "HTTP"_s, "10:100::1234"_s, 9999, "/index.html"_s));
}

UppercaseScheme::UppercaseScheme() {
}

$Class* UppercaseScheme::load$($String* name, bool initialize) {
	$loadClass(UppercaseScheme, name, initialize, &_UppercaseScheme_ClassInfo_, allocate$UppercaseScheme);
	return class$;
}

$Class* UppercaseScheme::class$ = nullptr;