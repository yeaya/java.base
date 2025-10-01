#ifndef _java_net_InetAddress$CachedAddresses_h_
#define _java_net_InetAddress$CachedAddresses_h_
//$ class java.net.InetAddress$CachedAddresses
//$ extends java.net.InetAddress$Addresses
//$ implements java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>
#include <java/net/InetAddress$Addresses.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}

namespace java {
	namespace net {

class InetAddress$CachedAddresses : public ::java::net::InetAddress$Addresses, public ::java::lang::Comparable {
	$class(InetAddress$CachedAddresses, 0, ::java::net::InetAddress$Addresses, ::java::lang::Comparable)
public:
	InetAddress$CachedAddresses();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* host, $Array<::java::net::InetAddress>* inetAddresses, int64_t expiryTime);
	int32_t compareTo(::java::net::InetAddress$CachedAddresses* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual $Array<::java::net::InetAddress>* get() override;
	virtual $String* toString() override;
	static ::java::util::concurrent::atomic::AtomicLong* seq;
	$String* host = nullptr;
	$Array<::java::net::InetAddress>* inetAddresses = nullptr;
	int64_t expiryTime = 0;
	int64_t id = 0;
};

	} // net
} // java

#endif // _java_net_InetAddress$CachedAddresses_h_