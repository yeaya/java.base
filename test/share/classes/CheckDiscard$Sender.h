#ifndef _CheckDiscard$Sender_h_
#define _CheckDiscard$Sender_h_
//$ class CheckDiscard$Sender
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class CheckDiscard;
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class DatagramSocket;
	}
}

class $export CheckDiscard$Sender : public ::java::lang::Runnable {
	$class(CheckDiscard$Sender, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CheckDiscard$Sender();
	void init$(::CheckDiscard* this$0, int32_t port);
	virtual ::java::lang::Exception* getException();
	virtual int32_t getLocalPort();
	virtual void run() override;
	virtual void setException(::java::lang::Exception* e);
	::CheckDiscard* this$0 = nullptr;
	::java::lang::Exception* exc = nullptr;
	::java::net::DatagramSocket* s = nullptr;
	int32_t port = 0;
};

#endif // _CheckDiscard$Sender_h_