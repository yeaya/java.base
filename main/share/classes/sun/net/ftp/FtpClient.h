#ifndef _sun_net_ftp_FtpClient_h_
#define _sun_net_ftp_FtpClient_h_
//$ class sun.net.ftp.FtpClient
//$ extends java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>

#pragma push_macro("FTP_PORT")
#undef FTP_PORT

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
		class Proxy;
		class SocketAddress;
	}
}
namespace java {
	namespace util {
		class Date;
		class Iterator;
		class List;
	}
}
namespace sun {
	namespace net {
		namespace ftp {
			class FtpClient$TransferType;
			class FtpDirParser;
			class FtpReplyCode;
		}
	}
}

namespace sun {
	namespace net {
		namespace ftp {

class FtpClient : public ::java::io::Closeable {
	$class(FtpClient, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	FtpClient();
	virtual void close() override {}
	void init$();
	virtual ::sun::net::ftp::FtpClient* abort() {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* allocate(int64_t size) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* appendFile($String* name, ::java::io::InputStream* local) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* changeDirectory($String* remoteDirectory) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* changeToParentDirectory() {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* completePending() {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* connect(::java::net::SocketAddress* dest) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* connect(::java::net::SocketAddress* dest, int32_t timeout) {return nullptr;}
	static ::sun::net::ftp::FtpClient* create();
	static ::sun::net::ftp::FtpClient* create(::java::net::InetSocketAddress* dest);
	static ::sun::net::ftp::FtpClient* create($String* dest);
	static int32_t defaultPort();
	virtual ::sun::net::ftp::FtpClient* deleteFile($String* name) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* enablePassiveMode(bool passive) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* endSecureSession() {return nullptr;}
	virtual int32_t getConnectTimeout() {return 0;}
	virtual ::java::util::List* getFeatures() {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* getFile($String* name, ::java::io::OutputStream* local) {return nullptr;}
	virtual ::java::io::InputStream* getFileStream($String* name) {return nullptr;}
	virtual $String* getHelp($String* cmd) {return nullptr;}
	virtual $String* getLastFileName() {return nullptr;}
	virtual ::java::util::Date* getLastModified($String* path) {return nullptr;}
	virtual ::sun::net::ftp::FtpReplyCode* getLastReplyCode() {return nullptr;}
	virtual $String* getLastResponseString() {return nullptr;}
	virtual int64_t getLastTransferSize() {return 0;}
	virtual ::java::net::Proxy* getProxy() {return nullptr;}
	virtual int32_t getReadTimeout() {return 0;}
	virtual ::java::net::SocketAddress* getServerAddress() {return nullptr;}
	virtual int64_t getSize($String* path) {return 0;}
	virtual $String* getStatus($String* name) {return nullptr;}
	virtual $String* getSystem() {return nullptr;}
	virtual $String* getWelcomeMsg() {return nullptr;}
	virtual $String* getWorkingDirectory() {return nullptr;}
	virtual bool isConnected() {return false;}
	virtual bool isLoggedIn() {return false;}
	virtual bool isPassiveModeEnabled() {return false;}
	virtual ::java::io::InputStream* list($String* path) {return nullptr;}
	virtual ::java::util::Iterator* listFiles($String* path) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* login($String* user, $chars* password) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* login($String* user, $chars* password, $String* account) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* makeDirectory($String* name) {return nullptr;}
	virtual ::java::io::InputStream* nameList($String* path) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* noop() {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* putFile($String* name, ::java::io::InputStream* local);
	virtual ::sun::net::ftp::FtpClient* putFile($String* name, ::java::io::InputStream* local, bool unique) {return nullptr;}
	virtual ::java::io::OutputStream* putFileStream($String* name);
	virtual ::java::io::OutputStream* putFileStream($String* name, bool unique) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* reInit() {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* removeDirectory($String* name) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* rename($String* from, $String* to) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* setAsciiType();
	virtual ::sun::net::ftp::FtpClient* setBinaryType();
	virtual ::sun::net::ftp::FtpClient* setConnectTimeout(int32_t timeout) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* setDirParser(::sun::net::ftp::FtpDirParser* p) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* setProxy(::java::net::Proxy* p) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* setReadTimeout(int32_t timeout) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* setRestartOffset(int64_t offset) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* setType(::sun::net::ftp::FtpClient$TransferType* type) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* siteCmd($String* cmd) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* startSecureSession() {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* structureMount($String* struct$) {return nullptr;}
	virtual ::sun::net::ftp::FtpClient* useKerberos() {return nullptr;}
	static const int32_t FTP_PORT = 21;
};

		} // ftp
	} // net
} // sun

#pragma pop_macro("FTP_PORT")

#endif // _sun_net_ftp_FtpClient_h_