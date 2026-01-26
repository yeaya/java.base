#include <sun/net/ftp/FtpClient.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
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
	{"<init>", "()V", nullptr, $PROTECTED, $method(FtpClient, init$, void)},
	{"abort", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, abort, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"allocate", "(J)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, allocate, FtpClient*, int64_t), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"appendFile", "(Ljava/lang/String;Ljava/io/InputStream;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, appendFile, FtpClient*, $String*, $InputStream*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"changeDirectory", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, changeDirectory, FtpClient*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"changeToParentDirectory", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, changeToParentDirectory, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"completePending", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, completePending, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, connect, FtpClient*, $SocketAddress*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;I)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, connect, FtpClient*, $SocketAddress*, int32_t), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"create", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $STATIC, $staticMethod(FtpClient, create, FtpClient*)},
	{"create", "(Ljava/net/InetSocketAddress;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $STATIC, $staticMethod(FtpClient, create, FtpClient*, $InetSocketAddress*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"create", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $STATIC, $staticMethod(FtpClient, create, FtpClient*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"defaultPort", "()I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(FtpClient, defaultPort, int32_t)},
	{"deleteFile", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, deleteFile, FtpClient*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"enablePassiveMode", "(Z)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, enablePassiveMode, FtpClient*, bool)},
	{"endSecureSession", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, endSecureSession, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getConnectTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getConnectTimeout, int32_t)},
	{"getFeatures", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getFeatures, $List*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getFile", "(Ljava/lang/String;Ljava/io/OutputStream;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getFile, FtpClient*, $String*, $OutputStream*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getFileStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getFileStream, $InputStream*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getHelp", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getHelp, $String*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getLastFileName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getLastFileName, $String*)},
	{"getLastModified", "(Ljava/lang/String;)Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getLastModified, $Date*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getLastReplyCode", "()Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getLastReplyCode, $FtpReplyCode*)},
	{"getLastResponseString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getLastResponseString, $String*)},
	{"getLastTransferSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getLastTransferSize, int64_t)},
	{"getProxy", "()Ljava/net/Proxy;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getProxy, $Proxy*)},
	{"getReadTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getReadTimeout, int32_t)},
	{"getServerAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getServerAddress, $SocketAddress*)},
	{"getSize", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getSize, int64_t, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getStatus", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getStatus, $String*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getSystem", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getSystem, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"getWelcomeMsg", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getWelcomeMsg, $String*)},
	{"getWorkingDirectory", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, getWorkingDirectory, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"isConnected", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, isConnected, bool)},
	{"isLoggedIn", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, isLoggedIn, bool)},
	{"isPassiveModeEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, isPassiveModeEnabled, bool)},
	{"list", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, list, $InputStream*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"listFiles", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Lsun/net/ftp/FtpDirEntry;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, listFiles, $Iterator*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"login", "(Ljava/lang/String;[C)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, login, FtpClient*, $String*, $chars*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"login", "(Ljava/lang/String;[CLjava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, login, FtpClient*, $String*, $chars*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"makeDirectory", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, makeDirectory, FtpClient*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"nameList", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, nameList, $InputStream*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"noop", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, noop, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"putFile", "(Ljava/lang/String;Ljava/io/InputStream;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC, $virtualMethod(FtpClient, putFile, FtpClient*, $String*, $InputStream*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"putFile", "(Ljava/lang/String;Ljava/io/InputStream;Z)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, putFile, FtpClient*, $String*, $InputStream*, bool), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"putFileStream", "(Ljava/lang/String;)Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(FtpClient, putFileStream, $OutputStream*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"putFileStream", "(Ljava/lang/String;Z)Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, putFileStream, $OutputStream*, $String*, bool), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"reInit", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, reInit, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"removeDirectory", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, removeDirectory, FtpClient*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, rename, FtpClient*, $String*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"setAsciiType", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC, $virtualMethod(FtpClient, setAsciiType, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"setBinaryType", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC, $virtualMethod(FtpClient, setBinaryType, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"setConnectTimeout", "(I)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, setConnectTimeout, FtpClient*, int32_t)},
	{"setDirParser", "(Lsun/net/ftp/FtpDirParser;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, setDirParser, FtpClient*, $FtpDirParser*)},
	{"setProxy", "(Ljava/net/Proxy;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, setProxy, FtpClient*, $Proxy*)},
	{"setReadTimeout", "(I)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, setReadTimeout, FtpClient*, int32_t)},
	{"setRestartOffset", "(J)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, setRestartOffset, FtpClient*, int64_t)},
	{"setType", "(Lsun/net/ftp/FtpClient$TransferType;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, setType, FtpClient*, $FtpClient$TransferType*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"siteCmd", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, siteCmd, FtpClient*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"startSecureSession", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, startSecureSession, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"structureMount", "(Ljava/lang/String;)Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, structureMount, FtpClient*, $String*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
	{"useKerberos", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpClient, useKerberos, FtpClient*), "sun.net.ftp.FtpProtocolException,java.io.IOException"},
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