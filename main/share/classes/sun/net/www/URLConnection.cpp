#include <sun/net/www/URLConnection.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/net/www/MessageHeader.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $MessageHeader = ::sun::net::www::MessageHeader;

namespace sun {
	namespace net {
		namespace www {

$FieldInfo _URLConnection_FieldInfo_[] = {
	{"contentType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URLConnection, contentType)},
	{"contentLength", "I", nullptr, $PRIVATE, $field(URLConnection, contentLength)},
	{"properties", "Lsun/net/www/MessageHeader;", nullptr, $PROTECTED, $field(URLConnection, properties)},
	{"headerFields", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", 0, $field(URLConnection, headerFields)},
	{"proxiedHosts", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Void;>;", $PRIVATE | $STATIC, $staticField(URLConnection, proxiedHosts)},
	{}
};

$MethodInfo _URLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(URLConnection::*)($URL*)>(&URLConnection::init$))},
	{"addRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"canCache", "()Z", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"getContentLength", "()I", nullptr, $PUBLIC},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHeaderField", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHeaderField", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHeaderFieldKey", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHeaderFields", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC},
	{"getProperties", "()Lsun/net/www/MessageHeader;", nullptr, $PUBLIC},
	{"getRequestProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC},
	{"getRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isProxiedHost", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)($String*)>(&URLConnection::isProxiedHost))},
	{"setContentLength", "(I)V", nullptr, $PROTECTED},
	{"setContentType", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setProperties", "(Lsun/net/www/MessageHeader;)V", nullptr, $PUBLIC},
	{"setProxiedHost", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($String*)>(&URLConnection::setProxiedHost))},
	{"setRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _URLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.www.URLConnection",
	"java.net.URLConnection",
	nullptr,
	_URLConnection_FieldInfo_,
	_URLConnection_MethodInfo_
};

$Object* allocate$URLConnection($Class* clazz) {
	return $of($alloc(URLConnection));
}

$HashMap* URLConnection::proxiedHosts = nullptr;

void URLConnection::init$($URL* u) {
	$URLConnection::init$(u);
	this->contentLength = -1;
	$set(this, properties, $new($MessageHeader));
}

$MessageHeader* URLConnection::getProperties() {
	return this->properties;
}

void URLConnection::setProperties($MessageHeader* properties) {
	$set(this, properties, properties);
}

void URLConnection::setRequestProperty($String* key, $String* value) {
	if (this->connected) {
		$throwNew($IllegalStateException, "Already connected"_s);
	}
	if (key == nullptr) {
		$throwNew($NullPointerException, "key cannot be null"_s);
	}
	$nc(this->properties)->set(key, value);
}

void URLConnection::addRequestProperty($String* key, $String* value) {
	if (this->connected) {
		$throwNew($IllegalStateException, "Already connected"_s);
	}
	if (key == nullptr) {
		$throwNew($NullPointerException, "key is null"_s);
	}
}

$String* URLConnection::getRequestProperty($String* key) {
	if (this->connected) {
		$throwNew($IllegalStateException, "Already connected"_s);
	}
	return nullptr;
}

$Map* URLConnection::getRequestProperties() {
	if (this->connected) {
		$throwNew($IllegalStateException, "Already connected"_s);
	}
	return $Collections::emptyMap();
}

$String* URLConnection::getHeaderField($String* name) {
	try {
		getInputStream();
	} catch ($Exception& e) {
		return nullptr;
	}
	return this->properties == nullptr ? ($String*)nullptr : $nc(this->properties)->findValue(name);
}

$Map* URLConnection::getHeaderFields() {
	if (this->headerFields == nullptr) {
		try {
			getInputStream();
			if (this->properties == nullptr) {
				$set(this, headerFields, $URLConnection::getHeaderFields());
			} else {
				$set(this, headerFields, $nc(this->properties)->getHeaders());
			}
		} catch ($IOException& e) {
			return $URLConnection::getHeaderFields();
		}
	}
	return this->headerFields;
}

$String* URLConnection::getHeaderFieldKey(int32_t n) {
	try {
		getInputStream();
	} catch ($Exception& e) {
		return nullptr;
	}
	$var($MessageHeader, props, this->properties);
	return props == nullptr ? ($String*)nullptr : $nc(props)->getKey(n);
}

$String* URLConnection::getHeaderField(int32_t n) {
	try {
		getInputStream();
	} catch ($Exception& e) {
		return nullptr;
	}
	$var($MessageHeader, props, this->properties);
	return props == nullptr ? ($String*)nullptr : $nc(props)->getValue(n);
}

$String* URLConnection::getContentType() {
	$useLocalCurrentObjectStackCache();
	if (this->contentType == nullptr) {
		$set(this, contentType, getHeaderField("content-type"_s));
	}
	if (this->contentType == nullptr) {
		$var($String, ct, nullptr);
		try {
			$assign(ct, guessContentTypeFromStream($(getInputStream())));
		} catch ($IOException& e) {
		}
		$var($String, ce, $nc(this->properties)->findValue("content-encoding"_s));
		if (ct == nullptr) {
			$assign(ct, $nc(this->properties)->findValue("content-type"_s));
			if (ct == nullptr) {
				if ($nc($($nc(this->url)->getFile()))->endsWith("/"_s)) {
					$assign(ct, "text/html"_s);
				} else {
					$assign(ct, guessContentTypeFromName($($nc(this->url)->getFile())));
				}
			}
		}
		bool var$0 = ct == nullptr;
		if (!var$0) {
			bool var$1 = ce != nullptr;
			if (var$1) {
				bool var$3 = ce->equalsIgnoreCase("7bit"_s);
				bool var$2 = var$3 || $nc(ce)->equalsIgnoreCase("8bit"_s);
				var$1 = !(var$2 || ce->equalsIgnoreCase("binary"_s));
			}
			var$0 = var$1;
		}
		if (var$0) {
			$assign(ct, "content/unknown"_s);
		}
		setContentType(ct);
	}
	return this->contentType;
}

void URLConnection::setContentType($String* type) {
	$set(this, contentType, type);
	$nc(this->properties)->set("content-type"_s, type);
}

int32_t URLConnection::getContentLength() {
	try {
		getInputStream();
	} catch ($Exception& e) {
		return -1;
	}
	int32_t l = this->contentLength;
	if (l < 0) {
		try {
			l = $Integer::parseInt($($nc(this->properties)->findValue("content-length"_s)));
			setContentLength(l);
		} catch ($Exception& e) {
		}
	}
	return l;
}

void URLConnection::setContentLength(int32_t length) {
	this->contentLength = length;
	$nc(this->properties)->set("content-length"_s, $($String::valueOf(length)));
}

bool URLConnection::canCache() {
	return $nc($($nc(this->url)->getFile()))->indexOf((int32_t)u'?') < 0;
}

void URLConnection::close() {
	$set(this, url, nullptr);
}

void URLConnection::setProxiedHost($String* host) {
	$load(URLConnection);
	$synchronized(class$) {
		$init(URLConnection);
		$nc(URLConnection::proxiedHosts)->put($($nc(host)->toLowerCase()), nullptr);
	}
}

bool URLConnection::isProxiedHost($String* host) {
	$load(URLConnection);
	$synchronized(class$) {
		$init(URLConnection);
		return $nc(URLConnection::proxiedHosts)->containsKey($($nc(host)->toLowerCase()));
	}
}

void clinit$URLConnection($Class* class$) {
	$assignStatic(URLConnection::proxiedHosts, $new($HashMap));
}

URLConnection::URLConnection() {
}

$Class* URLConnection::load$($String* name, bool initialize) {
	$loadClass(URLConnection, name, initialize, &_URLConnection_ClassInfo_, clinit$URLConnection, allocate$URLConnection);
	return class$;
}

$Class* URLConnection::class$ = nullptr;

		} // www
	} // net
} // sun