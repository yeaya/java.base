#include <sun/security/ssl/DTLSOutputRecord$DTLSFragmenter.h>

#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <sun/security/ssl/Ciphertext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/DTLSOutputRecord$HandshakeMemo.h>
#include <sun/security/ssl/DTLSOutputRecord$RecordMemo.h>
#include <sun/security/ssl/DTLSOutputRecord.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef ALERT
#undef CHANGE_CIPHER_SPEC
#undef CLIENT_HELLO
#undef FINISHED
#undef HANDSHAKE
#undef HELLO_REQUEST
#undef HELLO_VERIFY_REQUEST
#undef NOT_APPLICABLE
#undef SERVER_HELLO_DONE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Ciphertext = ::sun::security::ssl::Ciphertext;
using $ContentType = ::sun::security::ssl::ContentType;
using $DTLSOutputRecord = ::sun::security::ssl::DTLSOutputRecord;
using $DTLSOutputRecord$HandshakeMemo = ::sun::security::ssl::DTLSOutputRecord$HandshakeMemo;
using $DTLSOutputRecord$RecordMemo = ::sun::security::ssl::DTLSOutputRecord$RecordMemo;
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

$FieldInfo _DTLSOutputRecord$DTLSFragmenter_FieldInfo_[] = {
	{"this$0", "Lsun/security/ssl/DTLSOutputRecord;", nullptr, $FINAL | $SYNTHETIC, $field(DTLSOutputRecord$DTLSFragmenter, this$0)},
	{"handshakeMemos", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lsun/security/ssl/DTLSOutputRecord$RecordMemo;>;", $PRIVATE | $FINAL, $field(DTLSOutputRecord$DTLSFragmenter, handshakeMemos)},
	{"acquireIndex", "I", nullptr, $PRIVATE, $field(DTLSOutputRecord$DTLSFragmenter, acquireIndex)},
	{"messageSequence", "I", nullptr, $PRIVATE, $field(DTLSOutputRecord$DTLSFragmenter, messageSequence)},
	{"flightIsReady", "Z", nullptr, $PRIVATE, $field(DTLSOutputRecord$DTLSFragmenter, flightIsReady)},
	{"retransmits", "I", nullptr, $PRIVATE, $field(DTLSOutputRecord$DTLSFragmenter, retransmits)},
	{}
};

$MethodInfo _DTLSOutputRecord$DTLSFragmenter_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/DTLSOutputRecord;)V", nullptr, $PRIVATE, $method(static_cast<void(DTLSOutputRecord$DTLSFragmenter::*)($DTLSOutputRecord*)>(&DTLSOutputRecord$DTLSFragmenter::init$))},
	{"acquireCiphertext", "(Ljava/nio/ByteBuffer;)Lsun/security/ssl/Ciphertext;", nullptr, 0, $method(static_cast<$Ciphertext*(DTLSOutputRecord$DTLSFragmenter::*)($ByteBuffer*)>(&DTLSOutputRecord$DTLSFragmenter::acquireCiphertext)), "java.io.IOException"},
	{"handshakeHashing", "(Lsun/security/ssl/DTLSOutputRecord$HandshakeMemo;[B)V", nullptr, $PRIVATE, $method(static_cast<void(DTLSOutputRecord$DTLSFragmenter::*)($DTLSOutputRecord$HandshakeMemo*,$bytes*)>(&DTLSOutputRecord$DTLSFragmenter::handshakeHashing))},
	{"hasAlert", "()Z", nullptr, 0, $method(static_cast<bool(DTLSOutputRecord$DTLSFragmenter::*)()>(&DTLSOutputRecord$DTLSFragmenter::hasAlert))},
	{"isEmpty", "()Z", nullptr, 0, $method(static_cast<bool(DTLSOutputRecord$DTLSFragmenter::*)()>(&DTLSOutputRecord$DTLSFragmenter::isEmpty))},
	{"isRetransmittable", "()Z", nullptr, 0, $method(static_cast<bool(DTLSOutputRecord$DTLSFragmenter::*)()>(&DTLSOutputRecord$DTLSFragmenter::isRetransmittable))},
	{"queueUpAlert", "(BB)V", nullptr, 0, $method(static_cast<void(DTLSOutputRecord$DTLSFragmenter::*)(int8_t,int8_t)>(&DTLSOutputRecord$DTLSFragmenter::queueUpAlert)), "java.io.IOException"},
	{"queueUpChangeCipherSpec", "()V", nullptr, 0, $method(static_cast<void(DTLSOutputRecord$DTLSFragmenter::*)()>(&DTLSOutputRecord$DTLSFragmenter::queueUpChangeCipherSpec))},
	{"queueUpHandshake", "([BII)V", nullptr, 0, $method(static_cast<void(DTLSOutputRecord$DTLSFragmenter::*)($bytes*,int32_t,int32_t)>(&DTLSOutputRecord$DTLSFragmenter::queueUpHandshake)), "java.io.IOException"},
	{"setRetransmission", "()V", nullptr, $PRIVATE, $method(static_cast<void(DTLSOutputRecord$DTLSFragmenter::*)()>(&DTLSOutputRecord$DTLSFragmenter::setRetransmission))},
	{"shrinkPacketSize", "()V", nullptr, $PRIVATE, $method(static_cast<void(DTLSOutputRecord$DTLSFragmenter::*)()>(&DTLSOutputRecord$DTLSFragmenter::shrinkPacketSize))},
	{}
};

$InnerClassInfo _DTLSOutputRecord$DTLSFragmenter_InnerClassesInfo_[] = {
	{"sun.security.ssl.DTLSOutputRecord$DTLSFragmenter", "sun.security.ssl.DTLSOutputRecord", "DTLSFragmenter", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _DTLSOutputRecord$DTLSFragmenter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DTLSOutputRecord$DTLSFragmenter",
	"java.lang.Object",
	nullptr,
	_DTLSOutputRecord$DTLSFragmenter_FieldInfo_,
	_DTLSOutputRecord$DTLSFragmenter_MethodInfo_,
	nullptr,
	nullptr,
	_DTLSOutputRecord$DTLSFragmenter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DTLSOutputRecord"
};

$Object* allocate$DTLSOutputRecord$DTLSFragmenter($Class* clazz) {
	return $of($alloc(DTLSOutputRecord$DTLSFragmenter));
}

void DTLSOutputRecord$DTLSFragmenter::init$($DTLSOutputRecord* this$0) {
	$set(this, this$0, this$0);
	$set(this, handshakeMemos, $new($LinkedList));
	this->acquireIndex = 0;
	this->messageSequence = 0;
	this->flightIsReady = false;
	this->retransmits = 2;
}

void DTLSOutputRecord$DTLSFragmenter::queueUpHandshake($bytes* buf, int32_t offset, int32_t length) {
	if (this->flightIsReady) {
		$nc(this->handshakeMemos)->clear();
		this->acquireIndex = 0;
		this->flightIsReady = false;
	}
	$var($DTLSOutputRecord$HandshakeMemo, memo, $new($DTLSOutputRecord$HandshakeMemo));
	$init($ContentType);
	memo->contentType = $ContentType::HANDSHAKE->id;
	memo->majorVersion = $nc(this->this$0->protocolVersion)->major;
	memo->minorVersion = $nc(this->this$0->protocolVersion)->minor;
	memo->encodeEpoch = this->this$0->writeEpoch;
	$set(memo, encodeCipher, this->this$0->writeCipher);
	memo->handshakeType = $nc(buf)->get(offset);
	memo->messageSequence = this->messageSequence++;
	memo->acquireOffset = 0;
	$set(memo, fragment, $new($bytes, length - 4));
	$System::arraycopy(buf, offset + 4, memo->fragment, 0, length - 4);
	handshakeHashing(memo, memo->fragment);
	$nc(this->handshakeMemos)->add(memo);
	$init($SSLHandshake);
	if ((memo->handshakeType == $SSLHandshake::CLIENT_HELLO->id) || (memo->handshakeType == $SSLHandshake::HELLO_REQUEST->id) || (memo->handshakeType == $SSLHandshake::HELLO_VERIFY_REQUEST->id) || (memo->handshakeType == $SSLHandshake::SERVER_HELLO_DONE->id) || (memo->handshakeType == $SSLHandshake::FINISHED->id)) {
		this->flightIsReady = true;
	}
}

void DTLSOutputRecord$DTLSFragmenter::queueUpChangeCipherSpec() {
	if (this->flightIsReady) {
		$nc(this->handshakeMemos)->clear();
		this->acquireIndex = 0;
		this->flightIsReady = false;
	}
	$var($DTLSOutputRecord$RecordMemo, memo, $new($DTLSOutputRecord$RecordMemo));
	$init($ContentType);
	memo->contentType = $ContentType::CHANGE_CIPHER_SPEC->id;
	memo->majorVersion = $nc(this->this$0->protocolVersion)->major;
	memo->minorVersion = $nc(this->this$0->protocolVersion)->minor;
	memo->encodeEpoch = this->this$0->writeEpoch;
	$set(memo, encodeCipher, this->this$0->writeCipher);
	$set(memo, fragment, $new($bytes, 1));
	$nc(memo->fragment)->set(0, (int8_t)1);
	$nc(this->handshakeMemos)->add(memo);
}

void DTLSOutputRecord$DTLSFragmenter::queueUpAlert(int8_t level, int8_t description) {
	$var($DTLSOutputRecord$RecordMemo, memo, $new($DTLSOutputRecord$RecordMemo));
	$init($ContentType);
	memo->contentType = $ContentType::ALERT->id;
	memo->majorVersion = $nc(this->this$0->protocolVersion)->major;
	memo->minorVersion = $nc(this->this$0->protocolVersion)->minor;
	memo->encodeEpoch = this->this$0->writeEpoch;
	$set(memo, encodeCipher, this->this$0->writeCipher);
	$set(memo, fragment, $new($bytes, 2));
	$nc(memo->fragment)->set(0, level);
	$nc(memo->fragment)->set(1, description);
	$nc(this->handshakeMemos)->add(memo);
}

$Ciphertext* DTLSOutputRecord$DTLSFragmenter::acquireCiphertext($ByteBuffer* dstBuf) {
	$useLocalCurrentObjectStackCache();
	if (isEmpty()) {
		if (isRetransmittable()) {
			setRetransmission();
		} else {
			return nullptr;
		}
	}
	$var($DTLSOutputRecord$RecordMemo, memo, $cast($DTLSOutputRecord$RecordMemo, $nc(this->handshakeMemos)->get(this->acquireIndex)));
	$var($DTLSOutputRecord$HandshakeMemo, hsMemo, nullptr);
	$init($ContentType);
	if ($nc(memo)->contentType == $ContentType::HANDSHAKE->id) {
		$assign(hsMemo, $cast($DTLSOutputRecord$HandshakeMemo, memo));
	}
	int32_t fragLen = 0;
	if (this->this$0->packetSize > 0) {
		fragLen = $Math::min(16717, this->this$0->packetSize);
		fragLen = $nc($nc(memo)->encodeCipher)->calculateFragmentSize(fragLen, 25);
		fragLen = $Math::min(fragLen, $Record::maxDataSize);
	} else {
		fragLen = $Record::maxDataSize;
	}
	fragLen = this->this$0->calculateFragmentSize(fragLen);
	int32_t dstPos = $nc(dstBuf)->position();
	int32_t dstLim = dstBuf->limit();
	int32_t dstContent = dstPos + 13 + $nc($nc(memo)->encodeCipher)->getExplicitNonceSize();
	dstBuf->position(dstContent);
	if (hsMemo != nullptr) {
		fragLen = $Math::min(fragLen, ($nc(hsMemo->fragment)->length - hsMemo->acquireOffset));
		dstBuf->put(hsMemo->handshakeType);
		dstBuf->put((int8_t)((int32_t)(($nc(hsMemo->fragment)->length >> 16) & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)(($nc(hsMemo->fragment)->length >> 8) & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)($nc(hsMemo->fragment)->length & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)((hsMemo->messageSequence >> 8) & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)(hsMemo->messageSequence & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)((hsMemo->acquireOffset >> 16) & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)((hsMemo->acquireOffset >> 8) & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)(hsMemo->acquireOffset & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)((fragLen >> 16) & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)((fragLen >> 8) & (uint32_t)255)));
		dstBuf->put((int8_t)((int32_t)(fragLen & (uint32_t)255)));
		dstBuf->put(hsMemo->fragment, hsMemo->acquireOffset, fragLen);
	} else {
		fragLen = $Math::min(fragLen, $nc(memo->fragment)->length);
		dstBuf->put(memo->fragment, 0, fragLen);
	}
	dstBuf->limit(dstBuf->position());
	dstBuf->position(dstContent);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
		$var($String, var$0, $$str({"WRITE: "_s, $nc(this->this$0->protocolVersion)->name$, " "_s, $($ContentType::nameOf(memo->contentType)), ", length = "_s}));
		$SSLLogger::fine($$concat(var$0, $$str(dstBuf->remaining())), $$new($ObjectArray, 0));
	}
	int64_t recordSN = $OutputRecord::encrypt(memo->encodeCipher, memo->contentType, dstBuf, dstPos, dstLim, 13, $($ProtocolVersion::valueOf(memo->majorVersion, memo->minorVersion)));
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
		$var($ByteBuffer, temporary, dstBuf->duplicate());
		$nc(temporary)->limit(temporary->position());
		temporary->position(dstPos);
		$SSLLogger::fine($$str({"Raw write ("_s, $$str(temporary->remaining()), ")"_s}), $$new($ObjectArray, {$of(temporary)}));
	}
	dstBuf->limit(dstLim);
	if (hsMemo != nullptr) {
		hsMemo->acquireOffset += fragLen;
		if (hsMemo->acquireOffset == $nc(hsMemo->fragment)->length) {
			++this->acquireIndex;
		}
		return $new($Ciphertext, hsMemo->contentType, hsMemo->handshakeType, recordSN);
	} else {
		if (this->this$0->isCloseWaiting && memo->contentType == $ContentType::ALERT->id) {
			this->this$0->close();
		}
		++this->acquireIndex;
		$init($SSLHandshake);
		return $new($Ciphertext, memo->contentType, $SSLHandshake::NOT_APPLICABLE->id, recordSN);
	}
}

void DTLSOutputRecord$DTLSFragmenter::handshakeHashing($DTLSOutputRecord$HandshakeMemo* hsFrag, $bytes* hsBody) {
	int8_t hsType = $nc(hsFrag)->handshakeType;
	if (!$nc(this->this$0->handshakeHash)->isHashable(hsType)) {
		return;
	}
	$var($bytes, temporary, $new($bytes, 12));
	temporary->set(0, hsFrag->handshakeType);
	temporary->set(1, (int8_t)((int32_t)(($nc(hsBody)->length >> 16) & (uint32_t)255)));
	temporary->set(2, (int8_t)((int32_t)((hsBody->length >> 8) & (uint32_t)255)));
	temporary->set(3, (int8_t)((int32_t)(hsBody->length & (uint32_t)255)));
	temporary->set(4, (int8_t)((int32_t)((hsFrag->messageSequence >> 8) & (uint32_t)255)));
	temporary->set(5, (int8_t)((int32_t)(hsFrag->messageSequence & (uint32_t)255)));
	temporary->set(6, (int8_t)0);
	temporary->set(7, (int8_t)0);
	temporary->set(8, (int8_t)0);
	temporary->set(9, temporary->get(1));
	temporary->set(10, temporary->get(2));
	temporary->set(11, temporary->get(3));
	$nc(this->this$0->handshakeHash)->deliver(temporary, 0, 12);
	$nc(this->this$0->handshakeHash)->deliver(hsBody, 0, hsBody->length);
}

bool DTLSOutputRecord$DTLSFragmenter::isEmpty() {
	bool var$0 = !this->flightIsReady || $nc(this->handshakeMemos)->isEmpty();
	if (var$0 || this->acquireIndex >= $nc(this->handshakeMemos)->size()) {
		return true;
	}
	return false;
}

bool DTLSOutputRecord$DTLSFragmenter::hasAlert() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->handshakeMemos)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DTLSOutputRecord$RecordMemo, memo, $cast($DTLSOutputRecord$RecordMemo, i$->next()));
			{
				$init($ContentType);
				if ($nc(memo)->contentType == $ContentType::ALERT->id) {
					return true;
				}
			}
		}
	}
	return false;
}

bool DTLSOutputRecord$DTLSFragmenter::isRetransmittable() {
	bool var$0 = this->flightIsReady && !$nc(this->handshakeMemos)->isEmpty();
	return (var$0 && (this->acquireIndex >= $nc(this->handshakeMemos)->size()));
}

void DTLSOutputRecord$DTLSFragmenter::setRetransmission() {
	$useLocalCurrentObjectStackCache();
	this->acquireIndex = 0;
	{
		$var($Iterator, i$, $nc(this->handshakeMemos)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DTLSOutputRecord$RecordMemo, memo, $cast($DTLSOutputRecord$RecordMemo, i$->next()));
			{
				if ($instanceOf($DTLSOutputRecord$HandshakeMemo, memo)) {
					$var($DTLSOutputRecord$HandshakeMemo, hmemo, $cast($DTLSOutputRecord$HandshakeMemo, memo));
					$nc(hmemo)->acquireOffset = 0;
				}
			}
		}
	}
	if ((this->this$0->packetSize <= 16717) && (this->this$0->packetSize > 256) && ((this->retransmits--) <= 0)) {
		shrinkPacketSize();
		this->retransmits = 2;
	}
}

void DTLSOutputRecord$DTLSFragmenter::shrinkPacketSize() {
	this->this$0->packetSize = $Math::max(256, this->this$0->packetSize / 2);
}

DTLSOutputRecord$DTLSFragmenter::DTLSOutputRecord$DTLSFragmenter() {
}

$Class* DTLSOutputRecord$DTLSFragmenter::load$($String* name, bool initialize) {
	$loadClass(DTLSOutputRecord$DTLSFragmenter, name, initialize, &_DTLSOutputRecord$DTLSFragmenter_ClassInfo_, allocate$DTLSOutputRecord$DTLSFragmenter);
	return class$;
}

$Class* DTLSOutputRecord$DTLSFragmenter::class$ = nullptr;

		} // ssl
	} // security
} // sun