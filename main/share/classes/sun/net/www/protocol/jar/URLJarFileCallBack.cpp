#include <sun/net/www/protocol/jar/URLJarFileCallBack.h>

#include <java/net/URL.h>
#include <java/util/jar/JarFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

$MethodInfo _URLJarFileCallBack_MethodInfo_[] = {
	{"retrieve", "(Ljava/net/URL;)Ljava/util/jar/JarFile;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _URLJarFileCallBack_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.www.protocol.jar.URLJarFileCallBack",
	nullptr,
	nullptr,
	nullptr,
	_URLJarFileCallBack_MethodInfo_
};

$Object* allocate$URLJarFileCallBack($Class* clazz) {
	return $of($alloc(URLJarFileCallBack));
}

$Class* URLJarFileCallBack::load$($String* name, bool initialize) {
	$loadClass(URLJarFileCallBack, name, initialize, &_URLJarFileCallBack_ClassInfo_, allocate$URLJarFileCallBack);
	return class$;
}

$Class* URLJarFileCallBack::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun