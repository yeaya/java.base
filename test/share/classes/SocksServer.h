#ifndef _SocksServer_h_
#define _SocksServer_h_
//$ class SocksServer
//$ extends java.lang.Thread
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Thread.h>

#pragma push_macro("ADDR_TYPE_NOT_SUP")
#undef ADDR_TYPE_NOT_SUP
#pragma push_macro("BIND")
#undef BIND
#pragma push_macro("CMD_NOT_SUPPORTED")
#undef CMD_NOT_SUPPORTED
#pragma push_macro("CONNECT")
#undef CONNECT
#pragma push_macro("CONN_REFUSED")
#undef CONN_REFUSED
#pragma push_macro("DEFAULT_PORT")
#undef DEFAULT_PORT
#pragma push_macro("DOMAIN_NAME")
#undef DOMAIN_NAME
#pragma push_macro("GENERAL_FAILURE")
#undef GENERAL_FAILURE
#pragma push_macro("GSSAPI")
#undef GSSAPI
#pragma push_macro("HOST_UNREACHABLE")
#undef HOST_UNREACHABLE
#pragma push_macro("IPV4")
#undef IPV4
#pragma push_macro("IPV6")
#undef IPV6
#pragma push_macro("NET_UNREACHABLE")
#undef NET_UNREACHABLE
#pragma push_macro("NOT_ALLOWED")
#undef NOT_ALLOWED
#pragma push_macro("NO_AUTH")
#undef NO_AUTH
#pragma push_macro("NO_METHODS")
#undef NO_METHODS
#pragma push_macro("PROTO_VERS")
#undef PROTO_VERS
#pragma push_macro("PROTO_VERS4")
#undef PROTO_VERS4
#pragma push_macro("REQUEST_OK")
#undef REQUEST_OK
#pragma push_macro("TTL_EXPIRED")
#undef TTL_EXPIRED
#pragma push_macro("UDP_ASSOC")
#undef UDP_ASSOC
#pragma push_macro("USER_PASSW")
#undef USER_PASSW

namespace java {
	namespace net {
		class InetAddress;
		class ServerSocket;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

class $export SocksServer : public ::java::lang::Thread, public ::java::io::Closeable {
	$class(SocksServer, 0, ::java::lang::Thread, ::java::io::Closeable)
public:
	SocksServer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t port, bool v4);
	void init$(int32_t port);
	void init$(::java::net::InetAddress* addr, int32_t port, bool useV4);
	void init$();
	virtual void addUser($String* user, $String* passwd);
	virtual void close() override;
	virtual int32_t getPort();
	virtual void run() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static const int32_t PROTO_VERS4 = 4;
	static const int32_t PROTO_VERS = 5;
	static const int32_t DEFAULT_PORT = 1080;
	static const int32_t NO_AUTH = 0;
	static const int32_t GSSAPI = 1;
	static const int32_t USER_PASSW = 2;
	static const int32_t NO_METHODS = (-1);
	static const int32_t CONNECT = 1;
	static const int32_t BIND = 2;
	static const int32_t UDP_ASSOC = 3;
	static const int32_t IPV4 = 1;
	static const int32_t DOMAIN_NAME = 3;
	static const int32_t IPV6 = 4;
	static const int32_t REQUEST_OK = 0;
	static const int32_t GENERAL_FAILURE = 1;
	static const int32_t NOT_ALLOWED = 2;
	static const int32_t NET_UNREACHABLE = 3;
	static const int32_t HOST_UNREACHABLE = 4;
	static const int32_t CONN_REFUSED = 5;
	static const int32_t TTL_EXPIRED = 6;
	static const int32_t CMD_NOT_SUPPORTED = 7;
	static const int32_t ADDR_TYPE_NOT_SUP = 8;
	int32_t port = 0;
	::java::net::ServerSocket* server = nullptr;
	bool useV4 = false;
	::java::util::HashMap* users = nullptr;
	$volatile(bool) done = false;
};

#pragma pop_macro("ADDR_TYPE_NOT_SUP")
#pragma pop_macro("BIND")
#pragma pop_macro("CMD_NOT_SUPPORTED")
#pragma pop_macro("CONNECT")
#pragma pop_macro("CONN_REFUSED")
#pragma pop_macro("DEFAULT_PORT")
#pragma pop_macro("DOMAIN_NAME")
#pragma pop_macro("GENERAL_FAILURE")
#pragma pop_macro("GSSAPI")
#pragma pop_macro("HOST_UNREACHABLE")
#pragma pop_macro("IPV4")
#pragma pop_macro("IPV6")
#pragma pop_macro("NET_UNREACHABLE")
#pragma pop_macro("NOT_ALLOWED")
#pragma pop_macro("NO_AUTH")
#pragma pop_macro("NO_METHODS")
#pragma pop_macro("PROTO_VERS")
#pragma pop_macro("PROTO_VERS4")
#pragma pop_macro("REQUEST_OK")
#pragma pop_macro("TTL_EXPIRED")
#pragma pop_macro("UDP_ASSOC")
#pragma pop_macro("USER_PASSW")

#endif // _SocksServer_h_