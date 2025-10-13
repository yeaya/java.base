#include <sun/net/ftp/FtpClient.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Proxy.h>
#include <java/net/SocketAddress.h>
#include <java/util/Date.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/net/ftp/FtpClient$TransferType.h>
#include <sun/net/ftp/FtpClientProvider.h>
#include <sun/net/ftp/FtpDirParser.h>
#include <sun/net/ftp/FtpReplyCode.h>
#include <jcpp.h>

#undef ASCII
#undef BINARY
#undef FTP_PORT

using $Closeable = ::java::io::Closeable;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Proxy = ::java::net::Proxy;
using $SocketAddress = ::java::net::SocketAddress;
using $Date = ::java::util::Date;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $FtpClient$TransferType = ::sun::net::ftp::FtpClient$TransferType;
using $FtpClientProvider = ::sun::net::ftp::FtpClientProvider;
using $FtpDirParser = ::sun::net::ftp::FtpDirParser;
using $FtpReplyCode = ::sun::net::ftp::FtpReplyCode;

namespace sun {
	namespace net {
		namespace ftp {

$FieldInfo _FtpClient_FieldInfo_[] = {
	{"FTP_PORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FtpClient, FTP_PORT)},
	{}
};

$MethodInfo _FtpClient_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FtpClient::*)()>(&FtpClient::init$))},
	{"abort", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"allocate", "(J)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"appendFile", "(Ljava/lang/String;Ljava/io/InputStream;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"changeDirectory", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"changeToParentDirectory", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"completePending", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;I)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"create", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FtpClient*(*)()>(&FtpClient::create))},
	{"create", "(Ljava/net/InetSocketAddress;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FtpClient*(*)($InetSocketAddress*)>(&FtpClient::create)), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"create", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FtpClient*(*)($String*)>(&FtpClient::create)), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"defaultPort", "()I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)()>(&FtpClient::defaultPort))},
	{"deleteFile", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"enablePassiveMode", "(Z)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT},
	{"endSecureSession", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getConnectTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getFeatures", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getFile", "(Ljava/lang/String;Ljava/io/OutputStream;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getFileStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getHelp", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getLastFileName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLastModified", "(Ljava/lang/String;)Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getLastReplyCode", "()Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLastResponseString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLastTransferSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getProxy", "()Ljava/net/Proxy;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReadTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getServerAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSize", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getStatus", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getSystem", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getWelcomeMsg", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWorkingDirectory", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"isConnected", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isLoggedIn", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isPassiveModeEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"list", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"listFiles", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Lsun/net/ftp/FtpDirEntry;>;", $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"login", "(Ljava/lang/String;[C)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"login", "(Ljava/lang/String;[CLjava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"makeDirectory", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"nameList", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"noop", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"putFile", "(Ljava/lang/String;Ljava/io/InputStream;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"putFile", "(Ljava/lang/String;Ljava/io/InputStream;Z)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"putFileStream", "(Ljava/lang/String;)Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"putFileStream", "(Ljava/lang/String;Z)Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"reInit", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"removeDirectory", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"setAsciiType", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"setBinaryType", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"setConnectTimeout", "(I)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT},
	{"setDirParser", "(Lsun/net/ftp/FtpDirParser;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT},
	{"setProxy", "(Ljava/net/Proxy;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT},
	{"setReadTimeout", "(I)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT},
	{"setRestartOffset", "(J)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT},
	{"setType", "(Lsun/net/ftp/FtpClient$TransferType;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"siteCmd", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"startSecureSession", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"structureMount", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"useKerberos", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{}
};

$InnerClassInfo _FtpClient_InnerClassesInfo_[] = {
	{"sun.net.ftp.FtpClient$TransferType", "sun.net.ftp.FtpClient", "TransferType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FtpClient_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.ftp.FtpClient",
	"java.lang.Object",
	"java.io.Closeable",
	_FtpClient_FieldInfo_,
	_FtpClient_MethodInfo_,
	nullptr,
	nullptr,
	_FtpClient_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.ftp.FtpClient$TransferType"
};

$Object* allocate$FtpClient($Class* clazz) {
	return $of($alloc(FtpClient));
}

int32_t FtpClient::defaultPort() {
	$init(FtpClient);
	return FtpClient::FTP_PORT;
}

void FtpClient::init$() {
}

FtpClient* FtpClient::create() {
	$init(FtpClient);
	$var($FtpClientProvider, provider, $FtpClientProvider::provider());
	return $nc(provider)->createFtpClient();
}

FtpClient* FtpClient::create($InetSocketAddress* dest) {
	$init(FtpClient);
	$var(FtpClient, client, create());
	if (dest != nullptr) {
		$nc(client)->connect(dest);
	}
	return client;
}

FtpClient* FtpClient::create($String* dest) {
	$init(FtpClient);
	return create($$new($InetSocketAddress, dest, FtpClient::FTP_PORT));
}

$OutputStream* FtpClient::putFileStream($String* name) {
	return putFileStream(name, false);
}

FtpClient* FtpClient::putFile($String* name, $InputStream* local) {
	return putFile(name, local, false);
}

FtpClient* FtpClient::setBinaryType() {
	$init($FtpClient$TransferType);
	setType($FtpClient$TransferType::BINARY);
	return this;
}

FtpClient* FtpClient::setAsciiType() {
	$init($FtpClient$TransferType);
	setType($FtpClient$TransferType::ASCII);
	return this;
}

FtpClient::FtpClient() {
}

$Class* FtpClient::load$($String* name, bool initialize) {
	$loadClass(FtpClient, name, initialize, &_FtpClient_ClassInfo_, allocate$FtpClient);
	return class$;
}

$Class* FtpClient::class$ = nullptr;

		} // ftp
	} // net
} // sun