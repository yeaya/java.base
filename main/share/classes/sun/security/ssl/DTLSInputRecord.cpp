#include <sun/security/ssl/DTLSInputRecord.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/GeneralSecurityException.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/DTLSInputRecord$DTLSReassembler.h>
#include <sun/security/ssl/DTLSInputRecord$HandshakeFragment.h>
#include <sun/security/ssl/DTLSInputRecord$RecordFragment.h>
#include <sun/security/ssl/DTLSRecord.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/InputRecord.h>
#include <sun/security/ssl/Plaintext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CHANGE_CIPHER_SPEC
#undef HANDSHAKE

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $PlaintextArray = $Array<::sun::security::ssl::Plaintext>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $ContentType = ::sun::security::ssl::ContentType;
using $DTLSInputRecord$DTLSReassembler = ::sun::security::ssl::DTLSInputRecord$DTLSReassembler;
using $DTLSInputRecord$HandshakeFragment = ::sun::security::ssl::DTLSInputRecord$HandshakeFragment;
using $DTLSInputRecord$RecordFragment = ::sun::security::ssl::DTLSInputRecord$RecordFragment;
using $DTLSRecord = ::sun::security::ssl::DTLSRecord;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $InputRecord = ::sun::security::ssl::InputRecord;
using $Plaintext = ::sun::security::ssl::Plaintext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

int32_t DTLSInputRecord::hashCode() {
	 return this->$InputRecord::hashCode();
}

bool DTLSInputRecord::equals(Object$* obj) {
	 return this->$InputRecord::equals(obj);
}

$Object* DTLSInputRecord::clone() {
	 return this->$InputRecord::clone();
}

$String* DTLSInputRecord::toString() {
	 return this->$InputRecord::toString();
}

void DTLSInputRecord::finalize() {
	this->$InputRecord::finalize();
}

void DTLSInputRecord::init$($HandshakeHash* handshakeHash) {
	$InputRecord::init$(handshakeHash, $($SSLCipher$SSLReadCipher::nullDTlsReadCipher()));
	$set(this, reassembler, nullptr);
	this->readEpoch = 0;
}

void DTLSInputRecord::changeReadCiphers($SSLCipher$SSLReadCipher* readCipher) {
	$set(this, readCipher, readCipher);
	++this->readEpoch;
}

void DTLSInputRecord::close() {
	if (!this->isClosed$) {
		$InputRecord::close();
	}
}

bool DTLSInputRecord::isEmpty() {
	return ((this->reassembler == nullptr) || this->reassembler->isEmpty());
}

int32_t DTLSInputRecord::estimateFragmentSize(int32_t packetSize) {
	if (packetSize > 0) {
		return $nc(this->readCipher)->estimateFragmentSize(packetSize, $DTLSRecord::headerSize);
	} else {
		return $Record::maxDataSize;
	}
}

void DTLSInputRecord::expectingFinishFlight() {
	if (this->reassembler != nullptr) {
		this->reassembler->expectingFinishFlight();
	}
}

void DTLSInputRecord::finishHandshake() {
	$set(this, reassembler, nullptr);
}

$Plaintext* DTLSInputRecord::acquirePlaintext() {
	if (this->reassembler != nullptr) {
		return this->reassembler->acquirePlaintext();
	}
	return nullptr;
}

$PlaintextArray* DTLSInputRecord::decode($ByteBufferArray* srcs, int32_t srcsOffset, int32_t srcsLength) {
	$useLocalObjectStack();
	if (srcs == nullptr || srcs->length == 0 || srcsLength == 0) {
		$var($Plaintext, pt, acquirePlaintext());
		return pt == nullptr ? $new($PlaintextArray, 0) : $new($PlaintextArray, {pt});
	} else if (srcsLength == 1) {
		return decode(srcs->get(srcsOffset));
	} else {
		$var($ByteBuffer, packet, extract(srcs, srcsOffset, srcsLength, $DTLSRecord::headerSize));
		return decode(packet);
	}
}

$PlaintextArray* DTLSInputRecord::decode($ByteBuffer* packet) {
	$useLocalObjectStack();
	if (this->isClosed$) {
		return nullptr;
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
		$SSLLogger::fine("Raw read"_s, $$new($ObjectArray, {packet}));
	}
	int32_t srcPos = $nc(packet)->position();
	int32_t srcLim = packet->limit();
	int8_t contentType = packet->get();
	int8_t majorVersion = packet->get();
	int8_t minorVersion = packet->get();
	$var($bytes, recordEnS, $new($bytes, 8));
	packet->get(recordEnS);
	int32_t recordEpoch = ((recordEnS->get(0) & 0xff) << 8) | (recordEnS->get(1) & 0xff);
	int64_t recordSeq = ((((((recordEnS->get(2) & (int64_t)0xff) << 40) | ((recordEnS->get(3) & (int64_t)0xff) << 32)) | ((recordEnS->get(4) & (int64_t)0xff) << 24)) | ((recordEnS->get(5) & (int64_t)0xff) << 16)) | ((recordEnS->get(6) & (int64_t)0xff) << 8)) | (recordEnS->get(7) & (int64_t)0xff);
	int32_t var$0 = (packet->get() & 0xff) << 8;
	int32_t contentLen = var$0 | (packet->get() & 0xff);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("READ: "_s);
		var$1->append($($ProtocolVersion::nameOf(majorVersion, minorVersion)));
		var$1->append(" "_s);
		var$1->append($($ContentType::nameOf(contentType)));
		var$1->append(", length = "_s);
		var$1->append(contentLen);
		$SSLLogger::fine($$str(var$1), $$new($ObjectArray, 0));
	}
	int32_t recLim = $Math::addExact(srcPos, $DTLSRecord::headerSize + contentLen);
	if (this->readEpoch > recordEpoch) {
		packet->position(recLim);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
			$SSLLogger::fine("READ: discard this old record"_s, $$new($ObjectArray, {recordEnS}));
		}
		return nullptr;
	}
	if (this->readEpoch < recordEpoch) {
		$init($ContentType);
		if ((contentType != $ContentType::HANDSHAKE->id && contentType != $ContentType::CHANGE_CIPHER_SPEC->id) || (this->reassembler == nullptr && contentType != $ContentType::HANDSHAKE->id) || (this->readEpoch < (recordEpoch - 1))) {
			packet->position(recLim);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("verbose"_s)) {
				$SSLLogger::fine("Premature record (epoch), discard it."_s, $$new($ObjectArray, 0));
			}
			return nullptr;
		}
		$var($bytes, fragment, $new($bytes, contentLen));
		packet->get(fragment);
		$var($DTLSInputRecord$RecordFragment, buffered, $new($DTLSInputRecord$RecordFragment, fragment, contentType, majorVersion, minorVersion, recordEnS, recordEpoch, recordSeq, true));
		if (this->reassembler == nullptr) {
			$set(this, reassembler, $new($DTLSInputRecord$DTLSReassembler, this, recordEpoch));
		}
		$nc(this->reassembler)->queueUpFragment(buffered);
		packet->position(recLim);
		$var($Plaintext, pt, $nc(this->reassembler)->acquirePlaintext());
		return pt == nullptr ? ($PlaintextArray*)nullptr : $new($PlaintextArray, {pt});
	}
	packet->limit(recLim);
	packet->position(srcPos + $DTLSRecord::headerSize);
	$var($ByteBuffer, plaintextFragment, nullptr);
	$var($Throwable, var$2, nullptr);
	$var($PlaintextArray, var$4, nullptr);
	bool return$3 = false;
	try {
		try {
			$var($Plaintext, plaintext, $nc(this->readCipher)->decrypt(contentType, packet, recordEnS));
			$assign(plaintextFragment, $nc(plaintext)->fragment);
			contentType = plaintext->contentType;
		} catch ($GeneralSecurityException& gse) {
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
				$SSLLogger::fine($$str({"Discard invalid record: "_s, gse}), $$new($ObjectArray, 0));
			}
			$assign(var$4, nullptr);
			return$3 = true;
			goto $finally;
		}
	} catch ($Throwable& var$5) {
		$assign(var$2, var$5);
	} $finally: {
		packet->limit(srcLim);
		packet->position(recLim);
	}
	if (var$2 != nullptr) {
		$throw(var$2);
	}
	if (return$3) {
		return var$4;
	}
	$init($ContentType);
	if (contentType != $ContentType::CHANGE_CIPHER_SPEC->id && contentType != $ContentType::HANDSHAKE->id) {
		if ((this->reassembler != nullptr) && (this->reassembler->handshakeEpoch < recordEpoch)) {
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("verbose"_s)) {
				$SSLLogger::fine("Cleanup the handshake reassembler"_s, $$new($ObjectArray, 0));
			}
			$set(this, reassembler, nullptr);
		}
		return $new($PlaintextArray, {$$new($Plaintext, contentType, majorVersion, minorVersion, recordEpoch, $Authenticator::toLong(recordEnS), plaintextFragment)});
	}
	if (contentType == $ContentType::CHANGE_CIPHER_SPEC->id) {
		if (this->reassembler == nullptr) {
			$set(this, reassembler, $new($DTLSInputRecord$DTLSReassembler, this, recordEpoch));
		}
		$nc(this->reassembler)->queueUpChangeCipherSpec($$new($DTLSInputRecord$RecordFragment, plaintextFragment, contentType, majorVersion, minorVersion, recordEnS, recordEpoch, recordSeq, false));
	} else {
		while ($nc(plaintextFragment)->remaining() > 0) {
			$var($DTLSInputRecord$HandshakeFragment, hsFrag, parseHandshakeMessage(contentType, majorVersion, minorVersion, recordEnS, recordEpoch, recordSeq, plaintextFragment));
			if (hsFrag == nullptr) {
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("verbose"_s)) {
					$SSLLogger::fine("Invalid handshake message, discard it."_s, $$new($ObjectArray, 0));
				}
				return nullptr;
			}
			if (this->reassembler == nullptr) {
				$set(this, reassembler, $new($DTLSInputRecord$DTLSReassembler, this, recordEpoch));
			}
			$nc(this->reassembler)->queueUpHandshake(hsFrag);
		}
	}
	if (this->reassembler != nullptr) {
		$var($Plaintext, pt, this->reassembler->acquirePlaintext());
		return pt == nullptr ? ($PlaintextArray*)nullptr : $new($PlaintextArray, {pt});
	}
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("verbose"_s)) {
		$SSLLogger::fine("The reassembler is not initialized yet."_s, $$new($ObjectArray, 0));
	}
	return nullptr;
}

int32_t DTLSInputRecord::bytesInCompletePacket($ByteBufferArray* srcs, int32_t srcsOffset, int32_t srcsLength) {
	return bytesInCompletePacket($nc(srcs)->get(srcsOffset));
}

int32_t DTLSInputRecord::bytesInCompletePacket($ByteBuffer* packet) {
	$useLocalObjectStack();
	if ($nc(packet)->remaining() < $DTLSRecord::headerSize) {
		return -1;
	}
	int32_t pos = packet->position();
	int8_t contentType = packet->get(pos);
	if ($ContentType::valueOf(contentType) == nullptr) {
		$throwNew($SSLException, "Unrecognized SSL message, plaintext connection?"_s);
	}
	int8_t majorVersion = packet->get(pos + 1);
	int8_t minorVersion = packet->get(pos + 2);
	if (!$ProtocolVersion::isNegotiable(majorVersion, minorVersion, true, false)) {
		$throwNew($SSLException, $$str({"Unrecognized record version "_s, $($ProtocolVersion::nameOf(majorVersion, minorVersion)), " , plaintext connection?"_s}));
	}
	int32_t var$0 = (packet->get(pos + 11) & 0xff) << 8;
	int32_t fragLen = var$0 + (packet->get(pos + 12) & 0xff) + $DTLSRecord::headerSize;
	if (fragLen > $Record::maxFragmentSize) {
		$throwNew($SSLException, $$str({"Record overflow, fragment length ("_s, $$str(fragLen), ") MUST not exceed "_s, $$str($Record::maxFragmentSize)}));
	}
	return fragLen;
}

$DTLSInputRecord$HandshakeFragment* DTLSInputRecord::parseHandshakeMessage(int8_t contentType, int8_t majorVersion, int8_t minorVersion, $bytes* recordEnS, int32_t recordEpoch, int64_t recordSeq, $ByteBuffer* plaintextFragment) {
	$init(DTLSInputRecord);
	$useLocalObjectStack();
	int32_t remaining = $nc(plaintextFragment)->remaining();
	if (remaining < $DTLSRecord::handshakeHeaderSize) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine("Discard invalid record: too small record to hold a handshake fragment"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	int8_t handshakeType = plaintextFragment->get();
	if (!$SSLHandshake::isKnown(handshakeType)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine($$str({"Discard invalid record: unknown handshake type size, Handshake.msg_type = "_s, $$str((handshakeType & 0xff))}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	int32_t var$1 = (plaintextFragment->get() & 0xff) << 16;
	int32_t var$0 = var$1 | ((plaintextFragment->get() & 0xff) << 8);
	int32_t messageLength = var$0 | (plaintextFragment->get() & 0xff);
	$init($SSLConfiguration);
	if (messageLength > $SSLConfiguration::maxHandshakeMessageSize) {
		$throwNew($SSLProtocolException, $$str({"The size of the handshake message ("_s, $$str(messageLength), ") exceeds the maximum allowed size ("_s, $$str($SSLConfiguration::maxHandshakeMessageSize), ")"_s}));
	}
	int32_t var$2 = (plaintextFragment->get() & 0xff) << 8;
	int32_t messageSeq = var$2 | (plaintextFragment->get() & 0xff);
	int32_t var$4 = (plaintextFragment->get() & 0xff) << 16;
	int32_t var$3 = var$4 | ((plaintextFragment->get() & 0xff) << 8);
	int32_t fragmentOffset = var$3 | (plaintextFragment->get() & 0xff);
	int32_t var$6 = (plaintextFragment->get() & 0xff) << 16;
	int32_t var$5 = var$6 | ((plaintextFragment->get() & 0xff) << 8);
	int32_t fragmentLength = var$5 | (plaintextFragment->get() & 0xff);
	if ((remaining - $DTLSRecord::handshakeHeaderSize) < fragmentLength) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine("Discard invalid record: not a complete handshake fragment in the record"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, fragment, $new($bytes, fragmentLength));
	plaintextFragment->get(fragment);
	return $new($DTLSInputRecord$HandshakeFragment, fragment, contentType, majorVersion, minorVersion, recordEnS, recordEpoch, recordSeq, handshakeType, messageLength, messageSeq, fragmentOffset, fragmentLength);
}

DTLSInputRecord::DTLSInputRecord() {
}

$Class* DTLSInputRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"reassembler", "Lsun/security/ssl/DTLSInputRecord$DTLSReassembler;", nullptr, $PRIVATE, $field(DTLSInputRecord, reassembler)},
		{"readEpoch", "I", nullptr, $PRIVATE, $field(DTLSInputRecord, readEpoch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/security/ssl/HandshakeHash;)V", nullptr, 0, $method(DTLSInputRecord, init$, void, $HandshakeHash*)},
		{"acquirePlaintext", "()Lsun/security/ssl/Plaintext;", nullptr, 0, $virtualMethod(DTLSInputRecord, acquirePlaintext, $Plaintext*), "javax.net.ssl.SSLProtocolException"},
		{"bytesInCompletePacket", "([Ljava/nio/ByteBuffer;II)I", nullptr, 0, $virtualMethod(DTLSInputRecord, bytesInCompletePacket, int32_t, $ByteBufferArray*, int32_t, int32_t), "java.io.IOException"},
		{"bytesInCompletePacket", "(Ljava/nio/ByteBuffer;)I", nullptr, $PRIVATE, $method(DTLSInputRecord, bytesInCompletePacket, int32_t, $ByteBuffer*), "javax.net.ssl.SSLException"},
		{"changeReadCiphers", "(Lsun/security/ssl/SSLCipher$SSLReadCipher;)V", nullptr, 0, $virtualMethod(DTLSInputRecord, changeReadCiphers, void, $SSLCipher$SSLReadCipher*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(DTLSInputRecord, close, void), "java.io.IOException"},
		{"decode", "([Ljava/nio/ByteBuffer;II)[Lsun/security/ssl/Plaintext;", nullptr, 0, $virtualMethod(DTLSInputRecord, decode, $PlaintextArray*, $ByteBufferArray*, int32_t, int32_t), "java.io.IOException,javax.crypto.BadPaddingException"},
		{"decode", "(Ljava/nio/ByteBuffer;)[Lsun/security/ssl/Plaintext;", nullptr, 0, $method(DTLSInputRecord, decode, $PlaintextArray*, $ByteBuffer*), "javax.net.ssl.SSLProtocolException"},
		{"estimateFragmentSize", "(I)I", nullptr, 0, $virtualMethod(DTLSInputRecord, estimateFragmentSize, int32_t, int32_t)},
		{"expectingFinishFlight", "()V", nullptr, 0, $virtualMethod(DTLSInputRecord, expectingFinishFlight, void)},
		{"finishHandshake", "()V", nullptr, 0, $virtualMethod(DTLSInputRecord, finishHandshake, void)},
		{"isEmpty", "()Z", nullptr, 0, $virtualMethod(DTLSInputRecord, isEmpty, bool)},
		{"parseHandshakeMessage", "(BBB[BIJLjava/nio/ByteBuffer;)Lsun/security/ssl/DTLSInputRecord$HandshakeFragment;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTLSInputRecord, parseHandshakeMessage, $DTLSInputRecord$HandshakeFragment*, int8_t, int8_t, int8_t, $bytes*, int32_t, int64_t, $ByteBuffer*), "javax.net.ssl.SSLProtocolException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.DTLSInputRecord$DTLSReassembler", "sun.security.ssl.DTLSInputRecord", "DTLSReassembler", $FINAL},
		{"sun.security.ssl.DTLSInputRecord$HandshakeFlight", "sun.security.ssl.DTLSInputRecord", "HandshakeFlight", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.DTLSInputRecord$HoleDescriptor", "sun.security.ssl.DTLSInputRecord", "HoleDescriptor", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.DTLSInputRecord$HandshakeFragment", "sun.security.ssl.DTLSInputRecord", "HandshakeFragment", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.DTLSInputRecord$RecordFragment", "sun.security.ssl.DTLSInputRecord", "RecordFragment", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.DTLSInputRecord",
		"sun.security.ssl.InputRecord",
		"sun.security.ssl.DTLSRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.DTLSInputRecord$DTLSReassembler,sun.security.ssl.DTLSInputRecord$HandshakeFlight,sun.security.ssl.DTLSInputRecord$HoleDescriptor,sun.security.ssl.DTLSInputRecord$HandshakeFragment,sun.security.ssl.DTLSInputRecord$RecordFragment"
	};
	$loadClass(DTLSInputRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DTLSInputRecord));
	});
	return class$;
}

$Class* DTLSInputRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun