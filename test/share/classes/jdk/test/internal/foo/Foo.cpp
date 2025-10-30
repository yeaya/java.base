#include <jdk/test/internal/foo/Foo.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace test {
		namespace internal {
			namespace foo {

$MethodInfo _Foo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Foo::*)()>(&Foo::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Foo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.test.internal.foo.Foo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Foo_MethodInfo_
};

$Object* allocate$Foo($Class* clazz) {
	return $of($alloc(Foo));
}

void Foo::init$() {
}

$String* Foo::toString() {
	return $of(this)->getClass()->getName();
}

Foo::Foo() {
}

$Class* Foo::load$($String* name, bool initialize) {
	$loadClass(Foo, name, initialize, &_Foo_ClassInfo_, allocate$Foo);
	return class$;
}

$Class* Foo::class$ = nullptr;

			} // foo
		} // internal
	} // test
} // jdk