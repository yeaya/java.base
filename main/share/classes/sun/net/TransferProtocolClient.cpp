#include <sun/net/TransferProtocolClient.h>

#include <java/io/InputStream.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/Vector.h>
#include <sun/net/NetworkClient.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Vector = ::java::util::Vector;
using $NetworkClient = ::sun::net::NetworkClient;

namespace sun {
	namespace net {

$FieldInfo _TransferProtocolClient_FieldInfo_[] = {
	{"debug", "Z", nullptr, $STATIC | $FINAL, $constField(TransferProtocolClient, debug)},
	{"serverResponse", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", $PROTECTED, $field(TransferProtocolClient, serverResponse)},
	{"lastReplyCode", "I", nullptr, $PROTECTED, $field(TransferProtocolClient, lastReplyCode)},
	{}
};

$MethodInfo _TransferProtocolClient_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(TransferProtocolClient, init$, void, $String*, int32_t), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(TransferProtocolClient, init$, void)},
	{"getResponseString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransferProtocolClient, getResponseString, $String*)},
	{"getResponseStrings", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(TransferProtocolClient, getResponseStrings, $Vector*)},
	{"readServerResponse", "()I", nullptr, $PUBLIC, $virtualMethod(TransferProtocolClient, readServerResponse, int32_t), "java.io.IOException"},
	{"sendServer", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransferProtocolClient, sendServer, void, $String*)},
	{}
};

$ClassInfo _TransferProtocolClient_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.TransferProtocolClient",
	"sun.net.NetworkClient",
	nullptr,
	_TransferProtocolClient_FieldInfo_,
	_TransferProtocolClient_MethodInfo_
};

$Object* allocate$TransferProtocolClient($Class* clazz) {
	return $of($alloc(TransferProtocolClient));
}

int32_t TransferProtocolClient::readServerResponse() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, replyBuf, $new($StringBuilder, 32));
	int32_t c = 0;
	int32_t continuingCode = -1;
	int32_t code = 0;
	$var($String, response, nullptr);
	$nc(this->serverResponse)->setSize(0);
	while (true) {
		while ((c = $nc(this->serverInput)->read()) != -1) {
			if (c == u'\r') {
				if ((c = $nc(this->serverInput)->read()) != u'\n') {
					replyBuf->append(u'\r');
				}
			}
			replyBuf->append((char16_t)c);
			if (c == u'\n') {
				break;
			}
		}
		$assign(response, replyBuf->toString());
		replyBuf->setLength(0);
		if ($nc(response)->isEmpty()) {
			code = -1;
		} else {
			try {
				code = $Integer::parseInt(response, 0, 3, 10);
			} catch ($NumberFormatException& e) {
				code = -1;
			} catch ($IndexOutOfBoundsException& e) {
				continue;
			}
		}
		$nc(this->serverResponse)->addElement(response);
		if (continuingCode != -1) {
			bool var$0 = code != continuingCode;
			if (!var$0) {
				bool var$1 = $nc(response)->length() >= 4;
				var$0 = (var$1 && response->charAt(3) == u'-');
			}
			if (var$0) {
				continue;
			} else {
				continuingCode = -1;
				break;
			}
		} else {
			bool var$3 = $nc(response)->length() >= 4;
			if (var$3 && response->charAt(3) == u'-') {
				continuingCode = code;
				continue;
			} else {
				break;
			}
		}
	}
	return this->lastReplyCode = code;
}

void TransferProtocolClient::sendServer($String* cmd) {
	$nc(this->serverOutput)->print(cmd);
}

$String* TransferProtocolClient::getResponseString() {
	return $cast($String, $nc(this->serverResponse)->elementAt(0));
}

$Vector* TransferProtocolClient::getResponseStrings() {
	return this->serverResponse;
}

void TransferProtocolClient::init$($String* host, int32_t port) {
	$NetworkClient::init$(host, port);
	$set(this, serverResponse, $new($Vector, 1));
}

void TransferProtocolClient::init$() {
	$NetworkClient::init$();
	$set(this, serverResponse, $new($Vector, 1));
}

TransferProtocolClient::TransferProtocolClient() {
}

$Class* TransferProtocolClient::load$($String* name, bool initialize) {
	$loadClass(TransferProtocolClient, name, initialize, &_TransferProtocolClient_ClassInfo_, allocate$TransferProtocolClient);
	return class$;
}

$Class* TransferProtocolClient::class$ = nullptr;

	} // net
} // sun