#include <EnclosingConstructorWithSecurityManager$Inner$1.h>
#include <EnclosingConstructorWithSecurityManager$Inner.h>
#include <jcpp.h>

using $EnclosingConstructorWithSecurityManager$Inner = ::EnclosingConstructorWithSecurityManager$Inner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EnclosingConstructorWithSecurityManager$Inner$1::init$($EnclosingConstructorWithSecurityManager$Inner* this$0) {
	$set(this, this$0, this$0);
}

EnclosingConstructorWithSecurityManager$Inner$1::EnclosingConstructorWithSecurityManager$Inner$1() {
}

$Class* EnclosingConstructorWithSecurityManager$Inner$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LEnclosingConstructorWithSecurityManager$Inner;", nullptr, $FINAL | $SYNTHETIC, $field(EnclosingConstructorWithSecurityManager$Inner$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LEnclosingConstructorWithSecurityManager$Inner;)V", nullptr, 0, $method(EnclosingConstructorWithSecurityManager$Inner$1, init$, void, $EnclosingConstructorWithSecurityManager$Inner*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"EnclosingConstructorWithSecurityManager$Inner",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingConstructorWithSecurityManager$Inner", "EnclosingConstructorWithSecurityManager", "Inner", $PUBLIC | $STATIC},
		{"EnclosingConstructorWithSecurityManager$Inner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EnclosingConstructorWithSecurityManager$Inner$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"EnclosingConstructorWithSecurityManager"
	};
	$loadClass(EnclosingConstructorWithSecurityManager$Inner$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingConstructorWithSecurityManager$Inner$1);
	});
	return class$;
}

$Class* EnclosingConstructorWithSecurityManager$Inner$1::class$ = nullptr;