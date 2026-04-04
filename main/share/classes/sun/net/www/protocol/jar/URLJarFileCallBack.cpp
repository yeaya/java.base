#include <sun/net/www/protocol/jar/URLJarFileCallBack.h>
#include <java/net/URL.h>
#include <java/util/jar/JarFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $JarFile = ::java::util::jar::JarFile;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

$Class* URLJarFileCallBack::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"retrieve", "(Ljava/net/URL;)Ljava/util/jar/JarFile;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URLJarFileCallBack, retrieve, $JarFile*, $URL*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.www.protocol.jar.URLJarFileCallBack",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(URLJarFileCallBack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLJarFileCallBack);
	});
	return class$;
}

$Class* URLJarFileCallBack::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun