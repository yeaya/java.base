#ifndef _javax_net_ssl_SNIServerName_h_
#define _javax_net_ssl_SNIServerName_h_
//$ class javax.net.ssl.SNIServerName
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace net {
		namespace ssl {

class $export SNIServerName : public ::java::lang::Object {
	$class(SNIServerName, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SNIServerName();
	void init$(int32_t type, $bytes* encoded);
	virtual bool equals(Object$* other) override;
	$bytes* getEncoded();
	int32_t getType();
	virtual int32_t hashCode() override;
	static $String* toHexString($bytes* bytes);
	virtual $String* toString() override;
	int32_t type = 0;
	$bytes* encoded = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SNIServerName_h_