#ifndef _Connect4DatagramChannel$Responder_h_
#define _Connect4DatagramChannel$Responder_h_
//$ class Connect4DatagramChannel$Responder
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

class $export Connect4DatagramChannel$Responder : public ::java::lang::AutoCloseable, public ::java::lang::Runnable {
	$class(Connect4DatagramChannel$Responder, $NO_CLASS_INIT, ::java::lang::AutoCloseable, ::java::lang::Runnable)
public:
	Connect4DatagramChannel$Responder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void close() override;
	virtual ::java::net::SocketAddress* getSocketAddress();
	virtual void run() override;
	virtual $String* toString() override;
	::java::nio::channels::DatagramChannel* dc = nullptr;
};

#endif // _Connect4DatagramChannel$Responder_h_