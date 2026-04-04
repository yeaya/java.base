#include <sun/net/www/content/text/Generic.h>
#include <sun/net/www/content/text/plain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $plain = ::sun::net::www::content::text::plain;

namespace sun {
	namespace net {
		namespace www {
			namespace content {
				namespace text {

void Generic::init$() {
	$plain::init$();
}

Generic::Generic() {
}

$Class* Generic::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Generic, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.www.content.text.Generic",
		"sun.net.www.content.text.plain",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Generic, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Generic);
	});
	return class$;
}

$Class* Generic::class$ = nullptr;

				} // text
			} // content
		} // www
	} // net
} // sun