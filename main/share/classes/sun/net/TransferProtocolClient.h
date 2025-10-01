#ifndef _sun_net_TransferProtocolClient_h_
#define _sun_net_TransferProtocolClient_h_
//$ class sun.net.TransferProtocolClient
//$ extends sun.net.NetworkClient

#include <sun/net/NetworkClient.h>

namespace java {
	namespace util {
		class Vector;
	}
}

namespace sun {
	namespace net {

class $export TransferProtocolClient : public ::sun::net::NetworkClient {
	$class(TransferProtocolClient, $NO_CLASS_INIT, ::sun::net::NetworkClient)
public:
	TransferProtocolClient();
	void init$($String* host, int32_t port);
	void init$();
	virtual $String* getResponseString();
	virtual ::java::util::Vector* getResponseStrings();
	virtual int32_t readServerResponse();
	virtual void sendServer($String* cmd);
	static const bool debug = false;
	::java::util::Vector* serverResponse = nullptr;
	int32_t lastReplyCode = 0;
};

	} // net
} // sun

#endif // _sun_net_TransferProtocolClient_h_