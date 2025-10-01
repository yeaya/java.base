#ifndef _sun_security_ssl_SupportedGroupsExtension$SupportedGroups_h_
#define _sun_security_ssl_SupportedGroupsExtension$SupportedGroups_h_
//$ class sun.security.ssl.SupportedGroupsExtension$SupportedGroups
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmConstraints;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class NamedGroup;
			class NamedGroup$NamedGroupSpec;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SupportedGroupsExtension$SupportedGroups : public ::java::lang::Object {
	$class(SupportedGroupsExtension$SupportedGroups, 0, ::java::lang::Object)
public:
	SupportedGroupsExtension$SupportedGroups();
	void init$();
	static ::sun::security::ssl::NamedGroup* getPreferredGroup(::sun::security::ssl::ProtocolVersion* negotiatedProtocol, ::java::security::AlgorithmConstraints* constraints, $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>* types, ::java::util::List* requestedNamedGroups);
	static ::sun::security::ssl::NamedGroup* getPreferredGroup(::sun::security::ssl::ProtocolVersion* negotiatedProtocol, ::java::security::AlgorithmConstraints* constraints, $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>* types);
	static bool isActivatable(::java::security::AlgorithmConstraints* constraints, ::sun::security::ssl::NamedGroup$NamedGroupSpec* type);
	static bool isActivatable(::java::security::AlgorithmConstraints* constraints, ::sun::security::ssl::NamedGroup* namedGroup);
	static bool isSupported(::sun::security::ssl::NamedGroup* namedGroup);
	static bool enableFFDHE;
	static $Array<::sun::security::ssl::NamedGroup>* supportedNamedGroups;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedGroupsExtension$SupportedGroups_h_