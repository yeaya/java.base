#include <sun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/www/protocol/jar/URLJarFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JarFile = ::java::util::jar::JarFile;
using $URLJarFile = ::sun::net::www::protocol::jar::URLJarFile;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

$MethodInfo _URLJarFile$URLJarFileCloseController_MethodInfo_[] = {
	{"close", "(Ljava/util/jar/JarFile;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _URLJarFile$URLJarFileCloseController_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController", "sun.net.www.protocol.jar.URLJarFile", "URLJarFileCloseController", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _URLJarFile$URLJarFileCloseController_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController",
	nullptr,
	nullptr,
	nullptr,
	_URLJarFile$URLJarFileCloseController_MethodInfo_,
	nullptr,
	nullptr,
	_URLJarFile$URLJarFileCloseController_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.jar.URLJarFile"
};

$Object* allocate$URLJarFile$URLJarFileCloseController($Class* clazz) {
	return $of($alloc(URLJarFile$URLJarFileCloseController));
}

$Class* URLJarFile$URLJarFileCloseController::load$($String* name, bool initialize) {
	$loadClass(URLJarFile$URLJarFileCloseController, name, initialize, &_URLJarFile$URLJarFileCloseController_ClassInfo_, allocate$URLJarFile$URLJarFileCloseController);
	return class$;
}

$Class* URLJarFile$URLJarFileCloseController::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun