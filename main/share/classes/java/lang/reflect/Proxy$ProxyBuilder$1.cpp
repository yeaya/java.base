#include <java/lang/reflect/Proxy$ProxyBuilder$1.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Proxy$ProxyBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Proxy$ProxyBuilder = ::java::lang::reflect::Proxy$ProxyBuilder;

namespace java {
	namespace lang {
		namespace reflect {

void Proxy$ProxyBuilder$1::init$($Proxy$ProxyBuilder* this$0, $Constructor* val$cons) {
	$set(this, this$0, this$0);
	$set(this, val$cons, val$cons);
}

$Object* Proxy$ProxyBuilder$1::run() {
	$beforeCallerSensitive();
	$nc(this->val$cons)->setAccessible(true);
	return nullptr;
}

Proxy$ProxyBuilder$1::Proxy$ProxyBuilder$1() {
}

$Class* Proxy$ProxyBuilder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/reflect/Proxy$ProxyBuilder;", nullptr, $FINAL | $SYNTHETIC, $field(Proxy$ProxyBuilder$1, this$0)},
		{"val$cons", "Ljava/lang/reflect/Constructor;", nullptr, $FINAL | $SYNTHETIC, $field(Proxy$ProxyBuilder$1, val$cons)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Proxy$ProxyBuilder;Ljava/lang/reflect/Constructor;)V", "()V", 0, $method(Proxy$ProxyBuilder$1, init$, void, $Proxy$ProxyBuilder*, $Constructor*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Proxy$ProxyBuilder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.reflect.Proxy$ProxyBuilder",
		"build",
		"()Ljava/lang/reflect/Constructor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.reflect.Proxy$ProxyBuilder", "java.lang.reflect.Proxy", "ProxyBuilder", $PRIVATE | $STATIC | $FINAL},
		{"java.lang.reflect.Proxy$ProxyBuilder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.reflect.Proxy$ProxyBuilder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.reflect.Proxy"
	};
	$loadClass(Proxy$ProxyBuilder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Proxy$ProxyBuilder$1);
	});
	return class$;
}

$Class* Proxy$ProxyBuilder$1::class$ = nullptr;

		} // reflect
	} // lang
} // java