#ifndef _javax_net_ssl_SSLParameters_h_
#define _javax_net_ssl_SSLParameters_h_
//$ class javax.net.ssl.SSLParameters
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmConstraints;
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Map;
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLParameters : public ::java::lang::Object {
	$class(SSLParameters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLParameters();
	using ::java::lang::Object::clone;
	void init$();
	void init$($StringArray* cipherSuites);
	void init$($StringArray* cipherSuites, $StringArray* protocols);
	static $StringArray* clone($StringArray* s);
	virtual ::java::security::AlgorithmConstraints* getAlgorithmConstraints();
	virtual $StringArray* getApplicationProtocols();
	virtual $StringArray* getCipherSuites();
	virtual bool getEnableRetransmissions();
	virtual $String* getEndpointIdentificationAlgorithm();
	virtual int32_t getMaximumPacketSize();
	virtual bool getNeedClientAuth();
	virtual $StringArray* getProtocols();
	::java::util::Collection* getSNIMatchers();
	::java::util::List* getServerNames();
	bool getUseCipherSuitesOrder();
	virtual bool getWantClientAuth();
	virtual void setAlgorithmConstraints(::java::security::AlgorithmConstraints* constraints);
	virtual void setApplicationProtocols($StringArray* protocols);
	virtual void setCipherSuites($StringArray* cipherSuites);
	virtual void setEnableRetransmissions(bool enableRetransmissions);
	virtual void setEndpointIdentificationAlgorithm($String* algorithm);
	virtual void setMaximumPacketSize(int32_t maximumPacketSize);
	virtual void setNeedClientAuth(bool needClientAuth);
	virtual void setProtocols($StringArray* protocols);
	void setSNIMatchers(::java::util::Collection* matchers);
	void setServerNames(::java::util::List* serverNames);
	void setUseCipherSuitesOrder(bool honorOrder);
	virtual void setWantClientAuth(bool wantClientAuth);
	$StringArray* cipherSuites = nullptr;
	$StringArray* protocols = nullptr;
	bool wantClientAuth = false;
	bool needClientAuth = false;
	$String* identificationAlgorithm = nullptr;
	::java::security::AlgorithmConstraints* algorithmConstraints = nullptr;
	::java::util::Map* sniNames = nullptr;
	::java::util::Map* sniMatchers = nullptr;
	bool preferLocalCipherSuites = false;
	bool enableRetransmissions = false;
	int32_t maximumPacketSize = 0;
	$StringArray* applicationProtocols = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLParameters_h_