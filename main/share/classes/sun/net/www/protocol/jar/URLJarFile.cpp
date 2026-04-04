#include <sun/net/www/protocol/jar/URLJarFile.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/InternalError.h>
#include <java/lang/Runtime$Version.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/Manifest.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <sun/net/www/ParseUtil.h>
#include <sun/net/www/protocol/jar/URLJarFile$1.h>
#include <sun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController.h>
#include <sun/net/www/protocol/jar/URLJarFile$URLJarFileEntry.h>
#include <sun/net/www/protocol/jar/URLJarFileCallBack.h>
#include <jcpp.h>

#undef BUF_SIZE
#undef OPEN_DELETE
#undef OPEN_READ

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime$Version = ::java::lang::Runtime$Version;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Attributes = ::java::util::jar::Attributes;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Manifest = ::java::util::jar::Manifest;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $ParseUtil = ::sun::net::www::ParseUtil;
using $URLJarFile$1 = ::sun::net::www::protocol::jar::URLJarFile$1;
using $URLJarFile$URLJarFileCloseController = ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController;
using $URLJarFile$URLJarFileEntry = ::sun::net::www::protocol::jar::URLJarFile$URLJarFileEntry;
using $URLJarFileCallBack = ::sun::net::www::protocol::jar::URLJarFileCallBack;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

$URLJarFileCallBack* URLJarFile::callback = nullptr;
int32_t URLJarFile::BUF_SIZE = 0;

$JarFile* URLJarFile::getJarFile($URL* url) {
	$init(URLJarFile);
	return getJarFile(url, nullptr);
}

$JarFile* URLJarFile::getJarFile($URL* url, $URLJarFile$URLJarFileCloseController* closeController) {
	$init(URLJarFile);
	$useLocalObjectStack();
	if (isFileURL(url)) {
		$var($Runtime$Version, version, "runtime"_s->equals($($nc(url)->getRef())) ? $JarFile::runtimeVersion() : $JarFile::baseVersion());
		return $new(URLJarFile, url, closeController, version);
	} else {
		return retrieve(url, closeController);
	}
}

void URLJarFile::init$($File* file) {
	URLJarFile::init$(file, nullptr);
}

void URLJarFile::init$($File* file, $URLJarFile$URLJarFileCloseController* closeController) {
	$JarFile::init$(file, true, $ZipFile::OPEN_READ | $ZipFile::OPEN_DELETE);
	$set(this, closeController, nullptr);
	$set(this, closeController, closeController);
}

void URLJarFile::init$($File* file, $URLJarFile$URLJarFileCloseController* closeController, $Runtime$Version* version) {
	$JarFile::init$(file, true, $ZipFile::OPEN_READ | $ZipFile::OPEN_DELETE, version);
	$set(this, closeController, nullptr);
	$set(this, closeController, closeController);
}

void URLJarFile::init$($URL* url, $URLJarFile$URLJarFileCloseController* closeController, $Runtime$Version* version) {
	$useLocalObjectStack();
	$JarFile::init$($$new($File, $($ParseUtil::decode($($nc(url)->getFile())))), true, $ZipFile::OPEN_READ, version);
	$set(this, closeController, nullptr);
	$set(this, closeController, closeController);
}

bool URLJarFile::isFileURL($URL* url) {
	$init(URLJarFile);
	$useLocalObjectStack();
	if ($$nc($nc(url)->getProtocol())->equalsIgnoreCase("file"_s)) {
		$var($String, host, url->getHost());
		bool var$1 = host == nullptr || host->isEmpty();
		bool var$0 = var$1 || host->equals("~"_s);
		if (var$0 || host->equalsIgnoreCase("localhost"_s)) {
			return true;
		}
	}
	return false;
}

$ZipEntry* URLJarFile::getEntry($String* name) {
	$useLocalObjectStack();
	$var($ZipEntry, ze, $JarFile::getEntry(name));
	if (ze != nullptr) {
		if ($instanceOf($JarEntry, ze)) {
			return $new($URLJarFile$URLJarFileEntry, this, $cast($JarEntry, ze));
		} else {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append($of(this)->getClass());
			var$0->append(" returned unexpected entry type "_s);
			var$0->append($of(ze)->getClass());
			$throwNew($InternalError, $$str(var$0));
		}
	}
	return nullptr;
}

$Manifest* URLJarFile::getManifest() {
	$useLocalObjectStack();
	if (!isSuperMan()) {
		return nullptr;
	}
	$var($Manifest, man, $new($Manifest));
	$var($Attributes, attr, man->getMainAttributes());
	$nc(attr)->putAll($$cast($Map, $nc(this->superAttr)->clone()));
	if (this->superEntries != nullptr) {
		$var($Map, entries, man->getEntries());
		{
			$var($Iterator, i$, $$nc($nc(this->superEntries)->keySet())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, key, $cast($String, i$->next()));
				{
					$var($Attributes, at, $cast($Attributes, $nc(this->superEntries)->get(key)));
					$nc(entries)->put(key, $$cast($Attributes, $nc(at)->clone()));
				}
			}
		}
	}
	return man;
}

void URLJarFile::close() {
	if (this->closeController != nullptr) {
		this->closeController->close(this);
	}
	$JarFile::close();
}

bool URLJarFile::isSuperMan() {
	$synchronized(this) {
		if (this->superMan == nullptr) {
			$set(this, superMan, $JarFile::getManifest());
		}
		if (this->superMan != nullptr) {
			$set(this, superAttr, this->superMan->getMainAttributes());
			$set(this, superEntries, $nc(this->superMan)->getEntries());
			return true;
		} else {
			return false;
		}
	}
}

$JarFile* URLJarFile::retrieve($URL* url, $URLJarFile$URLJarFileCloseController* closeController) {
	$init(URLJarFile);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (URLJarFile::callback != nullptr) {
		return URLJarFile::callback->retrieve(url);
	} else {
		$var($JarFile, result, nullptr);
		$var($Runtime$Version, version, "runtime"_s->equals($($nc(url)->getRef())) ? $JarFile::runtimeVersion() : $JarFile::baseVersion());
		try {
			$var($InputStream, in, $$nc(url->openConnection())->getInputStream());
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$assign(result, $cast($JarFile, $AccessController::doPrivileged($$new($URLJarFile$1, in, closeController, version))));
				} catch ($Throwable& t$) {
					if (in != nullptr) {
						try {
							in->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (in != nullptr) {
					in->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		} catch ($PrivilegedActionException& pae) {
			$throw($$cast($IOException, pae->getException()));
		}
		return result;
	}
}

void URLJarFile::setCallBack($URLJarFileCallBack* cb) {
	$init(URLJarFile);
	$assignStatic(URLJarFile::callback, cb);
}

void URLJarFile::clinit$($Class* clazz) {
	$assignStatic(URLJarFile::callback, nullptr);
	URLJarFile::BUF_SIZE = 2048;
}

URLJarFile::URLJarFile() {
}

$Class* URLJarFile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"callback", "Lsun/net/www/protocol/jar/URLJarFileCallBack;", nullptr, $PRIVATE | $STATIC, $staticField(URLJarFile, callback)},
		{"closeController", "Lsun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController;", nullptr, $PRIVATE, $field(URLJarFile, closeController)},
		{"BUF_SIZE", "I", nullptr, $PRIVATE | $STATIC, $staticField(URLJarFile, BUF_SIZE)},
		{"superMan", "Ljava/util/jar/Manifest;", nullptr, $PRIVATE, $field(URLJarFile, superMan)},
		{"superAttr", "Ljava/util/jar/Attributes;", nullptr, $PRIVATE, $field(URLJarFile, superAttr)},
		{"superEntries", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/jar/Attributes;>;", $PRIVATE, $field(URLJarFile, superEntries)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(URLJarFile, init$, void, $File*), "java.io.IOException"},
		{"<init>", "(Ljava/io/File;Lsun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController;)V", nullptr, $PUBLIC, $method(URLJarFile, init$, void, $File*, $URLJarFile$URLJarFileCloseController*), "java.io.IOException"},
		{"<init>", "(Ljava/io/File;Lsun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController;Ljava/lang/Runtime$Version;)V", nullptr, $PRIVATE, $method(URLJarFile, init$, void, $File*, $URLJarFile$URLJarFileCloseController*, $Runtime$Version*), "java.io.IOException"},
		{"<init>", "(Ljava/net/URL;Lsun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController;Ljava/lang/Runtime$Version;)V", nullptr, $PRIVATE, $method(URLJarFile, init$, void, $URL*, $URLJarFile$URLJarFileCloseController*, $Runtime$Version*), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(URLJarFile, close, void), "java.io.IOException"},
		{"getEntry", "(Ljava/lang/String;)Ljava/util/zip/ZipEntry;", nullptr, $PUBLIC, $virtualMethod(URLJarFile, getEntry, $ZipEntry*, $String*)},
		{"getJarFile", "(Ljava/net/URL;)Ljava/util/jar/JarFile;", nullptr, $STATIC, $staticMethod(URLJarFile, getJarFile, $JarFile*, $URL*), "java.io.IOException"},
		{"getJarFile", "(Ljava/net/URL;Lsun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController;)Ljava/util/jar/JarFile;", nullptr, $STATIC, $staticMethod(URLJarFile, getJarFile, $JarFile*, $URL*, $URLJarFile$URLJarFileCloseController*), "java.io.IOException"},
		{"getManifest", "()Ljava/util/jar/Manifest;", nullptr, $PUBLIC, $virtualMethod(URLJarFile, getManifest, $Manifest*), "java.io.IOException"},
		{"isFileURL", "(Ljava/net/URL;)Z", nullptr, $STATIC, $staticMethod(URLJarFile, isFileURL, bool, $URL*)},
		{"isSuperMan", "()Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(URLJarFile, isSuperMan, bool), "java.io.IOException"},
		{"retrieve", "(Ljava/net/URL;Lsun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController;)Ljava/util/jar/JarFile;", nullptr, $PRIVATE | $STATIC, $staticMethod(URLJarFile, retrieve, $JarFile*, $URL*, $URLJarFile$URLJarFileCloseController*), "java.io.IOException"},
		{"setCallBack", "(Lsun/net/www/protocol/jar/URLJarFileCallBack;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(URLJarFile, setCallBack, void, $URLJarFileCallBack*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController", "sun.net.www.protocol.jar.URLJarFile", "URLJarFileCloseController", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.net.www.protocol.jar.URLJarFile$URLJarFileEntry", "sun.net.www.protocol.jar.URLJarFile", "URLJarFileEntry", $PRIVATE},
		{"sun.net.www.protocol.jar.URLJarFile$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.www.protocol.jar.URLJarFile",
		"java.util.jar.JarFile",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController,sun.net.www.protocol.jar.URLJarFile$URLJarFileEntry,sun.net.www.protocol.jar.URLJarFile$1"
	};
	$loadClass(URLJarFile, name, initialize, &classInfo$$, URLJarFile::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(URLJarFile));
	});
	return class$;
}

$Class* URLJarFile::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun