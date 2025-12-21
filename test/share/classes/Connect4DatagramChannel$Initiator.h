#ifndef _Connect4DatagramChannel$Initiator_h_
#define _Connect4DatagramChannel$Initiator_h_
//$ class Connect4DatagramChannel$Initiator
//$ extends java.lang.AutoCloseable
//$ implements java.lang.Runnable

#include <java/lang/AutoCloseable.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}

class $export Connect4DatagramChannel$Initiator : public ::java::lang::AutoCloseable, public ::java::lang::Runnable {
	$class(Connect4DatagramChannel$Initiator, $NO_CLASS_INIT, ::java::lang::AutoCloseable, ::java::lang::Runnable)
public:
	Connect4DatagramChannel$Initiator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::net::SocketAddress* peerSocketAddress);
	virtual void close() override;
	virtual void run() override;
	virtual $String* toString() override;
	::java::net::SocketAddress* connectSocketAddress = nullptr;
	::java::nio::channels::DatagramChannel* dc = nullptr;
};

#endif // _Connect4DatagramChannel$Initiator_h_