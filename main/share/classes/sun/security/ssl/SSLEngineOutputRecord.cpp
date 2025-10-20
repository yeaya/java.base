#include <sun/security/ssl/SSLEngineOutputRecord.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/Ciphertext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLEngineOutputRecord$HandshakeFragment.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLRecord.h>
#include <jcpp.h>

#undef ALERT
#undef APPLICATION_DATA
#undef CLIENT_HELLO
#undef HANDSHAKE
#undef NONE
#undef NOT_APPLICABLE

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $Alert = ::sun::security::ssl::Alert;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Ciphertext = ::sun::security::ssl::Ciphertext;
using $ContentType = ::sun::security::ssl::ContentType;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;
using $SSLEngineOutputRecord$HandshakeFragment = ::sun::security::ssl::SSLEngineOutputRecord$HandshakeFragment;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLRecord = ::sun::security::ssl::SSLRecord;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLEngineOutputRecord_FieldInfo_[] = {
	{"fragmenter", "Lsun/security/ssl/SSLEngineOutputRecord$HandshakeFragment;", nullptr, $PRIVATE, $field(SSLEngineOutputRecord, fragmenter)},
	{"isTalkingToV2", "Z", nullptr, $PRIVATE, $field(SSLEngineOutputRecord, isTalkingToV2)},
	{"v2ClientHello", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(SSLEngineOutputRecord, v2ClientHello)},
	{"isCloseWaiting", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SSLEngineOutputRecord, isCloseWaiting)},
	{}
};

$MethodInfo _SSLEngineOutputRecord_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/HandshakeHash;)V", nullptr, 0, $method(static_cast<void(SSLEngineOutputRecord::*)($HandshakeHash*)>(&SSLEngineOutputRecord::init$))},
	{"acquireCiphertext", "(Ljava/nio/ByteBuffer;)Lsun/security/ssl/Ciphertext;", nullptr, $PRIVATE, $method(static_cast<$Ciphertext*(SSLEngineOutputRecord::*)($ByteBuffer*)>(&SSLEngineOutputRecord::acquireCiphertext)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "([Ljava/nio/ByteBuffer;II[Ljava/nio/ByteBuffer;II)Lsun/security/ssl/Ciphertext;", nullptr, 0, nullptr, "java.io.IOException"},
	{"encode", "([Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;)Lsun/security/ssl/Ciphertext;", nullptr, $PRIVATE, $method(static_cast<$Ciphertext*(SSLEngineOutputRecord::*)($ByteBufferArray*,int32_t,int32_t,$ByteBuffer*)>(&SSLEngineOutputRecord::encode)), "java.io.IOException"},
	{"encodeAlert", "(BB)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"encodeChangeCipherSpec", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"encodeHandshake", "([BII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"encodeV2NoCipher", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"isClosed", "()Z", nullptr, 0},
	{"isEmpty", "()Z", nullptr, 0},
	{"needToSplitPayload", "()Z", nullptr, 0, $method(static_cast<bool(SSLEngineOutputRecord::*)()>(&SSLEngineOutputRecord::needToSplitPayload))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _SSLEngineOutputRecord_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLEngineOutputRecord$HandshakeFragment", "sun.security.ssl.SSLEngineOutputRecord", "HandshakeFragment", $FINAL},
	{"sun.security.ssl.SSLEngineOutputRecord$HandshakeMemo", "sun.security.ssl.SSLEngineOutputRecord", "HandshakeMemo", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLEngineOutputRecord$RecordMemo", "sun.security.ssl.SSLEngineOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLEngineOutputRecord_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLEngineOutputRecord",
	"sun.security.ssl.OutputRecord",
	"sun.security.ssl.SSLRecord",
	_SSLEngineOutputRecord_FieldInfo_,
	_SSLEngineOutputRecord_MethodInfo_,
	nullptr,
	nullptr,
	_SSLEngineOutputRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLEngineOutputRecord$HandshakeFragment,sun.security.ssl.SSLEngineOutputRecord$HandshakeMemo,sun.security.ssl.SSLEngineOutputRecord$RecordMemo"
};

$Object* allocate$SSLEngineOutputRecord($Class* clazz) {
	return $of($alloc(SSLEngineOutputRecord));
}

$String* SSLEngineOutputRecord::toString() {
	 return this->$OutputRecord::toString();
}

int32_t SSLEngineOutputRecord::hashCode() {
	 return this->$OutputRecord::hashCode();
}

bool SSLEngineOutputRecord::equals(Object$* obj) {
	 return this->$OutputRecord::equals(obj);
}

$Object* SSLEngineOutputRecord::clone() {
	 return this->$OutputRecord::clone();
}

void SSLEngineOutputRecord::finalize() {
	this->$OutputRecord::finalize();
}

void SSLEngineOutputRecord::init$($HandshakeHash* handshakeHash) {
	$OutputRecord::init$(handshakeHash, $($SSLCipher$SSLWriteCipher::nullTlsWriteCipher()));
	this->packetSize = $SSLRecord::maxRecordSize;
	$init($ProtocolVersion);
	$set(this, protocolVersion, $ProtocolVersion::NONE);
}

void SSLEngineOutputRecord::close() {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!this->$OutputRecord::isClosed$) {
				if (this->fragmenter != nullptr && !$nc(this->fragmenter)->isEmpty()) {
					this->isCloseWaiting = true;
				} else {
					$OutputRecord::close();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->recordLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLEngineOutputRecord::isClosed() {
	return this->$OutputRecord::isClosed$ || this->isCloseWaiting;
}

void SSLEngineOutputRecord::encodeAlert(int8_t level, int8_t description) {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning($$str({"outbound has closed, ignore outbound alert message: "_s, $($Alert::nameOf(description))}), $$new($ObjectArray, 0));
		}
		return;
	}
	if (this->fragmenter == nullptr) {
		$set(this, fragmenter, $new($SSLEngineOutputRecord$HandshakeFragment, this));
	}
	$nc(this->fragmenter)->queueUpAlert(level, description);
}

void SSLEngineOutputRecord::encodeHandshake($bytes* source, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning("outbound has closed, ignore outbound handshake message"_s, $$new($ObjectArray, {$($of($ByteBuffer::wrap(source, offset, length)))}));
		}
		return;
	}
	if (this->fragmenter == nullptr) {
		$set(this, fragmenter, $new($SSLEngineOutputRecord$HandshakeFragment, this));
	}
	if (this->firstMessage) {
		this->firstMessage = false;
		$init($ProtocolVersion);
		$init($SSLHandshake);
		if ((this->helloVersion == $ProtocolVersion::SSL20Hello) && ($nc(source)->get(offset) == $SSLHandshake::CLIENT_HELLO->id) && (source->get(offset + 4 + 2 + 32) == 0)) {
			$set(this, v2ClientHello, encodeV2ClientHello(source, (offset + 4), (length - 4)));
			$nc(this->v2ClientHello)->position(2);
			$nc(this->handshakeHash)->deliver(this->v2ClientHello);
			$nc(this->v2ClientHello)->position(0);
			return;
		}
	}
	int8_t handshakeType = $nc(source)->get(offset);
	if ($nc(this->handshakeHash)->isHashable(handshakeType)) {
		$nc(this->handshakeHash)->deliver(source, offset, length);
	}
	$nc(this->fragmenter)->queueUpFragment(source, offset, length);
}

void SSLEngineOutputRecord::encodeChangeCipherSpec() {
	if (isClosed()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning("outbound has closed, ignore outbound change_cipher_spec message"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	if (this->fragmenter == nullptr) {
		$set(this, fragmenter, $new($SSLEngineOutputRecord$HandshakeFragment, this));
	}
	$nc(this->fragmenter)->queueUpChangeCipherSpec();
}

void SSLEngineOutputRecord::encodeV2NoCipher() {
	this->isTalkingToV2 = true;
}

$Ciphertext* SSLEngineOutputRecord::encode($ByteBufferArray* srcs$renamed, int32_t srcsOffset, int32_t srcsLength, $ByteBufferArray* dsts, int32_t dstsOffset, int32_t dstsLength) {
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

$Ciphertext* SSLEngineOutputRecord::encode($ByteBufferArray* sources, int32_t offset, int32_t length, $ByteBuffer* destination) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(this->writeCipher)->authenticator)->seqNumOverflow()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine("sequence number extremely close to overflow (2^64-1 packets). Closing connection."_s, $$new($ObjectArray, 0));
		}
		$throwNew($SSLHandshakeException, "sequence number overflow"_s);
	}
	$var($Ciphertext, ct, acquireCiphertext(destination));
	if (ct != nullptr) {
		return ct;
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
	int32_t dstLim = $nc(destination)->limit();
	bool isFirstRecordOfThePayload = true;
	int32_t packetLeftSize = $Math::min($SSLRecord::maxRecordSize, this->packetSize);
	bool needMorePayload = true;
	int64_t recordSN = 0;
	while (needMorePayload) {
		int32_t fragLen = 0;
		if (isFirstRecordOfThePayload && needToSplitPayload()) {
			needMorePayload = true;
			fragLen = 1;
			isFirstRecordOfThePayload = false;
		} else {
			needMorePayload = false;
			if (packetLeftSize > 0) {
				fragLen = $nc(this->writeCipher)->calculateFragmentSize(packetLeftSize, $SSLRecord::headerSize);
				fragLen = $Math::min(fragLen, $Record::maxDataSize);
			} else {
				fragLen = $Record::maxDataSize;
			}
			fragLen = calculateFragmentSize(fragLen);
		}
		int32_t dstPos = destination->position();
		int32_t dstContent = dstPos + $SSLRecord::headerSize + $nc(this->writeCipher)->getExplicitNonceSize();
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
			if (remains > 0) {
				++offset;
				--length;
			}
		}
		destination->limit(destination->position());
		destination->position(dstContent);
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
			$init($ContentType);
			$SSLLogger::fine($$str({"WRITE: "_s, $nc(this->protocolVersion)->name$, " "_s, $ContentType::APPLICATION_DATA->name$, ", length = "_s, $$str(destination->remaining())}), $$new($ObjectArray, 0));
		}
		$init($ContentType);
		recordSN = encrypt(this->writeCipher, $ContentType::APPLICATION_DATA->id, destination, dstPos, dstLim, $SSLRecord::headerSize, this->protocolVersion);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
			$var($ByteBuffer, temporary, destination->duplicate());
			$nc(temporary)->limit(temporary->position());
			temporary->position(dstPos);
			$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {$of(temporary)}));
		}
		packetLeftSize -= destination->position() - dstPos;
		destination->limit(dstLim);
		if (this->isFirstAppOutputRecord) {
			this->isFirstAppOutputRecord = false;
		}
	}
	$init($ContentType);
	$init($SSLHandshake);
	return $new($Ciphertext, $ContentType::APPLICATION_DATA->id, $SSLHandshake::NOT_APPLICABLE->id, recordSN);
}

$Ciphertext* SSLEngineOutputRecord::acquireCiphertext($ByteBuffer* destination) {
	$useLocalCurrentObjectStackCache();
	if (this->isTalkingToV2) {
		$init($SSLRecord);
		$nc(destination)->put($SSLRecord::v2NoCipher);
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
			$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {$of($SSLRecord::v2NoCipher)}));
		}
		this->isTalkingToV2 = false;
		$init($ContentType);
		$init($SSLHandshake);
		return $new($Ciphertext, $ContentType::ALERT->id, $SSLHandshake::NOT_APPLICABLE->id, -1);
	}
	if (this->v2ClientHello != nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$) {
			if ($SSLLogger::isOn("record"_s)) {
				$var($String, var$0, $$str({$($($Thread::currentThread())->getName()), ", WRITE: SSLv2 ClientHello message, length = "_s}));
				$SSLLogger::fine($$concat(var$0, $$str($nc(this->v2ClientHello)->remaining())), $$new($ObjectArray, 0));
			}
			if ($SSLLogger::isOn("packet"_s)) {
				$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {$of(this->v2ClientHello)}));
			}
		}
		$nc(destination)->put(this->v2ClientHello);
		$set(this, v2ClientHello, nullptr);
		$init($ContentType);
		$init($SSLHandshake);
		return $new($Ciphertext, $ContentType::HANDSHAKE->id, $SSLHandshake::CLIENT_HELLO->id, -1);
	}
	if (this->fragmenter != nullptr) {
		return $nc(this->fragmenter)->acquireCiphertext(destination);
	}
	return nullptr;
}

bool SSLEngineOutputRecord::isEmpty() {
	return (!this->isTalkingToV2) && (this->v2ClientHello == nullptr) && ((this->fragmenter == nullptr) || $nc(this->fragmenter)->isEmpty());
}

bool SSLEngineOutputRecord::needToSplitPayload() {
	bool var$0 = (!$nc(this->protocolVersion)->useTLS11PlusSpec());
	$init($Record);
	return var$0 && $nc(this->writeCipher)->isCBCMode() && !this->isFirstAppOutputRecord && $Record::enableCBCProtection;
}

SSLEngineOutputRecord::SSLEngineOutputRecord() {
}

$Class* SSLEngineOutputRecord::load$($String* name, bool initialize) {
	$loadClass(SSLEngineOutputRecord, name, initialize, &_SSLEngineOutputRecord_ClassInfo_, allocate$SSLEngineOutputRecord);
	return class$;
}

$Class* SSLEngineOutputRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun