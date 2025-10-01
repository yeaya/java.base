#ifndef _RegAfterPreClose$Connector_h_
#define _RegAfterPreClose$Connector_h_
//$ class RegAfterPreClose$Connector
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}

class $export RegAfterPreClose$Connector : public ::java::lang::Runnable {
	$class(RegAfterPreClose$Connector, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	RegAfterPreClose$Connector();
	void init$(int32_t port);
	virtual void run() override;
	::java::net::SocketAddress* sa = nullptr;
};

#endif // _RegAfterPreClose$Connector_h_