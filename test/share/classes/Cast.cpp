#include <Cast.h>

#include <Cast$Foo.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $Cast$Foo = ::Cast$Foo;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Cast_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Cast::*)()>(&Cast::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Cast::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Cast_InnerClassesInfo_[] = {
	{"Cast$Foo", "Cast", "Foo", $STATIC},
	{}
};

$ClassInfo _Cast_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Cast",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Cast_MethodInfo_,
	nullptr,
	nullptr,
	_Cast_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Cast$Foo"
};

$Object* allocate$Cast($Class* clazz) {
	return $of($alloc(Cast));
}

void Cast::init$() {
}

void Cast::main($StringArray* argv) {
	$load(Cast);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($Cast$Foo);
	$var($Object, o, $Cast$Foo::class$->newInstance());
	$var($Cast$Foo, f, $cast($Cast$Foo, $Cast$Foo::class$->cast(o)));
	if (f == nullptr) {
		$throwNew($Error);
	}
	$var($Cast$Foo, f2, $cast($Cast$Foo, $Cast$Foo::class$->cast(nullptr)));
}

Cast::Cast() {
}

$Class* Cast::load$($String* name, bool initialize) {
	$loadClass(Cast, name, initialize, &_Cast_ClassInfo_, allocate$Cast);
	return class$;
}

$Class* Cast::class$ = nullptr;