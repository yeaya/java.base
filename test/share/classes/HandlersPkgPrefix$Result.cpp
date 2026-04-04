#include <HandlersPkgPrefix$Result.h>
#include <HandlersPkgPrefix.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

void HandlersPkgPrefix$Result::init$($String* protocol, $URL* url, $Exception* exception) {
	$set(this, protocol, protocol);
	$set(this, url, url);
	$set(this, exception, exception);
}

HandlersPkgPrefix$Result::HandlersPkgPrefix$Result() {
}

$Class* HandlersPkgPrefix$Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"protocol", "Ljava/lang/String;", nullptr, $FINAL, $field(HandlersPkgPrefix$Result, protocol)},
		{"url", "Ljava/net/URL;", nullptr, $FINAL, $field(HandlersPkgPrefix$Result, url)},
		{"exception", "Ljava/lang/Exception;", nullptr, $FINAL, $field(HandlersPkgPrefix$Result, exception)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/net/URL;Ljava/lang/Exception;)V", nullptr, 0, $method(HandlersPkgPrefix$Result, init$, void, $String*, $URL*, $Exception*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HandlersPkgPrefix$Result", "HandlersPkgPrefix", "Result", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HandlersPkgPrefix$Result",
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
		"HandlersPkgPrefix"
	};
	$loadClass(HandlersPkgPrefix$Result, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandlersPkgPrefix$Result);
	});
	return class$;
}

$Class* HandlersPkgPrefix$Result::class$ = nullptr;