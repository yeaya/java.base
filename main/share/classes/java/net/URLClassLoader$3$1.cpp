#include <java/net/URLClassLoader$3$1.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader$3.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassLoader$3 = ::java::net::URLClassLoader$3;

namespace java {
	namespace net {

void URLClassLoader$3$1::init$($URLClassLoader$3* this$1) {
	$set(this, this$1, this$1);
}

$Object* URLClassLoader$3$1::run() {
	if (!$nc(this->this$1->val$e)->hasMoreElements()) {
		return nullptr;
	}
	return $cast($URL, this->this$1->val$e->nextElement());
}

URLClassLoader$3$1::URLClassLoader$3$1() {
}

$Class* URLClassLoader$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/net/URLClassLoader$3;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$3$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URLClassLoader$3;)V", nullptr, 0, $method(URLClassLoader$3$1, init$, void, $URLClassLoader$3*)},
		{"run", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(URLClassLoader$3$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URLClassLoader$3",
		"next",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URLClassLoader$3", nullptr, nullptr, 0},
		{"java.net.URLClassLoader$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URLClassLoader$3$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.URLClassLoader"
	};
	$loadClass(URLClassLoader$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLClassLoader$3$1);
	});
	return class$;
}

$Class* URLClassLoader$3$1::class$ = nullptr;

	} // net
} // java