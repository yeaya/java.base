#include <sun/net/www/protocol/jar/JarFileFactory.h>

#include <java/io/FileNotFoundException.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketPermission.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/Permission.h>
#include <java/util/HashMap.h>
#include <java/util/jar/JarFile.h>
#include <sun/net/util/URLUtil.h>
#include <sun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController.h>
#include <sun/net/www/protocol/jar/URLJarFile.h>
#include <jcpp.h>

using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $SocketPermission = ::java::net::SocketPermission;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Permission = ::java::security::Permission;
using $HashMap = ::java::util::HashMap;
using $JarFile = ::java::util::jar::JarFile;
using $ZipFile = ::java::util::zip::ZipFile;
using $URLUtil = ::sun::net::util::URLUtil;
using $URLJarFile = ::sun::net::www::protocol::jar::URLJarFile;
using $URLJarFile$URLJarFileCloseController = ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

$FieldInfo _JarFileFactory_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JarFileFactory, $assertionsDisabled)},
	{"fileCache", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/jar/JarFile;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JarFileFactory, fileCache)},
	{"urlCache", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/util/jar/JarFile;Ljava/net/URL;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JarFileFactory, urlCache)},
	{"instance", "Lsun/net/www/protocol/jar/JarFileFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JarFileFactory, instance)},
	{}
};

$MethodInfo _JarFileFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JarFileFactory::*)()>(&JarFileFactory::init$))},
	{"cacheIfAbsent", "(Ljava/net/URL;Ljava/util/jar/JarFile;)Z", nullptr, 0},
	{"close", "(Ljava/util/jar/JarFile;)V", nullptr, $PUBLIC},
	{"closeIfNotCached", "(Ljava/net/URL;Ljava/util/jar/JarFile;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"get", "(Ljava/net/URL;)Ljava/util/jar/JarFile;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"get", "(Ljava/net/URL;Z)Ljava/util/jar/JarFile;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getCachedJarFile", "(Ljava/net/URL;)Ljava/util/jar/JarFile;", nullptr, $PRIVATE, $method(static_cast<$JarFile*(JarFileFactory::*)($URL*)>(&JarFileFactory::getCachedJarFile))},
	{"getConnection", "(Ljava/util/jar/JarFile;)Ljava/net/URLConnection;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getInstance", "()Lsun/net/www/protocol/jar/JarFileFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JarFileFactory*(*)()>(&JarFileFactory::getInstance))},
	{"getOrCreate", "(Ljava/net/URL;Z)Ljava/util/jar/JarFile;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getPermission", "(Ljava/util/jar/JarFile;)Ljava/security/Permission;", nullptr, $PRIVATE, $method(static_cast<$Permission*(JarFileFactory::*)($JarFile*)>(&JarFileFactory::getPermission))},
	{"urlKey", "(Ljava/net/URL;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JarFileFactory::*)($URL*)>(&JarFileFactory::urlKey))},
	{}
};

$InnerClassInfo _JarFileFactory_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController", "sun.net.www.protocol.jar.URLJarFile", "URLJarFileCloseController", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JarFileFactory_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.jar.JarFileFactory",
	"java.lang.Object",
	"sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController",
	_JarFileFactory_FieldInfo_,
	_JarFileFactory_MethodInfo_,
	nullptr,
	nullptr,
	_JarFileFactory_InnerClassesInfo_
};

$Object* allocate$JarFileFactory($Class* clazz) {
	return $of($alloc(JarFileFactory));
}

bool JarFileFactory::$assertionsDisabled = false;
$HashMap* JarFileFactory::fileCache = nullptr;
$HashMap* JarFileFactory::urlCache = nullptr;
JarFileFactory* JarFileFactory::instance = nullptr;

void JarFileFactory::init$() {
}

JarFileFactory* JarFileFactory::getInstance() {
	$init(JarFileFactory);
	return JarFileFactory::instance;
}

$URLConnection* JarFileFactory::getConnection($JarFile* jarFile) {
	$var($URL, u, nullptr);
	$synchronized(JarFileFactory::instance) {
		$assign(u, $cast($URL, $nc(JarFileFactory::urlCache)->get(jarFile)));
	}
	if (u != nullptr) {
		return u->openConnection();
	}
	return nullptr;
}

$JarFile* JarFileFactory::get($URL* url) {
	return get(url, true);
}

$JarFile* JarFileFactory::getOrCreate($URL* url, bool useCaches) {
	$useLocalCurrentObjectStackCache();
	if (useCaches == false) {
		return get(url, false);
	}
	if (!$URLJarFile::isFileURL(url)) {
		return get(url, useCaches);
	}
	$var($JarFile, result, nullptr);
	$synchronized(JarFileFactory::instance) {
		$assign(result, getCachedJarFile(url));
	}
	if (result == nullptr) {
		$assign(result, $URLJarFile::getJarFile(url, this));
	}
	if (result == nullptr) {
		$throwNew($FileNotFoundException, $($nc(url)->toString()));
	}
	return result;
}

bool JarFileFactory::closeIfNotCached($URL* url, $JarFile* jarFile) {
	$var($JarFile, result, nullptr);
	$synchronized(JarFileFactory::instance) {
		$assign(result, getCachedJarFile(url));
	}
	if (result != jarFile) {
		$nc(jarFile)->close();
	}
	return result != jarFile;
}

bool JarFileFactory::cacheIfAbsent($URL* url, $JarFile* jarFile) {
	$useLocalCurrentObjectStackCache();
	$var($JarFile, cached, nullptr);
	$synchronized(JarFileFactory::instance) {
		$var($String, key, urlKey(url));
		$assign(cached, $cast($JarFile, $nc(JarFileFactory::fileCache)->get(key)));
		if (cached == nullptr) {
			$nc(JarFileFactory::fileCache)->put(key, jarFile);
			$nc(JarFileFactory::urlCache)->put(jarFile, url);
		}
	}
	return cached == nullptr || cached == jarFile;
}

$JarFile* JarFileFactory::get($URL* url, bool useCaches) {
	$useLocalCurrentObjectStackCache();
	$var($JarFile, result, nullptr);
	$var($JarFile, local_result, nullptr);
	if (useCaches) {
		$synchronized(JarFileFactory::instance) {
			$assign(result, getCachedJarFile(url));
		}
		if (result == nullptr) {
			$assign(local_result, $URLJarFile::getJarFile(url, this));
			$synchronized(JarFileFactory::instance) {
				$assign(result, getCachedJarFile(url));
				if (result == nullptr) {
					$nc(JarFileFactory::fileCache)->put($(urlKey(url)), local_result);
					$nc(JarFileFactory::urlCache)->put(local_result, url);
					$assign(result, local_result);
				} else if (local_result != nullptr) {
					local_result->close();
				}
			}
		}
	} else {
		$assign(result, $URLJarFile::getJarFile(url, this));
	}
	if (result == nullptr) {
		$throwNew($FileNotFoundException, $($nc(url)->toString()));
	}
	return result;
}

void JarFileFactory::close($JarFile* jarFile) {
	$useLocalCurrentObjectStackCache();
	$synchronized(JarFileFactory::instance) {
		$var($URL, urlRemoved, $cast($URL, $nc(JarFileFactory::urlCache)->remove(jarFile)));
		if (urlRemoved != nullptr) {
			$nc(JarFileFactory::fileCache)->remove($(urlKey(urlRemoved)));
		}
	}
}

$JarFile* JarFileFactory::getCachedJarFile($URL* url) {
	$useLocalCurrentObjectStackCache();
	if (!JarFileFactory::$assertionsDisabled && !$Thread::holdsLock(JarFileFactory::instance)) {
		$throwNew($AssertionError);
	}
	$var($JarFile, result, $cast($JarFile, $nc(JarFileFactory::fileCache)->get($(urlKey(url)))));
	if (result != nullptr) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$var($Permission, perm, getPermission(result));
			if (perm != nullptr) {
				try {
					sm->checkPermission(perm);
				} catch ($SecurityException&) {
					$var($SecurityException, se, $catch());
					if (($instanceOf($FilePermission, perm)) && $nc($(perm->getActions()))->indexOf("read"_s) != -1) {
						sm->checkRead($(perm->getName()));
					} else if (($instanceOf($SocketPermission, perm)) && $nc($(perm->getActions()))->indexOf("connect"_s) != -1) {
						$var($String, var$0, $nc(url)->getHost());
						sm->checkConnect(var$0, url->getPort());
					} else {
						$throw(se);
					}
				}
			}
		}
	}
	return result;
}

$String* JarFileFactory::urlKey($URL* url) {
	$useLocalCurrentObjectStackCache();
	$var($String, urlstr, $URLUtil::urlNoFragString(url));
	if ("runtime"_s->equals($($nc(url)->getRef()))) {
		$plusAssign(urlstr, "#runtime"_s);
	}
	return urlstr;
}

$Permission* JarFileFactory::getPermission($JarFile* jarFile) {
	try {
		$var($URLConnection, uc, getConnection(jarFile));
		if (uc != nullptr) {
			return uc->getPermission();
		}
	} catch ($IOException&) {
		$catch();
	}
	return nullptr;
}

void clinit$JarFileFactory($Class* class$) {
	JarFileFactory::$assertionsDisabled = !JarFileFactory::class$->desiredAssertionStatus();
	$assignStatic(JarFileFactory::fileCache, $new($HashMap));
	$assignStatic(JarFileFactory::urlCache, $new($HashMap));
	$assignStatic(JarFileFactory::instance, $new(JarFileFactory));
}

JarFileFactory::JarFileFactory() {
}

$Class* JarFileFactory::load$($String* name, bool initialize) {
	$loadClass(JarFileFactory, name, initialize, &_JarFileFactory_ClassInfo_, clinit$JarFileFactory, allocate$JarFileFactory);
	return class$;
}

$Class* JarFileFactory::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun