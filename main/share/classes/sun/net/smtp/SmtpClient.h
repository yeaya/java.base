#ifndef _sun_net_smtp_SmtpClient_h_
#define _sun_net_smtp_SmtpClient_h_
//$ class sun.net.smtp.SmtpClient
//$ extends sun.net.TransferProtocolClient

#include <sun/net/TransferProtocolClient.h>

#pragma push_macro("DEFAULT_SMTP_PORT")
#undef DEFAULT_SMTP_PORT

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace sun {
	namespace net {
		namespace smtp {
			class SmtpPrintStream;
		}
	}
}

namespace sun {
	namespace net {
		namespace smtp {

class SmtpClient : public ::sun::net::TransferProtocolClient {
	$class(SmtpClient, 0, ::sun::net::TransferProtocolClient)
public:
	SmtpClient();
	void init$($String* host);
	void init$();
	void init$(int32_t to);
	virtual void closeMessage();
	virtual void closeServer() override;
	virtual void from($String* s);
	virtual $String* getEncoding();
	virtual $String* getMailHost();
	virtual void issueCommand($String* cmd, int32_t expect);
	using ::sun::net::TransferProtocolClient::openServer;
	void openServer($String* host);
	virtual ::java::io::PrintStream* startMessage();
	virtual void to($String* s);
	void toCanonical($String* s);
	static int32_t DEFAULT_SMTP_PORT;
	$String* mailhost = nullptr;
	::sun::net::smtp::SmtpPrintStream* message = nullptr;
};

		} // smtp
	} // net
} // sun

#pragma pop_macro("DEFAULT_SMTP_PORT")

#endif // _sun_net_smtp_SmtpClient_h_