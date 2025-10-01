#ifndef _sun_net_smtp_SmtpPrintStream_h_
#define _sun_net_smtp_SmtpPrintStream_h_
//$ class sun.net.smtp.SmtpPrintStream
//$ extends java.io.PrintStream

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace sun {
	namespace net {
		namespace smtp {
			class SmtpClient;
		}
	}
}

namespace sun {
	namespace net {
		namespace smtp {

class SmtpPrintStream : public ::java::io::PrintStream {
	$class(SmtpPrintStream, $NO_CLASS_INIT, ::java::io::PrintStream)
public:
	SmtpPrintStream();
	void init$(::java::io::OutputStream* fos, ::sun::net::smtp::SmtpClient* cl);
	virtual void close() override;
	using ::java::io::PrintStream::print;
	virtual void print($String* s) override;
	using ::java::io::PrintStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::sun::net::smtp::SmtpClient* target = nullptr;
	int32_t lastc = 0;
};

		} // smtp
	} // net
} // sun

#endif // _sun_net_smtp_SmtpPrintStream_h_