#ifndef _java_net_UrlDeserializedState_h_
#define _java_net_UrlDeserializedState_h_
//$ class java.net.UrlDeserializedState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {

class UrlDeserializedState : public ::java::lang::Object {
	$class(UrlDeserializedState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UrlDeserializedState();
	void init$($String* protocol, $String* host, int32_t port, $String* authority, $String* file, $String* ref, int32_t hashCode);
	$String* getAuthority();
	$String* getFile();
	int32_t getHashCode();
	$String* getHost();
	int32_t getPort();
	$String* getProtocol();
	$String* getRef();
	$String* reconstituteUrlString();
	$String* protocol = nullptr;
	$String* host = nullptr;
	int32_t port = 0;
	$String* authority = nullptr;
	$String* file = nullptr;
	$String* ref = nullptr;
	int32_t hashCode$ = 0;
};

	} // net
} // java

#endif // _java_net_UrlDeserializedState_h_