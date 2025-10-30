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
using $Buffer = ::java::nio::Buffer;
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

$FieldInfo _DTLSInputRecord_FieldInfo_[] = {
	{"reassembler", "Lsun/security/ssl/DTLSInputRecord$DTLSReassembler;", nullptr, $PRIVATE, $field(DTLSInputRecord, reassembler)},
	{"readEpoch", "I", nullptr, $PRIVATE, $field(DTLSInputRecord, readEpoch)},
	{}
};

$MethodInfo _DTLSInputRecord_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/HandshakeHash;)V", nullptr, 0, $method(static_cast<void(DTLSInputRecord::*)($HandshakeHash*)>(&DTLSInputRecord::init$))},
	{"acquirePlaintext", "()Lsun/security/ssl/Plaintext;", nullptr, 0, nullptr, "javax.net.ssl.SSLProtocolException"},
	{"bytesInCompletePacket", "([Ljava/nio/ByteBuffer;II)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"bytesInCompletePacket", "(Ljava/nio/ByteBuffer;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DTLSInputRecord::*)($ByteBuffer*)>(&DTLSInputRecord::bytesInCompletePacket)), "javax.net.ssl.SSLException"},
	{"changeReadCiphers", "(Lsun/security/ssl/SSLCipher$SSLReadCipher;)V", nullptr, 0},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decode", "([Ljava/nio/ByteBuffer;II)[Lsun/security/ssl/Plaintext;", nullptr, 0, nullptr, "java.io.IOException,javax.crypto.BadPaddingException"},
	{"decode", "(Ljava/nio/ByteBuffer;)[Lsun/security/ssl/Plaintext;", nullptr, 0, $method(static_cast<$PlaintextArray*(DTLSInputRecord::*)($ByteBuffer*)>(&DTLSInputRecord::decode)), "javax.net.ssl.SSLProtocolException"},
	{"estimateFragmentSize", "(I)I", nullptr, 0},
	{"expectingFinishFlight", "()V", nullptr, 0},
	{"finishHandshake", "()V", nullptr, 0},
	{"isEmpty", "()Z", nullptr, 0},
	{"parseHandshakeMessage", "(BBB[BIJLjava/nio/ByteBuffer;)Lsun/security/ssl/DTLSInputRecord$HandshakeFragment;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$DTLSInputRecord$HandshakeFragment*(*)(int8_t,int8_t,int8_t,$bytes*,int32_t,int64_t,$ByteBuffer*)>(&DTLSInputRecord::parseHandshakeMessage)), "javax.net.ssl.SSLProtocolException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DTLSInputRecord_InnerClassesInfo_[] = {
	{"sun.security.ssl.DTLSInputRecord$DTLSReassembler", "sun.security.ssl.DTLSInputRecord", "DTLSReassembler", $FINAL},
	{"sun.security.ssl.DTLSInputRecord$HandshakeFlight", "sun.security.ssl.DTLSInputRecord", "HandshakeFlight", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.DTLSInputRecord$HoleDescriptor", "sun.security.ssl.DTLSInputRecord", "HoleDescriptor", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.DTLSInputRecord$HandshakeFragment", "sun.security.ssl.DTLSInputRecord", "HandshakeFragment", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.DTLSInputRecord$RecordFragment", "sun.security.ssl.DTLSInputRecord", "RecordFragment", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DTLSInputRecord_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DTLSInputRecord",
	"sun.security.ssl.InputRecord",
	"sun.security.ssl.DTLSRecord",
	_DTLSInputRecord_FieldInfo_,
	_DTLSInputRecord_MethodInfo_,
	nullptr,
	nullptr,
	_DTLSInputRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.DTLSInputRecord$DTLSReassembler,sun.security.ssl.DTLSInputRecord$HandshakeFlight,sun.security.ssl.DTLSInputRecord$HoleDescriptor,sun.security.ssl.DTLSInputRecord$HandshakeFragment,sun.security.ssl.DTLSInputRecord$RecordFragment"
};

$Object* allocate$DTLSInputRecord($Class* clazz) {
	return $of($alloc(DTLSInputRecord));
}

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
	return ((this->reassembler == nullptr) || $nc(this->reassembler)->isEmpty());
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
		$nc(this->reassembler)->expectingFinishFlight();
	}
}

void DTLSInputRecord::finishHandshake() {
	$set(this, reassembler, nullptr);
}

$Plaintext* DTLSInputRecord::acquirePlaintext() {
	if (this->reassembler != nullptr) {
		return $nc(this->reassembler)->acquirePlaintext();
	}
	return nullptr;
}

$PlaintextArray* DTLSInputRecord::decode($ByteBufferArray* srcs, int32_t srcsOffset, int32_t srcsLength) {
	$useLocalCurrentObjectStackCache();
	if (srcs == nullptr || $nc(srcs)->length == 0 || srcsLength == 0) {
		$var($Plaintext, pt, acquirePlaintext());
		return pt == nullptr ? $new($PlaintextArray, 0) : $new($PlaintextArray, {pt});
	} else if (srcsLength == 1) {
		return decode($nc(srcs)->get(srcsOffset));
	} else {
		$var($ByteBuffer, packet, extract(srcs, srcsOffset, srcsLength, $DTLSRecord::headerSize));
		return decode(packet);
	}
}

$PlaintextArray* DTLSInputRecord::decode($ByteBuffer* packet) {
	$useLocalCurrentObjectStackCache();
	if (this->isClosed$) {
		return nullptr;
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
		$SSLLogger::fine("Raw read"_s, $$new($ObjectArray, {$of(packet)}));
	}
	int32_t srcPos = $nc(packet)->position();
	int32_t srcLim = packet->limit();
	int8_t contentType = packet->get();
	int8_t majorVersion = packet->get();
	int8_t minorVersion = packet->get();
	$var($bytes, recordEnS, $new($bytes, 8));
	packet->get(recordEnS);
	int32_t recordEpoch = (((int32_t)(recordEnS->get(0) & (uint32_t)255)) << 8) | ((int32_t)(recordEnS->get(1) & (uint32_t)255));
	int64_t recordSeq = (((((((int64_t)(recordEnS->get(2) & (uint64_t)(int64_t)255)) << 40) | (((int64_t)(recordEnS->get(3) & (uint64_t)(int64_t)255)) << 32)) | (((int64_t)(recordEnS->get(4) & (uint64_t)(int64_t)255)) << 24)) | (((int64_t)(recordEnS->get(5) & (uint64_t)(int64_t)255)) << 16)) | (((int64_t)(recordEnS->get(6) & (uint64_t)(int64_t)255)) << 8)) | ((int64_t)(recordEnS->get(7) & (uint64_t)(int64_t)255));
	int32_t var$0 = (((int32_t)(packet->get() & (uint32_t)255)) << 8);
	int32_t contentLen = var$0 | ((int32_t)(packet->get() & (uint32_t)255));
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
		$var($String, var$3, $$str({"READ: "_s, $($ProtocolVersion::nameOf(majorVersion, minorVersion)), " "_s}));
		$var($String, var$2, $$concat(var$3, $($ContentType::nameOf(contentType))));
		$var($String, var$1, $$concat(var$2, ", length = "));
		$SSLLogger::fine($$concat(var$1, $$str(contentLen)), $$new($ObjectArray, 0));
	}
	int32_t recLim = $Math::addExact(srcPos, $DTLSRecord::headerSize + contentLen);
	if (this->readEpoch > recordEpoch) {
		packet->position(recLim);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
			$SSLLogger::fine("READ: discard this old record"_s, $$new($ObjectArray, {$of(recordEnS)}));
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
	{
		$var($Throwable, var$4, nullptr);
		$var($PlaintextArray, var$6, nullptr);
		bool return$5 = false;
		try {
			try {
				$var($Plaintext, plaintext, $nc(this->readCipher)->decrypt(contentType, packet, recordEnS));
				$assign(plaintextFragment, $nc(plaintext)->fragment);
				contentType = plaintext->contentType;
			} catch ($GeneralSecurityException& gse) {
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::fine($$str({"Discard invalid record: "_s, gse}), $$new($ObjectArray, 0));
				}
				$assign(var$6, nullptr);
				return$5 = true;
				goto $finally;
			}
		} catch ($Throwable& var$7) {
			$assign(var$4, var$7);
		} $finally: {
			packet->limit(srcLim);
			packet->position(recLim);
		}
		if (var$4 != nullptr) {
			$throw(var$4);
		}
		if (return$5) {
			return var$6;
		}
	}
	$init($ContentType);
	if (contentType != $ContentType::CHANGE_CIPHER_SPEC->id && contentType != $ContentType::HANDSHAKE->id) {
		if ((this->reassembler != nullptr) && ($nc(this->reassembler)->handshakeEpoch < recordEpoch)) {
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
		$var($Plaintext, pt, $nc(this->reassembler)->acquirePlaintext());
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
	$useLocalCurrentObjectStackCache();
	if ($nc(packet)->remaining() < $DTLSRecord::headerSize) {
		return -1;
	}
	int32_t pos = $nc(packet)->position();
	int8_t contentType = packet->get(pos);
	if ($ContentType::valueOf(contentType) == nullptr) {
		$throwNew($SSLException, "Unrecognized SSL message, plaintext connection?"_s);
	}
	int8_t majorVersion = packet->get(pos + 1);
	int8_t minorVersion = packet->get(pos + 2);
	if (!$ProtocolVersion::isNegotiable(majorVersion, minorVersion, true, false)) {
		$throwNew($SSLException, $$str({"Unrecognized record version "_s, $($ProtocolVersion::nameOf(majorVersion, minorVersion)), " , plaintext connection?"_s}));
	}
	int32_t var$0 = (((int32_t)(packet->get(pos + 11) & (uint32_t)255)) << 8);
	int32_t fragLen = var$0 + ((int32_t)(packet->get(pos + 12) & (uint32_t)255)) + $DTLSRecord::headerSize;
	if (fragLen > $Record::maxFragmentSize) {
		$throwNew($SSLException, $$str({"Record overflow, fragment length ("_s, $$str(fragLen), ") MUST not exceed "_s, $$str($Record::maxFragmentSize)}));
	}
	return fragLen;
}

$DTLSInputRecord$HandshakeFragment* DTLSInputRecord::parseHandshakeMessage(int8_t contentType, int8_t majorVersion, int8_t minorVersion, $bytes* recordEnS, int32_t recordEpoch, int64_t recordSeq, $ByteBuffer* plaintextFragment) {
	$init(DTLSInputRecord);
	$useLocalCurrentObjectStackCache();
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
			$SSLLogger::fine($$str({"Discard invalid record: unknown handshake type size, Handshake.msg_type = "_s, $$str(((int32_t)(handshakeType & (uint32_t)255)))}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	int32_t var$1 = (((int32_t)(plaintextFragment->get() & (uint32_t)255)) << 16);
	int32_t var$0 = var$1 | (((int32_t)(plaintextFragment->get() & (uint32_t)255)) << 8);
	int32_t messageLength = var$0 | ((int32_t)(plaintextFragment->get() & (uint32_t)255));
	$init($SSLConfiguration);
	if (messageLength > $SSLConfiguration::maxHandshakeMessageSize) {
		$throwNew($SSLProtocolException, $$str({"The size of the handshake message ("_s, $$str(messageLength), ") exceeds the maximum allowed size ("_s, $$str($SSLConfiguration::maxHandshakeMessageSize), ")"_s}));
	}
	int32_t var$2 = (((int32_t)(plaintextFragment->get() & (uint32_t)255)) << 8);
	int32_t messageSeq = var$2 | ((int32_t)(plaintextFragment->get() & (uint32_t)255));
	int32_t var$4 = (((int32_t)(plaintextFragment->get() & (uint32_t)255)) << 16);
	int32_t var$3 = var$4 | (((int32_t)(plaintextFragment->get() & (uint32_t)255)) << 8);
	int32_t fragmentOffset = var$3 | ((int32_t)(plaintextFragment->get() & (uint32_t)255));
	int32_t var$6 = (((int32_t)(plaintextFragment->get() & (uint32_t)255)) << 16);
	int32_t var$5 = var$6 | (((int32_t)(plaintextFragment->get() & (uint32_t)255)) << 8);
	int32_t fragmentLength = var$5 | ((int32_t)(plaintextFragment->get() & (uint32_t)255));
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
	$loadClass(DTLSInputRecord, name, initialize, &_DTLSInputRecord_ClassInfo_, allocate$DTLSInputRecord);
	return class$;
}

$Class* DTLSInputRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun