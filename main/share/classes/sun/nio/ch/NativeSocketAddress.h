#ifndef _sun_nio_ch_NativeSocketAddress_h_
#define _sun_nio_ch_NativeSocketAddress_h_
//$ class sun.nio.ch.NativeSocketAddress
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OFFSET_SIN4_PORT")
#undef OFFSET_SIN4_PORT
#pragma push_macro("SIZEOF_SOCKADDR6")
#undef SIZEOF_SOCKADDR6
#pragma push_macro("SIZEOF_SOCKADDR4")
#undef SIZEOF_SOCKADDR4
#pragma push_macro("OFFSET_SIN6_FLOWINFO")
#undef OFFSET_SIN6_FLOWINFO
#pragma push_macro("SIZEOF_FAMILY")
#undef SIZEOF_FAMILY
#pragma push_macro("AF_INET")
#undef AF_INET
#pragma push_macro("AF_INET6")
#undef AF_INET6
#pragma push_macro("SIZEOF_SOCKETADDRESS")
#undef SIZEOF_SOCKETADDRESS
#pragma push_macro("JNINA")
#undef JNINA
#pragma push_macro("OFFSET_SIN6_SCOPE_ID")
#undef OFFSET_SIN6_SCOPE_ID
#pragma push_macro("OFFSET_SIN6_PORT")
#undef OFFSET_SIN6_PORT
#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("OFFSET_SIN4_ADDR")
#undef OFFSET_SIN4_ADDR
#pragma push_macro("OFFSET_FAMILY")
#undef OFFSET_FAMILY
#pragma push_macro("UNSAFE")
#undef UNSAFE
#pragma push_macro("OFFSET_SIN6_ADDR")
#undef OFFSET_SIN6_ADDR

namespace java {
	namespace net {
		class Inet4Address;
		class Inet6Address;
		class InetAddress;
		class InetSocketAddress;
		class ProtocolFamily;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaNetInetAddressAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class NativeSocketAddress : public ::java::lang::Object {
	$class(NativeSocketAddress, 0, ::java::lang::Object)
public:
	NativeSocketAddress();
	void init$();
	static int32_t AFINET();
	static int32_t AFINET6();
	virtual int64_t address();
	::java::net::InetAddress* address(int32_t family);
	static $Array<::sun::nio::ch::NativeSocketAddress>* allocate(int32_t count);
	virtual ::java::net::InetSocketAddress* decode();
	virtual int32_t encode(::java::net::ProtocolFamily* protocolFamily, ::java::net::InetSocketAddress* isa);
	virtual bool equals(Object$* other) override;
	int32_t family();
	static void freeAll($Array<::sun::nio::ch::NativeSocketAddress>* array);
	virtual int32_t hashCode() override;
	int32_t mismatch(::sun::nio::ch::NativeSocketAddress* other);
	static int32_t offsetFamily();
	static int32_t offsetSin4Addr();
	static int32_t offsetSin4Port();
	static int32_t offsetSin6Addr();
	static int32_t offsetSin6FlowInfo();
	static int32_t offsetSin6Port();
	static int32_t offsetSin6ScopeId();
	int32_t port(int32_t family);
	void putAddress(int32_t family, ::java::net::InetAddress* ia);
	static void putAddress(int64_t address, ::java::net::Inet4Address* ia);
	static void putAddress(int64_t address, ::java::net::Inet6Address* ia);
	void putFamily(int32_t family);
	void putPort(int32_t family, int32_t port);
	static int32_t sizeofFamily();
	static int32_t sizeofSockAddr4();
	static int32_t sizeofSockAddr6();
	virtual $String* toString() override;
	static ::jdk::internal::access::JavaNetInetAddressAccess* JNINA;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static int64_t ARRAY_BASE_OFFSET;
	static int32_t AF_INET;
	static int32_t AF_INET6;
	static int32_t SIZEOF_SOCKADDR4;
	static int32_t SIZEOF_SOCKADDR6;
	static int32_t SIZEOF_SOCKETADDRESS;
	static int32_t SIZEOF_FAMILY;
	static int32_t OFFSET_FAMILY;
	static int32_t OFFSET_SIN4_PORT;
	static int32_t OFFSET_SIN4_ADDR;
	static int32_t OFFSET_SIN6_PORT;
	static int32_t OFFSET_SIN6_ADDR;
	static int32_t OFFSET_SIN6_SCOPE_ID;
	static int32_t OFFSET_SIN6_FLOWINFO;
	int64_t address$ = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("OFFSET_SIN4_PORT")
#pragma pop_macro("SIZEOF_SOCKADDR6")
#pragma pop_macro("SIZEOF_SOCKADDR4")
#pragma pop_macro("OFFSET_SIN6_FLOWINFO")
#pragma pop_macro("SIZEOF_FAMILY")
#pragma pop_macro("AF_INET")
#pragma pop_macro("AF_INET6")
#pragma pop_macro("SIZEOF_SOCKETADDRESS")
#pragma pop_macro("JNINA")
#pragma pop_macro("OFFSET_SIN6_SCOPE_ID")
#pragma pop_macro("OFFSET_SIN6_PORT")
#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("OFFSET_SIN4_ADDR")
#pragma pop_macro("OFFSET_FAMILY")
#pragma pop_macro("UNSAFE")
#pragma pop_macro("OFFSET_SIN6_ADDR")

#endif // _sun_nio_ch_NativeSocketAddress_h_