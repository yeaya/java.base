#include <java/net/URLConnection.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ContentHandler.h>
#include <java/net/ContentHandlerFactory.h>
#include <java/net/FileNameMap.h>
#include <java/net/URL.h>
#include <java/net/URLConnection$1.h>
#include <java/net/URLConnection$2.h>
#include <java/net/UnknownContentHandler.h>
#include <java/net/UnknownServiceException.h>
#include <java/security/AccessController.h>
#include <java/security/AllPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/StringTokenizer.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/net/www/MessageHeader.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef INSTANCE
#undef MAX_VALUE
#undef ALL_PERMISSION
#undef US

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ContentHandler = ::java::net::ContentHandler;
using $ContentHandlerFactory = ::java::net::ContentHandlerFactory;
using $FileNameMap = ::java::net::FileNameMap;
using $URL = ::java::net::URL;
using $URLConnection$1 = ::java::net::URLConnection$1;
using $URLConnection$2 = ::java::net::URLConnection$2;
using $UnknownContentHandler = ::java::net::UnknownContentHandler;
using $UnknownServiceException = ::java::net::UnknownServiceException;
using $AccessController = ::java::security::AccessController;
using $AllPermission = ::java::security::AllPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $StringTokenizer = ::java::util::StringTokenizer;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $MessageHeader = ::sun::net::www::MessageHeader;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace net {

$CompoundAttribute _URLConnection_MethodAnnotations_getDefaultRequestProperty17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _URLConnection_MethodAnnotations_setDefaultRequestProperty50[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _URLConnection_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(URLConnection, $assertionsDisabled)},
	{"url", "Ljava/net/URL;", nullptr, $PROTECTED, $field(URLConnection, url)},
	{"doInput", "Z", nullptr, $PROTECTED, $field(URLConnection, doInput)},
	{"doOutput", "Z", nullptr, $PROTECTED, $field(URLConnection, doOutput)},
	{"defaultAllowUserInteraction", "Z", nullptr, $PRIVATE | $STATIC, $staticField(URLConnection, defaultAllowUserInteraction)},
	{"allowUserInteraction", "Z", nullptr, $PROTECTED, $field(URLConnection, allowUserInteraction)},
	{"defaultUseCaches", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(URLConnection, defaultUseCaches)},
	{"useCaches", "Z", nullptr, $PROTECTED, $field(URLConnection, useCaches)},
	{"defaultCaching", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(URLConnection, defaultCaching)},
	{"ifModifiedSince", "J", nullptr, $PROTECTED, $field(URLConnection, ifModifiedSince)},
	{"connected", "Z", nullptr, $PROTECTED, $field(URLConnection, connected)},
	{"connectTimeout", "I", nullptr, $PRIVATE, $field(URLConnection, connectTimeout)},
	{"readTimeout", "I", nullptr, $PRIVATE, $field(URLConnection, readTimeout)},
	{"requests", "Lsun/net/www/MessageHeader;", nullptr, $PRIVATE, $field(URLConnection, requests)},
	{"fileNameMap", "Ljava/net/FileNameMap;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(URLConnection, fileNameMap)},
	{"factory", "Ljava/net/ContentHandlerFactory;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(URLConnection, factory)},
	{"handlers", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/net/ContentHandler;>;", $PRIVATE | $STATIC | $FINAL, $staticField(URLConnection, handlers)},
	{"contentClassPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URLConnection, contentClassPrefix)},
	{"contentPathProp", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URLConnection, contentPathProp)},
	{}
};

$MethodInfo _URLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PROTECTED, $method(static_cast<void(URLConnection::*)($URL*)>(&URLConnection::init$))},
	{"addRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkConnected", "()V", nullptr, $PRIVATE, $method(static_cast<void(URLConnection::*)()>(&URLConnection::checkConnected))},
	{"checkfpx", "(Ljava/io/InputStream;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($InputStream*)>(&URLConnection::checkfpx)), "java.io.IOException"},
	{"connect", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getAllowUserInteraction", "()Z", nullptr, $PUBLIC},
	{"getConnectTimeout", "()I", nullptr, $PUBLIC},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContent", "([Ljava/lang/Class;)Ljava/lang/Object;", "([Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getContentEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getContentHandler", "()Ljava/net/ContentHandler;", nullptr, $PRIVATE, $method(static_cast<$ContentHandler*(URLConnection::*)()>(&URLConnection::getContentHandler)), "java.net.UnknownServiceException"},
	{"getContentHandlerPkgPrefixes", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(URLConnection::*)()>(&URLConnection::getContentHandlerPkgPrefixes))},
	{"getContentLength", "()I", nullptr, $PUBLIC},
	{"getContentLengthLong", "()J", nullptr, $PUBLIC},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDate", "()J", nullptr, $PUBLIC},
	{"getDefaultAllowUserInteraction", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&URLConnection::getDefaultAllowUserInteraction))},
	{"getDefaultRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$String*(*)($String*)>(&URLConnection::getDefaultRequestProperty)), nullptr, nullptr, _URLConnection_MethodAnnotations_getDefaultRequestProperty17},
	{"getDefaultUseCaches", "()Z", nullptr, $PUBLIC},
	{"getDefaultUseCaches", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&URLConnection::getDefaultUseCaches))},
	{"getDoInput", "()Z", nullptr, $PUBLIC},
	{"getDoOutput", "()Z", nullptr, $PUBLIC},
	{"getExpiration", "()J", nullptr, $PUBLIC},
	{"getFileNameMap", "()Ljava/net/FileNameMap;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FileNameMap*(*)()>(&URLConnection::getFileNameMap))},
	{"getHeaderField", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHeaderField", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHeaderFieldDate", "(Ljava/lang/String;J)J", nullptr, $PUBLIC},
	{"getHeaderFieldInt", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"getHeaderFieldKey", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHeaderFieldLong", "(Ljava/lang/String;J)J", nullptr, $PUBLIC},
	{"getHeaderFields", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC},
	{"getIfModifiedSince", "()J", nullptr, $PUBLIC},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLastModified", "()J", nullptr, $PUBLIC},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPermission", "()Ljava/security/Permission;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getReadTimeout", "()I", nullptr, $PUBLIC},
	{"getRequestProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC},
	{"getRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getUseCaches", "()Z", nullptr, $PUBLIC},
	{"guessContentTypeFromName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&URLConnection::guessContentTypeFromName))},
	{"guessContentTypeFromStream", "(Ljava/io/InputStream;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($InputStream*)>(&URLConnection::guessContentTypeFromStream)), "java.io.IOException"},
	{"lookupContentHandlerClassFor", "(Ljava/lang/String;)Ljava/net/ContentHandler;", nullptr, $PRIVATE, $method(static_cast<$ContentHandler*(URLConnection::*)($String*)>(&URLConnection::lookupContentHandlerClassFor))},
	{"lookupContentHandlerViaProvider", "(Ljava/lang/String;)Ljava/net/ContentHandler;", nullptr, $PRIVATE, $method(static_cast<$ContentHandler*(URLConnection::*)($String*)>(&URLConnection::lookupContentHandlerViaProvider))},
	{"readBytes", "([IILjava/io/InputStream;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,$InputStream*)>(&URLConnection::readBytes)), "java.io.IOException"},
	{"setAllowUserInteraction", "(Z)V", nullptr, $PUBLIC},
	{"setConnectTimeout", "(I)V", nullptr, $PUBLIC},
	{"setContentHandlerFactory", "(Ljava/net/ContentHandlerFactory;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($ContentHandlerFactory*)>(&URLConnection::setContentHandlerFactory))},
	{"setDefaultAllowUserInteraction", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&URLConnection::setDefaultAllowUserInteraction))},
	{"setDefaultRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<void(*)($String*,$String*)>(&URLConnection::setDefaultRequestProperty)), nullptr, nullptr, _URLConnection_MethodAnnotations_setDefaultRequestProperty50},
	{"setDefaultUseCaches", "(Z)V", nullptr, $PUBLIC},
	{"setDefaultUseCaches", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,bool)>(&URLConnection::setDefaultUseCaches))},
	{"setDoInput", "(Z)V", nullptr, $PUBLIC},
	{"setDoOutput", "(Z)V", nullptr, $PUBLIC},
	{"setFileNameMap", "(Ljava/net/FileNameMap;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($FileNameMap*)>(&URLConnection::setFileNameMap))},
	{"setIfModifiedSince", "(J)V", nullptr, $PUBLIC},
	{"setReadTimeout", "(I)V", nullptr, $PUBLIC},
	{"setRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setUseCaches", "(Z)V", nullptr, $PUBLIC},
	{"skipForward", "(Ljava/io/InputStream;J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($InputStream*,int64_t)>(&URLConnection::skipForward)), "java.io.IOException"},
	{"stripOffParameters", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(URLConnection::*)($String*)>(&URLConnection::stripOffParameters))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"typeToPackageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(URLConnection::*)($String*)>(&URLConnection::typeToPackageName))},
	{}
};

$InnerClassInfo _URLConnection_InnerClassesInfo_[] = {
	{"java.net.URLConnection$2", nullptr, nullptr, 0},
	{"java.net.URLConnection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.URLConnection",
	"java.lang.Object",
	nullptr,
	_URLConnection_FieldInfo_,
	_URLConnection_MethodInfo_,
	nullptr,
	nullptr,
	_URLConnection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.URLConnection$2,java.net.URLConnection$1"
};

$Object* allocate$URLConnection($Class* clazz) {
	return $of($alloc(URLConnection));
}

bool URLConnection::$assertionsDisabled = false;
bool URLConnection::defaultAllowUserInteraction = false;
$volatile(bool) URLConnection::defaultUseCaches = false;
$ConcurrentHashMap* URLConnection::defaultCaching = nullptr;

$volatile($FileNameMap*) URLConnection::fileNameMap = nullptr;

$volatile($ContentHandlerFactory*) URLConnection::factory = nullptr;
$Hashtable* URLConnection::handlers = nullptr;
$String* URLConnection::contentClassPrefix = nullptr;
$String* URLConnection::contentPathProp = nullptr;

$FileNameMap* URLConnection::getFileNameMap() {
	$init(URLConnection);
	$var($FileNameMap, map, URLConnection::fileNameMap);
	if (map == nullptr) {
		$assignStatic(URLConnection::fileNameMap, ($assign(map, $new($URLConnection$1))));
	}
	return map;
}

void URLConnection::setFileNameMap($FileNameMap* map) {
	$init(URLConnection);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkSetFactory();
	}
	$assignStatic(URLConnection::fileNameMap, map);
}

void URLConnection::setConnectTimeout(int32_t timeout) {
	if (timeout < 0) {
		$throwNew($IllegalArgumentException, "timeout can not be negative"_s);
	}
	this->connectTimeout = timeout;
}

int32_t URLConnection::getConnectTimeout() {
	return this->connectTimeout;
}

void URLConnection::setReadTimeout(int32_t timeout) {
	if (timeout < 0) {
		$throwNew($IllegalArgumentException, "timeout can not be negative"_s);
	}
	this->readTimeout = timeout;
}

int32_t URLConnection::getReadTimeout() {
	return this->readTimeout;
}

void URLConnection::init$($URL* url) {
	this->doInput = true;
	this->doOutput = false;
	this->allowUserInteraction = URLConnection::defaultAllowUserInteraction;
	this->ifModifiedSince = 0;
	this->connected = false;
	$set(this, url, url);
	if (url == nullptr) {
		this->useCaches = URLConnection::defaultUseCaches;
	} else {
		this->useCaches = getDefaultUseCaches($($nc(url)->getProtocol()));
	}
}

$URL* URLConnection::getURL() {
	return this->url;
}

int32_t URLConnection::getContentLength() {
	int64_t l = getContentLengthLong();
	if (l > $Integer::MAX_VALUE) {
		return -1;
	}
	return (int32_t)l;
}

int64_t URLConnection::getContentLengthLong() {
	return getHeaderFieldLong("content-length"_s, -1);
}

$String* URLConnection::getContentType() {
	return getHeaderField("content-type"_s);
}

$String* URLConnection::getContentEncoding() {
	return getHeaderField("content-encoding"_s);
}

int64_t URLConnection::getExpiration() {
	return getHeaderFieldDate("expires"_s, 0);
}

int64_t URLConnection::getDate() {
	return getHeaderFieldDate("date"_s, 0);
}

int64_t URLConnection::getLastModified() {
	return getHeaderFieldDate("last-modified"_s, 0);
}

$String* URLConnection::getHeaderField($String* name) {
	return nullptr;
}

$Map* URLConnection::getHeaderFields() {
	return $Collections::emptyMap();
}

int32_t URLConnection::getHeaderFieldInt($String* name, int32_t Default) {
	$var($String, value, getHeaderField(name));
	try {
		return $Integer::parseInt(value);
	} catch ($Exception&) {
		$catch();
	}
	return Default;
}

int64_t URLConnection::getHeaderFieldLong($String* name, int64_t Default) {
	$var($String, value, getHeaderField(name));
	try {
		return $Long::parseLong(value);
	} catch ($Exception&) {
		$catch();
	}
	return Default;
}

int64_t URLConnection::getHeaderFieldDate($String* name, int64_t Default) {
	$var($String, value, getHeaderField(name));
	try {
		return $Date::parse(value);
	} catch ($Exception&) {
		$catch();
	}
	return Default;
}

$String* URLConnection::getHeaderFieldKey(int32_t n) {
	return nullptr;
}

$String* URLConnection::getHeaderField(int32_t n) {
	return nullptr;
}

$Object* URLConnection::getContent() {
	getInputStream();
	return $of($nc($(getContentHandler()))->getContent(this));
}

$Object* URLConnection::getContent($ClassArray* classes) {
	getInputStream();
	return $of($nc($(getContentHandler()))->getContent(this, classes));
}

$Permission* URLConnection::getPermission() {
	$init($SecurityConstants);
	return $SecurityConstants::ALL_PERMISSION;
}

$InputStream* URLConnection::getInputStream() {
	$throwNew($UnknownServiceException, "protocol doesn\'t support input"_s);
	$shouldNotReachHere();
}

$OutputStream* URLConnection::getOutputStream() {
	$throwNew($UnknownServiceException, "protocol doesn\'t support output"_s);
	$shouldNotReachHere();
}

$String* URLConnection::toString() {
	return $str({$($of(this)->getClass()->getName()), ":"_s, this->url});
}

void URLConnection::setDoInput(bool doinput) {
	checkConnected();
	this->doInput = doinput;
}

bool URLConnection::getDoInput() {
	return this->doInput;
}

void URLConnection::setDoOutput(bool dooutput) {
	checkConnected();
	this->doOutput = dooutput;
}

bool URLConnection::getDoOutput() {
	return this->doOutput;
}

void URLConnection::setAllowUserInteraction(bool allowuserinteraction) {
	checkConnected();
	this->allowUserInteraction = allowuserinteraction;
}

bool URLConnection::getAllowUserInteraction() {
	return this->allowUserInteraction;
}

void URLConnection::setDefaultAllowUserInteraction(bool defaultallowuserinteraction) {
	$init(URLConnection);
	URLConnection::defaultAllowUserInteraction = defaultallowuserinteraction;
}

bool URLConnection::getDefaultAllowUserInteraction() {
	$init(URLConnection);
	return URLConnection::defaultAllowUserInteraction;
}

void URLConnection::setUseCaches(bool usecaches) {
	checkConnected();
	this->useCaches = usecaches;
}

bool URLConnection::getUseCaches() {
	return this->useCaches;
}

void URLConnection::setIfModifiedSince(int64_t ifmodifiedsince) {
	checkConnected();
	this->ifModifiedSince = ifmodifiedsince;
}

int64_t URLConnection::getIfModifiedSince() {
	return this->ifModifiedSince;
}

bool URLConnection::getDefaultUseCaches() {
	return URLConnection::defaultUseCaches;
}

void URLConnection::setDefaultUseCaches(bool defaultusecaches) {
	URLConnection::defaultUseCaches = defaultusecaches;
}

void URLConnection::setDefaultUseCaches($String* protocol$renamed, bool defaultVal) {
	$init(URLConnection);
	$var($String, protocol, protocol$renamed);
	$init($Locale);
	$assign(protocol, $nc(protocol)->toLowerCase($Locale::US));
	$nc(URLConnection::defaultCaching)->put(protocol, $($Boolean::valueOf(defaultVal)));
}

bool URLConnection::getDefaultUseCaches($String* protocol) {
	$init(URLConnection);
	$init($Locale);
	$var($Boolean, protoDefault, $cast($Boolean, $nc(URLConnection::defaultCaching)->get($($nc(protocol)->toLowerCase($Locale::US)))));
	if (protoDefault != nullptr) {
		return protoDefault->booleanValue();
	} else {
		return URLConnection::defaultUseCaches;
	}
}

void URLConnection::setRequestProperty($String* key, $String* value) {
	checkConnected();
	if (key == nullptr) {
		$throwNew($NullPointerException, "key is null"_s);
	}
	if (this->requests == nullptr) {
		$set(this, requests, $new($MessageHeader));
	}
	$nc(this->requests)->set(key, value);
}

void URLConnection::addRequestProperty($String* key, $String* value) {
	checkConnected();
	if (key == nullptr) {
		$throwNew($NullPointerException, "key is null"_s);
	}
	if (this->requests == nullptr) {
		$set(this, requests, $new($MessageHeader));
	}
	$nc(this->requests)->add(key, value);
}

$String* URLConnection::getRequestProperty($String* key) {
	checkConnected();
	if (this->requests == nullptr) {
		return nullptr;
	}
	return $nc(this->requests)->findValue(key);
}

$Map* URLConnection::getRequestProperties() {
	checkConnected();
	if (this->requests == nullptr) {
		return $Collections::emptyMap();
	}
	return $nc(this->requests)->getHeaders(nullptr);
}

void URLConnection::setDefaultRequestProperty($String* key, $String* value) {
	$init(URLConnection);
}

$String* URLConnection::getDefaultRequestProperty($String* key) {
	$init(URLConnection);
	return nullptr;
}

void URLConnection::setContentHandlerFactory($ContentHandlerFactory* fac) {
	$load(URLConnection);
	$synchronized(class$) {
		$init(URLConnection);
		if (URLConnection::factory != nullptr) {
			$throwNew($Error, "factory already defined"_s);
		}
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkSetFactory();
		}
		$assignStatic(URLConnection::factory, fac);
	}
}

$ContentHandler* URLConnection::getContentHandler() {
	$var($String, contentType, stripOffParameters($(getContentType())));
	if (contentType == nullptr) {
		$throwNew($UnknownServiceException, "no content-type"_s);
	}
	$var($ContentHandler, handler, $cast($ContentHandler, $nc(URLConnection::handlers)->get(contentType)));
	if (handler != nullptr) {
		return handler;
	}
	if (URLConnection::factory != nullptr) {
		$assign(handler, $nc(URLConnection::factory)->createContentHandler(contentType));
		if (handler != nullptr) {
			return handler;
		}
	}
	$assign(handler, lookupContentHandlerViaProvider(contentType));
	if (handler != nullptr) {
		$var($ContentHandler, h, $cast($ContentHandler, $nc(URLConnection::handlers)->putIfAbsent(contentType, handler)));
		return $cast($ContentHandler, $Objects::requireNonNullElse(h, handler));
	}
	try {
		$assign(handler, lookupContentHandlerClassFor(contentType));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		e->printStackTrace();
		$init($UnknownContentHandler);
		$assign(handler, $UnknownContentHandler::INSTANCE);
	}
	if (!URLConnection::$assertionsDisabled && !(handler != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($ContentHandler, h, $cast($ContentHandler, $nc(URLConnection::handlers)->putIfAbsent(contentType, handler)));
	return $cast($ContentHandler, $Objects::requireNonNullElse(h, handler));
}

$String* URLConnection::stripOffParameters($String* contentType) {
	if (contentType == nullptr) {
		return nullptr;
	}
	int32_t index = $nc(contentType)->indexOf((int32_t)u';');
	if (index > 0) {
		return contentType->substring(0, index);
	} else {
		return contentType;
	}
}

$ContentHandler* URLConnection::lookupContentHandlerClassFor($String* contentType) {
	$beforeCallerSensitive();
	$var($String, contentHandlerClassName, typeToPackageName(contentType));
	$var($String, contentHandlerPkgPrefixes, getContentHandlerPkgPrefixes());
	$var($StringTokenizer, packagePrefixIter, $new($StringTokenizer, contentHandlerPkgPrefixes, "|"_s));
	while (packagePrefixIter->hasMoreTokens()) {
		$var($String, packagePrefix, $nc($(packagePrefixIter->nextToken()))->trim());
		try {
			$var($String, clsName, $str({packagePrefix, "."_s, contentHandlerClassName}));
			$Class* cls = nullptr;
			try {
				cls = $Class::forName(clsName);
			} catch ($ClassNotFoundException&) {
				$var($ClassNotFoundException, e, $catch());
				$var($ClassLoader, cl, $ClassLoader::getSystemClassLoader());
				if (cl != nullptr) {
					cls = cl->loadClass(clsName);
				}
			}
			if (cls != nullptr) {
				$var($Object, tmp, cls->newInstance());
				return $cast($ContentHandler, tmp);
			}
		} catch ($Exception&) {
			$catch();
		}
	}
	$init($UnknownContentHandler);
	return $UnknownContentHandler::INSTANCE;
}

$ContentHandler* URLConnection::lookupContentHandlerViaProvider($String* contentType) {
	$beforeCallerSensitive();
	return $cast($ContentHandler, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($URLConnection$2, this, contentType))));
}

$String* URLConnection::typeToPackageName($String* contentType$renamed) {
	$var($String, contentType, contentType$renamed);
	$assign(contentType, $nc(contentType)->toLowerCase());
	int32_t len = contentType->length();
	$var($chars, nm, $new($chars, len));
	contentType->getChars(0, len, nm, 0);
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = nm->get(i);
		if (c == u'/') {
			nm->set(i, u'.');
		} else if (!(u'A' <= c && c <= u'Z' || u'a' <= c && c <= u'z' || u'0' <= c && c <= u'9')) {
			$nc(nm)->set(i, u'_');
		}
	}
	return $new($String, nm);
}

$String* URLConnection::getContentHandlerPkgPrefixes() {
	$var($String, packagePrefixList, $GetPropertyAction::privilegedGetProperty(URLConnection::contentPathProp, ""_s));
	if (packagePrefixList != ""_s) {
		$plusAssign(packagePrefixList, "|"_s);
	}
	return $str({packagePrefixList, URLConnection::contentClassPrefix});
}

$String* URLConnection::guessContentTypeFromName($String* fname) {
	$init(URLConnection);
	return $nc($(getFileNameMap()))->getContentTypeFor(fname);
}

$String* URLConnection::guessContentTypeFromStream($InputStream* is) {
	$init(URLConnection);
	if (!$nc(is)->markSupported()) {
		return nullptr;
	}
	$nc(is)->mark(16);
	int32_t c1 = is->read();
	int32_t c2 = is->read();
	int32_t c3 = is->read();
	int32_t c4 = is->read();
	int32_t c5 = is->read();
	int32_t c6 = is->read();
	int32_t c7 = is->read();
	int32_t c8 = is->read();
	int32_t c9 = is->read();
	int32_t c10 = is->read();
	int32_t c11 = is->read();
	int32_t c12 = is->read();
	int32_t c13 = is->read();
	int32_t c14 = is->read();
	int32_t c15 = is->read();
	int32_t c16 = is->read();
	is->reset();
	if (c1 == 202 && c2 == 254 && c3 == 186 && c4 == 190) {
		return "application/java-vm"_s;
	}
	if (c1 == 172 && c2 == 237) {
		return "application/x-java-serialized-object"_s;
	}
	if (c1 == u'<') {
		if (c2 == u'!' || (c2 == u'h' && (c3 == u't' && c4 == u'm' && c5 == u'l' || c3 == u'e' && c4 == u'a' && c5 == u'd') || (c2 == u'b' && c3 == u'o' && c4 == u'd' && c5 == u'y')) || (c2 == u'H' && (c3 == u'T' && c4 == u'M' && c5 == u'L' || c3 == u'E' && c4 == u'A' && c5 == u'D') || (c2 == u'B' && c3 == u'O' && c4 == u'D' && c5 == u'Y'))) {
			return "text/html"_s;
		}
		if (c2 == u'?' && c3 == u'x' && c4 == u'm' && c5 == u'l' && c6 == u' ') {
			return "application/xml"_s;
		}
	}
	if (c1 == 239 && c2 == 187 && c3 == 191) {
		if (c4 == u'<' && c5 == u'?' && c6 == u'x') {
			return "application/xml"_s;
		}
	}
	if (c1 == 254 && c2 == 255) {
		if (c3 == 0 && c4 == u'<' && c5 == 0 && c6 == u'?' && c7 == 0 && c8 == u'x') {
			return "application/xml"_s;
		}
	}
	if (c1 == 255 && c2 == 254) {
		if (c3 == u'<' && c4 == 0 && c5 == u'?' && c6 == 0 && c7 == u'x' && c8 == 0) {
			return "application/xml"_s;
		}
	}
	if (c1 == 0 && c2 == 0 && c3 == 254 && c4 == 255) {
		if (c5 == 0 && c6 == 0 && c7 == 0 && c8 == u'<' && c9 == 0 && c10 == 0 && c11 == 0 && c12 == u'?' && c13 == 0 && c14 == 0 && c15 == 0 && c16 == u'x') {
			return "application/xml"_s;
		}
	}
	if (c1 == 255 && c2 == 254 && c3 == 0 && c4 == 0) {
		if (c5 == u'<' && c6 == 0 && c7 == 0 && c8 == 0 && c9 == u'?' && c10 == 0 && c11 == 0 && c12 == 0 && c13 == u'x' && c14 == 0 && c15 == 0 && c16 == 0) {
			return "application/xml"_s;
		}
	}
	if (c1 == u'G' && c2 == u'I' && c3 == u'F' && c4 == u'8') {
		return "image/gif"_s;
	}
	if (c1 == u'#' && c2 == u'd' && c3 == u'e' && c4 == u'f') {
		return "image/x-bitmap"_s;
	}
	if (c1 == u'!' && c2 == u' ' && c3 == u'X' && c4 == u'P' && c5 == u'M' && c6 == u'2') {
		return "image/x-pixmap"_s;
	}
	if (c1 == 137 && c2 == 80 && c3 == 78 && c4 == 71 && c5 == 13 && c6 == 10 && c7 == 26 && c8 == 10) {
		return "image/png"_s;
	}
	if (c1 == 255 && c2 == 216 && c3 == 255) {
		if (c4 == 224 || c4 == 238) {
			return "image/jpeg"_s;
		}
		if ((c4 == 225) && (c7 == u'E' && c8 == u'x' && c9 == u'i' && c10 == u'f' && c11 == 0)) {
			return "image/jpeg"_s;
		}
	}
	if ((c1 == 73 && c2 == 73 && c3 == 42 && c4 == 0) || (c1 == 77 && c2 == 77 && c3 == 0 && c4 == 42)) {
		return "image/tiff"_s;
	}
	if (c1 == 208 && c2 == 207 && c3 == 17 && c4 == 224 && c5 == 161 && c6 == 177 && c7 == 26 && c8 == 225) {
		if (checkfpx(is)) {
			return "image/vnd.fpx"_s;
		}
	}
	if (c1 == 46 && c2 == 115 && c3 == 110 && c4 == 100) {
		return "audio/basic"_s;
	}
	if (c1 == 100 && c2 == 110 && c3 == 115 && c4 == 46) {
		return "audio/basic"_s;
	}
	if (c1 == u'R' && c2 == u'I' && c3 == u'F' && c4 == u'F') {
		return "audio/x-wav"_s;
	}
	return nullptr;
}

bool URLConnection::checkfpx($InputStream* is) {
	$init(URLConnection);
	$nc(is)->mark(256);
	int64_t toSkip = (int64_t)28;
	int64_t posn = 0;
	if ((posn = skipForward(is, toSkip)) < toSkip) {
		is->reset();
		return false;
	}
	$var($ints, c, $new($ints, 16));
	if (readBytes(c, 2, is) < 0) {
		is->reset();
		return false;
	}
	int32_t byteOrder = c->get(0);
	posn += 2;
	int32_t uSectorShift = 0;
	if (readBytes(c, 2, is) < 0) {
		is->reset();
		return false;
	}
	if (byteOrder == 254) {
		uSectorShift = c->get(0);
		uSectorShift += c->get(1) << 8;
	} else {
		uSectorShift = c->get(0) << 8;
		uSectorShift += c->get(1);
	}
	posn += 2;
	toSkip = (int64_t)48 - posn;
	int64_t skipped = 0;
	if ((skipped = skipForward(is, toSkip)) < toSkip) {
		is->reset();
		return false;
	}
	posn += skipped;
	if (readBytes(c, 4, is) < 0) {
		is->reset();
		return false;
	}
	int32_t sectDirStart = 0;
	if (byteOrder == 254) {
		sectDirStart = c->get(0);
		sectDirStart += c->get(1) << 8;
		sectDirStart += c->get(2) << 16;
		sectDirStart += c->get(3) << 24;
	} else {
		sectDirStart = c->get(0) << 24;
		sectDirStart += c->get(1) << 16;
		sectDirStart += c->get(2) << 8;
		sectDirStart += c->get(3);
	}
	posn += 4;
	is->reset();
	toSkip = (int64_t)512 + (int64_t)($sl(1, uSectorShift)) * sectDirStart + (int64_t)80;
	if (toSkip < 0) {
		return false;
	}
	is->mark((int32_t)toSkip + 48);
	if ((skipForward(is, toSkip)) < toSkip) {
		is->reset();
		return false;
	}
	if (readBytes(c, 16, is) < 0) {
		is->reset();
		return false;
	}
	if (byteOrder == 254 && c->get(0) == 0 && c->get(2) == 97 && c->get(3) == 86 && c->get(4) == 84 && c->get(5) == 193 && c->get(6) == 206 && c->get(7) == 17 && c->get(8) == 133 && c->get(9) == 83 && c->get(10) == 0 && c->get(11) == 170 && c->get(12) == 0 && c->get(13) == 161 && c->get(14) == 249 && c->get(15) == 91) {
		is->reset();
		return true;
	} else if ($nc(c)->get(3) == 0 && c->get(1) == 97 && c->get(0) == 86 && c->get(5) == 84 && c->get(4) == 193 && c->get(7) == 206 && c->get(6) == 17 && c->get(8) == 133 && c->get(9) == 83 && c->get(10) == 0 && c->get(11) == 170 && c->get(12) == 0 && c->get(13) == 161 && c->get(14) == 249 && c->get(15) == 91) {
		$nc(is)->reset();
		return true;
	}
	is->reset();
	return false;
}

int32_t URLConnection::readBytes($ints* c, int32_t len, $InputStream* is) {
	$init(URLConnection);
	$var($bytes, buf, $new($bytes, len));
	if ($nc(is)->read(buf, 0, len) < len) {
		return -1;
	}
	for (int32_t i = 0; i < len; ++i) {
		$nc(c)->set(i, (int32_t)(buf->get(i) & (uint32_t)255));
	}
	return 0;
}

int64_t URLConnection::skipForward($InputStream* is, int64_t toSkip) {
	$init(URLConnection);
	int64_t eachSkip = 0;
	int64_t skipped = 0;
	while (skipped != toSkip) {
		eachSkip = $nc(is)->skip(toSkip - skipped);
		if (eachSkip <= 0) {
			if (is->read() == -1) {
				return skipped;
			} else {
				++skipped;
			}
		}
		skipped += eachSkip;
	}
	return skipped;
}

void URLConnection::checkConnected() {
	if (this->connected) {
		$throwNew($IllegalStateException, "Already connected"_s);
	}
}

void clinit$URLConnection($Class* class$) {
	$assignStatic(URLConnection::contentClassPrefix, "sun.net.www.content"_s);
	$assignStatic(URLConnection::contentPathProp, "java.content.handler.pkgs"_s);
	URLConnection::$assertionsDisabled = !URLConnection::class$->desiredAssertionStatus();
	URLConnection::defaultAllowUserInteraction = false;
	URLConnection::defaultUseCaches = true;
	$assignStatic(URLConnection::defaultCaching, $new($ConcurrentHashMap));
	$assignStatic(URLConnection::handlers, $new($Hashtable));
}

URLConnection::URLConnection() {
}

$Class* URLConnection::load$($String* name, bool initialize) {
	$loadClass(URLConnection, name, initialize, &_URLConnection_ClassInfo_, clinit$URLConnection, allocate$URLConnection);
	return class$;
}

$Class* URLConnection::class$ = nullptr;

	} // net
} // java