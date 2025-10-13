#include <java/net/URL.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/MalformedURLException.h>
#include <java/net/NetPermission.h>
#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/net/SocketAddress.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL$1.h>
#include <java/net/URL$2.h>
#include <java/net/URL$3.h>
#include <java/net/URL$DefaultFactory.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <java/net/URLStreamHandlerFactory.h>
#include <java/net/UnknownHostException.h>
#include <java/net/UrlDeserializedState.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <jdk/internal/access/JavaNetURLAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/VM.h>
#include <sun/net/ApplicationProxy.h>
#include <sun/net/util/IPAddressUtil.h>
#include <sun/net/www/protocol/jar/Handler.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef BUILTIN_HANDLERS_PREFIX
#undef DIRECT
#undef NO_PROXY
#undef ROOT
#undef SPECIFY_HANDLER_PERMISSION
#undef TYPE
#undef URL

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $MalformedURLException = ::java::net::MalformedURLException;
using $NetPermission = ::java::net::NetPermission;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL$1 = ::java::net::URL$1;
using $URL$2 = ::java::net::URL$2;
using $URL$3 = ::java::net::URL$3;
using $URL$DefaultFactory = ::java::net::URL$DefaultFactory;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;
using $UnknownHostException = ::java::net::UnknownHostException;
using $UrlDeserializedState = ::java::net::UrlDeserializedState;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $JavaNetURLAccess = ::jdk::internal::access::JavaNetURLAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $VM = ::jdk::internal::misc::VM;
using $ApplicationProxy = ::sun::net::ApplicationProxy;
using $IPAddressUtil = ::sun::net::util::IPAddressUtil;
using $Handler = ::sun::net::www::protocol::jar::Handler;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace net {

$FieldInfo _URL_FieldInfo_[] = {
	{"BUILTIN_HANDLERS_PREFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(URL, BUILTIN_HANDLERS_PREFIX)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(URL, serialVersionUID)},
	{"protocolPathProp", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URL, protocolPathProp)},
	{"protocol", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URL, protocol)},
	{"host", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URL, host)},
	{"port", "I", nullptr, $PRIVATE, $field(URL, port)},
	{"file", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URL, file)},
	{"query", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URL, query)},
	{"authority", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URL, authority)},
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URL, path)},
	{"userInfo", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URL, userInfo)},
	{"ref", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URL, ref)},
	{"hostAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE | $TRANSIENT, $field(URL, hostAddress)},
	{"handler", "Ljava/net/URLStreamHandler;", nullptr, $TRANSIENT, $field(URL, handler)},
	{"hashCode", "I", nullptr, $PRIVATE, $field(URL, hashCode$)},
	{"tempState", "Ljava/net/UrlDeserializedState;", nullptr, $PRIVATE | $TRANSIENT, $field(URL, tempState)},
	{"factory", "Ljava/net/URLStreamHandlerFactory;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(URL, factory)},
	{"defaultFactory", "Ljava/net/URLStreamHandlerFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URL, defaultFactory)},
	{"gate", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(URL, gate)},
	{"handlers", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/net/URLStreamHandler;>;", $STATIC, $staticField(URL, handlers)},
	{"streamHandlerLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URL, streamHandlerLock)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URL, serialPersistentFields)},
	{}
};

$MethodInfo _URL_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URL::*)($String*,$String*,int32_t,$String*)>(&URL::init$)), "java.net.MalformedURLException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URL::*)($String*,$String*,$String*)>(&URL::init$)), "java.net.MalformedURLException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/net/URLStreamHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(URL::*)($String*,$String*,int32_t,$String*,$URLStreamHandler*)>(&URL::init$)), "java.net.MalformedURLException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URL::*)($String*)>(&URL::init$)), "java.net.MalformedURLException"},
	{"<init>", "(Ljava/net/URL;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URL::*)(URL*,$String*)>(&URL::init$)), "java.net.MalformedURLException"},
	{"<init>", "(Ljava/net/URL;Ljava/lang/String;Ljava/net/URLStreamHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(URL::*)(URL*,$String*,$URLStreamHandler*)>(&URL::init$)), "java.net.MalformedURLException"},
	{"checkSpecifyHandler", "(Ljava/lang/SecurityManager;)V", nullptr, $PRIVATE, $method(static_cast<void(URL::*)($SecurityManager*)>(&URL::checkSpecifyHandler))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fabricateNewURL", "()Ljava/net/URL;", nullptr, $PRIVATE, $method(static_cast<URL*(URL::*)()>(&URL::fabricateNewURL)), "java.io.InvalidObjectException"},
	{"fromURI", "(Ljava/net/URI;)Ljava/net/URL;", nullptr, $STATIC, $method(static_cast<URL*(*)($URI*)>(&URL::fromURI)), "java.net.MalformedURLException"},
	{"getAuthority", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URL::*)()>(&URL::getAuthority))},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(URL::*)()>(&URL::getContent)), "java.io.IOException"},
	{"getContent", "([Ljava/lang/Class;)Ljava/lang/Object;", "([Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $FINAL, $method(static_cast<$Object*(URL::*)($ClassArray*)>(&URL::getContent)), "java.io.IOException"},
	{"getDefaultPort", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(URL::*)()>(&URL::getDefaultPort))},
	{"getFile", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URL::*)()>(&URL::getFile))},
	{"getHost", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URL::*)()>(&URL::getHost))},
	{"getHostAddress", "()Ljava/net/InetAddress;", nullptr, $SYNCHRONIZED, $method(static_cast<$InetAddress*(URL::*)()>(&URL::getHostAddress))},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URL::*)()>(&URL::getPath))},
	{"getPort", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(URL::*)()>(&URL::getPort))},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URL::*)()>(&URL::getProtocol))},
	{"getQuery", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URL::*)()>(&URL::getQuery))},
	{"getRef", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URL::*)()>(&URL::getRef))},
	{"getURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $STATIC, $method(static_cast<$URLStreamHandler*(*)($String*)>(&URL::getURLStreamHandler))},
	{"getUserInfo", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URL::*)()>(&URL::getUserInfo))},
	{"hashCode", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isBuiltinStreamHandler", "(Ljava/net/URLStreamHandler;)Z", nullptr, 0, $method(static_cast<bool(URL::*)($URLStreamHandler*)>(&URL::isBuiltinStreamHandler))},
	{"isBuiltinStreamHandler", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(URL::*)($String*)>(&URL::isBuiltinStreamHandler))},
	{"isOverrideable", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&URL::isOverrideable))},
	{"isValidProtocol", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(URL::*)($String*)>(&URL::isValidProtocol))},
	{"lookupViaProperty", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URLStreamHandler*(*)($String*)>(&URL::lookupViaProperty))},
	{"lookupViaProviders", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URLStreamHandler*(*)($String*)>(&URL::lookupViaProviders))},
	{"openConnection", "()Ljava/net/URLConnection;", nullptr, $PUBLIC, $method(static_cast<$URLConnection*(URL::*)()>(&URL::openConnection)), "java.io.IOException"},
	{"openConnection", "(Ljava/net/Proxy;)Ljava/net/URLConnection;", nullptr, $PUBLIC, $method(static_cast<$URLConnection*(URL::*)($Proxy*)>(&URL::openConnection)), "java.io.IOException"},
	{"openStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$InputStream*(URL::*)()>(&URL::openStream)), "java.io.IOException"},
	{"providers", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/net/spi/URLStreamHandlerProvider;>;", $PRIVATE | $STATIC, $method(static_cast<$Iterator*(*)()>(&URL::providers))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(URL::*)($ObjectInputStream*)>(&URL::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(URL::*)()>(&URL::readResolve)), "java.io.ObjectStreamException"},
	{"resetState", "()V", nullptr, $PRIVATE, $method(static_cast<void(URL::*)()>(&URL::resetState))},
	{"sameFile", "(Ljava/net/URL;)Z", nullptr, $PUBLIC, $method(static_cast<bool(URL::*)(URL*)>(&URL::sameFile))},
	{"set", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(URL::*)($String*,$String*,int32_t,$String*,$String*,$String*,$String*,$String*)>(&URL::set))},
	{"setDeserializedFields", "(Ljava/net/URLStreamHandler;)Ljava/net/URL;", nullptr, $PRIVATE, $method(static_cast<URL*(URL::*)($URLStreamHandler*)>(&URL::setDeserializedFields))},
	{"setSerializedHashCode", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(URL::*)(int32_t)>(&URL::setSerializedHashCode))},
	{"setURLStreamHandlerFactory", "(Ljava/net/URLStreamHandlerFactory;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($URLStreamHandlerFactory*)>(&URL::setURLStreamHandlerFactory))},
	{"toExternalForm", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URL::*)()>(&URL::toExternalForm))},
	{"toLowerCase", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&URL::toLowerCase))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toURI", "()Ljava/net/URI;", nullptr, $PUBLIC, $method(static_cast<$URI*(URL::*)()>(&URL::toURI)), "java.net.URISyntaxException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(URL::*)($ObjectOutputStream*)>(&URL::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _URL_InnerClassesInfo_[] = {
	{"java.net.URL$DefaultFactory", "java.net.URL", "DefaultFactory", $PRIVATE | $STATIC},
	{"java.net.URL$3", nullptr, nullptr, 0},
	{"java.net.URL$2", nullptr, nullptr, 0},
	{"java.net.URL$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URL_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.URL",
	"java.lang.Object",
	"java.io.Serializable",
	_URL_FieldInfo_,
	_URL_MethodInfo_,
	nullptr,
	nullptr,
	_URL_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.URL$DefaultFactory,java.net.URL$3,java.net.URL$2,java.net.URL$1"
};

$Object* allocate$URL($Class* clazz) {
	return $of($alloc(URL));
}

$String* URL::BUILTIN_HANDLERS_PREFIX = nullptr;

$String* URL::protocolPathProp = nullptr;

$volatile($URLStreamHandlerFactory*) URL::factory = nullptr;
$URLStreamHandlerFactory* URL::defaultFactory = nullptr;
$ThreadLocal* URL::gate = nullptr;

$Hashtable* URL::handlers = nullptr;
$Object* URL::streamHandlerLock = nullptr;

$ObjectStreamFieldArray* URL::serialPersistentFields = nullptr;

void URL::init$($String* protocol, $String* host, int32_t port, $String* file) {
	URL::init$(protocol, host, port, file, nullptr);
}

void URL::init$($String* protocol, $String* host, $String* file) {
	URL::init$(protocol, host, -1, file);
}

void URL::init$($String* protocol$renamed, $String* host$renamed, int32_t port, $String* file$renamed, $URLStreamHandler* handler$renamed) {
	$var($URLStreamHandler, handler, handler$renamed);
	$var($String, protocol, protocol$renamed);
	$var($String, file, file$renamed);
	$var($String, host, host$renamed);
	this->port = -1;
	this->hashCode$ = -1;
	if (handler != nullptr) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			checkSpecifyHandler(sm);
		}
	}
	$assign(protocol, toLowerCase(protocol));
	$set(this, protocol, protocol);
	if (host != nullptr) {
		bool var$0 = host->indexOf((int32_t)u':') >= 0;
		if (var$0 && !host->startsWith("["_s)) {
			$assign(host, $str({"["_s, host, "]"_s}));
		}
		$set(this, host, host);
		if (port < -1) {
			$throwNew($MalformedURLException, $$str({"Invalid port number :"_s, $$str(port)}));
		}
		this->port = port;
		$set(this, authority, (port == -1) ? host : $str({host, ":"_s, $$str(port)}));
	}
	int32_t index = $nc(file)->indexOf((int32_t)u'#');
	$set(this, ref, index < 0 ? ($String*)nullptr : file->substring(index + 1));
	$assign(file, index < 0 ? file : file->substring(0, index));
	int32_t q = file->lastIndexOf((int32_t)u'?');
	if (q != -1) {
		$set(this, query, file->substring(q + 1));
		$set(this, path, file->substring(0, q));
		$set(this, file, $str({this->path, "?"_s, this->query}));
	} else {
		$set(this, path, file);
		$set(this, file, this->path);
	}
	if (handler == nullptr && ($assign(handler, getURLStreamHandler(protocol))) == nullptr) {
		$throwNew($MalformedURLException, $$str({"unknown protocol: "_s, protocol}));
	}
	$set(this, handler, handler);
	if (host != nullptr && isBuiltinStreamHandler(handler)) {
		$var($String, s, $IPAddressUtil::checkExternalForm(this));
		if (s != nullptr) {
			$throwNew($MalformedURLException, s);
		}
	}
	if ("jar"_s->equalsIgnoreCase(protocol)) {
		if ($instanceOf($Handler, handler)) {
			$var($String, s, $nc(($cast($Handler, handler)))->checkNestedProtocol(file));
			if (s != nullptr) {
				$throwNew($MalformedURLException, s);
			}
		}
	}
}

void URL::init$($String* spec) {
	URL::init$(nullptr, spec);
}

void URL::init$(URL* context, $String* spec) {
	URL::init$(context, spec, ($URLStreamHandler*)nullptr);
}

void URL::init$(URL* context, $String* spec, $URLStreamHandler* handler$renamed) {
	$var($URLStreamHandler, handler, handler$renamed);
	this->port = -1;
	this->hashCode$ = -1;
	$var($String, original, spec);
	int32_t i = 0;
	int32_t limit = 0;
	int32_t c = 0;
	int32_t start = 0;
	$var($String, newProtocol, nullptr);
	bool aRef = false;
	bool isRelative = false;
	if (handler != nullptr) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			checkSpecifyHandler(sm);
		}
	}
	try {
		limit = $nc(spec)->length();
		while ((limit > 0) && (spec->charAt(limit - 1) <= u' ')) {
			--limit;
		}
		while ((start < limit) && (spec->charAt(start) <= u' ')) {
			++start;
		}
		if (spec->regionMatches(true, start, "url:"_s, 0, 4)) {
			start += 4;
		}
		bool var$0 = start < spec->length();
		if (var$0 && spec->charAt(start) == u'#') {
			aRef = true;
		}
		for (i = start; !aRef && (i < limit) && ((c = spec->charAt(i)) != u'/'); ++i) {
			if (c == u':') {
				$var($String, s, toLowerCase($(spec->substring(start, i))));
				if (isValidProtocol(s)) {
					$assign(newProtocol, s);
					start = i + 1;
				}
				break;
			}
		}
		$set(this, protocol, newProtocol);
		if ((context != nullptr) && ((newProtocol == nullptr) || $nc(newProtocol)->equalsIgnoreCase($nc(context)->protocol))) {
			if (handler == nullptr) {
				$assign(handler, $nc(context)->handler);
			}
			if ($nc(context)->path != nullptr && $nc(context->path)->startsWith("/"_s)) {
				$assign(newProtocol, nullptr);
			}
			if (newProtocol == nullptr) {
				$set(this, protocol, $nc(context)->protocol);
				$set(this, authority, context->authority);
				$set(this, userInfo, context->userInfo);
				$set(this, host, context->host);
				this->port = context->port;
				$set(this, file, context->file);
				$set(this, path, context->path);
				isRelative = true;
			}
		}
		if (this->protocol == nullptr) {
			$throwNew($MalformedURLException, $$str({"no protocol: "_s, original}));
		}
		if (handler == nullptr && ($assign(handler, getURLStreamHandler(this->protocol))) == nullptr) {
			$throwNew($MalformedURLException, $$str({"unknown protocol: "_s, this->protocol}));
		}
		$set(this, handler, handler);
		i = spec->indexOf((int32_t)u'#', start);
		if (i >= 0) {
			$set(this, ref, spec->substring(i + 1, limit));
			limit = i;
		}
		if (isRelative && start == limit) {
			$set(this, query, $nc(context)->query);
			if (this->ref == nullptr) {
				$set(this, ref, context->ref);
			}
		}
		$nc(handler)->parseURL(this, spec, start, limit);
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, e, $catch());
		$throw(e);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($MalformedURLException, exception, $new($MalformedURLException, $(e->getMessage())));
		exception->initCause(e);
		$throw(exception);
	}
}

URL* URL::fromURI($URI* uri) {
	$init(URL);
	if (!$nc(uri)->isAbsolute()) {
		$throwNew($IllegalArgumentException, "URI is not absolute"_s);
	}
	$var($String, protocol, $nc(uri)->getScheme());
	bool var$1 = $nc(protocol)->equals("jrt"_s);
	bool var$0 = var$1 && !uri->isOpaque();
	if (var$0 && uri->getRawFragment() == nullptr) {
		$var($String, query, uri->getRawQuery());
		$var($String, path, uri->getRawPath());
		$var($String, file, (query == nullptr) ? path : $str({path, "?"_s, query}));
		$var($String, host, uri->getHost());
		if (host == nullptr) {
			$assign(host, ""_s);
		}
		int32_t port = uri->getPort();
		return $new(URL, "jrt"_s, host, port, file, nullptr);
	} else {
		return $new(URL, (URL*)nullptr, $(uri->toString()), ($URLStreamHandler*)nullptr);
	}
}

bool URL::isValidProtocol($String* protocol) {
	int32_t len = $nc(protocol)->length();
	if (len < 1) {
		return false;
	}
	char16_t c = protocol->charAt(0);
	if (!$Character::isLetter(c)) {
		return false;
	}
	for (int32_t i = 1; i < len; ++i) {
		c = protocol->charAt(i);
		if (!$Character::isLetterOrDigit(c) && c != u'.' && c != u'+' && c != u'-') {
			return false;
		}
	}
	return true;
}

void URL::checkSpecifyHandler($SecurityManager* sm) {
	$init($SecurityConstants);
	$nc(sm)->checkPermission($SecurityConstants::SPECIFY_HANDLER_PERMISSION);
}

void URL::set($String* protocol, $String* host, int32_t port, $String* authority, $String* userInfo, $String* path, $String* query, $String* ref) {
	$synchronized(this) {
		$set(this, protocol, protocol);
		$set(this, host, host);
		this->port = port;
		$set(this, file, query == nullptr ? path : $str({path, "?"_s, query}));
		$set(this, userInfo, userInfo);
		$set(this, path, path);
		$set(this, ref, ref);
		this->hashCode$ = -1;
		$set(this, hostAddress, nullptr);
		$set(this, query, query);
		$set(this, authority, authority);
	}
}

$InetAddress* URL::getHostAddress() {
	$synchronized(this) {
		if (this->hostAddress != nullptr) {
			return this->hostAddress;
		}
		if (this->host == nullptr || $nc(this->host)->isEmpty()) {
			return nullptr;
		}
		try {
			$set(this, hostAddress, $InetAddress::getByName(this->host));
		} catch ($UnknownHostException&) {
			$var($Exception, ex, $catch());
			return nullptr;
		} catch ($SecurityException&) {
			$var($Exception, ex, $catch());
			return nullptr;
		}
		return this->hostAddress;
	}
}

$String* URL::getQuery() {
	return this->query;
}

$String* URL::getPath() {
	return this->path;
}

$String* URL::getUserInfo() {
	return this->userInfo;
}

$String* URL::getAuthority() {
	return this->authority;
}

int32_t URL::getPort() {
	return this->port;
}

int32_t URL::getDefaultPort() {
	return $nc(this->handler)->getDefaultPort();
}

$String* URL::getProtocol() {
	return this->protocol;
}

$String* URL::getHost() {
	return this->host;
}

$String* URL::getFile() {
	return this->file;
}

$String* URL::getRef() {
	return this->ref;
}

bool URL::equals(Object$* obj) {
	$var(URL, u2, nullptr);
	bool var$0 = $instanceOf(URL, obj);
	if (var$0) {
		$assign(u2, $cast(URL, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	return $nc(this->handler)->equals(this, u2);
}

int32_t URL::hashCode() {
	$synchronized(this) {
		if (this->hashCode$ != -1) {
			return this->hashCode$;
		}
		this->hashCode$ = $nc(this->handler)->hashCode(this);
		return this->hashCode$;
	}
}

bool URL::sameFile(URL* other) {
	return $nc(this->handler)->sameFile(this, other);
}

$String* URL::toString() {
	return toExternalForm();
}

$String* URL::toExternalForm() {
	return $nc(this->handler)->toExternalForm(this);
}

$URI* URL::toURI() {
	$var($URI, uri, $new($URI, $(toString())));
	if (this->authority != nullptr && isBuiltinStreamHandler(this->handler)) {
		$var($String, s, $IPAddressUtil::checkAuthority(this));
		if (s != nullptr) {
			$throwNew($URISyntaxException, this->authority, s);
		}
	}
	return uri;
}

$URLConnection* URL::openConnection() {
	return $nc(this->handler)->openConnection(this);
}

$URLConnection* URL::openConnection($Proxy* proxy) {
	if (proxy == nullptr) {
		$throwNew($IllegalArgumentException, "proxy can not be null"_s);
	}
	$init($Proxy);
	$var($Proxy, p, proxy == $Proxy::NO_PROXY ? $Proxy::NO_PROXY : static_cast<$Proxy*>($ApplicationProxy::create(proxy)));
	$var($SecurityManager, sm, $System::getSecurityManager());
	$init($Proxy$Type);
	if ($nc(p)->type() != $Proxy$Type::DIRECT && sm != nullptr) {
		$var($InetSocketAddress, epoint, $cast($InetSocketAddress, p->address()));
		if ($nc(epoint)->isUnresolved()) {
			$var($String, var$0, epoint->getHostName());
			sm->checkConnect(var$0, epoint->getPort());
		} else {
			$var($String, var$1, $nc($(epoint->getAddress()))->getHostAddress());
			sm->checkConnect(var$1, epoint->getPort());
		}
	}
	return $nc(this->handler)->openConnection(this, p);
}

$InputStream* URL::openStream() {
	return $nc($(openConnection()))->getInputStream();
}

$Object* URL::getContent() {
	return $of($nc($(openConnection()))->getContent());
}

$Object* URL::getContent($ClassArray* classes) {
	return $of($nc($(openConnection()))->getContent(classes));
}

void URL::setURLStreamHandlerFactory($URLStreamHandlerFactory* fac) {
	$init(URL);
	$synchronized(URL::streamHandlerLock) {
		if (URL::factory != nullptr) {
			$throwNew($Error, "factory already defined"_s);
		}
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkSetFactory();
		}
		$nc(URL::handlers)->clear();
		$assignStatic(URL::factory, fac);
	}
}

$URLStreamHandler* URL::lookupViaProperty($String* protocol) {
	$init(URL);
	$beforeCallerSensitive();
	$var($String, packagePrefixList, $GetPropertyAction::privilegedGetProperty(URL::protocolPathProp));
	if (packagePrefixList == nullptr) {
		return nullptr;
	}
	$var($StringArray, packagePrefixes, $nc(packagePrefixList)->split("\\|"_s));
	$var($URLStreamHandler, handler, nullptr);
	for (int32_t i = 0; handler == nullptr && i < packagePrefixes->length; ++i) {
		$var($String, packagePrefix, $nc(packagePrefixes->get(i))->trim());
		try {
			$var($String, clsName, $str({packagePrefix, "."_s, protocol, ".Handler"_s}));
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
				$assign(handler, $cast($URLStreamHandler, tmp));
			}
		} catch ($Exception&) {
			$catch();
		}
	}
	return handler;
}

$Iterator* URL::providers() {
	$init(URL);
	return $new($URL$1);
}

$URLStreamHandler* URL::lookupViaProviders($String* protocol) {
	$init(URL);
	$beforeCallerSensitive();
	if ($nc(URL::gate)->get() != nullptr) {
		$throwNew($Error, "Circular loading of URL stream handler providers detected"_s);
	}
	$nc(URL::gate)->set(URL::gate);
	{
		$var($Throwable, var$0, nullptr);
		$var($URLStreamHandler, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $cast($URLStreamHandler, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($URL$2, protocol)))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(URL::gate)->set(nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$String* URL::toLowerCase($String* protocol) {
	$init(URL);
	bool var$1 = $nc(protocol)->equals("jrt"_s);
	bool var$0 = var$1 || $nc(protocol)->equals("file"_s);
	if (var$0 || $nc(protocol)->equals("jar"_s)) {
		return protocol;
	} else {
		$init($Locale);
		return protocol->toLowerCase($Locale::ROOT);
	}
}

bool URL::isOverrideable($String* protocol) {
	$init(URL);
	if ($nc(protocol)->length() == 3) {
		bool var$1 = ($Character::toLowerCase(protocol->charAt(0)) == u'j');
		bool var$0 = var$1 && ($Character::toLowerCase(protocol->charAt(1)) == u'r');
		if (var$0 && ($Character::toLowerCase(protocol->charAt(2)) == u't')) {
			return false;
		}
	} else if (protocol->length() == 4) {
		bool var$4 = ($Character::toLowerCase(protocol->charAt(0)) == u'f');
		bool var$3 = var$4 && ($Character::toLowerCase(protocol->charAt(1)) == u'i');
		bool var$2 = var$3 && ($Character::toLowerCase(protocol->charAt(2)) == u'l');
		if (var$2 && ($Character::toLowerCase(protocol->charAt(3)) == u'e')) {
			return false;
		}
	}
	return true;
}

$URLStreamHandler* URL::getURLStreamHandler($String* protocol) {
	$init(URL);
	$var($URLStreamHandler, handler, $cast($URLStreamHandler, $nc(URL::handlers)->get(protocol)));
	if (handler != nullptr) {
		return handler;
	}
	$var($URLStreamHandlerFactory, fac, nullptr);
	bool checkedWithFactory = false;
	bool overrideableProtocol = isOverrideable(protocol);
	if (overrideableProtocol && $VM::isBooted()) {
		$assign(fac, URL::factory);
		if (fac != nullptr) {
			$assign(handler, fac->createURLStreamHandler(protocol));
			checkedWithFactory = true;
		}
		if (handler == nullptr && !$nc(protocol)->equalsIgnoreCase("jar"_s)) {
			$assign(handler, lookupViaProviders(protocol));
		}
		if (handler == nullptr) {
			$assign(handler, lookupViaProperty(protocol));
		}
	}
	if (handler == nullptr) {
		$assign(handler, $nc(URL::defaultFactory)->createURLStreamHandler(protocol));
	}
	$synchronized(URL::streamHandlerLock) {
		$var($URLStreamHandler, handler2, nullptr);
		$assign(handler2, $cast($URLStreamHandler, $nc(URL::handlers)->get(protocol)));
		if (handler2 != nullptr) {
			return handler2;
		}
		if (overrideableProtocol && !checkedWithFactory && ($assign(fac, URL::factory)) != nullptr) {
			$assign(handler2, $nc(fac)->createURLStreamHandler(protocol));
		}
		if (handler2 != nullptr) {
			$assign(handler, handler2);
		}
		if (handler != nullptr) {
			$nc(URL::handlers)->put(protocol, handler);
		}
	}
	return handler;
}

void URL::writeObject($ObjectOutputStream* s) {
	$synchronized(this) {
		$nc(s)->defaultWriteObject();
	}
}

void URL::readObject($ObjectInputStream* s) {
	$synchronized(this) {
		$var($ObjectInputStream$GetField, gf, $nc(s)->readFields());
		$var($String, protocol, $cast($String, $nc(gf)->get("protocol"_s, ($Object*)nullptr)));
		if (getURLStreamHandler(protocol) == nullptr) {
			$throwNew($IOException, $$str({"unknown protocol: "_s, protocol}));
		}
		$var($String, host, $cast($String, gf->get("host"_s, ($Object*)nullptr)));
		int32_t port = gf->get("port"_s, -1);
		$var($String, authority, $cast($String, gf->get("authority"_s, ($Object*)nullptr)));
		$var($String, file, $cast($String, gf->get("file"_s, ($Object*)nullptr)));
		$var($String, ref, $cast($String, gf->get("ref"_s, ($Object*)nullptr)));
		int32_t hashCode = gf->get("hashCode"_s, -1);
		if (authority == nullptr && ((host != nullptr && !host->isEmpty()) || port != -1)) {
			if (host == nullptr) {
				$assign(host, ""_s);
			}
			$assign(authority, (port == -1) ? host : $str({host, ":"_s, $$str(port)}));
		}
		$set(this, tempState, $new($UrlDeserializedState, protocol, host, port, authority, file, ref, hashCode));
	}
}

$Object* URL::readResolve() {
	$var($URLStreamHandler, handler, nullptr);
	$assign(handler, getURLStreamHandler($($nc(this->tempState)->getProtocol())));
	$var(URL, replacementURL, nullptr);
	if (isBuiltinStreamHandler($($nc($of(handler))->getClass()->getName()))) {
		$assign(replacementURL, fabricateNewURL());
	} else {
		$assign(replacementURL, setDeserializedFields(handler));
	}
	return $of(replacementURL);
}

URL* URL::setDeserializedFields($URLStreamHandler* handler) {
	$var(URL, replacementURL, nullptr);
	$var($String, userInfo, nullptr);
	$var($String, protocol, $nc(this->tempState)->getProtocol());
	$var($String, host, $nc(this->tempState)->getHost());
	int32_t port = $nc(this->tempState)->getPort();
	$var($String, authority, $nc(this->tempState)->getAuthority());
	$var($String, file, $nc(this->tempState)->getFile());
	$var($String, ref, $nc(this->tempState)->getRef());
	int32_t hashCode = $nc(this->tempState)->getHashCode();
	if (authority == nullptr && ((host != nullptr && !host->isEmpty()) || port != -1)) {
		if (host == nullptr) {
			$assign(host, ""_s);
		}
		$assign(authority, (port == -1) ? host : $str({host, ":"_s, $$str(port)}));
		int32_t at = $nc(host)->lastIndexOf((int32_t)u'@');
		if (at != -1) {
			$assign(userInfo, host->substring(0, at));
			$assign(host, host->substring(at + 1));
		}
	} else if (authority != nullptr) {
		int32_t ind = authority->indexOf((int32_t)u'@');
		if (ind != -1) {
			$assign(userInfo, authority->substring(0, ind));
		}
	}
	$var($String, path, nullptr);
	$var($String, query, nullptr);
	if (file != nullptr) {
		int32_t q = file->lastIndexOf((int32_t)u'?');
		if (q != -1) {
			$assign(query, file->substring(q + 1));
			$assign(path, file->substring(0, q));
		} else {
			$assign(path, file);
		}
	}
	$set(this, protocol, protocol);
	$set(this, host, host);
	this->port = port;
	$set(this, file, file);
	$set(this, authority, authority);
	$set(this, ref, ref);
	this->hashCode$ = hashCode;
	$set(this, handler, handler);
	$set(this, query, query);
	$set(this, path, path);
	$set(this, userInfo, userInfo);
	$assign(replacementURL, this);
	return replacementURL;
}

URL* URL::fabricateNewURL() {
	$var(URL, replacementURL, nullptr);
	$var($String, urlString, $nc(this->tempState)->reconstituteUrlString());
	try {
		$assign(replacementURL, $new(URL, urlString));
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, mEx, $catch());
		resetState();
		$var($InvalidObjectException, invoEx, $new($InvalidObjectException, $$str({"Malformed URL:  "_s, urlString})));
		invoEx->initCause(mEx);
		$throw(invoEx);
	}
	$nc(replacementURL)->setSerializedHashCode($nc(this->tempState)->getHashCode());
	resetState();
	return replacementURL;
}

bool URL::isBuiltinStreamHandler($URLStreamHandler* handler) {
	$beforeCallerSensitive();
	$Class* handlerClass = $nc($of(handler))->getClass();
	bool var$0 = isBuiltinStreamHandler($($nc(handlerClass)->getName()));
	return var$0 || $VM::isSystemDomainLoader($($nc(handlerClass)->getClassLoader()));
}

bool URL::isBuiltinStreamHandler($String* handlerClassName) {
	return ($nc(handlerClassName)->startsWith(URL::BUILTIN_HANDLERS_PREFIX));
}

void URL::resetState() {
	$set(this, protocol, nullptr);
	$set(this, host, nullptr);
	this->port = -1;
	$set(this, file, nullptr);
	$set(this, authority, nullptr);
	$set(this, ref, nullptr);
	this->hashCode$ = -1;
	$set(this, handler, nullptr);
	$set(this, query, nullptr);
	$set(this, path, nullptr);
	$set(this, userInfo, nullptr);
	$set(this, tempState, nullptr);
}

void URL::setSerializedHashCode(int32_t hc) {
	this->hashCode$ = hc;
}

void clinit$URL($Class* class$) {
	$assignStatic(URL::BUILTIN_HANDLERS_PREFIX, "sun.net.www.protocol"_s);
	$assignStatic(URL::protocolPathProp, "java.protocol.handler.pkgs"_s);
	$assignStatic(URL::defaultFactory, $new($URL$DefaultFactory));
	$assignStatic(URL::gate, $new($ThreadLocal));
	$assignStatic(URL::handlers, $new($Hashtable));
	$assignStatic(URL::streamHandlerLock, $new($Object));
		$load($String);
		$init($Integer);
	$assignStatic(URL::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "protocol"_s, $String::class$),
		$$new($ObjectStreamField, "host"_s, $String::class$),
		$$new($ObjectStreamField, "port"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "authority"_s, $String::class$),
		$$new($ObjectStreamField, "file"_s, $String::class$),
		$$new($ObjectStreamField, "ref"_s, $String::class$),
		$$new($ObjectStreamField, "hashCode"_s, $Integer::TYPE)
	}));
	{
		$SharedSecrets::setJavaNetURLAccess($$new($URL$3));
	}
}

URL::URL() {
}

$Class* URL::load$($String* name, bool initialize) {
	$loadClass(URL, name, initialize, &_URL_ClassInfo_, clinit$URL, allocate$URL);
	return class$;
}

$Class* URL::class$ = nullptr;

	} // net
} // java