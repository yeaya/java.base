#ifndef _Connect$Responder_h_
#define _Connect$Responder_h_
//$ class Connect$Responder
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

class $export Connect$Responder : public ::java::lang::AutoCloseable, public ::java::lang::Runnable {
	$class(Connect$Responder, $NO_CLASS_INIT, ::java::lang::AutoCloseable, ::java::lang::Runnable)
public:
	Connect$Responder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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

#endif // _Connect$Responder_h_