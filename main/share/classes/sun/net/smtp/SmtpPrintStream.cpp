#include <sun/net/smtp/SmtpPrintStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <sun/net/smtp/SmtpClient.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SmtpClient = ::sun::net::smtp::SmtpClient;

namespace sun {
	namespace net {
		namespace smtp {

$FieldInfo _SmtpPrintStream_FieldInfo_[] = {
	{"target", "Lsun/net/smtp/SmtpClient;", nullptr, $PRIVATE, $field(SmtpPrintStream, target)},
	{"lastc", "I", nullptr, $PRIVATE, $field(SmtpPrintStream, lastc)},
	{}
};

$MethodInfo _SmtpPrintStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Lsun/net/smtp/SmtpClient;)V", nullptr, 0, $method(static_cast<void(SmtpPrintStream::*)($OutputStream*,$SmtpClient*)>(&SmtpPrintStream::init$)), "java.io.UnsupportedEncodingException"},
	{"close", "()V", nullptr, $PUBLIC},
	{"print", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC},
	{"write", "([BII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SmtpPrintStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.smtp.SmtpPrintStream",
	"java.io.PrintStream",
	nullptr,
	_SmtpPrintStream_FieldInfo_,
	_SmtpPrintStream_MethodInfo_
};

$Object* allocate$SmtpPrintStream($Class* clazz) {
	return $of($alloc(SmtpPrintStream));
}

void SmtpPrintStream::init$($OutputStream* fos, $SmtpClient* cl) {
	$PrintStream::init$(fos, false, $($nc(cl)->getEncoding()));
	this->lastc = u'\n';
	$set(this, target, cl);
}

void SmtpPrintStream::close() {
	if (this->target == nullptr) {
		return;
	}
	if (this->lastc != u'\n') {
		write((int32_t)u'\n');
	}
	try {
		$nc(this->target)->issueCommand(".\r\n"_s, 250);
		$set($nc(this->target), message, nullptr);
		$set(this, out, nullptr);
		$set(this, target, nullptr);
	} catch ($IOException& e) {
	}
}

void SmtpPrintStream::write(int32_t b) {
	try {
		if (this->lastc == u'\n' && b == u'.') {
			$nc(this->out)->write((int32_t)u'.');
		}
		if (b == u'\n' && this->lastc != u'\r') {
			$nc(this->out)->write((int32_t)u'\r');
		}
		$nc(this->out)->write(b);
		this->lastc = b;
	} catch ($IOException& e) {
	}
}

void SmtpPrintStream::write($bytes* b, int32_t off, int32_t len) {
	try {
		int32_t lc = this->lastc;
		while (--len >= 0) {
			int32_t c = $nc(b)->get(off++);
			if (lc == u'\n' && c == u'.') {
				$nc(this->out)->write((int32_t)u'.');
			}
			if (c == u'\n' && lc != u'\r') {
				$nc(this->out)->write((int32_t)u'\r');
			}
			$nc(this->out)->write(c);
			lc = c;
		}
		this->lastc = lc;
	} catch ($IOException& e) {
	}
}

void SmtpPrintStream::print($String* s) {
	int32_t len = $nc(s)->length();
	for (int32_t i = 0; i < len; ++i) {
		write((int32_t)s->charAt(i));
	}
}

SmtpPrintStream::SmtpPrintStream() {
}

$Class* SmtpPrintStream::load$($String* name, bool initialize) {
	$loadClass(SmtpPrintStream, name, initialize, &_SmtpPrintStream_ClassInfo_, allocate$SmtpPrintStream);
	return class$;
}

$Class* SmtpPrintStream::class$ = nullptr;

		} // smtp
	} // net
} // sun