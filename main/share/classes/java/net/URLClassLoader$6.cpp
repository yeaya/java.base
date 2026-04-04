#include <java/net/URLClassLoader$6.h>
#include <java/net/FactoryURLClassLoader.h>
#include <java/net/URL.h>
#include <java/security/AccessControlContext.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FactoryURLClassLoader = ::java::net::FactoryURLClassLoader;
using $AccessControlContext = ::java::security::AccessControlContext;

namespace java {
	namespace net {

void URLClassLoader$6::init$($URLArray* val$urls, $AccessControlContext* val$acc) {
	$set(this, val$urls, val$urls);
	$set(this, val$acc, val$acc);
}

$Object* URLClassLoader$6::run() {
	return $of($new($FactoryURLClassLoader, this->val$urls, this->val$acc));
}

URLClassLoader$6::URLClassLoader$6() {
}

$Class* URLClassLoader$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$6, val$acc)},
		{"val$urls", "[Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$6, val$urls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(URLClassLoader$6, init$, void, $URLArray*, $AccessControlContext*)},
		{"run", "()Ljava/net/URLClassLoader;", nullptr, $PUBLIC, $virtualMethod(URLClassLoader$6, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URLClassLoader",
		"newInstance",
		"([Ljava/net/URL;)Ljava/net/URLClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URLClassLoader$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URLClassLoader$6",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URLClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.URLClassLoader"
	};
	$loadClass(URLClassLoader$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLClassLoader$6);
	});
	return class$;
}

$Class* URLClassLoader$6::class$ = nullptr;

	} // net
} // java