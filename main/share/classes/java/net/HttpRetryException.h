#ifndef _java_net_HttpRetryException_h_
#define _java_net_HttpRetryException_h_
//$ class java.net.HttpRetryException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace net {

class $export HttpRetryException : public ::java::io::IOException {
	$class(HttpRetryException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	HttpRetryException();
	void init$($String* detail, int32_t code);
	void init$($String* detail, int32_t code, $String* location);
	virtual $String* getLocation();
	virtual $String* getReason();
	virtual int32_t responseCode();
	static const int64_t serialVersionUID = (int64_t)0x8084B1666C2FE1AB;
	int32_t responseCode$ = 0;
	$String* location = nullptr;
	HttpRetryException(const HttpRetryException& e);
	virtual void throw$() override;
	inline HttpRetryException* operator ->() {
		return (HttpRetryException*)throwing$;
	}
};

	} // net
} // java

#endif // _java_net_HttpRetryException_h_