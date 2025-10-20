#include <sun/net/util/IPAddressUtil.h>

#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketException.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef H_AUTH_DELIMS
#undef H_BACKSLASH
#undef H_COLON
#undef H_EXCLUDE
#undef H_GEN_DELIMS
#undef H_IPV6_DELIMS
#undef H_NON_PRINTABLE
#undef H_SLASH
#undef INADDR16SZ
#undef INADDR4SZ
#undef INT16SZ
#undef L_AUTH_DELIMS
#undef L_BACKSLASH
#undef L_COLON
#undef L_EXCLUDE
#undef L_GEN_DELIMS
#undef L_IPV6_DELIMS
#undef L_NON_PRINTABLE
#undef L_SLASH
#undef OTHERS

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketException = ::java::net::SocketException;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace sun {
	namespace net {
		namespace util {

class IPAddressUtil$$Lambda$lambda$toScopedAddress$0 : public $Function {
	$class(IPAddressUtil$$Lambda$lambda$toScopedAddress$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* k) override {
		 return $of(IPAddressUtil::lambda$toScopedAddress$0($cast($InetAddress, k)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IPAddressUtil$$Lambda$lambda$toScopedAddress$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IPAddressUtil$$Lambda$lambda$toScopedAddress$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IPAddressUtil$$Lambda$lambda$toScopedAddress$0::*)()>(&IPAddressUtil$$Lambda$lambda$toScopedAddress$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo IPAddressUtil$$Lambda$lambda$toScopedAddress$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.util.IPAddressUtil$$Lambda$lambda$toScopedAddress$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* IPAddressUtil$$Lambda$lambda$toScopedAddress$0::load$($String* name, bool initialize) {
	$loadClass(IPAddressUtil$$Lambda$lambda$toScopedAddress$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IPAddressUtil$$Lambda$lambda$toScopedAddress$0::class$ = nullptr;

class IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1 : public $PrivilegedExceptionAction {
	$class(IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($InetAddress* address) {
		$set(this, address, address);
	}
	virtual $Object* run() override {
		 return $of(IPAddressUtil::lambda$findScopedAddress$2(address));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1>());
	}
	$InetAddress* address = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1::fieldInfos[2] = {
	{"address", "Ljava/net/InetAddress;", nullptr, $PUBLIC, $field(IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1, address)},
	{}
};
$MethodInfo IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1::methodInfos[3] = {
	{"<init>", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC, $method(static_cast<void(IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1::*)($InetAddress*)>(&IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.util.IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1::load$($String* name, bool initialize) {
	$loadClass(IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1::class$ = nullptr;

class IPAddressUtil$$Lambda$inetAddresses$2 : public $Function {
	$class(IPAddressUtil$$Lambda$inetAddresses$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($NetworkInterface, inst$)->inetAddresses());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IPAddressUtil$$Lambda$inetAddresses$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IPAddressUtil$$Lambda$inetAddresses$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IPAddressUtil$$Lambda$inetAddresses$2::*)()>(&IPAddressUtil$$Lambda$inetAddresses$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo IPAddressUtil$$Lambda$inetAddresses$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.util.IPAddressUtil$$Lambda$inetAddresses$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* IPAddressUtil$$Lambda$inetAddresses$2::load$($String* name, bool initialize) {
	$loadClass(IPAddressUtil$$Lambda$inetAddresses$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IPAddressUtil$$Lambda$inetAddresses$2::class$ = nullptr;

class IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3 : public $Predicate {
	$class(IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($InetAddress* address) {
		$set(this, address, address);
	}
	virtual bool test(Object$* a) override {
		 return IPAddressUtil::lambda$findScopedAddress$1(address, $cast($InetAddress, a));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3>());
	}
	$InetAddress* address = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3::fieldInfos[2] = {
	{"address", "Ljava/net/InetAddress;", nullptr, $PUBLIC, $field(IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3, address)},
	{}
};
$MethodInfo IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3::methodInfos[3] = {
	{"<init>", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC, $method(static_cast<void(IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3::*)($InetAddress*)>(&IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.util.IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3::load$($String* name, bool initialize) {
	$loadClass(IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3::class$ = nullptr;

$FieldInfo _IPAddressUtil_FieldInfo_[] = {
	{"INADDR4SZ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, INADDR4SZ)},
	{"INADDR16SZ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, INADDR16SZ)},
	{"INT16SZ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, INT16SZ)},
	{"cache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/net/InetAddress;Ljava/net/InetAddress;>;", $PRIVATE | $STATIC | $FINAL, $staticField(IPAddressUtil, cache)},
	{"L_IPV6_DELIMS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, L_IPV6_DELIMS)},
	{"H_IPV6_DELIMS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, H_IPV6_DELIMS)},
	{"L_GEN_DELIMS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, L_GEN_DELIMS)},
	{"H_GEN_DELIMS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, H_GEN_DELIMS)},
	{"L_AUTH_DELIMS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, L_AUTH_DELIMS)},
	{"H_AUTH_DELIMS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, H_AUTH_DELIMS)},
	{"L_COLON", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, L_COLON)},
	{"H_COLON", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, H_COLON)},
	{"L_SLASH", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, L_SLASH)},
	{"H_SLASH", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, H_SLASH)},
	{"L_BACKSLASH", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, L_BACKSLASH)},
	{"H_BACKSLASH", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, H_BACKSLASH)},
	{"L_NON_PRINTABLE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, L_NON_PRINTABLE)},
	{"H_NON_PRINTABLE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, H_NON_PRINTABLE)},
	{"L_EXCLUDE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, L_EXCLUDE)},
	{"H_EXCLUDE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressUtil, H_EXCLUDE)},
	{"OTHERS", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IPAddressUtil, OTHERS)},
	{}
};

$MethodInfo _IPAddressUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IPAddressUtil::*)()>(&IPAddressUtil::init$))},
	{"checkAuth", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&IPAddressUtil::checkAuth))},
	{"checkAuthority", "(Ljava/net/URL;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($URL*)>(&IPAddressUtil::checkAuthority))},
	{"checkExternalForm", "(Ljava/net/URL;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($URL*)>(&IPAddressUtil::checkExternalForm))},
	{"checkHost", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&IPAddressUtil::checkHost))},
	{"checkHostString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&IPAddressUtil::checkHostString))},
	{"checkUserInfo", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&IPAddressUtil::checkUserInfo))},
	{"convertFromIPv4MappedAddress", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&IPAddressUtil::convertFromIPv4MappedAddress))},
	{"describeChar", "(C)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(char16_t)>(&IPAddressUtil::describeChar))},
	{"findScopedAddress", "(Ljava/net/InetAddress;)Ljava/net/InetAddress;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$InetAddress*(*)($InetAddress*)>(&IPAddressUtil::findScopedAddress))},
	{"isIPv4LiteralAddress", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&IPAddressUtil::isIPv4LiteralAddress))},
	{"isIPv4MappedAddress", "([B)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($bytes*)>(&IPAddressUtil::isIPv4MappedAddress))},
	{"isIPv6LiteralAddress", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&IPAddressUtil::isIPv6LiteralAddress))},
	{"lambda$findScopedAddress$1", "(Ljava/net/InetAddress;Ljava/net/InetAddress;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($InetAddress*,$InetAddress*)>(&IPAddressUtil::lambda$findScopedAddress$1))},
	{"lambda$findScopedAddress$2", "(Ljava/net/InetAddress;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($InetAddress*)>(&IPAddressUtil::lambda$findScopedAddress$2)), "java.lang.Exception"},
	{"lambda$toScopedAddress$0", "(Ljava/net/InetAddress;)Ljava/net/InetAddress;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$InetAddress*(*)($InetAddress*)>(&IPAddressUtil::lambda$toScopedAddress$0))},
	{"match", "(CJJ)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t,int64_t,int64_t)>(&IPAddressUtil::match))},
	{"scan", "(Ljava/lang/String;JJ)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*,int64_t,int64_t)>(&IPAddressUtil::scan))},
	{"scan", "(Ljava/lang/String;JJ[C)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*,int64_t,int64_t,$chars*)>(&IPAddressUtil::scan))},
	{"textToNumericFormatV4", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($String*)>(&IPAddressUtil::textToNumericFormatV4))},
	{"textToNumericFormatV6", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($String*)>(&IPAddressUtil::textToNumericFormatV6))},
	{"toScopedAddress", "(Ljava/net/InetAddress;)Ljava/net/InetAddress;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InetAddress*(*)($InetAddress*)>(&IPAddressUtil::toScopedAddress)), "java.net.SocketException"},
	{"toScopedAddress", "(Ljava/net/InetSocketAddress;)Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InetSocketAddress*(*)($InetSocketAddress*)>(&IPAddressUtil::toScopedAddress)), "java.net.SocketException"},
	{}
};

$ClassInfo _IPAddressUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.util.IPAddressUtil",
	"java.lang.Object",
	nullptr,
	_IPAddressUtil_FieldInfo_,
	_IPAddressUtil_MethodInfo_
};

$Object* allocate$IPAddressUtil($Class* clazz) {
	return $of($alloc(IPAddressUtil));
}


$ConcurrentHashMap* IPAddressUtil::cache = nullptr;
$chars* IPAddressUtil::OTHERS = nullptr;

void IPAddressUtil::init$() {
}

$bytes* IPAddressUtil::textToNumericFormatV4($String* src) {
	$init(IPAddressUtil);
	$var($bytes, res, $new($bytes, IPAddressUtil::INADDR4SZ));
	int64_t tmpValue = 0;
	int32_t currByte = 0;
	bool newOctet = true;
	int32_t len = $nc(src)->length();
	if (len == 0 || len > 15) {
		return nullptr;
	}
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = src->charAt(i);
		if (c == u'.') {
			if (newOctet || tmpValue < 0 || tmpValue > 255 || currByte == 3) {
				return nullptr;
			}
			res->set(currByte++, (int8_t)((int64_t)(tmpValue & (uint64_t)(int64_t)255)));
			tmpValue = 0;
			newOctet = true;
		} else {
			int32_t digit = $Character::digit(c, 10);
			if (digit < 0) {
				return nullptr;
			}
			tmpValue *= 10;
			tmpValue += digit;
			newOctet = false;
		}
	}
	if (newOctet || tmpValue < 0 || tmpValue >= ($sl((int64_t)1, (4 - currByte) * 8))) {
		return nullptr;
	}
	switch (currByte) {
	case 0:
		{
			res->set(0, (int8_t)((int64_t)((tmpValue >> 24) & (uint64_t)(int64_t)255)));
		}
	case 1:
		{
			res->set(1, (int8_t)((int64_t)((tmpValue >> 16) & (uint64_t)(int64_t)255)));
		}
	case 2:
		{
			res->set(2, (int8_t)((int64_t)((tmpValue >> 8) & (uint64_t)(int64_t)255)));
		}
	case 3:
		{
			res->set(3, (int8_t)((int64_t)((tmpValue >> 0) & (uint64_t)(int64_t)255)));
		}
	}
	return res;
}

$bytes* IPAddressUtil::textToNumericFormatV6($String* src) {
	$init(IPAddressUtil);
	$useLocalCurrentObjectStackCache();
	if ($nc(src)->length() < 2) {
		return nullptr;
	}
	int32_t colonp = 0;
	char16_t ch = 0;
	bool saw_xdigit = false;
	int32_t val = 0;
	$var($chars, srcb, $nc(src)->toCharArray());
	$var($bytes, dst, $new($bytes, IPAddressUtil::INADDR16SZ));
	int32_t srcb_length = srcb->length;
	int32_t pc = src->indexOf((int32_t)u'%');
	if (pc == srcb_length - 1) {
		return nullptr;
	}
	if (pc != -1) {
		srcb_length = pc;
	}
	colonp = -1;
	int32_t i = 0;
	int32_t j = 0;
	if (srcb->get(i) == u':') {
		if (srcb->get(++i) != u':') {
			return nullptr;
		}
	}
	int32_t curtok = i;
	saw_xdigit = false;
	val = 0;
	while (i < srcb_length) {
		ch = srcb->get(i++);
		int32_t chval = $Character::digit(ch, 16);
		if (chval != -1) {
			val <<= 4;
			val |= chval;
			if (val > 0x0000FFFF) {
				return nullptr;
			}
			saw_xdigit = true;
			continue;
		}
		if (ch == u':') {
			curtok = i;
			if (!saw_xdigit) {
				if (colonp != -1) {
					return nullptr;
				}
				colonp = j;
				continue;
			} else if (i == srcb_length) {
				return nullptr;
			}
			if (j + IPAddressUtil::INT16SZ > IPAddressUtil::INADDR16SZ) {
				return nullptr;
			}
			dst->set(j++, (int8_t)((int32_t)((val >> 8) & (uint32_t)255)));
			dst->set(j++, (int8_t)((int32_t)(val & (uint32_t)255)));
			saw_xdigit = false;
			val = 0;
			continue;
		}
		if (ch == u'.' && ((j + IPAddressUtil::INADDR4SZ) <= IPAddressUtil::INADDR16SZ)) {
			$var($String, ia4, src->substring(curtok, srcb_length));
			int32_t dot_count = 0;
			int32_t index = 0;
			while ((index = ia4->indexOf((int32_t)u'.', index)) != -1) {
				++dot_count;
				++index;
			}
			if (dot_count != 3) {
				return nullptr;
			}
			$var($bytes, v4addr, textToNumericFormatV4(ia4));
			if (v4addr == nullptr) {
				return nullptr;
			}
			for (int32_t k = 0; k < IPAddressUtil::INADDR4SZ; ++k) {
				dst->set(j++, $nc(v4addr)->get(k));
			}
			saw_xdigit = false;
			break;
		}
		return nullptr;
	}
	if (saw_xdigit) {
		if (j + IPAddressUtil::INT16SZ > IPAddressUtil::INADDR16SZ) {
			return nullptr;
		}
		dst->set(j++, (int8_t)((int32_t)((val >> 8) & (uint32_t)255)));
		dst->set(j++, (int8_t)((int32_t)(val & (uint32_t)255)));
	}
	if (colonp != -1) {
		int32_t n = j - colonp;
		if (j == IPAddressUtil::INADDR16SZ) {
			return nullptr;
		}
		for (i = 1; i <= n; ++i) {
			dst->set(IPAddressUtil::INADDR16SZ - i, dst->get(colonp + n - i));
			dst->set(colonp + n - i, (int8_t)0);
		}
		j = IPAddressUtil::INADDR16SZ;
	}
	if (j != IPAddressUtil::INADDR16SZ) {
		return nullptr;
	}
	$var($bytes, newdst, convertFromIPv4MappedAddress(dst));
	if (newdst != nullptr) {
		return newdst;
	} else {
		return dst;
	}
}

bool IPAddressUtil::isIPv4LiteralAddress($String* src) {
	$init(IPAddressUtil);
	return textToNumericFormatV4(src) != nullptr;
}

bool IPAddressUtil::isIPv6LiteralAddress($String* src) {
	$init(IPAddressUtil);
	return textToNumericFormatV6(src) != nullptr;
}

$bytes* IPAddressUtil::convertFromIPv4MappedAddress($bytes* addr) {
	$init(IPAddressUtil);
	if (isIPv4MappedAddress(addr)) {
		$var($bytes, newAddr, $new($bytes, IPAddressUtil::INADDR4SZ));
		$System::arraycopy(addr, 12, newAddr, 0, IPAddressUtil::INADDR4SZ);
		return newAddr;
	}
	return nullptr;
}

bool IPAddressUtil::isIPv4MappedAddress($bytes* addr) {
	$init(IPAddressUtil);
	if ($nc(addr)->length < IPAddressUtil::INADDR16SZ) {
		return false;
	}
	if (($nc(addr)->get(0) == 0) && (addr->get(1) == 0) && (addr->get(2) == 0) && (addr->get(3) == 0) && (addr->get(4) == 0) && (addr->get(5) == 0) && (addr->get(6) == 0) && (addr->get(7) == 0) && (addr->get(8) == 0) && (addr->get(9) == 0) && (addr->get(10) == (int8_t)255) && (addr->get(11) == (int8_t)255)) {
		return true;
	}
	return false;
}

$InetAddress* IPAddressUtil::toScopedAddress($InetAddress* address) {
	$init(IPAddressUtil);
	$useLocalCurrentObjectStackCache();
	bool var$0 = $instanceOf($Inet6Address, address) && $nc(address)->isLinkLocalAddress();
	if (var$0 && $nc(($cast($Inet6Address, address)))->getScopeId() == 0) {
		$var($InetAddress, cached, nullptr);
		try {
			$assign(cached, $cast($InetAddress, $nc(IPAddressUtil::cache)->computeIfAbsent(address, static_cast<$Function*>($$new(IPAddressUtil$$Lambda$lambda$toScopedAddress$0)))));
		} catch ($UncheckedIOException&) {
			$var($UncheckedIOException, e, $catch());
			$throw($cast($SocketException, $($cast($IOException, e->getCause()))));
		}
		return cached != nullptr ? cached : address;
	} else {
		return address;
	}
}

$InetSocketAddress* IPAddressUtil::toScopedAddress($InetSocketAddress* address) {
	$init(IPAddressUtil);
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, addr, nullptr);
	$var($InetAddress, orig, $nc(address)->getAddress());
	if (($assign(addr, toScopedAddress(orig))) == orig) {
		return address;
	} else {
		return $new($InetSocketAddress, addr, address->getPort());
	}
}

$InetAddress* IPAddressUtil::findScopedAddress($InetAddress* address) {
	$init(IPAddressUtil);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedExceptionAction, pa, static_cast<$PrivilegedExceptionAction*>($new(IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1, address)));
	$var($List, result, nullptr);
	try {
		$assign(result, $cast($List, $AccessController::doPrivileged(pa)));
		int32_t sz = $nc(result)->size();
		if (sz == 0) {
			return nullptr;
		}
		if (sz > 1) {
			$throwNew($UncheckedIOException, $$new($SocketException, "Duplicate link local addresses: must specify scope-id"_s));
		}
		return $cast($InetAddress, result->get(0));
	} catch ($PrivilegedActionException&) {
		$var($PrivilegedActionException, pae, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

bool IPAddressUtil::match(char16_t c, int64_t lowMask, int64_t highMask) {
	$init(IPAddressUtil);
	if (c < 64) {
		return ((int64_t)(($sl((int64_t)1, c)) & (uint64_t)lowMask)) != 0;
	}
	if (c < 128) {
		return ((int64_t)(($sl((int64_t)1, c - 64)) & (uint64_t)highMask)) != 0;
	}
	return false;
}

int32_t IPAddressUtil::scan($String* s, int64_t lowMask, int64_t highMask) {
	$init(IPAddressUtil);
	int32_t i = -1;
	int32_t len = 0;
	if (s == nullptr || (len = $nc(s)->length()) == 0) {
		return -1;
	}
	bool match = false;
	while (true) {
		bool var$0 = ++i < len;
		if (!(var$0 && !(match = IPAddressUtil::match($nc(s)->charAt(i), lowMask, highMask)))) {
			break;
		}
		{
		}
	}
	if (match) {
		return i;
	}
	return -1;
}

int32_t IPAddressUtil::scan($String* s, int64_t lowMask, int64_t highMask, $chars* others) {
	$init(IPAddressUtil);
	int32_t i = -1;
	int32_t len = 0;
	if (s == nullptr || (len = $nc(s)->length()) == 0) {
		return -1;
	}
	bool match = false;
	char16_t c = 0;
	char16_t c0 = $nc(others)->get(0);
	while (true) {
		bool var$0 = ++i < len;
		if (!(var$0 && !(match = IPAddressUtil::match((c = $nc(s)->charAt(i)), lowMask, highMask)))) {
			break;
		}
		{
			if (c >= c0 && ($Arrays::binarySearch(others, c) > -1)) {
				match = true;
				break;
			}
		}
	}
	if (match) {
		return i;
	}
	return -1;
}

$String* IPAddressUtil::describeChar(char16_t c) {
	$init(IPAddressUtil);
	$useLocalCurrentObjectStackCache();
	if (c < 32 || c == 127) {
		if (c == u'\n') {
			return "LF"_s;
		}
		if (c == u'\r') {
			return "CR"_s;
		}
		return $str({"control char (code="_s, $$str((int32_t)c), ")"_s});
	}
	if (c == u'\\') {
		return "\'\\\'"_s;
	}
	return $str({"\'"_s, $$str(c), "\'"_s});
}

$String* IPAddressUtil::checkUserInfo($String* str) {
	$init(IPAddressUtil);
	int32_t index = scan(str, (int64_t)(IPAddressUtil::L_EXCLUDE & (uint64_t)~IPAddressUtil::L_COLON), (int64_t)(IPAddressUtil::H_EXCLUDE & (uint64_t)~IPAddressUtil::H_COLON));
	if (index >= 0) {
		return $str({"Illegal character found in user-info: "_s, $(describeChar($nc(str)->charAt(index)))});
	}
	return nullptr;
}

$String* IPAddressUtil::checkHost($String* str$renamed) {
	$init(IPAddressUtil);
	$useLocalCurrentObjectStackCache();
	$var($String, str, str$renamed);
	int32_t index = 0;
	bool var$0 = $nc(str)->startsWith("["_s);
	if (var$0 && str->endsWith("]"_s)) {
		$assign(str, str->substring(1, str->length() - 1));
		if (isIPv6LiteralAddress(str)) {
			index = str->indexOf((int32_t)u'%');
			if (index >= 0) {
				index = scan($assign(str, str->substring(index)), IPAddressUtil::L_NON_PRINTABLE | IPAddressUtil::L_IPV6_DELIMS, IPAddressUtil::H_NON_PRINTABLE | IPAddressUtil::H_IPV6_DELIMS);
				if (index >= 0) {
					return $str({"Illegal character found in IPv6 scoped address: "_s, $(describeChar(str->charAt(index)))});
				}
			}
			return nullptr;
		}
		return "Unrecognized IPv6 address format"_s;
	} else {
		index = scan(str, IPAddressUtil::L_EXCLUDE, IPAddressUtil::H_EXCLUDE);
		if (index >= 0) {
			return $str({"Illegal character found in host: "_s, $(describeChar(str->charAt(index)))});
		}
	}
	return nullptr;
}

$String* IPAddressUtil::checkAuth($String* str) {
	$init(IPAddressUtil);
	int32_t index = scan(str, (int64_t)(IPAddressUtil::L_EXCLUDE & (uint64_t)~IPAddressUtil::L_AUTH_DELIMS), (int64_t)(IPAddressUtil::H_EXCLUDE & (uint64_t)~IPAddressUtil::H_AUTH_DELIMS));
	if (index >= 0) {
		return $str({"Illegal character found in authority: "_s, $(describeChar($nc(str)->charAt(index)))});
	}
	return nullptr;
}

$String* IPAddressUtil::checkAuthority($URL* url) {
	$init(IPAddressUtil);
	$useLocalCurrentObjectStackCache();
	$var($String, s, nullptr);
	$var($String, u, nullptr);
	$var($String, h, nullptr);
	if (url == nullptr) {
		return nullptr;
	}
	if (($assign(s, checkUserInfo($assign(u, $nc(url)->getUserInfo())))) != nullptr) {
		return s;
	}
	if (($assign(s, checkHost($assign(h, $nc(url)->getHost())))) != nullptr) {
		return s;
	}
	if (h == nullptr && u == nullptr) {
		return checkAuth($($nc(url)->getAuthority()));
	}
	return nullptr;
}

$String* IPAddressUtil::checkExternalForm($URL* url) {
	$init(IPAddressUtil);
	$useLocalCurrentObjectStackCache();
	$var($String, s, nullptr);
	if (url == nullptr) {
		return nullptr;
	}
	int32_t index = scan($assign(s, $nc(url)->getUserInfo()), IPAddressUtil::L_NON_PRINTABLE | IPAddressUtil::L_SLASH, IPAddressUtil::H_NON_PRINTABLE | IPAddressUtil::H_SLASH);
	if (index >= 0) {
		return $str({"Illegal character found in authority: "_s, $(describeChar($nc(s)->charAt(index)))});
	}
	if (($assign(s, checkHostString($($nc(url)->getHost())))) != nullptr) {
		return s;
	}
	return nullptr;
}

$String* IPAddressUtil::checkHostString($String* host) {
	$init(IPAddressUtil);
	if (host == nullptr) {
		return nullptr;
	}
	int32_t index = scan(host, IPAddressUtil::L_NON_PRINTABLE | IPAddressUtil::L_SLASH, IPAddressUtil::H_NON_PRINTABLE | IPAddressUtil::H_SLASH, IPAddressUtil::OTHERS);
	if (index >= 0) {
		return $str({"Illegal character found in host: "_s, $(describeChar($nc(host)->charAt(index)))});
	}
	return nullptr;
}

$List* IPAddressUtil::lambda$findScopedAddress$2($InetAddress* address) {
	$init(IPAddressUtil);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc($($NetworkInterface::networkInterfaces()))->flatMap(static_cast<$Function*>($$new(IPAddressUtil$$Lambda$inetAddresses$2)))))->filter(static_cast<$Predicate*>($$new(IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3, address)))))->toList();
}

bool IPAddressUtil::lambda$findScopedAddress$1($InetAddress* address, $InetAddress* a) {
	$init(IPAddressUtil);
	bool var$0 = ($instanceOf($Inet6Address, a)) && $nc(address)->equals(a);
	return var$0 && $nc(($cast($Inet6Address, a)))->getScopeId() != 0;
}

$InetAddress* IPAddressUtil::lambda$toScopedAddress$0($InetAddress* k) {
	$init(IPAddressUtil);
	return findScopedAddress(k);
}

void clinit$IPAddressUtil($Class* class$) {
	$assignStatic(IPAddressUtil::cache, $new($ConcurrentHashMap));
	$assignStatic(IPAddressUtil::OTHERS, $new($chars, {
		(char16_t)8263,
		(char16_t)8264,
		(char16_t)8265,
		(char16_t)8448,
		(char16_t)8449,
		(char16_t)8453,
		(char16_t)8454,
		(char16_t)10868,
		(char16_t)0x0000FE55,
		(char16_t)0x0000FE56,
		(char16_t)0x0000FE5F,
		(char16_t)0x0000FE6B,
		(char16_t)0x0000FF03,
		(char16_t)0x0000FF0F,
		(char16_t)0x0000FF1A,
		(char16_t)0x0000FF1F,
		(char16_t)0x0000FF20
	}));
}

IPAddressUtil::IPAddressUtil() {
}

$Class* IPAddressUtil::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(IPAddressUtil$$Lambda$lambda$toScopedAddress$0::classInfo$.name)) {
			return IPAddressUtil$$Lambda$lambda$toScopedAddress$0::load$(name, initialize);
		}
		if (name->equals(IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1::classInfo$.name)) {
			return IPAddressUtil$$Lambda$lambda$findScopedAddress$2$1::load$(name, initialize);
		}
		if (name->equals(IPAddressUtil$$Lambda$inetAddresses$2::classInfo$.name)) {
			return IPAddressUtil$$Lambda$inetAddresses$2::load$(name, initialize);
		}
		if (name->equals(IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3::classInfo$.name)) {
			return IPAddressUtil$$Lambda$lambda$findScopedAddress$1$3::load$(name, initialize);
		}
	}
	$loadClass(IPAddressUtil, name, initialize, &_IPAddressUtil_ClassInfo_, clinit$IPAddressUtil, allocate$IPAddressUtil);
	return class$;
}

$Class* IPAddressUtil::class$ = nullptr;

		} // util
	} // net
} // sun