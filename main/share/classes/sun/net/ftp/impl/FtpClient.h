#ifndef _sun_net_ftp_impl_FtpClient_h_
#define _sun_net_ftp_impl_FtpClient_h_
//$ class sun.net.ftp.impl.FtpClient
//$ extends sun.net.ftp.FtpClient

#include <java/lang/Array.h>
#include <sun/net/ftp/FtpClient.h>

#pragma push_macro("ERROR_MSG")
#undef ERROR_MSG
#pragma push_macro("RFC3659_DATETIME_FORMAT")
#undef RFC3659_DATETIME_FORMAT

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class PrintStream;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class InetSocketAddress;
		class Proxy;
		class Socket;
		class SocketAddress;
	}
}
namespace java {
	namespace text {
		class DateFormat;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatter;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class Iterator;
		class List;
		class Vector;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLSocketFactory;
		}
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
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

class FtpClient : public ::sun::net::ftp::FtpClient {
	$class(FtpClient, 0, ::sun::net::ftp::FtpClient)
public:
	FtpClient();
	void init$();
	virtual ::sun::net::ftp::FtpClient* abort() override;
	virtual ::sun::net::ftp::FtpClient* allocate(int64_t size) override;
	virtual ::sun::net::ftp::FtpClient* appendFile($String* name, ::java::io::InputStream* local) override;
	virtual ::sun::net::ftp::FtpClient* changeDirectory($String* remoteDirectory) override;
	virtual ::sun::net::ftp::FtpClient* changeToParentDirectory() override;
	virtual void close() override;
	virtual ::sun::net::ftp::FtpClient* completePending() override;
	virtual ::sun::net::ftp::FtpClient* connect(::java::net::SocketAddress* dest) override;
	virtual ::sun::net::ftp::FtpClient* connect(::java::net::SocketAddress* dest, int32_t timeout) override;
	static ::sun::net::ftp::FtpClient* create();
	::java::io::InputStream* createInputStream(::java::io::InputStream* in);
	::java::io::OutputStream* createOutputStream(::java::io::OutputStream* out);
	virtual ::sun::net::ftp::FtpClient* deleteFile($String* name) override;
	void disconnect();
	::java::net::Socket* doConnect(::java::net::InetSocketAddress* dest, int32_t timeout);
	virtual ::sun::net::ftp::FtpClient* enablePassiveMode(bool passive) override;
	virtual ::sun::net::ftp::FtpClient* endSecureSession() override;
	virtual int32_t getConnectTimeout() override;
	virtual ::java::util::List* getFeatures() override;
	virtual ::sun::net::ftp::FtpClient* getFile($String* name, ::java::io::OutputStream* local) override;
	virtual ::java::io::InputStream* getFileStream($String* name) override;
	virtual $String* getHelp($String* cmd) override;
	virtual $String* getLastFileName() override;
	virtual ::java::util::Date* getLastModified($String* path) override;
	virtual ::sun::net::ftp::FtpReplyCode* getLastReplyCode() override;
	virtual $String* getLastResponseString() override;
	virtual int64_t getLastTransferSize() override;
	virtual ::java::net::Proxy* getProxy() override;
	virtual int32_t getReadTimeout() override;
	$String* getResponseString();
	::java::util::Vector* getResponseStrings();
	$bytes* getSecurityData();
	virtual ::java::net::SocketAddress* getServerAddress() override;
	virtual int64_t getSize($String* path) override;
	virtual $String* getStatus($String* name) override;
	virtual $String* getSystem() override;
	void getTransferName();
	void getTransferSize();
	virtual $String* getWelcomeMsg() override;
	virtual $String* getWorkingDirectory() override;
	static bool isASCIISuperset($String* encoding);
	virtual bool isConnected() override;
	virtual bool isLoggedIn() override;
	virtual bool isPassiveModeEnabled() override;
	bool issueCommand($String* cmd);
	void issueCommandCheck($String* cmd);
	::java::net::Socket* lambda$openPassiveDataConnection$0();
	::java::net::InetAddress* lambda$openPassiveDataConnection$1();
	static $Array<::java::net::InetAddress>* lambda$privilegedGetAllByName$2($String* hostName);
	virtual ::java::io::InputStream* list($String* path) override;
	virtual ::java::util::Iterator* listFiles($String* path) override;
	virtual ::sun::net::ftp::FtpClient* login($String* user, $chars* password) override;
	virtual ::sun::net::ftp::FtpClient* login($String* user, $chars* password, $String* account) override;
	virtual ::sun::net::ftp::FtpClient* makeDirectory($String* name) override;
	virtual ::java::io::InputStream* nameList($String* path) override;
	virtual ::sun::net::ftp::FtpClient* noop() override;
	::java::net::Socket* openDataConnection($String* cmd);
	::java::net::Socket* openPassiveDataConnection($String* cmd);
	static ::java::util::Date* parseRfc3659TimeValue($String* s);
	static $Array<::java::net::InetAddress>* privilegedGetAllByName($String* hostName);
	static ::java::net::InetAddress* privilegedLocalHost();
	using ::sun::net::ftp::FtpClient::putFile;
	virtual ::sun::net::ftp::FtpClient* putFile($String* name, ::java::io::InputStream* local, bool unique) override;
	using ::sun::net::ftp::FtpClient::putFileStream;
	virtual ::java::io::OutputStream* putFileStream($String* name, bool unique) override;
	virtual ::sun::net::ftp::FtpClient* reInit() override;
	bool readReply();
	int32_t readServerResponse();
	virtual ::sun::net::ftp::FtpClient* removeDirectory($String* name) override;
	virtual ::sun::net::ftp::FtpClient* rename($String* from, $String* to) override;
	bool sendSecurityData($bytes* buf);
	void sendServer($String* cmd);
	virtual ::sun::net::ftp::FtpClient* setConnectTimeout(int32_t timeout) override;
	virtual ::sun::net::ftp::FtpClient* setDirParser(::sun::net::ftp::FtpDirParser* p) override;
	virtual ::sun::net::ftp::FtpClient* setProxy(::java::net::Proxy* p) override;
	virtual ::sun::net::ftp::FtpClient* setReadTimeout(int32_t timeout) override;
	virtual ::sun::net::ftp::FtpClient* setRestartOffset(int64_t offset) override;
	virtual ::sun::net::ftp::FtpClient* setType(::sun::net::ftp::FtpClient$TransferType* type) override;
	virtual ::sun::net::ftp::FtpClient* siteCmd($String* cmd) override;
	virtual ::sun::net::ftp::FtpClient* startSecureSession() override;
	virtual ::sun::net::ftp::FtpClient* structureMount($String* struct$) override;
	void tryConnect(::java::net::InetSocketAddress* dest, int32_t timeout);
	void tryLogin($String* user, $chars* password);
	virtual ::sun::net::ftp::FtpClient* useKerberos() override;
	::java::net::InetSocketAddress* validatePasvAddress(int32_t port, $String* s, ::java::net::InetAddress* address);
	static int32_t defaultSoTimeout;
	static int32_t defaultConnectTimeout;
	static ::sun::util::logging::PlatformLogger* logger;
	::java::net::Proxy* proxy = nullptr;
	::java::net::Socket* server = nullptr;
	::java::io::PrintStream* out = nullptr;
	::java::io::InputStream* in = nullptr;
	int32_t readTimeout = 0;
	int32_t connectTimeout = 0;
	static $String* encoding;
	::java::net::InetSocketAddress* serverAddr = nullptr;
	bool replyPending = false;
	bool loggedIn = false;
	bool useCrypto = false;
	::javax::net::ssl::SSLSocketFactory* sslFact = nullptr;
	::java::net::Socket* oldSocket = nullptr;
	::java::util::Vector* serverResponse = nullptr;
	::sun::net::ftp::FtpReplyCode* lastReplyCode = nullptr;
	$String* welcomeMsg = nullptr;
	static const bool passiveMode = true;
	::sun::net::ftp::FtpClient$TransferType* type = nullptr;
	int64_t restartOffset = 0;
	int64_t lastTransSize = 0;
	$String* lastFileName = nullptr;
	static $StringArray* patStrings;
	static $Array<int32_t, 2>* patternGroups;
	static $Array<::java::util::regex::Pattern>* patterns;
	static ::java::util::regex::Pattern* linkp;
	::java::text::DateFormat* df = nullptr;
	static bool acceptPasvAddressVal;
	::sun::net::ftp::FtpDirParser* parser = nullptr;
	::sun::net::ftp::FtpDirParser* mlsxParser = nullptr;
	static ::java::util::regex::Pattern* transPat;
	static ::java::util::regex::Pattern* epsvPat;
	static ::java::util::regex::Pattern* pasvPat;
	static $String* ERROR_MSG;
	static ::java::time::format::DateTimeFormatter* RFC3659_DATETIME_FORMAT;
};

			} // impl
		} // ftp
	} // net
} // sun

#pragma pop_macro("ERROR_MSG")
#pragma pop_macro("RFC3659_DATETIME_FORMAT")

#endif // _sun_net_ftp_impl_FtpClient_h_