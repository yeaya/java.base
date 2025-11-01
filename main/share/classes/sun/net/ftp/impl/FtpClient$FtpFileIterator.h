#ifndef _sun_net_ftp_impl_FtpClient$FtpFileIterator_h_
#define _sun_net_ftp_impl_FtpClient$FtpFileIterator_h_
//$ class sun.net.ftp.impl.FtpClient$FtpFileIterator
//$ extends java.util.Iterator
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/util/Iterator.h>

namespace java {
	namespace io {
		class BufferedReader;
	}
}
namespace sun {
	namespace net {
		namespace ftp {
			class FtpDirEntry;
			class FtpDirParser;
		}
	}
}

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

class FtpClient$FtpFileIterator : public ::java::util::Iterator, public ::java::io::Closeable {
	$class(FtpClient$FtpFileIterator, $NO_CLASS_INIT, ::java::util::Iterator, ::java::io::Closeable)
public:
	FtpClient$FtpFileIterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::net::ftp::FtpDirParser* p, ::java::io::BufferedReader* in);
	virtual void close() override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	void readNext();
	virtual void remove() override;
	virtual $String* toString() override;
	::java::io::BufferedReader* in = nullptr;
	::sun::net::ftp::FtpDirEntry* nextFile = nullptr;
	::sun::net::ftp::FtpDirParser* fparser = nullptr;
	bool eof = false;
};

			} // impl
		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_impl_FtpClient$FtpFileIterator_h_