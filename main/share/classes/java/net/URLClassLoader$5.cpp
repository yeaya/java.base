#include <java/net/URLClassLoader$5.h>
#include <java/lang/ClassLoader.h>
#include <java/net/FactoryURLClassLoader.h>
#include <java/net/URL.h>
#include <java/security/AccessControlContext.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FactoryURLClassLoader = ::java::net::FactoryURLClassLoader;
using $AccessControlContext = ::java::security::AccessControlContext;

namespace java {
	namespace net {

void URLClassLoader$5::init$($URLArray* val$urls, $ClassLoader* val$parent, $AccessControlContext* val$acc) {
	$set(this, val$urls, val$urls);
	$set(this, val$parent, val$parent);
	$set(this, val$acc, val$acc);
}

$Object* URLClassLoader$5::run() {
	return $of($new($FactoryURLClassLoader, nullptr, this->val$urls, this->val$parent, this->val$acc));
}

URLClassLoader$5::URLClassLoader$5() {
}

$Class* URLClassLoader$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$5, val$acc)},
		{"val$parent", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$5, val$parent)},
		{"val$urls", "[Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$5, val$urls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(URLClassLoader$5, init$, void, $URLArray*, $ClassLoader*, $AccessControlContext*)},
		{"run", "()Ljava/net/URLClassLoader;", nullptr, $PUBLIC, $virtualMethod(URLClassLoader$5, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URLClassLoader",
		"newInstance",
		"([Ljava/net/URL;Ljava/lang/ClassLoader;)Ljava/net/URLClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URLClassLoader$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URLClassLoader$5",
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
	$loadClass(URLClassLoader$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLClassLoader$5);
	});
	return class$;
}

$Class* URLClassLoader$5::class$ = nullptr;

	} // net
} // java