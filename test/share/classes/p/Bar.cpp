#include <p/Bar.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

$MethodInfo _Bar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Bar, init$, void)},
	{}
};

$ClassInfo _Bar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.Bar",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bar_MethodInfo_
};

$Object* allocate$Bar($Class* clazz) {
	return $of($alloc(Bar));
}

void Bar::init$() {
}

Bar::Bar() {
}

$Class* Bar::load$($String* name, bool initialize) {
	$loadClass(Bar, name, initialize, &_Bar_ClassInfo_, allocate$Bar);
	return class$;
}

$Class* Bar::class$ = nullptr;

} // p