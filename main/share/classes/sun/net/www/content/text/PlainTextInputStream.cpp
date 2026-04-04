#include <sun/net/www/content/text/PlainTextInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace content {
				namespace text {

void PlainTextInputStream::init$($InputStream* is) {
	$FilterInputStream::init$(is);
}

PlainTextInputStream::PlainTextInputStream() {
}

$Class* PlainTextInputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(PlainTextInputStream, init$, void, $InputStream*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.www.content.text.PlainTextInputStream",
		"java.io.FilterInputStream",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlainTextInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlainTextInputStream);
	});
	return class$;
}

$Class* PlainTextInputStream::class$ = nullptr;

				} // text
			} // content
		} // www
	} // net
} // sun