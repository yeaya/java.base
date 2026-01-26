#include <sun/security/ssl/DTLSOutputRecord.h>

#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/Ciphertext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/DTLSOutputRecord$DTLSFragmenter.h>
#include <sun/security/ssl/DTLSRecord.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef APPLICATION_DATA
#undef NONE
#undef NOT_APPLICABLE

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $Alert = ::sun::security::ssl::Alert;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Ciphertext = ::sun::security::ssl::Ciphertext;
using $ContentType = ::sun::security::ssl::ContentType;
using $DTLSOutputRecord$DTLSFragmenter = ::sun::security::ssl::DTLSOutputRecord$DTLSFragmenter;
using $DTLSRecord = ::sun::security::ssl::DTLSRecord;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DTLSOutputRecord_FieldInfo_[] = {
	{"fragmenter", "Lsun/security/ssl/DTLSOutputRecord$DTLSFragmenter;", nullptr, $PRIVATE, $field(DTLSOutputRecord, fragmenter)},
	{"writeEpoch", "I", nullptr, 0, $field(DTLSOutputRecord, writeEpoch)},
	{"prevWriteEpoch", "I", nullptr, 0, $field(DTLSOutputRecord, prevWriteEpoch)},
	{"prevWriteAuthenticator", "Lsun/security/ssl/Authenticator;", nullptr, 0, $field(DTLSOutputRecord, prevWriteAuthenticator)},
	{"prevWriteCipher", "Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, 0, $field(DTLSOutputRecord, prevWriteCipher)},
	{"isCloseWaiting", "Z", nullptr, $PRIVATE | $VOLATILE, $field(DTLSOutputRecord, isCloseWaiting)},
	{}
};

$MethodInfo _DTLSOutputRecord_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/HandshakeHash;)V", nullptr, 0, $method(DTLSOutputRecord, init$, void, $HandshakeHash*)},
	{"acquireCiphertext", "(Ljava/nio/ByteBuffer;)Lsun/security/ssl/Ciphertext;", nullptr, $PRIVATE, $method(DTLSOutputRecord, acquireCiphertext, $Ciphertext*, $ByteBuffer*), "java.io.IOException"},
	{"changeWriteCiphers", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;Z)V", nullptr, 0, $virtualMethod(DTLSOutputRecord, changeWriteCiphers, void, $SSLCipher$SSLWriteCipher*, bool), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(DTLSOutputRecord, close, void), "java.io.IOException"},
	{"encode", "([Ljava/nio/ByteBuffer;II[Ljava/nio/ByteBuffer;II)Lsun/security/ssl/Ciphertext;", nullptr, 0, $virtualMethod(DTLSOutputRecord, encode, $Ciphertext*, $ByteBufferArray*, int32_t, int32_t, $ByteBufferArray*, int32_t, int32_t), "java.io.IOException"},
	{"encode", "([Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;)Lsun/security/ssl/Ciphertext;", nullptr, $PRIVATE, $method(DTLSOutputRecord, encode, $Ciphertext*, $ByteBufferArray*, int32_t, int32_t, $ByteBuffer*), "java.io.IOException"},
	{"encodeAlert", "(BB)V", nullptr, 0, $virtualMethod(DTLSOutputRecord, encodeAlert, void, int8_t, int8_t), "java.io.IOException"},
	{"encodeChangeCipherSpec", "()V", nullptr, 0, $virtualMethod(DTLSOutputRecord, encodeChangeCipherSpec, void), "java.io.IOException"},
	{"encodeHandshake", "([BII)V", nullptr, 0, $virtualMethod(DTLSOutputRecord, encodeHandshake, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"finishHandshake", "()V", nullptr, 0, $virtualMethod(DTLSOutputRecord, finishHandshake, void)},
	{"initHandshaker", "()V", nullptr, 0, $virtualMethod(DTLSOutputRecord, initHandshaker, void)},
	{"isClosed", "()Z", nullptr, 0, $virtualMethod(DTLSOutputRecord, isClosed, bool)},
	{"isEmpty", "()Z", nullptr, 0, $virtualMethod(DTLSOutputRecord, isEmpty, bool)},
	{"launchRetransmission", "()V", nullptr, 0, $virtualMethod(DTLSOutputRecord, launchRetransmission, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _DTLSOutputRecord_InnerClassesInfo_[] = {
	{"sun.security.ssl.DTLSOutputRecord$DTLSFragmenter", "sun.security.ssl.DTLSOutputRecord", "DTLSFragmenter", $PRIVATE | $FINAL},
	{"sun.security.ssl.DTLSOutputRecord$HandshakeMemo", "sun.security.ssl.DTLSOutputRecord", "HandshakeMemo", $PRIVATE | $STATIC},
	{"sun.security.ssl.DTLSOutputRecord$RecordMemo", "sun.security.ssl.DTLSOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DTLSOutputRecord_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DTLSOutputRecord",
	"sun.security.ssl.OutputRecord",
	"sun.security.ssl.DTLSRecord",
	_DTLSOutputRecord_FieldInfo_,
	_DTLSOutputRecord_MethodInfo_,
	nullptr,
	nullptr,
	_DTLSOutputRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.DTLSOutputRecord$DTLSFragmenter,sun.security.ssl.DTLSOutputRecord$HandshakeMemo,sun.security.ssl.DTLSOutputRecord$RecordMemo"
};

$Object* allocate$DTLSOutputRecord($Class* clazz) {
	return $of($alloc(DTLSOutputRecord));
}

$String* DTLSOutputRecord::toString() {
	 return this->$OutputRecord::toString();
}

int32_t DTLSOutputRecord::hashCode() {
	 return this->$OutputRecord::hashCode();
}

bool DTLSOutputRecord::equals(Object$* obj) {
	 return this->$OutputRecord::equals(obj);
}

$Object* DTLSOutputRecord::clone() {
	 return this->$OutputRecord::clone();
}

void DTLSOutputRecord::finalize() {
	this->$OutputRecord::finalize();
}

void DTLSOutputRecord::init$($HandshakeHash* handshakeHash) {
	$OutputRecord::init$(handshakeHash, $($SSLCipher$SSLWriteCipher::nullDTlsWriteCipher()));
	this->writeEpoch = 0;
	this->prevWriteEpoch = 0;
	$set(this, prevWriteCipher, $SSLCipher$SSLWriteCipher::nullDTlsWriteCipher());
	this->packetSize = $DTLSRecord::maxRecordSize;
	$init($ProtocolVersion);
	$set(this, protocolVersion, $ProtocolVersion::NONE);
}

void DTLSOutputRecord::close() {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!this->$OutputRecord::isClosed$) {
				if (this->fragmenter != nullptr && $nc(this->fragmenter)->hasAlert()) {
					this->isCloseWaiting = true;
				} else {
					$OutputRecord::close();
				}
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

bool DTLSOutputRecord::isClosed() {
	return this->$OutputRecord::isClosed$ || this->isCloseWaiting;
}

void DTLSOutputRecord::initHandshaker() {
	$set(this, fragmenter, nullptr);
}

void DTLSOutputRecord::finishHandshake() {
}

void DTLSOutputRecord::changeWriteCiphers($SSLCipher$SSLWriteCipher* writeCipher, bool useChangeCipherSpec) {
	if (isClosed()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning("outbound has closed, ignore outbound change_cipher_spec message"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	if (useChangeCipherSpec) {
		encodeChangeCipherSpec();
	}
	$nc(this->prevWriteCipher)->dispose();
	$set(this, prevWriteCipher, this->writeCipher);
	this->prevWriteEpoch = this->writeEpoch;
	$set(this, writeCipher, writeCipher);
	++this->writeEpoch;
	this->isFirstAppOutputRecord = true;
	$nc($nc(this->writeCipher)->authenticator)->setEpochNumber(this->writeEpoch);
}

void DTLSOutputRecord::encodeAlert(int8_t level, int8_t description) {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning($$str({"outbound has closed, ignore outbound alert message: "_s, $($Alert::nameOf(description))}), $$new($ObjectArray, 0));
		}
		return;
	}
	if (this->fragmenter == nullptr) {
		$set(this, fragmenter, $new($DTLSOutputRecord$DTLSFragmenter, this));
	}
	$nc(this->fragmenter)->queueUpAlert(level, description);
}

void DTLSOutputRecord::encodeChangeCipherSpec() {
	if (isClosed()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning("outbound has closed, ignore outbound change_cipher_spec message"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	if (this->fragmenter == nullptr) {
		$set(this, fragmenter, $new($DTLSOutputRecord$DTLSFragmenter, this));
	}
	$nc(this->fragmenter)->queueUpChangeCipherSpec();
}

void DTLSOutputRecord::encodeHandshake($bytes* source, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning("outbound has closed, ignore outbound handshake message"_s, $$new($ObjectArray, {$($of($ByteBuffer::wrap(source, offset, length)))}));
		}
		return;
	}
	if (this->firstMessage) {
		this->firstMessage = false;
	}
	if (this->fragmenter == nullptr) {
		$set(this, fragmenter, $new($DTLSOutputRecord$DTLSFragmenter, this));
	}
	$nc(this->fragmenter)->queueUpHandshake(source, offset, length);
}

$Ciphertext* DTLSOutputRecord::encode($ByteBufferArray* srcs$renamed, int32_t srcsOffset, int32_t srcsLength, $ByteBufferArray* dsts, int32_t dstsOffset, int32_t dstsLength) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBufferArray, srcs, srcs$renamed);
	if (this->$OutputRecord::isClosed$) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning("outbound has closed, ignore outbound application data or cached messages"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	} else if (this->isCloseWaiting) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning("outbound has closed, ignore outbound application data"_s, $$new($ObjectArray, 0));
		}
		$assign(srcs, nullptr);
	}
	return encode(srcs, srcsOffset, srcsLength, $nc(dsts)->get(0));
}

$Ciphertext* DTLSOutputRecord::encode($ByteBufferArray* sources, int32_t offset, int32_t length, $ByteBuffer* destination) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(this->writeCipher)->authenticator)->seqNumOverflow()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine("sequence number extremely close to overflow (2^64-1 packets). Closing connection."_s, $$new($ObjectArray, 0));
		}
		$throwNew($SSLHandshakeException, "sequence number overflow"_s);
	}
	if (!isEmpty() || sources == nullptr || $nc(sources)->length == 0) {
		$var($Ciphertext, ct, acquireCiphertext(destination));
		if (ct != nullptr) {
			return ct;
		}
	}
	if (sources == nullptr || $nc(sources)->length == 0) {
		return nullptr;
	}
	int32_t srcsRemains = 0;
	for (int32_t i = offset; i < offset + length; ++i) {
		srcsRemains += $nc($nc(sources)->get(i))->remaining();
	}
	if (srcsRemains == 0) {
		return nullptr;
	}
	int32_t fragLen = 0;
	if (this->packetSize > 0) {
		fragLen = $Math::min($DTLSRecord::maxRecordSize, this->packetSize);
		fragLen = $nc(this->writeCipher)->calculateFragmentSize(fragLen, $DTLSRecord::headerSize);
		fragLen = $Math::min(fragLen, $Record::maxDataSize);
	} else {
		fragLen = $Record::maxDataSize;
	}
	fragLen = calculateFragmentSize(fragLen);
	int32_t dstPos = $nc(destination)->position();
	int32_t dstLim = destination->limit();
	int32_t dstContent = dstPos + $DTLSRecord::headerSize + $nc(this->writeCipher)->getExplicitNonceSize();
	destination->position(dstContent);
	int32_t remains = $Math::min(fragLen, destination->remaining());
	fragLen = 0;
	int32_t srcsLen = offset + length;
	for (int32_t i = offset; (i < srcsLen) && (remains > 0); ++i) {
		int32_t amount = $Math::min($nc($nc(sources)->get(i))->remaining(), remains);
		int32_t srcLimit = $nc($nc(sources)->get(i))->limit();
		$nc(sources->get(i))->limit($nc(sources->get(i))->position() + amount);
		destination->put(sources->get(i));
		$nc(sources->get(i))->limit(srcLimit);
		remains -= amount;
		fragLen += amount;
	}
	destination->limit(destination->position());
	destination->position(dstContent);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
		$init($ContentType);
		$SSLLogger::fine($$str({"WRITE: "_s, $nc(this->protocolVersion)->name$, " "_s, $ContentType::APPLICATION_DATA->name$, ", length = "_s, $$str(destination->remaining())}), $$new($ObjectArray, 0));
	}
	$init($ContentType);
	int64_t recordSN = encrypt(this->writeCipher, $ContentType::APPLICATION_DATA->id, destination, dstPos, dstLim, $DTLSRecord::headerSize, this->protocolVersion);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
		$var($ByteBuffer, temporary, destination->duplicate());
		$nc(temporary)->limit(temporary->position());
		temporary->position(dstPos);
		$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {$of(temporary)}));
	}
	destination->limit(dstLim);
	$init($SSLHandshake);
	return $new($Ciphertext, $ContentType::APPLICATION_DATA->id, $SSLHandshake::NOT_APPLICABLE->id, recordSN);
}

$Ciphertext* DTLSOutputRecord::acquireCiphertext($ByteBuffer* destination) {
	if (this->fragmenter != nullptr) {
		return $nc(this->fragmenter)->acquireCiphertext(destination);
	}
	return nullptr;
}

bool DTLSOutputRecord::isEmpty() {
	return (this->fragmenter == nullptr) || $nc(this->fragmenter)->isEmpty();
}

void DTLSOutputRecord::launchRetransmission() {
	if ((this->fragmenter != nullptr) && $nc(this->fragmenter)->isRetransmittable()) {
		$nc(this->fragmenter)->setRetransmission();
	}
}

DTLSOutputRecord::DTLSOutputRecord() {
}

$Class* DTLSOutputRecord::load$($String* name, bool initialize) {
	$loadClass(DTLSOutputRecord, name, initialize, &_DTLSOutputRecord_ClassInfo_, allocate$DTLSOutputRecord);
	return class$;
}

$Class* DTLSOutputRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun