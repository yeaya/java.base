#include <sun/security/ssl/SSLSocketOutputRecord.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Math.h>
#include <java/net/SocketException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLRecord.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ALERT
#undef APPLICATION_DATA
#undef CHANGE_CIPHER_SPEC
#undef CLIENT_HELLO
#undef HANDSHAKE
#undef NONE

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketException = ::java::net::SocketException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $Alert = ::sun::security::ssl::Alert;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $ContentType = ::sun::security::ssl::ContentType;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLRecord = ::sun::security::ssl::SSLRecord;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLSocketOutputRecord_FieldInfo_[] = {
	{"deliverStream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(SSLSocketOutputRecord, deliverStream)},
	{}
};

$MethodInfo _SSLSocketOutputRecord_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/HandshakeHash;)V", nullptr, 0, $method(static_cast<void(SSLSocketOutputRecord::*)($HandshakeHash*)>(&SSLSocketOutputRecord::init$))},
	{"<init>", "(Lsun/security/ssl/HandshakeHash;Lsun/security/ssl/TransportContext;)V", nullptr, 0, $method(static_cast<void(SSLSocketOutputRecord::*)($HandshakeHash*,$TransportContext*)>(&SSLSocketOutputRecord::init$))},
	{"deliver", "([BII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"encodeAlert", "(BB)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"encodeChangeCipherSpec", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"encodeHandshake", "([BII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFragLimit", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(SSLSocketOutputRecord::*)()>(&SSLSocketOutputRecord::getFragLimit))},
	{"needToSplitPayload", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SSLSocketOutputRecord::*)()>(&SSLSocketOutputRecord::needToSplitPayload))},
	{"setDeliverStream", "(Ljava/io/OutputStream;)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _SSLSocketOutputRecord_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLSocketOutputRecord",
	"sun.security.ssl.OutputRecord",
	"sun.security.ssl.SSLRecord",
	_SSLSocketOutputRecord_FieldInfo_,
	_SSLSocketOutputRecord_MethodInfo_
};

$Object* allocate$SSLSocketOutputRecord($Class* clazz) {
	return $of($alloc(SSLSocketOutputRecord));
}

$String* SSLSocketOutputRecord::toString() {
	 return this->$OutputRecord::toString();
}

int32_t SSLSocketOutputRecord::hashCode() {
	 return this->$OutputRecord::hashCode();
}

bool SSLSocketOutputRecord::equals(Object$* obj) {
	 return this->$OutputRecord::equals(obj);
}

$Object* SSLSocketOutputRecord::clone() {
	 return this->$OutputRecord::clone();
}

void SSLSocketOutputRecord::finalize() {
	this->$OutputRecord::finalize();
}

void SSLSocketOutputRecord::init$($HandshakeHash* handshakeHash) {
	SSLSocketOutputRecord::init$(handshakeHash, nullptr);
}

void SSLSocketOutputRecord::init$($HandshakeHash* handshakeHash, $TransportContext* tc) {
	$OutputRecord::init$(handshakeHash, $($SSLCipher$SSLWriteCipher::nullTlsWriteCipher()));
	$set(this, deliverStream, nullptr);
	$set(this, tc, tc);
	this->packetSize = $SSLRecord::maxRecordSize;
	$init($ProtocolVersion);
	$set(this, protocolVersion, $ProtocolVersion::NONE);
}

void SSLSocketOutputRecord::encodeAlert(int8_t level, int8_t description) {
	$useLocalCurrentObjectStackCache();
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (isClosed()) {
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::warning($$str({"outbound has closed, ignore outbound alert message: "_s, $($Alert::nameOf(description))}), $$new($ObjectArray, 0));
				}
				return$1 = true;
				goto $finally;
			}
			this->count = $SSLRecord::headerSize + $nc(this->writeCipher)->getExplicitNonceSize();
			write((int32_t)level);
			write((int32_t)description);
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
				$init($ContentType);
				$SSLLogger::fine($$str({"WRITE: "_s, $nc(this->protocolVersion)->name$, " "_s, $ContentType::ALERT->name$, "("_s, $($Alert::nameOf(description)), "), length = "_s, $$str((this->count - $SSLRecord::headerSize))}), $$new($ObjectArray, 0));
			}
			$init($ContentType);
			encrypt(this->writeCipher, $ContentType::ALERT->id, $SSLRecord::headerSize);
			$nc(this->deliverStream)->write(this->buf, 0, this->count);
			$nc(this->deliverStream)->flush();
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
				$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {($of($$new($ByteArrayInputStream, this->buf, 0, this->count)))}));
			}
			this->count = 0;
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(this->recordLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void SSLSocketOutputRecord::encodeHandshake($bytes* source, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (isClosed()) {
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::warning("outbound has closed, ignore outbound handshake message"_s, $$new($ObjectArray, {$($of($ByteBuffer::wrap(source, offset, length)))}));
				}
				return$1 = true;
				goto $finally;
			}
			if (this->firstMessage) {
				this->firstMessage = false;
				$init($ProtocolVersion);
				$init($SSLHandshake);
				if ((this->helloVersion == $ProtocolVersion::SSL20Hello) && ($nc(source)->get(offset) == $SSLHandshake::CLIENT_HELLO->id) && (source->get(offset + 4 + 2 + 32) == 0)) {
					$var($ByteBuffer, v2ClientHello, encodeV2ClientHello(source, (offset + 4), (length - 4)));
					$var($bytes, record, $cast($bytes, $nc(v2ClientHello)->array()));
					int32_t limit = v2ClientHello->limit();
					$nc(this->handshakeHash)->deliver(record, 2, (limit - 2));
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
						$SSLLogger::fine($$str({"WRITE: SSLv2 ClientHello message, length = "_s, $$str(limit)}), $$new($ObjectArray, 0));
					}
					$nc(this->deliverStream)->write(record, 0, limit);
					$nc(this->deliverStream)->flush();
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
						$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {($of($$new($ByteArrayInputStream, record, 0, limit)))}));
					}
					return$1 = true;
					goto $finally;
				}
			}
			int8_t handshakeType = $nc(source)->get(0);
			if ($nc(this->handshakeHash)->isHashable(handshakeType)) {
				$nc(this->handshakeHash)->deliver(source, offset, length);
			}
			int32_t fragLimit = getFragLimit();
			int32_t position = $SSLRecord::headerSize + $nc(this->writeCipher)->getExplicitNonceSize();
			if (this->count == 0) {
				this->count = position;
			}
			if ((this->count - position) < (fragLimit - length)) {
				write(source, offset, length);
				return$1 = true;
				goto $finally;
			}
			for (int32_t limit = (offset + length); offset < limit;) {
				int32_t remains = (limit - offset) + (this->count - position);
				int32_t fragLen = $Math::min(fragLimit, remains);
				write(source, offset, fragLen);
				if (remains < fragLimit) {
					return$1 = true;
					goto $finally;
				}
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
					$init($ContentType);
					$SSLLogger::fine($$str({"WRITE: "_s, $nc(this->protocolVersion)->name$, " "_s, $ContentType::HANDSHAKE->name$, ", length = "_s, $$str((this->count - $SSLRecord::headerSize))}), $$new($ObjectArray, 0));
				}
				$init($ContentType);
				encrypt(this->writeCipher, $ContentType::HANDSHAKE->id, $SSLRecord::headerSize);
				$nc(this->deliverStream)->write(this->buf, 0, this->count);
				$nc(this->deliverStream)->flush();
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
					$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {($of($$new($ByteArrayInputStream, this->buf, 0, this->count)))}));
				}
				offset += fragLen;
				this->count = position;
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(this->recordLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void SSLSocketOutputRecord::encodeChangeCipherSpec() {
	$useLocalCurrentObjectStackCache();
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (isClosed()) {
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::warning("outbound has closed, ignore outbound change_cipher_spec message"_s, $$new($ObjectArray, 0));
				}
				return$1 = true;
				goto $finally;
			}
			this->count = $SSLRecord::headerSize + $nc(this->writeCipher)->getExplicitNonceSize();
			write((int32_t)(int8_t)1);
			$init($ContentType);
			encrypt(this->writeCipher, $ContentType::CHANGE_CIPHER_SPEC->id, $SSLRecord::headerSize);
			$nc(this->deliverStream)->write(this->buf, 0, this->count);
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
				$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {($of($$new($ByteArrayInputStream, this->buf, 0, this->count)))}));
			}
			this->count = 0;
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(this->recordLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void SSLSocketOutputRecord::flush() {
	$useLocalCurrentObjectStackCache();
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			int32_t position = $SSLRecord::headerSize + $nc(this->writeCipher)->getExplicitNonceSize();
			if (this->count <= position) {
				return$1 = true;
				goto $finally;
			}
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
				$init($ContentType);
				$SSLLogger::fine($$str({"WRITE: "_s, $nc(this->protocolVersion)->name$, " "_s, $ContentType::HANDSHAKE->name$, ", length = "_s, $$str((this->count - $SSLRecord::headerSize))}), $$new($ObjectArray, 0));
			}
			$init($ContentType);
			encrypt(this->writeCipher, $ContentType::HANDSHAKE->id, $SSLRecord::headerSize);
			$nc(this->deliverStream)->write(this->buf, 0, this->count);
			$nc(this->deliverStream)->flush();
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
				$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {($of($$new($ByteArrayInputStream, this->buf, 0, this->count)))}));
			}
			this->count = 0;
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(this->recordLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void SSLSocketOutputRecord::deliver($bytes* source, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (isClosed()) {
				$throwNew($SocketException, "Connection or outbound has been closed"_s);
			}
			if ($nc($nc(this->writeCipher)->authenticator)->seqNumOverflow()) {
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::fine("sequence number extremely close to overflow (2^64-1 packets). Closing connection."_s, $$new($ObjectArray, 0));
				}
				$throwNew($SSLHandshakeException, "sequence number overflow"_s);
			}
			bool isFirstRecordOfThePayload = true;
			for (int32_t limit = (offset + length); offset < limit;) {
				int32_t fragLen = 0;
				if (this->packetSize > 0) {
					fragLen = $Math::min($SSLRecord::maxRecordSize, this->packetSize);
					fragLen = $nc(this->writeCipher)->calculateFragmentSize(fragLen, $SSLRecord::headerSize);
					fragLen = $Math::min(fragLen, $Record::maxDataSize);
				} else {
					fragLen = $Record::maxDataSize;
				}
				fragLen = calculateFragmentSize(fragLen);
				if (isFirstRecordOfThePayload && needToSplitPayload()) {
					fragLen = 1;
					isFirstRecordOfThePayload = false;
				} else {
					fragLen = $Math::min(fragLen, (limit - offset));
				}
				int32_t position = $SSLRecord::headerSize + $nc(this->writeCipher)->getExplicitNonceSize();
				this->count = position;
				write(source, offset, fragLen);
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
					$init($ContentType);
					$SSLLogger::fine($$str({"WRITE: "_s, $nc(this->protocolVersion)->name$, " "_s, $ContentType::APPLICATION_DATA->name$, ", length = "_s, $$str((this->count - position))}), $$new($ObjectArray, 0));
				}
				$init($ContentType);
				encrypt(this->writeCipher, $ContentType::APPLICATION_DATA->id, $SSLRecord::headerSize);
				$nc(this->deliverStream)->write(this->buf, 0, this->count);
				$nc(this->deliverStream)->flush();
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
					$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {($of($$new($ByteArrayInputStream, this->buf, 0, this->count)))}));
				}
				this->count = 0;
				if (this->isFirstAppOutputRecord) {
					this->isFirstAppOutputRecord = false;
				}
				offset += fragLen;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->recordLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SSLSocketOutputRecord::setDeliverStream($OutputStream* outputStream) {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, deliverStream, outputStream);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->recordLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLSocketOutputRecord::needToSplitPayload() {
	bool var$0 = (!$nc(this->protocolVersion)->useTLS11PlusSpec());
	$init($Record);
	return var$0 && $nc(this->writeCipher)->isCBCMode() && !this->isFirstAppOutputRecord && $Record::enableCBCProtection;
}

int32_t SSLSocketOutputRecord::getFragLimit() {
	int32_t fragLimit = 0;
	if (this->packetSize > 0) {
		fragLimit = $Math::min($SSLRecord::maxRecordSize, this->packetSize);
		fragLimit = $nc(this->writeCipher)->calculateFragmentSize(fragLimit, $SSLRecord::headerSize);
		fragLimit = $Math::min(fragLimit, $Record::maxDataSize);
	} else {
		fragLimit = $Record::maxDataSize;
	}
	fragLimit = calculateFragmentSize(fragLimit);
	return fragLimit;
}

SSLSocketOutputRecord::SSLSocketOutputRecord() {
}

$Class* SSLSocketOutputRecord::load$($String* name, bool initialize) {
	$loadClass(SSLSocketOutputRecord, name, initialize, &_SSLSocketOutputRecord_ClassInfo_, allocate$SSLSocketOutputRecord);
	return class$;
}

$Class* SSLSocketOutputRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun