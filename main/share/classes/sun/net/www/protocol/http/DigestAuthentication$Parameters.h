#ifndef _sun_net_www_protocol_http_DigestAuthentication$Parameters_h_
#define _sun_net_www_protocol_http_DigestAuthentication$Parameters_h_
//$ class sun.net.www.protocol.http.DigestAuthentication$Parameters
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		class Random;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class DigestAuthentication$Parameters : public ::java::io::Serializable {
	$class(DigestAuthentication$Parameters, 0, ::java::io::Serializable)
public:
	DigestAuthentication$Parameters();
	void init$();
	virtual bool authQop();
	virtual $String* getAlgorithm();
	virtual $String* getCachedHA1();
	virtual $String* getCnonce();
	virtual int32_t getNCCount();
	virtual $String* getNonce();
	virtual $String* getOpaque();
	virtual void incrementNC();
	virtual void setAlgorithm($String* s);
	virtual void setCachedHA1($String* s);
	virtual void setNewCnonce();
	virtual void setNonce($String* s);
	virtual void setOpaque($String* s);
	virtual void setQop($String* qop);
	static const int64_t serialVersionUID = (int64_t)0xCE41247245C915D4;
	bool serverQop = false;
	$String* opaque = nullptr;
	$String* cnonce = nullptr;
	$String* nonce = nullptr;
	$String* algorithm = nullptr;
	int32_t NCcount = 0;
	$String* cachedHA1 = nullptr;
	bool redoCachedHA1 = false;
	static const int32_t cnonceRepeat = 5;
	static const int32_t cnoncelen = 40;
	static ::java::util::Random* random;
	int32_t cnonce_count = 0;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_DigestAuthentication$Parameters_h_