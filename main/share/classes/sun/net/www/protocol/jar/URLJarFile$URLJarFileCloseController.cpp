#include <sun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController.h>
#include <java/util/jar/JarFile.h>
#include <sun/net/www/protocol/jar/URLJarFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JarFile = ::java::util::jar::JarFile;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

$Class* URLJarFile$URLJarFileCloseController::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "(Ljava/util/jar/JarFile;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URLJarFile$URLJarFileCloseController, close, void, $JarFile*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController", "sun.net.www.protocol.jar.URLJarFile", "URLJarFileCloseController", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.jar.URLJarFile"
	};
	$loadClass(URLJarFile$URLJarFileCloseController, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLJarFile$URLJarFileCloseController);
	});
	return class$;
}

$Class* URLJarFile$URLJarFileCloseController::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun