#include <Bar.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Object* Bar::obj = nullptr;

void Bar::init$() {
}

void Bar::clinit$($Class* clazz) {
	{
		$nc($System::out)->println("Bar.<clinit> called"_s);
	}
	$assignStatic(Bar::obj, $new($Object));
}

Bar::Bar() {
}

$Class* Bar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"obj", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(Bar, obj)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Bar, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Bar",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bar, name, initialize, &classInfo$$, Bar::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bar);
	});
	return class$;
}

$Class* Bar::class$ = nullptr;