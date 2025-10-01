#ifndef _sun_net_smtp_SmtpProtocolException_h_
#define _sun_net_smtp_SmtpProtocolException_h_
//$ class sun.net.smtp.SmtpProtocolException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace sun {
	namespace net {
		namespace smtp {

class SmtpProtocolException : public ::java::io::IOException {
	$class(SmtpProtocolException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	SmtpProtocolException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x97432F17D547C784;
	SmtpProtocolException(const SmtpProtocolException& e);
	SmtpProtocolException wrapper$();
	virtual void throwWrapper$() override;
};

		} // smtp
	} // net
} // sun

#endif // _sun_net_smtp_SmtpProtocolException_h_