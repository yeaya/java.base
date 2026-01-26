#include <HashCode.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$MethodInfo _HashCode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HashCode, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HashCode, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _HashCode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HashCode",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HashCode_MethodInfo_
};

$Object* allocate$HashCode($Class* clazz) {
	return $of($alloc(HashCode));
}

void HashCode::init$() {
}

void HashCode::main($StringArray* args) {
	$var($URL, url, $new($URL, "http"_s, nullptr, 80, "test"_s));
	int32_t code = url->hashCode();
}

HashCode::HashCode() {
}

$Class* HashCode::load$($String* name, bool initialize) {
	$loadClass(HashCode, name, initialize, &_HashCode_ClassInfo_, allocate$HashCode);
	return class$;
}

$Class* HashCode::class$ = nullptr;