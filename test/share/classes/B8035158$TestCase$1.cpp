#include <B8035158$TestCase$1.h>
#include <B8035158$TestCase.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

void B8035158$TestCase$1::init$($String* val$nonProxyHosts, $String* val$proxyHost) {
	$set(this, val$nonProxyHosts, val$nonProxyHosts);
	$set(this, val$proxyHost, val$proxyHost);
	$HashMap::init$();
	{
		put("http.nonProxyHosts"_s, this->val$nonProxyHosts);
		put("http.proxyHost"_s, this->val$proxyHost);
	}
}

B8035158$TestCase$1::B8035158$TestCase$1() {
}

$Class* B8035158$TestCase$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$proxyHost", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(B8035158$TestCase$1, val$proxyHost)},
		{"val$nonProxyHosts", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(B8035158$TestCase$1, val$nonProxyHosts)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(B8035158$TestCase$1, init$, void, $String*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"B8035158$TestCase",
		"<init>",
		"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B8035158$TestCase", "B8035158", "TestCase", $PRIVATE | $STATIC},
		{"B8035158$TestCase$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B8035158$TestCase$1",
		"java.util.HashMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"B8035158"
	};
	$loadClass(B8035158$TestCase$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(B8035158$TestCase$1));
	});
	return class$;
}

$Class* B8035158$TestCase$1::class$ = nullptr;