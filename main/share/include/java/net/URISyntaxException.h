#ifndef _java_net_URISyntaxException_h_
#define _java_net_URISyntaxException_h_
//$ class java.net.URISyntaxException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace net {

class $import URISyntaxException : public ::java::lang::Exception {
	$class(URISyntaxException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	URISyntaxException();
	void init$($String* input, $String* reason, int32_t index);
	void init$($String* input, $String* reason);
	virtual int32_t getIndex();
	virtual $String* getInput();
	virtual $String* getMessage() override;
	virtual $String* getReason();
	static const int64_t serialVersionUID = (int64_t)0x1DABA13138E5D7FB;
	$String* input = nullptr;
	int32_t index = 0;
	URISyntaxException(const URISyntaxException& e);
	virtual void throw$() override;
	inline URISyntaxException* operator ->() {
		return (URISyntaxException*)throwing$;
	}
};

	} // net
} // java

#endif // _java_net_URISyntaxException_h_