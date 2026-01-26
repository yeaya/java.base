#include <org/w3c/dom/css/Fake.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {
			namespace css {

$MethodInfo _Fake_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Fake, init$, void)},
	{}
};

$ClassInfo _Fake_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.w3c.dom.css.Fake",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Fake_MethodInfo_
};

$Object* allocate$Fake($Class* clazz) {
	return $of($alloc(Fake));
}

void Fake::init$() {
}

Fake::Fake() {
}

$Class* Fake::load$($String* name, bool initialize) {
	$loadClass(Fake, name, initialize, &_Fake_ClassInfo_, allocate$Fake);
	return class$;
}

$Class* Fake::class$ = nullptr;

			} // css
		} // dom
	} // w3c
} // org