#include <sun/security/ssl/Utilities.h>

#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Appendable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HexFormat.h>
#include <java/util/List.h>
#include <java/util/regex/Pattern.h>
#include <javax/net/ssl/SNIHostName.h>
#include <javax/net/ssl/SNIServerName.h>
#include <javax/net/ssl/StandardConstants.h>
#include <sun/net/util/IPAddressUtil.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef HEX_FORMATTER
#undef SNI_HOST_NAME

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HexFormat = ::java::util::HexFormat;
using $List = ::java::util::List;
using $Pattern = ::java::util::regex::Pattern;
using $SNIHostName = ::javax::net::ssl::SNIHostName;
using $SNIServerName = ::javax::net::ssl::SNIServerName;
using $StandardConstants = ::javax::net::ssl::StandardConstants;
using $IPAddressUtil = ::sun::net::util::IPAddressUtil;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Utilities_FieldInfo_[] = {
	{"indent", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Utilities, indent$)},
	{"lineBreakPatern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Utilities, lineBreakPatern)},
	{"HEX_FORMATTER", "Ljava/util/HexFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Utilities, HEX_FORMATTER)},
	{}
};

$MethodInfo _Utilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Utilities::*)()>(&Utilities::init$))},
	{"addToSNIServerNameList", "(Ljava/util/List;Ljava/lang/String;)Ljava/util/List;", "(Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;Ljava/lang/String;)Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;", $STATIC, $method(static_cast<$List*(*)($List*,$String*)>(&Utilities::addToSNIServerNameList))},
	{"byte16HexString", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Utilities::byte16HexString))},
	{"getBooleanProperty", "(Ljava/lang/String;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*,bool)>(&Utilities::getBooleanProperty))},
	{"indent", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&Utilities::indent))},
	{"indent", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&Utilities::indent))},
	{"rawToSNIHostName", "(Ljava/lang/String;)Ljavax/net/ssl/SNIHostName;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SNIHostName*(*)($String*)>(&Utilities::rawToSNIHostName))},
	{"reverseBytes", "([B)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*)>(&Utilities::reverseBytes))},
	{"swap", "([BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&Utilities::swap))},
	{"toByteArray", "(Ljava/math/BigInteger;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($BigInteger*)>(&Utilities::toByteArray))},
	{"toHexString", "([B)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($bytes*)>(&Utilities::toHexString))},
	{"toHexString", "(J)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int64_t)>(&Utilities::toHexString))},
	{}
};

$ClassInfo _Utilities_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Utilities",
	"java.lang.Object",
	nullptr,
	_Utilities_FieldInfo_,
	_Utilities_MethodInfo_
};

$Object* allocate$Utilities($Class* clazz) {
	return $of($alloc(Utilities));
}

$String* Utilities::indent$ = nullptr;
$Pattern* Utilities::lineBreakPatern = nullptr;
$HexFormat* Utilities::HEX_FORMATTER = nullptr;

void Utilities::init$() {
}

$List* Utilities::addToSNIServerNameList($List* serverNames, $String* hostname) {
	$init(Utilities);
	$var($SNIHostName, sniHostName, rawToSNIHostName(hostname));
	if (sniHostName == nullptr) {
		return serverNames;
	}
	int32_t size = $nc(serverNames)->size();
	$var($List, sniList, (size != 0) ? static_cast<$List*>($new($ArrayList, static_cast<$Collection*>(serverNames))) : static_cast<$List*>($new($ArrayList, 1)));
	bool reset = false;
	for (int32_t i = 0; i < size; ++i) {
		$var($SNIServerName, serverName, $cast($SNIServerName, $nc(sniList)->get(i)));
		if ($nc(serverName)->getType() == $StandardConstants::SNI_HOST_NAME) {
			sniList->set(i, sniHostName);
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
				$SSLLogger::fine($$str({"the previous server name in SNI ("_s, serverName, ") was replaced with ("_s, sniHostName, ")"_s}), $$new($ObjectArray, 0));
			}
			reset = true;
			break;
		}
	}
	if (!reset) {
		$nc(sniList)->add(sniHostName);
	}
	return $Collections::unmodifiableList(sniList);
}

$SNIHostName* Utilities::rawToSNIHostName($String* hostname) {
	$init(Utilities);
	$var($SNIHostName, sniHostName, nullptr);
	bool var$2 = hostname != nullptr && hostname->indexOf((int32_t)u'.') > 0;
	bool var$1 = var$2 && !hostname->endsWith("."_s);
	bool var$0 = var$1 && !$IPAddressUtil::isIPv4LiteralAddress(hostname);
	if (var$0 && !$IPAddressUtil::isIPv6LiteralAddress(hostname)) {
		try {
			$assign(sniHostName, $new($SNIHostName, hostname));
		} catch ($IllegalArgumentException&) {
			$var($IllegalArgumentException, iae, $catch());
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
				$SSLLogger::fine($$str({hostname, "\" is not a legal HostName for  server name indication"_s}), $$new($ObjectArray, 0));
			}
		}
	}
	return sniHostName;
}

bool Utilities::getBooleanProperty($String* propName, bool defaultValue) {
	$init(Utilities);
	$var($String, b, $GetPropertyAction::privilegedGetProperty(propName));
	if (b == nullptr) {
		return defaultValue;
	} else if ($nc(b)->equalsIgnoreCase("false"_s)) {
		return false;
	} else if (b->equalsIgnoreCase("true"_s)) {
		return true;
	} else {
		$throwNew($RuntimeException, $$str({"Value of "_s, propName, " must either be \'true\' or \'false\'"_s}));
	}
}

$String* Utilities::indent($String* source) {
	$init(Utilities);
	return Utilities::indent(source, Utilities::indent$);
}

$String* Utilities::indent($String* source, $String* prefix) {
	$init(Utilities);
	$var($StringBuilder, builder, $new($StringBuilder));
	if (source == nullptr) {
		builder->append("\n"_s)->append(prefix)->append("<blank message>"_s);
	} else {
		$var($StringArray, lines, $nc(Utilities::lineBreakPatern)->split(source));
		bool isFirst = true;
		{
			$var($StringArray, arr$, lines);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, line, arr$->get(i$));
				{
					if (isFirst) {
						isFirst = false;
					} else {
						builder->append("\n"_s);
					}
					builder->append(prefix)->append(line);
				}
			}
		}
	}
	return builder->toString();
}

$String* Utilities::byte16HexString(int32_t id) {
	$init(Utilities);
	return $str({"0x"_s, $($nc(Utilities::HEX_FORMATTER)->toHexDigits((int16_t)id))});
}

$String* Utilities::toHexString($bytes* bytes) {
	$init(Utilities);
	if (bytes == nullptr || $nc(bytes)->length == 0) {
		return ""_s;
	}
	return $nc(Utilities::HEX_FORMATTER)->formatHex(bytes);
}

$String* Utilities::toHexString(int64_t lv) {
	$init(Utilities);
	$var($StringBuilder, builder, $new($StringBuilder, 128));
	bool isFirst = true;
	do {
		if (isFirst) {
			isFirst = false;
		} else {
			builder->append(u' ');
		}
		$nc(Utilities::HEX_FORMATTER)->toHexDigits(static_cast<$Appendable*>(builder), (int8_t)lv);
		$usrAssign(lv, 8);
	} while (lv != 0);
	builder->reverse();
	return builder->toString();
}

$bytes* Utilities::toByteArray($BigInteger* bi) {
	$init(Utilities);
	$var($bytes, b, $nc(bi)->toByteArray());
	if (($nc(b)->length > 1) && (b->get(0) == 0)) {
		int32_t n = b->length - 1;
		$var($bytes, newarray, $new($bytes, n));
		$System::arraycopy(b, 1, newarray, 0, n);
		$assign(b, newarray);
	}
	return b;
}

void Utilities::reverseBytes($bytes* arr) {
	$init(Utilities);
	int32_t i = 0;
	int32_t j = $nc(arr)->length - 1;
	while (i < j) {
		swap(arr, i, j);
		++i;
		--j;
	}
}

void Utilities::swap($bytes* arr, int32_t i, int32_t j) {
	$init(Utilities);
	int8_t tmp = $nc(arr)->get(i);
	arr->set(i, arr->get(j));
	arr->set(j, tmp);
}

void clinit$Utilities($Class* class$) {
	$assignStatic(Utilities::indent$, "  "_s);
	$assignStatic(Utilities::lineBreakPatern, $Pattern::compile("\\r\\n|\\n|\\r"_s));
	$assignStatic(Utilities::HEX_FORMATTER, $nc($($HexFormat::of()))->withUpperCase());
}

Utilities::Utilities() {
}

$Class* Utilities::load$($String* name, bool initialize) {
	$loadClass(Utilities, name, initialize, &_Utilities_ClassInfo_, clinit$Utilities, allocate$Utilities);
	return class$;
}

$Class* Utilities::class$ = nullptr;

		} // ssl
	} // security
} // sun