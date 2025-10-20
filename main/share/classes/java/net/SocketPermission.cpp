#include <java/net/SocketPermission.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/IDN.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketPermission$1.h>
#include <java/net/SocketPermission$EphemeralRange.h>
#include <java/net/SocketPermissionCollection.h>
#include <java/net/UnknownHostException.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Optional.h>
#include <java/util/StringJoiner.h>
#include <java/util/StringTokenizer.h>
#include <java/util/function/Function.h>
#include <sun/net/util/IPAddressUtil.h>
#include <sun/net/www/URLConnection.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/RegisteredDomain.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef ACCEPT
#undef ALL
#undef CONNECT
#undef DEF_EPH_LOW
#undef LISTEN
#undef NONE
#undef PORT_MAX
#undef PORT_MIN
#undef PRIV_PORT_MAX
#undef RESOLVE
#undef SOCKET_ACCEPT_ACTION
#undef SOCKET_CONNECT_ACCEPT_ACTION
#undef SOCKET_CONNECT_ACTION
#undef SOCKET_LISTEN_ACTION
#undef SOCKET_RESOLVE_ACTION

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $IDN = ::java::net::IDN;
using $InetAddress = ::java::net::InetAddress;
using $SocketPermission$1 = ::java::net::SocketPermission$1;
using $SocketPermission$EphemeralRange = ::java::net::SocketPermission$EphemeralRange;
using $SocketPermissionCollection = ::java::net::SocketPermissionCollection;
using $UnknownHostException = ::java::net::UnknownHostException;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Optional = ::java::util::Optional;
using $StringJoiner = ::java::util::StringJoiner;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Function = ::java::util::function::Function;
using $IPAddressUtil = ::sun::net::util::IPAddressUtil;
using $URLConnection = ::sun::net::www::URLConnection;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $Debug = ::sun::security::util::Debug;
using $RegisteredDomain = ::sun::security::util::RegisteredDomain;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace net {

class SocketPermission$$Lambda$name : public $Function {
	$class(SocketPermission$$Lambda$name, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($RegisteredDomain, inst$)->name());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SocketPermission$$Lambda$name>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SocketPermission$$Lambda$name::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SocketPermission$$Lambda$name::*)()>(&SocketPermission$$Lambda$name::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SocketPermission$$Lambda$name::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.net.SocketPermission$$Lambda$name",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* SocketPermission$$Lambda$name::load$($String* name, bool initialize) {
	$loadClass(SocketPermission$$Lambda$name, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SocketPermission$$Lambda$name::class$ = nullptr;

$FieldInfo _SocketPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, serialVersionUID)},
	{"CONNECT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, CONNECT)},
	{"LISTEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, LISTEN)},
	{"ACCEPT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, ACCEPT)},
	{"RESOLVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, RESOLVE)},
	{"NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, NONE)},
	{"ALL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, ALL)},
	{"PORT_MIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, PORT_MIN)},
	{"PORT_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, PORT_MAX)},
	{"PRIV_PORT_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, PRIV_PORT_MAX)},
	{"DEF_EPH_LOW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermission, DEF_EPH_LOW)},
	{"mask", "I", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, mask)},
	{"actions", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SocketPermission, actions)},
	{"hostname", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, hostname)},
	{"cname", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, cname)},
	{"addresses", "[Ljava/net/InetAddress;", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, addresses)},
	{"wildcard", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, wildcard)},
	{"init_with_ip", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, init_with_ip)},
	{"invalid", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, invalid)},
	{"portrange", "[I", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, portrange)},
	{"defaultDeny", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, defaultDeny)},
	{"untrusted", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, untrusted)},
	{"trusted", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, trusted)},
	{"trustNameService", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SocketPermission, trustNameService)},
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC, $staticField(SocketPermission, debug)},
	{"debugInit", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SocketPermission, debugInit)},
	{"cdomain", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, cdomain)},
	{"hdomain", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(SocketPermission, hdomain)},
	{}
};

$MethodInfo _SocketPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SocketPermission::*)($String*,$String*)>(&SocketPermission::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(SocketPermission::*)($String*,int32_t)>(&SocketPermission::init$))},
	{"authorized", "(Ljava/lang/String;[B)Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketPermission::*)($String*,$bytes*)>(&SocketPermission::authorized))},
	{"authorizedIPv4", "(Ljava/lang/String;[B)Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketPermission::*)($String*,$bytes*)>(&SocketPermission::authorizedIPv4))},
	{"authorizedIPv6", "(Ljava/lang/String;[B)Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketPermission::*)($String*,$bytes*)>(&SocketPermission::authorizedIPv6))},
	{"checkForIDN", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&SocketPermission::checkForIDN))},
	{"compareHostnames", "(Ljava/net/SocketPermission;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketPermission::*)(SocketPermission*)>(&SocketPermission::compareHostnames))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActions", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&SocketPermission::getActions))},
	{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCanonName", "()V", nullptr, 0, $method(static_cast<void(SocketPermission::*)()>(&SocketPermission::getCanonName)), "java.net.UnknownHostException"},
	{"getDebug", "()Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$Debug*(*)()>(&SocketPermission::getDebug))},
	{"getHost", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&SocketPermission::getHost))},
	{"getIP", "()V", nullptr, 0, $method(static_cast<void(SocketPermission::*)()>(&SocketPermission::getIP)), "java.net.UnknownHostException"},
	{"getMask", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&SocketPermission::getMask))},
	{"getMask", "()I", nullptr, 0, $method(static_cast<int32_t(SocketPermission::*)()>(&SocketPermission::getMask))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"impliesIgnoreMask", "(Ljava/net/SocketPermission;)Z", nullptr, 0, $method(static_cast<bool(SocketPermission::*)(SocketPermission*)>(&SocketPermission::impliesIgnoreMask))},
	{"inRange", "(IIII)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t,int32_t,int32_t)>(&SocketPermission::inRange))},
	{"includesEphemerals", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketPermission::*)()>(&SocketPermission::includesEphemerals))},
	{"init", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(SocketPermission::*)($String*,int32_t)>(&SocketPermission::init))},
	{"initEphemeralPorts", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t)>(&SocketPermission::initEphemeralPorts))},
	{"isUntrusted", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketPermission::*)()>(&SocketPermission::isUntrusted)), "java.net.UnknownHostException"},
	{"match", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketPermission::*)($String*,$String*)>(&SocketPermission::match))},
	{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"parsePort", "(Ljava/lang/String;)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(SocketPermission::*)($String*)>(&SocketPermission::parsePort)), "java.lang.Exception"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(SocketPermission::*)($ObjectInputStream*)>(&SocketPermission::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setDeny", "()V", nullptr, $PRIVATE, $method(static_cast<void(SocketPermission::*)()>(&SocketPermission::setDeny))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(SocketPermission::*)($ObjectOutputStream*)>(&SocketPermission::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SocketPermission_InnerClassesInfo_[] = {
	{"java.net.SocketPermission$EphemeralRange", "java.net.SocketPermission", "EphemeralRange", $PRIVATE | $STATIC},
	{"java.net.SocketPermission$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocketPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.SocketPermission",
	"java.security.Permission",
	nullptr,
	_SocketPermission_FieldInfo_,
	_SocketPermission_MethodInfo_,
	nullptr,
	nullptr,
	_SocketPermission_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.SocketPermission$EphemeralRange,java.net.SocketPermission$1"
};

$Object* allocate$SocketPermission($Class* clazz) {
	return $of($alloc(SocketPermission));
}

bool SocketPermission::trustNameService = false;
$Debug* SocketPermission::debug = nullptr;
bool SocketPermission::debugInit = false;

$Debug* SocketPermission::getDebug() {
	$load(SocketPermission);
	$synchronized(class$) {
		$init(SocketPermission);
		if (!SocketPermission::debugInit) {
			$assignStatic(SocketPermission::debug, $Debug::getInstance("access"_s));
			SocketPermission::debugInit = true;
		}
		return SocketPermission::debug;
	}
}

void SocketPermission::init$($String* host, $String* action) {
	$useLocalCurrentObjectStackCache();
	$Permission::init$($(getHost(host)));
	this->defaultDeny = false;
	$var($String, var$0, getName());
	init(var$0, getMask(action));
}

void SocketPermission::init$($String* host, int32_t mask) {
	$useLocalCurrentObjectStackCache();
	$Permission::init$($(getHost(host)));
	this->defaultDeny = false;
	init($(getName()), mask);
}

void SocketPermission::setDeny() {
	this->defaultDeny = true;
}

$String* SocketPermission::getHost($String* host$renamed) {
	$init(SocketPermission);
	$useLocalCurrentObjectStackCache();
	$var($String, host, host$renamed);
	if ($nc(host)->isEmpty()) {
		return "localhost"_s;
	} else {
		int32_t ind = 0;
		if (host->charAt(0) != u'[') {
			int32_t var$0 = (ind = host->indexOf((int32_t)u':'));
			if (var$0 != host->lastIndexOf((int32_t)u':')) {
				$var($StringTokenizer, st, $new($StringTokenizer, host, ":"_s));
				int32_t tokens = st->countTokens();
				if (tokens == 9) {
					ind = host->lastIndexOf((int32_t)u':');
					$var($String, var$1, $$str({"["_s, $(host->substring(0, ind)), "]"_s}));
					$assign(host, $concat(var$1, $(host->substring(ind))));
				} else if (tokens == 8 && host->indexOf("::"_s) == -1) {
					$assign(host, $str({"["_s, host, "]"_s}));
				} else {
					$throwNew($IllegalArgumentException, "Ambiguous hostport part"_s);
				}
			}
		}
		return host;
	}
}

$ints* SocketPermission::parsePort($String* port) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = port == nullptr || $nc(port)->isEmpty();
	if (var$0 || $nc(port)->equals("*"_s)) {
		return $new($ints, {
			SocketPermission::PORT_MIN,
			SocketPermission::PORT_MAX
		});
	}
	int32_t dash = $nc(port)->indexOf((int32_t)u'-');
	if (dash == -1) {
		int32_t p = $Integer::parseInt(port);
		return $new($ints, {
			p,
			p
		});
	} else {
		$var($String, low, port->substring(0, dash));
		$var($String, high, port->substring(dash + 1));
		int32_t l = 0;
		int32_t h = 0;
		if (low->isEmpty()) {
			l = SocketPermission::PORT_MIN;
		} else {
			l = $Integer::parseInt(low);
		}
		if (high->isEmpty()) {
			h = SocketPermission::PORT_MAX;
		} else {
			h = $Integer::parseInt(high);
		}
		if (l < 0 || h < 0 || h < l) {
			$throwNew($IllegalArgumentException, "invalid port range"_s);
		}
		return $new($ints, {
			l,
			h
		});
	}
}

bool SocketPermission::includesEphemerals() {
	return $nc(this->portrange)->get(0) == 0;
}

void SocketPermission::init($String* host$renamed, int32_t mask) {
	$useLocalCurrentObjectStackCache();
	$var($String, host, host$renamed);
	if (((int32_t)(mask & (uint32_t)SocketPermission::ALL)) != mask) {
		$throwNew($IllegalArgumentException, "invalid actions mask"_s);
	}
	this->mask = mask | SocketPermission::RESOLVE;
	int32_t rb = 0;
	int32_t start = 0;
	int32_t end = 0;
	int32_t sep = -1;
	$var($String, hostport, host);
	if ($nc(host)->charAt(0) == u'[') {
		start = 1;
		rb = host->indexOf((int32_t)u']');
		if (rb != -1) {
			$assign(host, host->substring(start, rb));
		} else {
			$throwNew($IllegalArgumentException, $$str({"invalid host/port: "_s, host}));
		}
		sep = $nc(hostport)->indexOf((int32_t)u':', rb + 1);
	} else {
		start = 0;
		sep = host->indexOf((int32_t)u':', rb);
		end = sep;
		if (sep != -1) {
			$assign(host, host->substring(start, end));
		}
	}
	if (sep != -1) {
		$var($String, port, $nc(hostport)->substring(sep + 1));
		try {
			$set(this, portrange, parsePort(port));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($IllegalArgumentException, $$str({"invalid port range: "_s, port}));
		}
	} else {
		$set(this, portrange, $new($ints, {
			SocketPermission::PORT_MIN,
			SocketPermission::PORT_MAX
		}));
	}
	$set(this, hostname, host);
	if ($nc(host)->lastIndexOf((int32_t)u'*') > 0) {
		$throwNew($IllegalArgumentException, "invalid host wildcard specification"_s);
	} else if (host->startsWith("*"_s)) {
		this->wildcard = true;
		if (host->equals("*"_s)) {
			$set(this, cname, ""_s);
		} else if (host->startsWith("*."_s)) {
			$set(this, cname, $(host->substring(1))->toLowerCase());
		} else {
			$throwNew($IllegalArgumentException, "invalid host wildcard specification"_s);
		}
		return;
	} else if (!host->isEmpty()) {
		char16_t ch = host->charAt(0);
		if (ch == u':' || $Character::digit(ch, 16) != -1) {
			$var($bytes, ip, $IPAddressUtil::textToNumericFormatV4(host));
			if (ip == nullptr) {
				$assign(ip, $IPAddressUtil::textToNumericFormatV6(host));
			}
			if (ip != nullptr) {
				try {
					$set(this, addresses, $new($InetAddressArray, {$($InetAddress::getByAddress(ip))}));
					this->init_with_ip = true;
				} catch ($UnknownHostException&) {
					$var($UnknownHostException, uhe, $catch());
					this->invalid = true;
				}
			}
		}
	}
}

int32_t SocketPermission::getMask($String* action) {
	$init(SocketPermission);
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException, "action can\'t be null"_s);
	}
	if ($nc(action)->isEmpty()) {
		$throwNew($IllegalArgumentException, "action can\'t be empty"_s);
	}
	int32_t mask = SocketPermission::NONE;
	$init($SecurityConstants);
	if (action == $SecurityConstants::SOCKET_RESOLVE_ACTION) {
		return SocketPermission::RESOLVE;
	} else {
		if (action == $SecurityConstants::SOCKET_CONNECT_ACTION) {
			return SocketPermission::CONNECT;
		} else {
			if (action == $SecurityConstants::SOCKET_LISTEN_ACTION) {
				return SocketPermission::LISTEN;
			} else {
				if (action == $SecurityConstants::SOCKET_ACCEPT_ACTION) {
					return SocketPermission::ACCEPT;
				} else {
					if (action == $SecurityConstants::SOCKET_CONNECT_ACCEPT_ACTION) {
						return SocketPermission::CONNECT | SocketPermission::ACCEPT;
					}
				}
			}
		}
	}
	$var($chars, a, $nc(action)->toCharArray());
	int32_t i = a->length - 1;
	if (i < 0) {
		return mask;
	}
	while (i != -1) {
		char16_t c = 0;
		while (true) {
			bool var$0 = (i != -1);
			if (var$0) {
				bool var$4 = (c = a->get(i)) == u' ';
				bool var$3 = var$4 || c == u'\r';
				bool var$2 = var$3 || c == u'\n';
				bool var$1 = var$2 || c == u'\f';
				var$0 = (var$1 || c == u'\t');
			}
			if (!(var$0)) {
				break;
			}
			{
				--i;
			}
		}
		int32_t matchlen = 0;
		if (i >= 6 && (a->get(i - 6) == u'c' || a->get(i - 6) == u'C') && (a->get(i - 5) == u'o' || a->get(i - 5) == u'O') && (a->get(i - 4) == u'n' || a->get(i - 4) == u'N') && (a->get(i - 3) == u'n' || a->get(i - 3) == u'N') && (a->get(i - 2) == u'e' || a->get(i - 2) == u'E') && (a->get(i - 1) == u'c' || a->get(i - 1) == u'C') && (a->get(i) == u't' || a->get(i) == u'T')) {
			matchlen = 7;
			mask |= SocketPermission::CONNECT;
		} else if (i >= 6 && (a->get(i - 6) == u'r' || a->get(i - 6) == u'R') && (a->get(i - 5) == u'e' || a->get(i - 5) == u'E') && (a->get(i - 4) == u's' || a->get(i - 4) == u'S') && (a->get(i - 3) == u'o' || a->get(i - 3) == u'O') && (a->get(i - 2) == u'l' || a->get(i - 2) == u'L') && (a->get(i - 1) == u'v' || a->get(i - 1) == u'V') && (a->get(i) == u'e' || a->get(i) == u'E')) {
			matchlen = 7;
			mask |= SocketPermission::RESOLVE;
		} else if (i >= 5 && (a->get(i - 5) == u'l' || a->get(i - 5) == u'L') && (a->get(i - 4) == u'i' || a->get(i - 4) == u'I') && (a->get(i - 3) == u's' || a->get(i - 3) == u'S') && (a->get(i - 2) == u't' || a->get(i - 2) == u'T') && (a->get(i - 1) == u'e' || a->get(i - 1) == u'E') && (a->get(i) == u'n' || a->get(i) == u'N')) {
			matchlen = 6;
			mask |= SocketPermission::LISTEN;
		} else if (i >= 5 && (a->get(i - 5) == u'a' || a->get(i - 5) == u'A') && (a->get(i - 4) == u'c' || a->get(i - 4) == u'C') && (a->get(i - 3) == u'c' || a->get(i - 3) == u'C') && (a->get(i - 2) == u'e' || a->get(i - 2) == u'E') && (a->get(i - 1) == u'p' || a->get(i - 1) == u'P') && (a->get(i) == u't' || a->get(i) == u'T')) {
			matchlen = 6;
			mask |= SocketPermission::ACCEPT;
		} else {
			$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, action}));
		}
		bool seencomma = false;
		while (i >= matchlen && !seencomma) {
			switch (c = a->get(i - matchlen)) {
			case u' ':
				{}
			case u'\r':
				{}
			case u'\n':
				{}
			case u'\f':
				{}
			case u'\t':
				{
					break;
				}
			default:
				{
					if (c == u',' && i > matchlen) {
						seencomma = true;
						break;
					}
					$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, action}));
				}
			}
			--i;
		}
		i -= matchlen;
	}
	return mask;
}

bool SocketPermission::isUntrusted() {
	$useLocalCurrentObjectStackCache();
	if (this->trusted) {
		return false;
	}
	if (this->invalid || this->untrusted) {
		return true;
	}
	try {
		if (!SocketPermission::trustNameService && (this->defaultDeny || $URLConnection::isProxiedHost(this->hostname))) {
			if (this->cname == nullptr) {
				this->getCanonName();
			}
			if (!match(this->cname, this->hostname)) {
				if (!authorized(this->hostname, $($nc($nc(this->addresses)->get(0))->getAddress()))) {
					this->untrusted = true;
					$var($Debug, debug, getDebug());
					if (debug != nullptr && $Debug::isOn("failure"_s)) {
						debug->println($$str({"socket access restriction: proxied host ("_s, $nc(this->addresses)->get(0), ") does not match "_s, this->cname, " from reverse lookup"_s}));
					}
					return true;
				}
			}
			this->trusted = true;
		}
	} catch ($UnknownHostException&) {
		$var($UnknownHostException, uhe, $catch());
		this->invalid = true;
		$throw(uhe);
	}
	return false;
}

void SocketPermission::getCanonName() {
	$useLocalCurrentObjectStackCache();
	if (this->cname != nullptr || this->invalid || this->untrusted) {
		return;
	}
	try {
		if (this->addresses == nullptr) {
			getIP();
		}
		if (this->init_with_ip) {
			$set(this, cname, $nc($($nc($nc(this->addresses)->get(0))->getHostName(false)))->toLowerCase());
		} else {
			$set(this, cname, $nc($($nc($($InetAddress::getByName($($nc($nc(this->addresses)->get(0))->getHostAddress()))))->getHostName(false)))->toLowerCase());
		}
	} catch ($UnknownHostException&) {
		$var($UnknownHostException, uhe, $catch());
		this->invalid = true;
		$throw(uhe);
	}
}

$String* SocketPermission::checkForIDN($String* name) {
	$init(SocketPermission);
	bool var$0 = $nc(name)->startsWith("xn--"_s);
	if (var$0 || $nc(name)->contains(".xn--"_s)) {
		return $IDN::toUnicode(name);
	} else {
		return name;
	}
}

bool SocketPermission::match($String* cname, $String* hname) {
	$useLocalCurrentObjectStackCache();
	$var($String, a, checkForIDN($($nc(cname)->toLowerCase())));
	$var($String, b, checkForIDN($($nc(hname)->toLowerCase())));
	bool var$0 = $nc(a)->startsWith(b);
	if (var$0) {
		int32_t var$2 = a->length();
		bool var$1 = (var$2 == $nc(b)->length());
		var$0 = (var$1 || (a->charAt($nc(b)->length()) == u'.'));
	}
	if (var$0) {
		return true;
	}
	if (this->cdomain == nullptr) {
		$set(this, cdomain, $cast($String, $nc($($nc($($RegisteredDomain::from(a)))->map(static_cast<$Function*>($$new(SocketPermission$$Lambda$name)))))->orElse(a)));
	}
	if (this->hdomain == nullptr) {
		$set(this, hdomain, $cast($String, $nc($($nc($($RegisteredDomain::from(b)))->map(static_cast<$Function*>($$new(SocketPermission$$Lambda$name)))))->orElse(b)));
	}
	bool var$4 = !$nc(this->cdomain)->isEmpty();
	bool var$3 = var$4 && !$nc(this->hdomain)->isEmpty();
	return var$3 && $nc(this->cdomain)->equals(this->hdomain);
}

bool SocketPermission::authorized($String* cname, $bytes* addr) {
	if ($nc(addr)->length == 4) {
		return authorizedIPv4(cname, addr);
	} else if (addr->length == 16) {
		return authorizedIPv6(cname, addr);
	} else {
		return false;
	}
}

bool SocketPermission::authorizedIPv4($String* cname, $bytes* addr) {
	$useLocalCurrentObjectStackCache();
	$var($String, authHost, ""_s);
	$var($InetAddress, auth, nullptr);
	try {
		$assign(authHost, $str({"auth."_s, $$str(((int32_t)($nc(addr)->get(3) & (uint32_t)255))), "."_s, $$str(((int32_t)(addr->get(2) & (uint32_t)255))), "."_s, $$str(((int32_t)(addr->get(1) & (uint32_t)255))), "."_s, $$str(((int32_t)(addr->get(0) & (uint32_t)255))), ".in-addr.arpa"_s}));
		$assign(authHost, $str({this->hostname, $$str(u'.'), authHost}));
		$assign(auth, $nc($($InetAddress::getAllByName0(authHost, false)))->get(0));
		if ($nc(auth)->equals($($InetAddress::getByAddress(addr)))) {
			return true;
		}
		$var($Debug, debug, getDebug());
		if (debug != nullptr && $Debug::isOn("failure"_s)) {
			$var($String, var$0, $$str({"socket access restriction: IP address of "_s, auth, " != "_s}));
			debug->println($$concat(var$0, $($InetAddress::getByAddress(addr))));
		}
	} catch ($UnknownHostException&) {
		$var($UnknownHostException, uhe, $catch());
		$var($Debug, debug, getDebug());
		if (debug != nullptr && $Debug::isOn("failure"_s)) {
			debug->println($$str({"socket access restriction: forward lookup failed for "_s, authHost}));
		}
	}
	return false;
}

bool SocketPermission::authorizedIPv6($String* cname, $bytes* addr) {
	$useLocalCurrentObjectStackCache();
	$var($String, authHost, ""_s);
	$var($InetAddress, auth, nullptr);
	try {
		$var($StringBuilder, sb, $new($StringBuilder, 39));
		for (int32_t i = 15; i >= 0; --i) {
			sb->append($($Integer::toHexString(((int32_t)(($nc(addr)->get(i)) & (uint32_t)15)))));
			sb->append(u'.');
			sb->append($($Integer::toHexString(((int32_t)(($nc(addr)->get(i) >> 4) & (uint32_t)15)))));
			sb->append(u'.');
		}
		$assign(authHost, $str({"auth."_s, $(sb->toString()), "IP6.ARPA"_s}));
		$assign(authHost, $str({this->hostname, $$str(u'.'), authHost}));
		$assign(auth, $nc($($InetAddress::getAllByName0(authHost, false)))->get(0));
		if ($nc(auth)->equals($($InetAddress::getByAddress(addr)))) {
			return true;
		}
		$var($Debug, debug, getDebug());
		if (debug != nullptr && $Debug::isOn("failure"_s)) {
			$var($String, var$0, $$str({"socket access restriction: IP address of "_s, auth, " != "_s}));
			debug->println($$concat(var$0, $($InetAddress::getByAddress(addr))));
		}
	} catch ($UnknownHostException&) {
		$var($UnknownHostException, uhe, $catch());
		$var($Debug, debug, getDebug());
		if (debug != nullptr && $Debug::isOn("failure"_s)) {
			debug->println($$str({"socket access restriction: forward lookup failed for "_s, authHost}));
		}
	}
	return false;
}

void SocketPermission::getIP() {
	$useLocalCurrentObjectStackCache();
	if (this->addresses != nullptr || this->wildcard || this->invalid) {
		return;
	}
	try {
		$var($String, host, nullptr);
		if ($nc($(getName()))->charAt(0) == u'[') {
			$assign(host, $nc($(getName()))->substring(1, $nc($(getName()))->indexOf((int32_t)u']')));
		} else {
			int32_t i = $nc($(getName()))->indexOf((int32_t)u':');
			if (i == -1) {
				$assign(host, getName());
			} else {
				$assign(host, $nc($(getName()))->substring(0, i));
			}
		}
		$set(this, addresses, $new($InetAddressArray, {$nc($($InetAddress::getAllByName0(host, false)))->get(0)}));
	} catch ($UnknownHostException&) {
		$var($UnknownHostException, uhe, $catch());
		this->invalid = true;
		$throw(uhe);
	} catch ($IndexOutOfBoundsException&) {
		$var($IndexOutOfBoundsException, iobe, $catch());
		this->invalid = true;
		$throwNew($UnknownHostException, $(getName()));
	}
}

bool SocketPermission::implies($Permission* p) {
	int32_t i = 0;
	int32_t j = 0;
	$var(SocketPermission, that, nullptr);
	bool var$0 = $instanceOf(SocketPermission, p);
	if (var$0) {
		$assign(that, $cast(SocketPermission, p));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if ($equals(p, this)) {
		return true;
	}
	return (((int32_t)(this->mask & (uint32_t)$nc(that)->mask)) == that->mask) && impliesIgnoreMask(that);
}

bool SocketPermission::impliesIgnoreMask(SocketPermission* that) {
	int32_t i = 0;
	int32_t j = 0;
	if (((int32_t)($nc(that)->mask & (uint32_t)SocketPermission::RESOLVE)) != that->mask) {
		if (($nc(that->portrange)->get(0) < $nc(this->portrange)->get(0)) || ($nc(that->portrange)->get(1) > $nc(this->portrange)->get(1))) {
			bool var$0 = this->includesEphemerals();
			if (var$0 || that->includesEphemerals()) {
				if (!inRange($nc(this->portrange)->get(0), $nc(this->portrange)->get(1), $nc(that->portrange)->get(0), $nc(that->portrange)->get(1))) {
					return false;
				}
			} else {
				return false;
			}
		}
	}
	if (this->wildcard && ""_s->equals(this->cname)) {
		return true;
	}
	if (this->invalid || $nc(that)->invalid) {
		return compareHostnames(that);
	}
	try {
		if (this->init_with_ip) {
			if ($nc(that)->wildcard) {
				return false;
			}
			if ($nc(that)->init_with_ip) {
				return ($nc($nc(this->addresses)->get(0))->equals($nc(that->addresses)->get(0)));
			} else {
				if (that->addresses == nullptr) {
					that->getIP();
				}
				for (i = 0; i < $nc(that->addresses)->length; ++i) {
					if ($nc($nc(this->addresses)->get(0))->equals($nc(that->addresses)->get(i))) {
						return true;
					}
				}
			}
			return false;
		}
		if (this->wildcard || $nc(that)->wildcard) {
			if (this->wildcard && that->wildcard) {
				return ($nc(that->cname)->endsWith(this->cname));
			}
			if (that->wildcard) {
				return false;
			}
			if (that->cname == nullptr) {
				that->getCanonName();
			}
			return ($nc(that->cname)->endsWith(this->cname));
		}
		if (this->addresses == nullptr) {
			this->getIP();
		}
		if ($nc(that)->addresses == nullptr) {
			that->getIP();
		}
		if (!($nc(that)->init_with_ip && this->isUntrusted())) {
			for (j = 0; j < $nc(this->addresses)->length; ++j) {
				for (i = 0; i < $nc(that->addresses)->length; ++i) {
					if ($nc($nc(this->addresses)->get(j))->equals($nc(that->addresses)->get(i))) {
						return true;
					}
				}
			}
			if (this->cname == nullptr) {
				this->getCanonName();
			}
			if (that->cname == nullptr) {
				that->getCanonName();
			}
			return ($nc(this->cname)->equalsIgnoreCase(that->cname));
		}
	} catch ($UnknownHostException&) {
		$var($UnknownHostException, uhe, $catch());
		return compareHostnames(that);
	}
	return false;
}

bool SocketPermission::compareHostnames(SocketPermission* that) {
	$useLocalCurrentObjectStackCache();
	$var($String, thisHost, this->hostname);
	$var($String, thatHost, $nc(that)->hostname);
	if (thisHost == nullptr) {
		return false;
	} else if (this->wildcard) {
		int32_t cnameLength = $nc(this->cname)->length();
		return $nc(thatHost)->regionMatches(true, (thatHost->length() - cnameLength), this->cname, 0, cnameLength);
	} else {
		return $nc(thisHost)->equalsIgnoreCase(thatHost);
	}
}

bool SocketPermission::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(obj, this)) {
		return true;
	}
	$var(SocketPermission, that, nullptr);
	bool var$0 = $instanceOf(SocketPermission, obj);
	if (var$0) {
		$assign(that, $cast(SocketPermission, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if (this->mask != $nc(that)->mask) {
		return false;
	}
	if (((int32_t)($nc(that)->mask & (uint32_t)SocketPermission::RESOLVE)) != that->mask) {
		if (($nc(this->portrange)->get(0) != $nc(that->portrange)->get(0)) || ($nc(this->portrange)->get(1) != $nc(that->portrange)->get(1))) {
			return false;
		}
	}
	if ($nc($(this->getName()))->equalsIgnoreCase($($nc(that)->getName()))) {
		return true;
	}
	try {
		this->getCanonName();
		$nc(that)->getCanonName();
	} catch ($UnknownHostException&) {
		$var($UnknownHostException, uhe, $catch());
		return false;
	}
	if (this->invalid || $nc(that)->invalid) {
		return false;
	}
	if (this->cname != nullptr) {
		return $nc(this->cname)->equalsIgnoreCase($nc(that)->cname);
	}
	return false;
}

int32_t SocketPermission::hashCode() {
	$useLocalCurrentObjectStackCache();
	if (this->init_with_ip || this->wildcard) {
		return $nc($(this->getName()))->hashCode();
	}
	try {
		getCanonName();
	} catch ($UnknownHostException&) {
		$catch();
	}
	if (this->invalid || this->cname == nullptr) {
		return $nc($(this->getName()))->hashCode();
	} else {
		return $nc(this->cname)->hashCode();
	}
}

int32_t SocketPermission::getMask() {
	return this->mask;
}

$String* SocketPermission::getActions(int32_t mask) {
	$init(SocketPermission);
	$var($StringJoiner, sj, $new($StringJoiner, ","_s));
	if (((int32_t)(mask & (uint32_t)SocketPermission::CONNECT)) == SocketPermission::CONNECT) {
		sj->add("connect"_s);
	}
	if (((int32_t)(mask & (uint32_t)SocketPermission::LISTEN)) == SocketPermission::LISTEN) {
		sj->add("listen"_s);
	}
	if (((int32_t)(mask & (uint32_t)SocketPermission::ACCEPT)) == SocketPermission::ACCEPT) {
		sj->add("accept"_s);
	}
	if (((int32_t)(mask & (uint32_t)SocketPermission::RESOLVE)) == SocketPermission::RESOLVE) {
		sj->add("resolve"_s);
	}
	return sj->toString();
}

$String* SocketPermission::getActions() {
	if (this->actions == nullptr) {
		$set(this, actions, getActions(this->mask));
	}
	return this->actions;
}

$PermissionCollection* SocketPermission::newPermissionCollection() {
	return $new($SocketPermissionCollection);
}

void SocketPermission::writeObject($ObjectOutputStream* s) {
	$synchronized(this) {
		if (this->actions == nullptr) {
			getActions();
		}
		$nc(s)->defaultWriteObject();
	}
}

void SocketPermission::readObject($ObjectInputStream* s) {
	$synchronized(this) {
		$nc(s)->defaultReadObject();
		$var($String, var$0, getName());
		init(var$0, getMask(this->actions));
	}
}

int32_t SocketPermission::initEphemeralPorts($String* suffix, int32_t defval) {
	$init(SocketPermission);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Integer, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SocketPermission$1, suffix)))))))->intValue();
}

bool SocketPermission::inRange(int32_t policyLow, int32_t policyHigh, int32_t targetLow, int32_t targetHigh) {
	$init(SocketPermission);
	$init($SocketPermission$EphemeralRange);
	int32_t ephemeralLow = $SocketPermission$EphemeralRange::low;
	int32_t ephemeralHigh = $SocketPermission$EphemeralRange::high;
	if (targetLow == 0) {
		if (!inRange(policyLow, policyHigh, ephemeralLow, ephemeralHigh)) {
			return false;
		}
		if (targetHigh == 0) {
			return true;
		}
		targetLow = 1;
	}
	if (policyLow == 0 && policyHigh == 0) {
		return targetLow >= ephemeralLow && targetHigh <= ephemeralHigh;
	}
	if (policyLow != 0) {
		return targetLow >= policyLow && targetHigh <= policyHigh;
	}
	if (policyHigh >= ephemeralLow - 1) {
		return targetHigh <= ephemeralHigh;
	}
	return (targetLow <= policyHigh && targetHigh <= policyHigh) || (targetLow >= ephemeralLow && targetHigh <= ephemeralHigh);
}

void clinit$SocketPermission($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(SocketPermission::debug, nullptr);
	SocketPermission::debugInit = false;
	{
		$var($Boolean, tmp, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.net.trustNameService"_s)))));
		SocketPermission::trustNameService = $nc(tmp)->booleanValue();
	}
}

SocketPermission::SocketPermission() {
}

$Class* SocketPermission::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SocketPermission$$Lambda$name::classInfo$.name)) {
			return SocketPermission$$Lambda$name::load$(name, initialize);
		}
	}
	$loadClass(SocketPermission, name, initialize, &_SocketPermission_ClassInfo_, clinit$SocketPermission, allocate$SocketPermission);
	return class$;
}

$Class* SocketPermission::class$ = nullptr;

	} // net
} // java