#include <p/two/Bar.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace two {

$MethodInfo _Bar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bar::*)()>(&Bar::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Bar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.two.Bar",
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

$String* Bar::toString() {
	return $of(this)->getClass()->getName();
}

Bar::Bar() {
}

$Class* Bar::load$($String* name, bool initialize) {
	$loadClass(Bar, name, initialize, &_Bar_ClassInfo_, allocate$Bar);
	return class$;
}

$Class* Bar::class$ = nullptr;

	} // two
} // p