#include <EnclosingConstructorWithSecurityManager$Inner.h>
#include <EnclosingConstructorWithSecurityManager$Inner$1.h>
#include <EnclosingConstructorWithSecurityManager.h>
#include <jcpp.h>

using $EnclosingConstructorWithSecurityManager$Inner$1 = ::EnclosingConstructorWithSecurityManager$Inner$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* EnclosingConstructorWithSecurityManager$Inner::theInner = nullptr;

void EnclosingConstructorWithSecurityManager$Inner::init$() {
	$var($Object, o, $new($EnclosingConstructorWithSecurityManager$Inner$1, this));
	$assignStatic(EnclosingConstructorWithSecurityManager$Inner::theInner, o->getClass());
}

EnclosingConstructorWithSecurityManager$Inner::EnclosingConstructorWithSecurityManager$Inner() {
}

$Class* EnclosingConstructorWithSecurityManager$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theInner", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $staticField(EnclosingConstructorWithSecurityManager$Inner, theInner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EnclosingConstructorWithSecurityManager$Inner, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingConstructorWithSecurityManager$Inner", "EnclosingConstructorWithSecurityManager", "Inner", $PUBLIC | $STATIC},
		{"EnclosingConstructorWithSecurityManager$Inner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EnclosingConstructorWithSecurityManager$Inner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"EnclosingConstructorWithSecurityManager"
	};
	$loadClass(EnclosingConstructorWithSecurityManager$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingConstructorWithSecurityManager$Inner);
	});
	return class$;
}

$Class* EnclosingConstructorWithSecurityManager$Inner::class$ = nullptr;