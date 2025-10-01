#ifndef _java_net_SocketPermission_h_
#define _java_net_SocketPermission_h_
//$ class java.net.SocketPermission
//$ extends java.security.Permission

#include <java/lang/Array.h>
#include <java/security/Permission.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("ACCEPT")
#undef ACCEPT
#pragma push_macro("PRIV_PORT_MAX")
#undef PRIV_PORT_MAX
#pragma push_macro("PORT_MAX")
#undef PORT_MAX
#pragma push_macro("PORT_MIN")
#undef PORT_MIN
#pragma push_macro("RESOLVE")
#undef RESOLVE
#pragma push_macro("CONNECT")
#undef CONNECT
#pragma push_macro("LISTEN")
#undef LISTEN
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("DEF_EPH_LOW")
#undef DEF_EPH_LOW

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace java {
	namespace security {
		class PermissionCollection;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace net {

class $export SocketPermission : public ::java::security::Permission {
	$class(SocketPermission, 0, ::java::security::Permission)
public:
	SocketPermission();
	void init$($String* host, $String* action);
	void init$($String* host, int32_t mask);
	bool authorized($String* cname, $bytes* addr);
	bool authorizedIPv4($String* cname, $bytes* addr);
	bool authorizedIPv6($String* cname, $bytes* addr);
	static $String* checkForIDN($String* name);
	bool compareHostnames(::java::net::SocketPermission* that);
	virtual bool equals(Object$* obj) override;
	static $String* getActions(int32_t mask);
	virtual $String* getActions() override;
	void getCanonName();
	static ::sun::security::util::Debug* getDebug();
	static $String* getHost($String* host);
	void getIP();
	static int32_t getMask($String* action);
	int32_t getMask();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	bool impliesIgnoreMask(::java::net::SocketPermission* that);
	static bool inRange(int32_t policyLow, int32_t policyHigh, int32_t targetLow, int32_t targetHigh);
	bool includesEphemerals();
	void init($String* host, int32_t mask);
	static int32_t initEphemeralPorts($String* suffix, int32_t defval);
	bool isUntrusted();
	bool match($String* cname, $String* hname);
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	$ints* parsePort($String* port);
	void readObject(::java::io::ObjectInputStream* s);
	void setDeny();
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x9C0550349E530942;
	static const int32_t CONNECT = 1;
	static const int32_t LISTEN = 2;
	static const int32_t ACCEPT = 4;
	static const int32_t RESOLVE = 8;
	static const int32_t NONE = 0;
	static const int32_t ALL = 15; // CONNECT | LISTEN | ACCEPT | RESOLVE
	static const int32_t PORT_MIN = 0;
	static const int32_t PORT_MAX = 0x0000FFFF;
	static const int32_t PRIV_PORT_MAX = 1023;
	static const int32_t DEF_EPH_LOW = 0x0000C000;
	int32_t mask = 0;
	$String* actions = nullptr;
	$String* hostname = nullptr;
	$String* cname = nullptr;
	$Array<::java::net::InetAddress>* addresses = nullptr;
	bool wildcard = false;
	bool init_with_ip = false;
	bool invalid = false;
	$ints* portrange = nullptr;
	bool defaultDeny = false;
	bool untrusted = false;
	bool trusted = false;
	static bool trustNameService;
	static ::sun::security::util::Debug* debug;
	static bool debugInit;
	$String* cdomain = nullptr;
	$String* hdomain = nullptr;
};

	} // net
} // java

#pragma pop_macro("ALL")
#pragma pop_macro("ACCEPT")
#pragma pop_macro("PRIV_PORT_MAX")
#pragma pop_macro("PORT_MAX")
#pragma pop_macro("PORT_MIN")
#pragma pop_macro("RESOLVE")
#pragma pop_macro("CONNECT")
#pragma pop_macro("LISTEN")
#pragma pop_macro("NONE")
#pragma pop_macro("DEF_EPH_LOW")

#endif // _java_net_SocketPermission_h_