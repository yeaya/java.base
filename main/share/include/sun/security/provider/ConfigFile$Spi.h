#ifndef _sun_security_provider_ConfigFile$Spi_h_
#define _sun_security_provider_ConfigFile$Spi_h_
//$ class sun.security.provider.ConfigFile$Spi
//$ extends javax.security.auth.login.ConfigurationSpi

#include <java/lang/Array.h>
#include <javax/security/auth/login/ConfigurationSpi.h>

namespace java {
	namespace io {
		class IOException;
		class InputStream;
		class Reader;
		class StreamTokenizer;
	}
}
namespace java {
	namespace net {
		class URI;
		class URL;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class AppConfigurationEntry;
				class Configuration$Parameters;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import ConfigFile$Spi : public ::javax::security::auth::login::ConfigurationSpi {
	$class(ConfigFile$Spi, 0, ::javax::security::auth::login::ConfigurationSpi)
public:
	ConfigFile$Spi();
	void init$();
	void init$(::java::net::URI* uri);
	void init$(::javax::security::auth::login::Configuration$Parameters* params);
	virtual $Array<::javax::security::auth::login::AppConfigurationEntry>* engineGetAppConfigurationEntry($String* applicationName) override;
	virtual void engineRefresh() override;
	$String* expand($String* value);
	::java::io::InputStream* getInputStream(::java::net::URL* url);
	void init();
	void init(::java::net::URL* config, ::java::util::Map* newConfig);
	::java::io::IOException* ioException($String* resourceKey, $ObjectArray* args);
	$String* match($String* expect);
	int32_t nextToken();
	void parseLoginEntry(::java::util::Map* newConfig);
	bool peek($String* expect);
	void readConfig(::java::io::Reader* reader, ::java::util::Map* newConfig);
	::java::net::URL* url = nullptr;
	bool expandProp = false;
	::java::util::Map* configuration = nullptr;
	int32_t linenum = 0;
	::java::io::StreamTokenizer* st = nullptr;
	int32_t lookahead = 0;
	static ::sun::security::util::Debug* debugConfig;
	static ::sun::security::util::Debug* debugParser;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_ConfigFile$Spi_h_