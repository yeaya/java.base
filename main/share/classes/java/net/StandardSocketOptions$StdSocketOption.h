#ifndef _java_net_StandardSocketOptions$StdSocketOption_h_
#define _java_net_StandardSocketOptions$StdSocketOption_h_
//$ class java.net.StandardSocketOptions$StdSocketOption
//$ extends java.net.SocketOption

#include <java/net/SocketOption.h>

namespace java {
	namespace net {

class StandardSocketOptions$StdSocketOption : public ::java::net::SocketOption {
	$class(StandardSocketOptions$StdSocketOption, $NO_CLASS_INIT, ::java::net::SocketOption)
public:
	StandardSocketOptions$StdSocketOption();
	void init$($String* name, $Class* type);
	virtual $String* name() override;
	virtual $String* toString() override;
	virtual $Class* type() override;
	$String* name$ = nullptr;
	$Class* type$ = nullptr;
};

	} // net
} // java

#endif // _java_net_StandardSocketOptions$StdSocketOption_h_