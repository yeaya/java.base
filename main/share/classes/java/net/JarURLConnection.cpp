#include <java/net/JarURLConnection.h>

#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/cert/Certificate.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/Manifest.h>
#include <sun/net/www/ParseUtil.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Attributes = ::java::util::jar::Attributes;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Manifest = ::java::util::jar::Manifest;
using $ParseUtil = ::sun::net::www::ParseUtil;

namespace java {
	namespace net {

$FieldInfo _JarURLConnection_FieldInfo_[] = {
	{"jarFileURL", "Ljava/net/URL;", nullptr, $PRIVATE, $field(JarURLConnection, jarFileURL)},
	{"entryName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JarURLConnection, entryName)},
	{"jarFileURLConnection", "Ljava/net/URLConnection;", nullptr, $PROTECTED, $field(JarURLConnection, jarFileURLConnection)},
	{}
};

$MethodInfo _JarURLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PROTECTED, $method(static_cast<void(JarURLConnection::*)($URL*)>(&JarURLConnection::init$)), "java.net.MalformedURLException"},
	{"getAttributes", "()Ljava/util/jar/Attributes;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getEntryName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getJarEntry", "()Ljava/util/jar/JarEntry;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJarFile", "()Ljava/util/jar/JarFile;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getJarFileURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getMainAttributes", "()Ljava/util/jar/Attributes;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getManifest", "()Ljava/util/jar/Manifest;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"parseSpecs", "(Ljava/net/URL;)V", nullptr, $PRIVATE, $method(static_cast<void(JarURLConnection::*)($URL*)>(&JarURLConnection::parseSpecs)), "java.net.MalformedURLException"},
	{}
};

$ClassInfo _JarURLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.JarURLConnection",
	"java.net.URLConnection",
	nullptr,
	_JarURLConnection_FieldInfo_,
	_JarURLConnection_MethodInfo_
};

$Object* allocate$JarURLConnection($Class* clazz) {
	return $of($alloc(JarURLConnection));
}

void JarURLConnection::init$($URL* url) {
	$URLConnection::init$(url);
	parseSpecs(url);
}

void JarURLConnection::parseSpecs($URL* url) {
	$useLocalCurrentObjectStackCache();
	$var($String, spec, $nc(url)->getFile());
	int32_t separator = $nc(spec)->indexOf("!/"_s);
	if (separator == -1) {
		$throwNew($MalformedURLException, $$str({"no !/ found in url spec:"_s, spec}));
	}
	$set(this, jarFileURL, $new($URL, $(spec->substring(0, separator++))));
	if ("runtime"_s->equals($(url->getRef()))) {
		$set(this, jarFileURL, $new($URL, this->jarFileURL, "#runtime"_s));
	}
	$set(this, entryName, nullptr);
	if (++separator != spec->length()) {
		$set(this, entryName, spec->substring(separator, spec->length()));
		$set(this, entryName, $ParseUtil::decode(this->entryName));
	}
}

$URL* JarURLConnection::getJarFileURL() {
	return this->jarFileURL;
}

$String* JarURLConnection::getEntryName() {
	return this->entryName;
}

$Manifest* JarURLConnection::getManifest() {
	return $nc($(getJarFile()))->getManifest();
}

$JarEntry* JarURLConnection::getJarEntry() {
	return this->entryName == nullptr ? ($JarEntry*)nullptr : $nc($(getJarFile()))->getJarEntry(this->entryName);
}

$Attributes* JarURLConnection::getAttributes() {
	$var($JarEntry, e, getJarEntry());
	return e != nullptr ? $nc(e)->getAttributes() : ($Attributes*)nullptr;
}

$Attributes* JarURLConnection::getMainAttributes() {
	$var($Manifest, man, getManifest());
	return man != nullptr ? $nc(man)->getMainAttributes() : ($Attributes*)nullptr;
}

$CertificateArray* JarURLConnection::getCertificates() {
	$var($JarEntry, e, getJarEntry());
	return e != nullptr ? $nc(e)->getCertificates() : ($CertificateArray*)nullptr;
}

JarURLConnection::JarURLConnection() {
}

$Class* JarURLConnection::load$($String* name, bool initialize) {
	$loadClass(JarURLConnection, name, initialize, &_JarURLConnection_ClassInfo_, allocate$JarURLConnection);
	return class$;
}

$Class* JarURLConnection::class$ = nullptr;

	} // net
} // java