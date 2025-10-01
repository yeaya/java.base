#include <sun/net/www/protocol/jar/JarURLConnection.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/JarURLConnection.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/Permission.h>
#include <java/util/Map.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/zip/ZipEntry.h>
#include <sun/net/www/protocol/jar/Handler.h>
#include <sun/net/www/protocol/jar/JarFileFactory.h>
#include <sun/net/www/protocol/jar/JarURLConnection$JarURLInputStream.h>
#include <jcpp.h>

#undef MAX_VALUE

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JarURLConnection = ::java::net::JarURLConnection;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Permission = ::java::security::Permission;
using $Map = ::java::util::Map;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $Handler = ::sun::net::www::protocol::jar::Handler;
using $JarFileFactory = ::sun::net::www::protocol::jar::JarFileFactory;
using $JarURLConnection$JarURLInputStream = ::sun::net::www::protocol::jar::JarURLConnection$JarURLInputStream;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

$FieldInfo _JarURLConnection_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JarURLConnection, debug)},
	{"factory", "Lsun/net/www/protocol/jar/JarFileFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JarURLConnection, factory)},
	{"jarFileURL", "Ljava/net/URL;", nullptr, $PRIVATE, $field(JarURLConnection, jarFileURL)},
	{"permission", "Ljava/security/Permission;", nullptr, $PRIVATE, $field(JarURLConnection, permission)},
	{"jarFileURLConnection", "Ljava/net/URLConnection;", nullptr, $PRIVATE, $field(JarURLConnection, jarFileURLConnection)},
	{"entryName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JarURLConnection, entryName)},
	{"jarEntry", "Ljava/util/jar/JarEntry;", nullptr, $PRIVATE, $field(JarURLConnection, jarEntry)},
	{"jarFile", "Ljava/util/jar/JarFile;", nullptr, $PRIVATE, $field(JarURLConnection, jarFile)},
	{"contentType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JarURLConnection, contentType)},
	{}
};

$MethodInfo _JarURLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;Lsun/net/www/protocol/jar/Handler;)V", nullptr, $PUBLIC, $method(static_cast<void(JarURLConnection::*)($URL*,$Handler*)>(&JarURLConnection::init$)), "java.net.MalformedURLException,java.io.IOException"},
	{"addRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"connect", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getAllowUserInteraction", "()Z", nullptr, $PUBLIC},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContentLength", "()I", nullptr, $PUBLIC},
	{"getContentLengthLong", "()J", nullptr, $PUBLIC},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDefaultUseCaches", "()Z", nullptr, $PUBLIC},
	{"getHeaderField", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJarEntry", "()Ljava/util/jar/JarEntry;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJarFile", "()Ljava/util/jar/JarFile;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPermission", "()Ljava/security/Permission;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getRequestProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC},
	{"getRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUseCaches", "()Z", nullptr, $PUBLIC},
	{"setAllowUserInteraction", "(Z)V", nullptr, $PUBLIC},
	{"setDefaultUseCaches", "(Z)V", nullptr, $PUBLIC},
	{"setIfModifiedSince", "(J)V", nullptr, $PUBLIC},
	{"setRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setUseCaches", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JarURLConnection_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.jar.JarURLConnection$JarURLInputStream", "sun.net.www.protocol.jar.JarURLConnection", "JarURLInputStream", 0},
	{}
};

$ClassInfo _JarURLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.jar.JarURLConnection",
	"java.net.JarURLConnection",
	nullptr,
	_JarURLConnection_FieldInfo_,
	_JarURLConnection_MethodInfo_,
	nullptr,
	nullptr,
	_JarURLConnection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.jar.JarURLConnection$JarURLInputStream"
};

$Object* allocate$JarURLConnection($Class* clazz) {
	return $of($alloc(JarURLConnection));
}

$JarFileFactory* JarURLConnection::factory = nullptr;

void JarURLConnection::init$($URL* url, $Handler* handler) {
	$JarURLConnection::init$(url);
	$set(this, jarFileURL, getJarFileURL());
	$set(this, jarFileURLConnection, $nc(this->jarFileURL)->openConnection());
	$nc(this->jarFileURLConnection)->setUseCaches(this->useCaches);
	$set(this, entryName, getEntryName());
}

$JarFile* JarURLConnection::getJarFile() {
	connect();
	return this->jarFile;
}

$JarEntry* JarURLConnection::getJarEntry() {
	connect();
	return this->jarEntry;
}

$Permission* JarURLConnection::getPermission() {
	return $nc(this->jarFileURLConnection)->getPermission();
}

void JarURLConnection::connect() {
	if (!this->connected) {
		bool useCaches = getUseCaches();
		$var($String, entryName, this->entryName);
		$var($URL, url, getJarFileURL());
		$set(this, jarFile, entryName == nullptr ? $nc(JarURLConnection::factory)->get(url, useCaches) : $nc(JarURLConnection::factory)->getOrCreate(url, useCaches));
		if (entryName != nullptr) {
			$set(this, jarEntry, $cast($JarEntry, $nc(this->jarFile)->getEntry(entryName)));
			if (this->jarEntry == nullptr) {
				try {
					$nc(JarURLConnection::factory)->closeIfNotCached(url, this->jarFile);
				} catch ($Exception&) {
					$catch();
				}
				$throwNew($FileNotFoundException, $$str({"JAR entry "_s, entryName, " not found in "_s, $($nc(this->jarFile)->getName())}));
			}
		}
		if (useCaches && entryName != nullptr) {
			useCaches = $nc(JarURLConnection::factory)->cacheIfAbsent(url, this->jarFile);
		}
		if (useCaches) {
			bool oldUseCaches = $nc(this->jarFileURLConnection)->getUseCaches();
			$set(this, jarFileURLConnection, $nc(JarURLConnection::factory)->getConnection(this->jarFile));
			$nc(this->jarFileURLConnection)->setUseCaches(oldUseCaches);
		}
		this->connected = true;
	}
}

$InputStream* JarURLConnection::getInputStream() {
	connect();
	$var($InputStream, result, nullptr);
	if (this->entryName == nullptr) {
		$throwNew($IOException, "no entry name specified"_s);
	} else {
		if (this->jarEntry == nullptr) {
			$throwNew($FileNotFoundException, $$str({"JAR entry "_s, this->entryName, " not found in "_s, $($nc(this->jarFile)->getName())}));
		}
		$assign(result, $new($JarURLConnection$JarURLInputStream, this, $($nc(this->jarFile)->getInputStream(this->jarEntry))));
	}
	return result;
}

int32_t JarURLConnection::getContentLength() {
	int64_t result = getContentLengthLong();
	if (result > $Integer::MAX_VALUE) {
		return -1;
	}
	return (int32_t)result;
}

int64_t JarURLConnection::getContentLengthLong() {
	int64_t result = -1;
	try {
		connect();
		if (this->jarEntry == nullptr) {
			result = $nc(this->jarFileURLConnection)->getContentLengthLong();
		} else {
			result = $nc($(getJarEntry()))->getSize();
		}
	} catch ($IOException&) {
		$catch();
	}
	return result;
}

$Object* JarURLConnection::getContent() {
	$var($Object, result, nullptr);
	connect();
	if (this->entryName == nullptr) {
		$assign(result, this->jarFile);
	} else {
		$assign(result, $JarURLConnection::getContent());
	}
	return $of(result);
}

$String* JarURLConnection::getContentType() {
	if (this->contentType == nullptr) {
		if (this->entryName == nullptr) {
			$set(this, contentType, "x-java/jar"_s);
		} else {
			try {
				connect();
				$var($InputStream, in, $nc(this->jarFile)->getInputStream(this->jarEntry));
				$set(this, contentType, guessContentTypeFromStream($$new($BufferedInputStream, in)));
				$nc(in)->close();
			} catch ($IOException&) {
				$catch();
			}
		}
		if (this->contentType == nullptr) {
			$set(this, contentType, guessContentTypeFromName(this->entryName));
		}
		if (this->contentType == nullptr) {
			$set(this, contentType, "content/unknown"_s);
		}
	}
	return this->contentType;
}

$String* JarURLConnection::getHeaderField($String* name) {
	return $nc(this->jarFileURLConnection)->getHeaderField(name);
}

void JarURLConnection::setRequestProperty($String* key, $String* value) {
	$nc(this->jarFileURLConnection)->setRequestProperty(key, value);
}

$String* JarURLConnection::getRequestProperty($String* key) {
	return $nc(this->jarFileURLConnection)->getRequestProperty(key);
}

void JarURLConnection::addRequestProperty($String* key, $String* value) {
	$nc(this->jarFileURLConnection)->addRequestProperty(key, value);
}

$Map* JarURLConnection::getRequestProperties() {
	return $nc(this->jarFileURLConnection)->getRequestProperties();
}

void JarURLConnection::setAllowUserInteraction(bool allowuserinteraction) {
	$nc(this->jarFileURLConnection)->setAllowUserInteraction(allowuserinteraction);
}

bool JarURLConnection::getAllowUserInteraction() {
	return $nc(this->jarFileURLConnection)->getAllowUserInteraction();
}

void JarURLConnection::setUseCaches(bool usecaches) {
	$nc(this->jarFileURLConnection)->setUseCaches(usecaches);
}

bool JarURLConnection::getUseCaches() {
	return $nc(this->jarFileURLConnection)->getUseCaches();
}

void JarURLConnection::setIfModifiedSince(int64_t ifmodifiedsince) {
	$nc(this->jarFileURLConnection)->setIfModifiedSince(ifmodifiedsince);
}

void JarURLConnection::setDefaultUseCaches(bool defaultusecaches) {
	$nc(this->jarFileURLConnection)->setDefaultUseCaches(defaultusecaches);
}

bool JarURLConnection::getDefaultUseCaches() {
	return $nc(this->jarFileURLConnection)->getDefaultUseCaches();
}

void clinit$JarURLConnection($Class* class$) {
	$assignStatic(JarURLConnection::factory, $JarFileFactory::getInstance());
}

JarURLConnection::JarURLConnection() {
}

$Class* JarURLConnection::load$($String* name, bool initialize) {
	$loadClass(JarURLConnection, name, initialize, &_JarURLConnection_ClassInfo_, clinit$JarURLConnection, allocate$JarURLConnection);
	return class$;
}

$Class* JarURLConnection::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun