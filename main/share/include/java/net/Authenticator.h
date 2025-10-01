#ifndef _java_net_Authenticator_h_
#define _java_net_Authenticator_h_
//$ class java.net.Authenticator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class Authenticator$RequestorType;
		class InetAddress;
		class PasswordAuthentication;
		class URL;
	}
}

namespace java {
	namespace net {

class $import Authenticator : public ::java::lang::Object {
	$class(Authenticator, 0, ::java::lang::Object)
public:
	Authenticator();
	void init$();
	static ::java::net::Authenticator* getDefault();
	static $String* getKey(::java::net::Authenticator* a);
	virtual ::java::net::PasswordAuthentication* getPasswordAuthentication();
	$String* getRequestingHost();
	int32_t getRequestingPort();
	$String* getRequestingPrompt();
	$String* getRequestingProtocol();
	$String* getRequestingScheme();
	::java::net::InetAddress* getRequestingSite();
	virtual ::java::net::URL* getRequestingURL();
	virtual ::java::net::Authenticator$RequestorType* getRequestorType();
	static ::java::net::PasswordAuthentication* requestPasswordAuthentication(::java::net::InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme);
	static ::java::net::PasswordAuthentication* requestPasswordAuthentication($String* host, ::java::net::InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme);
	static ::java::net::PasswordAuthentication* requestPasswordAuthentication($String* host, ::java::net::InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme, ::java::net::URL* url, ::java::net::Authenticator$RequestorType* reqType);
	static ::java::net::PasswordAuthentication* requestPasswordAuthentication(::java::net::Authenticator* authenticator, $String* host, ::java::net::InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme, ::java::net::URL* url, ::java::net::Authenticator$RequestorType* reqType);
	virtual ::java::net::PasswordAuthentication* requestPasswordAuthenticationInstance($String* host, ::java::net::InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme, ::java::net::URL* url, ::java::net::Authenticator$RequestorType* reqType);
	void reset();
	static void setDefault(::java::net::Authenticator* a);
	static $volatile(::java::net::Authenticator*) theAuthenticator;
	$String* requestingHost = nullptr;
	::java::net::InetAddress* requestingSite = nullptr;
	int32_t requestingPort = 0;
	$String* requestingProtocol = nullptr;
	$String* requestingPrompt = nullptr;
	$String* requestingScheme = nullptr;
	::java::net::URL* requestingURL = nullptr;
	::java::net::Authenticator$RequestorType* requestingAuthType = nullptr;
	$String* key = nullptr;
};

	} // net
} // java

#endif // _java_net_Authenticator_h_