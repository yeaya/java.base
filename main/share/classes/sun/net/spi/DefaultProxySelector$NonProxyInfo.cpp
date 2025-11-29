#include <sun/net/spi/DefaultProxySelector$NonProxyInfo.h>

#include <java/util/regex/Pattern.h>
#include <sun/net/spi/DefaultProxySelector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace sun {
	namespace net {
		namespace spi {

$FieldInfo _DefaultProxySelector$NonProxyInfo_FieldInfo_[] = {
	{"defStringVal", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DefaultProxySelector$NonProxyInfo, defStringVal)},
	{"hostsSource", "Ljava/lang/String;", nullptr, 0, $field(DefaultProxySelector$NonProxyInfo, hostsSource)},
	{"pattern", "Ljava/util/regex/Pattern;", nullptr, 0, $field(DefaultProxySelector$NonProxyInfo, pattern)},
	{"property", "Ljava/lang/String;", nullptr, $FINAL, $field(DefaultProxySelector$NonProxyInfo, property)},
	{"defaultVal", "Ljava/lang/String;", nullptr, $FINAL, $field(DefaultProxySelector$NonProxyInfo, defaultVal)},
	{"ftpNonProxyInfo", "Lsun/net/spi/DefaultProxySelector$NonProxyInfo;", nullptr, $STATIC, $staticField(DefaultProxySelector$NonProxyInfo, ftpNonProxyInfo)},
	{"httpNonProxyInfo", "Lsun/net/spi/DefaultProxySelector$NonProxyInfo;", nullptr, $STATIC, $staticField(DefaultProxySelector$NonProxyInfo, httpNonProxyInfo)},
	{"socksNonProxyInfo", "Lsun/net/spi/DefaultProxySelector$NonProxyInfo;", nullptr, $STATIC, $staticField(DefaultProxySelector$NonProxyInfo, socksNonProxyInfo)},
	{}
};

$MethodInfo _DefaultProxySelector$NonProxyInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/regex/Pattern;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DefaultProxySelector$NonProxyInfo::*)($String*,$String*,$Pattern*,$String*)>(&DefaultProxySelector$NonProxyInfo::init$))},
	{}
};

$InnerClassInfo _DefaultProxySelector$NonProxyInfo_InnerClassesInfo_[] = {
	{"sun.net.spi.DefaultProxySelector$NonProxyInfo", "sun.net.spi.DefaultProxySelector", "NonProxyInfo", $STATIC},
	{}
};

$ClassInfo _DefaultProxySelector$NonProxyInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.spi.DefaultProxySelector$NonProxyInfo",
	"java.lang.Object",
	nullptr,
	_DefaultProxySelector$NonProxyInfo_FieldInfo_,
	_DefaultProxySelector$NonProxyInfo_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultProxySelector$NonProxyInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.spi.DefaultProxySelector"
};

$Object* allocate$DefaultProxySelector$NonProxyInfo($Class* clazz) {
	return $of($alloc(DefaultProxySelector$NonProxyInfo));
}

$String* DefaultProxySelector$NonProxyInfo::defStringVal = nullptr;
DefaultProxySelector$NonProxyInfo* DefaultProxySelector$NonProxyInfo::ftpNonProxyInfo = nullptr;
DefaultProxySelector$NonProxyInfo* DefaultProxySelector$NonProxyInfo::httpNonProxyInfo = nullptr;
DefaultProxySelector$NonProxyInfo* DefaultProxySelector$NonProxyInfo::socksNonProxyInfo = nullptr;

void DefaultProxySelector$NonProxyInfo::init$($String* p, $String* s, $Pattern* pattern, $String* d) {
	$set(this, property, p);
	$set(this, hostsSource, s);
	$set(this, pattern, pattern);
	$set(this, defaultVal, d);
}

void clinit$DefaultProxySelector$NonProxyInfo($Class* class$) {
	$assignStatic(DefaultProxySelector$NonProxyInfo::defStringVal, "localhost|127.*|[::1]|0.0.0.0|[::0]"_s);
	$assignStatic(DefaultProxySelector$NonProxyInfo::ftpNonProxyInfo, $new(DefaultProxySelector$NonProxyInfo, "ftp.nonProxyHosts"_s, nullptr, nullptr, DefaultProxySelector$NonProxyInfo::defStringVal));
	$assignStatic(DefaultProxySelector$NonProxyInfo::httpNonProxyInfo, $new(DefaultProxySelector$NonProxyInfo, "http.nonProxyHosts"_s, nullptr, nullptr, DefaultProxySelector$NonProxyInfo::defStringVal));
	$assignStatic(DefaultProxySelector$NonProxyInfo::socksNonProxyInfo, $new(DefaultProxySelector$NonProxyInfo, "socksNonProxyHosts"_s, nullptr, nullptr, DefaultProxySelector$NonProxyInfo::defStringVal));
}

DefaultProxySelector$NonProxyInfo::DefaultProxySelector$NonProxyInfo() {
}

$Class* DefaultProxySelector$NonProxyInfo::load$($String* name, bool initialize) {
	$loadClass(DefaultProxySelector$NonProxyInfo, name, initialize, &_DefaultProxySelector$NonProxyInfo_ClassInfo_, clinit$DefaultProxySelector$NonProxyInfo, allocate$DefaultProxySelector$NonProxyInfo);
	return class$;
}

$Class* DefaultProxySelector$NonProxyInfo::class$ = nullptr;

		} // spi
	} // net
} // sun