#include <IllegalAccessInInvoke.h>

#include <Foo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Foo = ::Foo;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _IllegalAccessInInvoke_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalAccessInInvoke, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IllegalAccessInInvoke, main, void, $StringArray*)},
	{}
};

$ClassInfo _IllegalAccessInInvoke_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IllegalAccessInInvoke",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IllegalAccessInInvoke_MethodInfo_
};

$Object* allocate$IllegalAccessInInvoke($Class* clazz) {
	return $of($alloc(IllegalAccessInInvoke));
}

void IllegalAccessInInvoke::init$() {
}

void IllegalAccessInInvoke::main($StringArray* argv) {
	$load(IllegalAccessInInvoke);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassArray, argTypes, $new($ClassArray, 0));
	$var($ObjectArray, args, $new($ObjectArray, 0));
	$var($Method, pm, nullptr);
	try {
		$load($Foo);
		$assign(pm, $Foo::class$->getDeclaredMethod("privateMethod"_s, argTypes));
	} catch ($NoSuchMethodException& nsme) {
		$throwNew($RuntimeException, "Bizzare: privateMethod *must* be there"_s);
	}
	bool ethrown = false;
	try {
		$nc(pm)->invoke($$new($Foo), args);
	} catch ($IllegalAccessException& iae) {
		ethrown = true;
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({"Unexpected "_s, $(e->toString())}));
	}
	if (!ethrown) {
		$throwNew($RuntimeException, "Reflection access checks are disabled"_s);
	}
}

IllegalAccessInInvoke::IllegalAccessInInvoke() {
}

$Class* IllegalAccessInInvoke::load$($String* name, bool initialize) {
	$loadClass(IllegalAccessInInvoke, name, initialize, &_IllegalAccessInInvoke_ClassInfo_, allocate$IllegalAccessInInvoke);
	return class$;
}

$Class* IllegalAccessInInvoke::class$ = nullptr;