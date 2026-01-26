#include <sun/security/ssl/OutputRecord.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/Ciphertext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/OutputRecord$T13PaddingHolder.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef APPLICATION_DATA
#undef CLIENT_HELLO
#undef HANDSHAKE_MESSAGE_KEY_UPDATE
#undef KEY_UPDATE
#undef TLS12

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Ciphertext = ::sun::security::ssl::Ciphertext;
using $ContentType = ::sun::security::ssl::ContentType;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $OutputRecord$T13PaddingHolder = ::sun::security::ssl::OutputRecord$T13PaddingHolder;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _OutputRecord_FieldInfo_[] = {
	{"writeCipher", "Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, 0, $field(OutputRecord, writeCipher)},
	{"tc", "Lsun/security/ssl/TransportContext;", nullptr, 0, $field(OutputRecord, tc)},
	{"handshakeHash", "Lsun/security/ssl/HandshakeHash;", nullptr, $FINAL, $field(OutputRecord, handshakeHash)},
	{"firstMessage", "Z", nullptr, 0, $field(OutputRecord, firstMessage)},
	{"protocolVersion", "Lsun/security/ssl/ProtocolVersion;", nullptr, 0, $field(OutputRecord, protocolVersion)},
	{"helloVersion", "Lsun/security/ssl/ProtocolVersion;", nullptr, 0, $field(OutputRecord, helloVersion)},
	{"isFirstAppOutputRecord", "Z", nullptr, 0, $field(OutputRecord, isFirstAppOutputRecord)},
	{"packetSize", "I", nullptr, 0, $field(OutputRecord, packetSize)},
	{"fragmentSize", "I", nullptr, $PRIVATE, $field(OutputRecord, fragmentSize)},
	{"isClosed", "Z", nullptr, $VOLATILE, $field(OutputRecord, isClosed$)},
	{"recordLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $FINAL, $field(OutputRecord, recordLock)},
	{"V3toV2CipherMap1", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputRecord, V3toV2CipherMap1)},
	{"V3toV2CipherMap3", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputRecord, V3toV2CipherMap3)},
	{"HANDSHAKE_MESSAGE_KEY_UPDATE", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputRecord, HANDSHAKE_MESSAGE_KEY_UPDATE)},
	{}
};

$MethodInfo _OutputRecord_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/HandshakeHash;Lsun/security/ssl/SSLCipher$SSLWriteCipher;)V", nullptr, 0, $method(OutputRecord, init$, void, $HandshakeHash*, $SSLCipher$SSLWriteCipher*)},
	{"V3toV2CipherSuite", "(Ljava/nio/ByteBuffer;BB)I", nullptr, $PRIVATE | $STATIC, $staticMethod(OutputRecord, V3toV2CipherSuite, int32_t, $ByteBuffer*, int8_t, int8_t)},
	{"calculateFragmentSize", "(I)I", nullptr, 0, $virtualMethod(OutputRecord, calculateFragmentSize, int32_t, int32_t)},
	{"changeFragmentSize", "(I)V", nullptr, 0, $virtualMethod(OutputRecord, changeFragmentSize, void, int32_t)},
	{"changePacketSize", "(I)V", nullptr, 0, $virtualMethod(OutputRecord, changePacketSize, void, int32_t)},
	{"changeWriteCiphers", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;Z)V", nullptr, 0, $virtualMethod(OutputRecord, changeWriteCiphers, void, $SSLCipher$SSLWriteCipher*, bool), "java.io.IOException"},
	{"changeWriteCiphers", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;B)V", nullptr, 0, $virtualMethod(OutputRecord, changeWriteCiphers, void, $SSLCipher$SSLWriteCipher*, int8_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(OutputRecord, close, void), "java.io.IOException"},
	{"d10Encrypt", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;BLjava/nio/ByteBuffer;IIILsun/security/ssl/ProtocolVersion;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(OutputRecord, d10Encrypt, int64_t, $SSLCipher$SSLWriteCipher*, int8_t, $ByteBuffer*, int32_t, int32_t, int32_t, $ProtocolVersion*)},
	{"d13Encrypt", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;BLjava/nio/ByteBuffer;IIILsun/security/ssl/ProtocolVersion;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(OutputRecord, d13Encrypt, int64_t, $SSLCipher$SSLWriteCipher*, int8_t, $ByteBuffer*, int32_t, int32_t, int32_t, $ProtocolVersion*)},
	{"deliver", "([BII)V", nullptr, 0, $virtualMethod(OutputRecord, deliver, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"encode", "([Ljava/nio/ByteBuffer;II[Ljava/nio/ByteBuffer;II)Lsun/security/ssl/Ciphertext;", nullptr, 0, $virtualMethod(OutputRecord, encode, $Ciphertext*, $ByteBufferArray*, int32_t, int32_t, $ByteBufferArray*, int32_t, int32_t), "java.io.IOException"},
	{"encodeAlert", "(BB)V", nullptr, $ABSTRACT, $virtualMethod(OutputRecord, encodeAlert, void, int8_t, int8_t), "java.io.IOException"},
	{"encodeChangeCipherSpec", "()V", nullptr, $ABSTRACT, $virtualMethod(OutputRecord, encodeChangeCipherSpec, void), "java.io.IOException"},
	{"encodeHandshake", "([BII)V", nullptr, $ABSTRACT, $virtualMethod(OutputRecord, encodeHandshake, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"encodeV2ClientHello", "([BII)Ljava/nio/ByteBuffer;", nullptr, $STATIC, $staticMethod(OutputRecord, encodeV2ClientHello, $ByteBuffer*, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"encodeV2NoCipher", "()V", nullptr, 0, $virtualMethod(OutputRecord, encodeV2NoCipher, void), "java.io.IOException"},
	{"encrypt", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;BLjava/nio/ByteBuffer;IIILsun/security/ssl/ProtocolVersion;)J", nullptr, $STATIC, $staticMethod(OutputRecord, encrypt, int64_t, $SSLCipher$SSLWriteCipher*, int8_t, $ByteBuffer*, int32_t, int32_t, int32_t, $ProtocolVersion*)},
	{"encrypt", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;BI)J", nullptr, 0, $virtualMethod(OutputRecord, encrypt, int64_t, $SSLCipher$SSLWriteCipher*, int8_t, int32_t)},
	{"finishHandshake", "()V", nullptr, 0, $virtualMethod(OutputRecord, finishHandshake, void)},
	{"getMaxPacketSize", "()I", nullptr, 0, $virtualMethod(OutputRecord, getMaxPacketSize, int32_t)},
	{"initHandshaker", "()V", nullptr, 0, $virtualMethod(OutputRecord, initHandshaker, void)},
	{"isClosed", "()Z", nullptr, 0, $virtualMethod(OutputRecord, isClosed, bool)},
	{"isEmpty", "()Z", nullptr, 0, $virtualMethod(OutputRecord, isEmpty, bool)},
	{"launchRetransmission", "()V", nullptr, 0, $virtualMethod(OutputRecord, launchRetransmission, void)},
	{"seqNumIsHuge", "()Z", nullptr, 0, $virtualMethod(OutputRecord, seqNumIsHuge, bool)},
	{"setDeliverStream", "(Ljava/io/OutputStream;)V", nullptr, 0, $virtualMethod(OutputRecord, setDeliverStream, void, $OutputStream*)},
	{"setHelloVersion", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, 0, $virtualMethod(OutputRecord, setHelloVersion, void, $ProtocolVersion*)},
	{"setVersion", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, 0, $virtualMethod(OutputRecord, setVersion, void, $ProtocolVersion*)},
	{"t10Encrypt", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;BLjava/nio/ByteBuffer;IIILsun/security/ssl/ProtocolVersion;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(OutputRecord, t10Encrypt, int64_t, $SSLCipher$SSLWriteCipher*, int8_t, $ByteBuffer*, int32_t, int32_t, int32_t, $ProtocolVersion*)},
	{"t10Encrypt", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;BI)J", nullptr, $PRIVATE, $method(OutputRecord, t10Encrypt, int64_t, $SSLCipher$SSLWriteCipher*, int8_t, int32_t)},
	{"t13Encrypt", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;BLjava/nio/ByteBuffer;IIILsun/security/ssl/ProtocolVersion;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(OutputRecord, t13Encrypt, int64_t, $SSLCipher$SSLWriteCipher*, int8_t, $ByteBuffer*, int32_t, int32_t, int32_t, $ProtocolVersion*)},
	{"t13Encrypt", "(Lsun/security/ssl/SSLCipher$SSLWriteCipher;BI)J", nullptr, $PRIVATE, $method(OutputRecord, t13Encrypt, int64_t, $SSLCipher$SSLWriteCipher*, int8_t, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _OutputRecord_InnerClassesInfo_[] = {
	{"sun.security.ssl.OutputRecord$T13PaddingHolder", "sun.security.ssl.OutputRecord", "T13PaddingHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _OutputRecord_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.OutputRecord",
	"java.io.ByteArrayOutputStream",
	"sun.security.ssl.Record",
	_OutputRecord_FieldInfo_,
	_OutputRecord_MethodInfo_,
	nullptr,
	nullptr,
	_OutputRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.OutputRecord$T13PaddingHolder"
};

$Object* allocate$OutputRecord($Class* clazz) {
	return $of($alloc(OutputRecord));
}

$String* OutputRecord::toString() {
	 return this->$ByteArrayOutputStream::toString();
}

int32_t OutputRecord::hashCode() {
	 return this->$ByteArrayOutputStream::hashCode();
}

bool OutputRecord::equals(Object$* obj) {
	 return this->$ByteArrayOutputStream::equals(obj);
}

$Object* OutputRecord::clone() {
	 return this->$ByteArrayOutputStream::clone();
}

void OutputRecord::finalize() {
	this->$ByteArrayOutputStream::finalize();
}

$ints* OutputRecord::V3toV2CipherMap1 = nullptr;
$ints* OutputRecord::V3toV2CipherMap3 = nullptr;
$bytes* OutputRecord::HANDSHAKE_MESSAGE_KEY_UPDATE = nullptr;

void OutputRecord::init$($HandshakeHash* handshakeHash, $SSLCipher$SSLWriteCipher* writeCipher) {
	$ByteArrayOutputStream::init$();
	this->isFirstAppOutputRecord = true;
	$set(this, recordLock, $new($ReentrantLock));
	$set(this, writeCipher, writeCipher);
	this->firstMessage = true;
	this->fragmentSize = $Record::maxDataSize;
	$set(this, handshakeHash, handshakeHash);
}

void OutputRecord::setVersion($ProtocolVersion* protocolVersion) {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, protocolVersion, protocolVersion);
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

void OutputRecord::setHelloVersion($ProtocolVersion* helloVersion) {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, helloVersion, helloVersion);
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

bool OutputRecord::isEmpty() {
	return false;
}

bool OutputRecord::seqNumIsHuge() {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = ($nc(this->writeCipher)->authenticator != nullptr) && $nc($nc(this->writeCipher)->authenticator)->seqNumIsHuge();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->recordLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Ciphertext* OutputRecord::encode($ByteBufferArray* srcs, int32_t srcsOffset, int32_t srcsLength, $ByteBufferArray* dsts, int32_t dstsOffset, int32_t dstsLength) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void OutputRecord::encodeV2NoCipher() {
	$throwNew($UnsupportedOperationException);
}

void OutputRecord::deliver($bytes* source, int32_t offset, int32_t length) {
	$throwNew($UnsupportedOperationException);
}

void OutputRecord::setDeliverStream($OutputStream* outputStream) {
	$throwNew($UnsupportedOperationException);
}

void OutputRecord::changeWriteCiphers($SSLCipher$SSLWriteCipher* writeCipher, bool useChangeCipherSpec) {
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
			if (useChangeCipherSpec) {
				encodeChangeCipherSpec();
			}
			$nc(writeCipher)->dispose();
			$set(this, writeCipher, writeCipher);
			this->isFirstAppOutputRecord = true;
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

void OutputRecord::changeWriteCiphers($SSLCipher$SSLWriteCipher* writeCipher, int8_t keyUpdateRequest) {
	$useLocalCurrentObjectStackCache();
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (isClosed()) {
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::warning("outbound has closed, ignore outbound key_update handshake message"_s, $$new($ObjectArray, 0));
				}
				return$1 = true;
				goto $finally;
			}
			$var($bytes, hm, $cast($bytes, $nc(OutputRecord::HANDSHAKE_MESSAGE_KEY_UPDATE)->clone()));
			hm->set(hm->length - 1, keyUpdateRequest);
			encodeHandshake(hm, 0, hm->length);
			flush();
			$nc(writeCipher)->dispose();
			$set(this, writeCipher, writeCipher);
			this->isFirstAppOutputRecord = true;
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

void OutputRecord::changePacketSize(int32_t packetSize) {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->packetSize = packetSize;
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

void OutputRecord::changeFragmentSize(int32_t fragmentSize) {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->fragmentSize = fragmentSize;
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

int32_t OutputRecord::getMaxPacketSize() {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = this->packetSize;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->recordLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void OutputRecord::initHandshaker() {
}

void OutputRecord::finishHandshake() {
}

void OutputRecord::launchRetransmission() {
}

void OutputRecord::close() {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->isClosed$) {
				return$1 = true;
				goto $finally;
			}
			this->isClosed$ = true;
			$nc(this->writeCipher)->dispose();
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

bool OutputRecord::isClosed() {
	return this->isClosed$;
}

int32_t OutputRecord::calculateFragmentSize(int32_t fragmentLimit) {
	if (this->fragmentSize > 0) {
		fragmentLimit = $Math::min(fragmentLimit, this->fragmentSize);
	}
	if ($nc(this->protocolVersion)->useTLS13PlusSpec()) {
		$init($OutputRecord$T13PaddingHolder);
		return fragmentLimit - $nc($OutputRecord$T13PaddingHolder::zeros)->length - 1;
	}
	return fragmentLimit;
}

int64_t OutputRecord::encrypt($SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, $ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, $ProtocolVersion* protocolVersion) {
	$init(OutputRecord);
	bool isDTLS = $nc(protocolVersion)->isDTLS;
	if (isDTLS) {
		if (protocolVersion->useTLS13PlusSpec()) {
			return d13Encrypt(encCipher, contentType, destination, headerOffset, dstLim, headerSize, protocolVersion);
		} else {
			return d10Encrypt(encCipher, contentType, destination, headerOffset, dstLim, headerSize, protocolVersion);
		}
	} else if (protocolVersion->useTLS13PlusSpec()) {
		return t13Encrypt(encCipher, contentType, destination, headerOffset, dstLim, headerSize, protocolVersion);
	} else {
		return t10Encrypt(encCipher, contentType, destination, headerOffset, dstLim, headerSize, protocolVersion);
	}
}

int64_t OutputRecord::d13Encrypt($SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, $ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, $ProtocolVersion* protocolVersion) {
	$init(OutputRecord);
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

int64_t OutputRecord::d10Encrypt($SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, $ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, $ProtocolVersion* protocolVersion) {
	$init(OutputRecord);
	$var($bytes, sequenceNumber, $nc($nc(encCipher)->authenticator)->sequenceNumber());
	encCipher->encrypt(contentType, destination);
	int32_t fragLen = $nc(destination)->limit() - headerOffset - headerSize;
	destination->put(headerOffset, contentType);
	destination->put(headerOffset + 1, $nc(protocolVersion)->major);
	destination->put(headerOffset + 2, $nc(protocolVersion)->minor);
	destination->put(headerOffset + 3, $nc(sequenceNumber)->get(0));
	destination->put(headerOffset + 4, $nc(sequenceNumber)->get(1));
	destination->put(headerOffset + 5, $nc(sequenceNumber)->get(2));
	destination->put(headerOffset + 6, $nc(sequenceNumber)->get(3));
	destination->put(headerOffset + 7, $nc(sequenceNumber)->get(4));
	destination->put(headerOffset + 8, $nc(sequenceNumber)->get(5));
	destination->put(headerOffset + 9, $nc(sequenceNumber)->get(6));
	destination->put(headerOffset + 10, $nc(sequenceNumber)->get(7));
	destination->put(headerOffset + 11, (int8_t)(fragLen >> 8));
	destination->put(headerOffset + 12, (int8_t)fragLen);
	destination->position(destination->limit());
	return $Authenticator::toLong(sequenceNumber);
}

int64_t OutputRecord::t13Encrypt($SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, $ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, $ProtocolVersion* protocolVersion) {
	$init(OutputRecord);
	if (!$nc(encCipher)->isNullCipher()) {
		int32_t endOfPt = $nc(destination)->limit();
		int32_t startOfPt = destination->position();
		destination->position(endOfPt);
		$init($OutputRecord$T13PaddingHolder);
		destination->limit(endOfPt + 1 + $nc($OutputRecord$T13PaddingHolder::zeros)->length);
		destination->put(contentType);
		destination->put($OutputRecord$T13PaddingHolder::zeros);
		destination->position(startOfPt);
	}
	$ProtocolVersion* pv = protocolVersion;
	if (!$nc(encCipher)->isNullCipher()) {
		$init($ProtocolVersion);
		pv = $ProtocolVersion::TLS12;
		$init($ContentType);
		contentType = $ContentType::APPLICATION_DATA->id;
	} else if ($nc(protocolVersion)->useTLS13PlusSpec()) {
		$init($ProtocolVersion);
		pv = $ProtocolVersion::TLS12;
	}
	$var($bytes, sequenceNumber, $nc($nc(encCipher)->authenticator)->sequenceNumber());
	encCipher->encrypt(contentType, destination);
	int32_t fragLen = $nc(destination)->limit() - headerOffset - headerSize;
	destination->put(headerOffset, contentType);
	destination->put(headerOffset + 1, $nc(pv)->major);
	destination->put(headerOffset + 2, $nc(pv)->minor);
	destination->put(headerOffset + 3, (int8_t)(fragLen >> 8));
	destination->put(headerOffset + 4, (int8_t)fragLen);
	destination->position(destination->limit());
	return $Authenticator::toLong(sequenceNumber);
}

int64_t OutputRecord::t10Encrypt($SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, $ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, $ProtocolVersion* protocolVersion) {
	$init(OutputRecord);
	$var($bytes, sequenceNumber, $nc($nc(encCipher)->authenticator)->sequenceNumber());
	encCipher->encrypt(contentType, destination);
	int32_t fragLen = $nc(destination)->limit() - headerOffset - headerSize;
	destination->put(headerOffset, contentType);
	destination->put(headerOffset + 1, $nc(protocolVersion)->major);
	destination->put(headerOffset + 2, $nc(protocolVersion)->minor);
	destination->put(headerOffset + 3, (int8_t)(fragLen >> 8));
	destination->put(headerOffset + 4, (int8_t)fragLen);
	destination->position(destination->limit());
	return $Authenticator::toLong(sequenceNumber);
}

int64_t OutputRecord::encrypt($SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, int32_t headerSize) {
	if ($nc(this->protocolVersion)->useTLS13PlusSpec()) {
		return t13Encrypt(encCipher, contentType, headerSize);
	} else {
		return t10Encrypt(encCipher, contentType, headerSize);
	}
}

int64_t OutputRecord::t13Encrypt($SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, int32_t headerSize) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(encCipher)->isNullCipher()) {
		write((int32_t)contentType);
		$init($OutputRecord$T13PaddingHolder);
		write($OutputRecord$T13PaddingHolder::zeros, 0, $nc($OutputRecord$T13PaddingHolder::zeros)->length);
	}
	$var($bytes, sequenceNumber, $nc($nc(encCipher)->authenticator)->sequenceNumber());
	int32_t contentLen = this->count - headerSize;
	int32_t requiredPacketSize = encCipher->calculatePacketSize(contentLen, headerSize);
	if (requiredPacketSize > $nc(this->buf)->length) {
		$var($bytes, newBuf, $new($bytes, requiredPacketSize));
		$System::arraycopy(this->buf, 0, newBuf, 0, this->count);
		$set(this, buf, newBuf);
	}
	$ProtocolVersion* pv = nullptr;
	if (!encCipher->isNullCipher()) {
		$init($ProtocolVersion);
		pv = $ProtocolVersion::TLS12;
		$init($ContentType);
		contentType = $ContentType::APPLICATION_DATA->id;
	} else {
		$init($ProtocolVersion);
		pv = $ProtocolVersion::TLS12;
	}
	$var($ByteBuffer, destination, $ByteBuffer::wrap(this->buf, headerSize, contentLen));
	this->count = headerSize + encCipher->encrypt(contentType, destination);
	int32_t fragLen = this->count - headerSize;
	$nc(this->buf)->set(0, contentType);
	$nc(this->buf)->set(1, $nc(pv)->major);
	$nc(this->buf)->set(2, pv->minor);
	$nc(this->buf)->set(3, (int8_t)((int32_t)((fragLen >> 8) & (uint32_t)255)));
	$nc(this->buf)->set(4, (int8_t)((int32_t)(fragLen & (uint32_t)255)));
	return $Authenticator::toLong(sequenceNumber);
}

int64_t OutputRecord::t10Encrypt($SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, int32_t headerSize) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, sequenceNumber, $nc($nc(encCipher)->authenticator)->sequenceNumber());
	int32_t position = headerSize + $nc(this->writeCipher)->getExplicitNonceSize();
	int32_t contentLen = this->count - position;
	int32_t requiredPacketSize = encCipher->calculatePacketSize(contentLen, headerSize);
	if (requiredPacketSize > $nc(this->buf)->length) {
		$var($bytes, newBuf, $new($bytes, requiredPacketSize));
		$System::arraycopy(this->buf, 0, newBuf, 0, this->count);
		$set(this, buf, newBuf);
	}
	$var($ByteBuffer, destination, $ByteBuffer::wrap(this->buf, position, contentLen));
	this->count = headerSize + encCipher->encrypt(contentType, destination);
	int32_t fragLen = this->count - headerSize;
	$nc(this->buf)->set(0, contentType);
	$nc(this->buf)->set(1, $nc(this->protocolVersion)->major);
	$nc(this->buf)->set(2, $nc(this->protocolVersion)->minor);
	$nc(this->buf)->set(3, (int8_t)((int32_t)((fragLen >> 8) & (uint32_t)255)));
	$nc(this->buf)->set(4, (int8_t)((int32_t)(fragLen & (uint32_t)255)));
	return $Authenticator::toLong(sequenceNumber);
}

$ByteBuffer* OutputRecord::encodeV2ClientHello($bytes* fragment, int32_t offset, int32_t length) {
	$init(OutputRecord);
	$useLocalCurrentObjectStackCache();
	int32_t v3SessIdLenOffset = offset + 34;
	int32_t v3SessIdLen = $nc(fragment)->get(v3SessIdLenOffset);
	int32_t v3CSLenOffset = v3SessIdLenOffset + 1 + v3SessIdLen;
	int32_t v3CSLen = (((int32_t)(fragment->get(v3CSLenOffset) & (uint32_t)255)) << 8) + ((int32_t)(fragment->get(v3CSLenOffset + 1) & (uint32_t)255));
	int32_t cipherSpecs = v3CSLen / 2;
	int32_t v2MaxMsgLen = 11 + (cipherSpecs * 6) + 3 + 32;
	$var($bytes, dstBytes, $new($bytes, v2MaxMsgLen));
	$var($ByteBuffer, dstBuf, $ByteBuffer::wrap(dstBytes));
	int32_t v3CSOffset = v3CSLenOffset + 2;
	int32_t v2CSLen = 0;
	$nc(dstBuf)->position(11);
	bool containsRenegoInfoSCSV = false;
	for (int32_t i = 0; i < cipherSpecs; ++i) {
		int8_t byte1 = 0;
		int8_t byte2 = 0;
		byte1 = fragment->get(v3CSOffset++);
		byte2 = fragment->get(v3CSOffset++);
		v2CSLen += V3toV2CipherSuite(dstBuf, byte1, byte2);
		if (!containsRenegoInfoSCSV && byte1 == (int8_t)0 && byte2 == (int8_t)255) {
			containsRenegoInfoSCSV = true;
		}
	}
	if (!containsRenegoInfoSCSV) {
		v2CSLen += V3toV2CipherSuite(dstBuf, (int8_t)0, (int8_t)255);
	}
	dstBuf->put(fragment, (offset + 2), 32);
	int32_t msgLen = dstBuf->position() - 2;
	dstBuf->position(0);
	dstBuf->put((int8_t)(128 | ((int32_t)(((int32_t)((uint32_t)msgLen >> 8)) & (uint32_t)255))));
	dstBuf->put((int8_t)((int32_t)(msgLen & (uint32_t)255)));
	$init($SSLHandshake);
	dstBuf->put($SSLHandshake::CLIENT_HELLO->id);
	dstBuf->put(fragment->get(offset));
	dstBuf->put(fragment->get(offset + 1));
	dstBuf->put((int8_t)((int32_t)((uint32_t)v2CSLen >> 8)));
	dstBuf->put((int8_t)((int32_t)(v2CSLen & (uint32_t)255)));
	dstBuf->put((int8_t)0);
	dstBuf->put((int8_t)0);
	dstBuf->put((int8_t)0);
	dstBuf->put((int8_t)32);
	dstBuf->position(0);
	dstBuf->limit(msgLen + 2);
	return dstBuf;
}

int32_t OutputRecord::V3toV2CipherSuite($ByteBuffer* dstBuf, int8_t byte1, int8_t byte2) {
	$init(OutputRecord);
	$nc(dstBuf)->put((int8_t)0);
	dstBuf->put(byte1);
	dstBuf->put(byte2);
	if ((((int32_t)(byte2 & (uint32_t)255)) > 10) || ($nc(OutputRecord::V3toV2CipherMap1)->get(byte2) == -1)) {
		return 3;
	}
	dstBuf->put((int8_t)$nc(OutputRecord::V3toV2CipherMap1)->get(byte2));
	dstBuf->put((int8_t)0);
	dstBuf->put((int8_t)$nc(OutputRecord::V3toV2CipherMap3)->get(byte2));
	return 6;
}

void clinit$OutputRecord($Class* class$) {
	$assignStatic(OutputRecord::V3toV2CipherMap1, $new($ints, {
		-1,
		-1,
		-1,
		2,
		1,
		-1,
		4,
		5,
		-1,
		6,
		7
	}));
	$assignStatic(OutputRecord::V3toV2CipherMap3, $new($ints, {
		-1,
		-1,
		-1,
		128,
		128,
		-1,
		128,
		128,
		-1,
		64,
		192
	}));
	$init($SSLHandshake);
	$assignStatic(OutputRecord::HANDSHAKE_MESSAGE_KEY_UPDATE, $new($bytes, {
		$SSLHandshake::KEY_UPDATE->id,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0
	}));
}

OutputRecord::OutputRecord() {
}

$Class* OutputRecord::load$($String* name, bool initialize) {
	$loadClass(OutputRecord, name, initialize, &_OutputRecord_ClassInfo_, clinit$OutputRecord, allocate$OutputRecord);
	return class$;
}

$Class* OutputRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun