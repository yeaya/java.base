#ifndef _sun_net_spi_DefaultProxySelector$NonProxyInfo_h_
#define _sun_net_spi_DefaultProxySelector$NonProxyInfo_h_
//$ class sun.net.spi.DefaultProxySelector$NonProxyInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace sun {
	namespace net {
		namespace spi {

class DefaultProxySelector$NonProxyInfo : public ::java::lang::Object {
	$class(DefaultProxySelector$NonProxyInfo, 0, ::java::lang::Object)
public:
	DefaultProxySelector$NonProxyInfo();
	void init$($String* p, $String* s, ::java::util::regex::Pattern* pattern, $String* d);
	static $String* defStringVal;
	$String* hostsSource = nullptr;
	::java::util::regex::Pattern* pattern = nullptr;
	$String* property = nullptr;
	$String* defaultVal = nullptr;
	static ::sun::net::spi::DefaultProxySelector$NonProxyInfo* ftpNonProxyInfo;
	static ::sun::net::spi::DefaultProxySelector$NonProxyInfo* httpNonProxyInfo;
	static ::sun::net::spi::DefaultProxySelector$NonProxyInfo* socksNonProxyInfo;
};

		} // spi
	} // net
} // sun

#endif // _sun_net_spi_DefaultProxySelector$NonProxyInfo_h_