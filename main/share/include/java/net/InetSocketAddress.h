#ifndef _java_net_InetSocketAddress_h_
#define _java_net_InetSocketAddress_h_
//$ class java.net.InetSocketAddress
//$ extends java.net.SocketAddress

#include <java/lang/Array.h>
#include <java/net/SocketAddress.h>

#pragma push_macro("FIELDS_OFFSET")
#undef FIELDS_OFFSET
#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class InetSocketAddress$InetSocketAddressHolder;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace net {

class $import InetSocketAddress : public ::java::net::SocketAddress {
	$class(InetSocketAddress, 0, ::java::net::SocketAddress)
public:
	InetSocketAddress();
	void init$(int32_t port);
	void init$(::java::net::InetAddress* addr, int32_t port);
	void init$($String* hostname, int32_t port);
	void init$(int32_t port, $String* hostname);
	static $String* checkHost($String* hostname);
	static int32_t checkPort(int32_t port);
	static ::java::net::InetSocketAddress* createUnresolved($String* host, int32_t port);
	virtual bool equals(Object$* obj) override;
	::java::net::InetAddress* getAddress();
	$String* getHostName();
	$String* getHostString();
	int32_t getPort();
	virtual int32_t hashCode() override;
	bool isUnresolved();
	void readObject(::java::io::ObjectInputStream* in);
	void readObjectNoData();
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::net::InetSocketAddress$InetSocketAddressHolder* holder = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x467194616FF9AA45;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static int64_t FIELDS_OFFSET;
};

	} // net
} // java

#pragma pop_macro("FIELDS_OFFSET")
#pragma pop_macro("UNSAFE")

#endif // _java_net_InetSocketAddress_h_