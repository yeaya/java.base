#include <sun/security/ssl/SSLEngineOutputRecord$HandshakeFragment.h>

#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractCollection.h>
#include <java/util/LinkedList.h>
#include <sun/security/ssl/Ciphertext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLEngineOutputRecord$HandshakeMemo.h>
#include <sun/security/ssl/SSLEngineOutputRecord$RecordMemo.h>
#include <sun/security/ssl/SSLEngineOutputRecord.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef ALERT
#undef CHANGE_CIPHER_SPEC
#undef HANDSHAKE
#undef NOT_APPLICABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $LinkedList = ::java::util::LinkedList;
using $Ciphertext = ::sun::security::ssl::Ciphertext;
using $ContentType = ::sun::security::ssl::ContentType;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;
using $SSLEngineOutputRecord = ::sun::security::ssl::SSLEngineOutputRecord;
using $SSLEngineOutputRecord$HandshakeMemo = ::sun::security::ssl::SSLEngineOutputRecord$HandshakeMemo;
using $SSLEngineOutputRecord$RecordMemo = ::sun::security::ssl::SSLEngineOutputRecord$RecordMemo;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLEngineOutputRecord$HandshakeFragment_FieldInfo_[] = {
	{"this$0", "Lsun/security/ssl/SSLEngineOutputRecord;", nullptr, $FINAL | $SYNTHETIC, $field(SSLEngineOutputRecord$HandshakeFragment, this$0)},
	{"handshakeMemos", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lsun/security/ssl/SSLEngineOutputRecord$RecordMemo;>;", $PRIVATE | $FINAL, $field(SSLEngineOutputRecord$HandshakeFragment, handshakeMemos)},
	{}
};

$MethodInfo _SSLEngineOutputRecord$HandshakeFragment_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/SSLEngineOutputRecord;)V", nullptr, 0, $method(SSLEngineOutputRecord$HandshakeFragment, init$, void, $SSLEngineOutputRecord*)},
	{"acquireCiphertext", "(Ljava/nio/ByteBuffer;)Lsun/security/ssl/Ciphertext;", nullptr, 0, $method(SSLEngineOutputRecord$HandshakeFragment, acquireCiphertext, $Ciphertext*, $ByteBuffer*), "java.io.IOException"},
	{"isEmpty", "()Z", nullptr, 0, $method(SSLEngineOutputRecord$HandshakeFragment, isEmpty, bool)},
	{"queueUpAlert", "(BB)V", nullptr, 0, $method(SSLEngineOutputRecord$HandshakeFragment, queueUpAlert, void, int8_t, int8_t)},
	{"queueUpChangeCipherSpec", "()V", nullptr, 0, $method(SSLEngineOutputRecord$HandshakeFragment, queueUpChangeCipherSpec, void)},
	{"queueUpFragment", "([BII)V", nullptr, 0, $method(SSLEngineOutputRecord$HandshakeFragment, queueUpFragment, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLEngineOutputRecord$HandshakeFragment_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLEngineOutputRecord$HandshakeFragment", "sun.security.ssl.SSLEngineOutputRecord", "HandshakeFragment", $FINAL},
	{}
};

$ClassInfo _SSLEngineOutputRecord$HandshakeFragment_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLEngineOutputRecord$HandshakeFragment",
	"java.lang.Object",
	nullptr,
	_SSLEngineOutputRecord$HandshakeFragment_FieldInfo_,
	_SSLEngineOutputRecord$HandshakeFragment_MethodInfo_,
	nullptr,
	nullptr,
	_SSLEngineOutputRecord$HandshakeFragment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLEngineOutputRecord"
};

$Object* allocate$SSLEngineOutputRecord$HandshakeFragment($Class* clazz) {
	return $of($alloc(SSLEngineOutputRecord$HandshakeFragment));
}

void SSLEngineOutputRecord$HandshakeFragment::init$($SSLEngineOutputRecord* this$0) {
	$set(this, this$0, this$0);
	$set(this, handshakeMemos, $new($LinkedList));
}

void SSLEngineOutputRecord$HandshakeFragment::queueUpFragment($bytes* source, int32_t offset, int32_t length) {
	$var($SSLEngineOutputRecord$HandshakeMemo, memo, $new($SSLEngineOutputRecord$HandshakeMemo));
	$init($ContentType);
	memo->contentType = $ContentType::HANDSHAKE->id;
	memo->majorVersion = $nc(this->this$0->protocolVersion)->major;
	memo->minorVersion = $nc(this->this$0->protocolVersion)->minor;
	$set(memo, encodeCipher, this->this$0->writeCipher);
	memo->handshakeType = $nc(source)->get(offset);
	memo->acquireOffset = 0;
	$set(memo, fragment, $new($bytes, length - 4));
	$System::arraycopy(source, offset + 4, memo->fragment, 0, length - 4);
	$nc(this->handshakeMemos)->add(memo);
}

void SSLEngineOutputRecord$HandshakeFragment::queueUpChangeCipherSpec() {
	$var($SSLEngineOutputRecord$RecordMemo, memo, $new($SSLEngineOutputRecord$RecordMemo));
	$init($ContentType);
	memo->contentType = $ContentType::CHANGE_CIPHER_SPEC->id;
	memo->majorVersion = $nc(this->this$0->protocolVersion)->major;
	memo->minorVersion = $nc(this->this$0->protocolVersion)->minor;
	$set(memo, encodeCipher, this->this$0->writeCipher);
	$set(memo, fragment, $new($bytes, 1));
	$nc(memo->fragment)->set(0, (int8_t)1);
	$nc(this->handshakeMemos)->add(memo);
}

void SSLEngineOutputRecord$HandshakeFragment::queueUpAlert(int8_t level, int8_t description) {
	$var($SSLEngineOutputRecord$RecordMemo, memo, $new($SSLEngineOutputRecord$RecordMemo));
	$init($ContentType);
	memo->contentType = $ContentType::ALERT->id;
	memo->majorVersion = $nc(this->this$0->protocolVersion)->major;
	memo->minorVersion = $nc(this->this$0->protocolVersion)->minor;
	$set(memo, encodeCipher, this->this$0->writeCipher);
	$set(memo, fragment, $new($bytes, 2));
	$nc(memo->fragment)->set(0, level);
	$nc(memo->fragment)->set(1, description);
	$nc(this->handshakeMemos)->add(memo);
}

$Ciphertext* SSLEngineOutputRecord$HandshakeFragment::acquireCiphertext($ByteBuffer* dstBuf) {
	$useLocalCurrentObjectStackCache();
	if (isEmpty()) {
		return nullptr;
	}
	$var($SSLEngineOutputRecord$RecordMemo, memo, $cast($SSLEngineOutputRecord$RecordMemo, $nc(this->handshakeMemos)->getFirst()));
	$var($SSLEngineOutputRecord$HandshakeMemo, hsMemo, nullptr);
	$init($ContentType);
	if ($nc(memo)->contentType == $ContentType::HANDSHAKE->id) {
		$assign(hsMemo, $cast($SSLEngineOutputRecord$HandshakeMemo, memo));
	}
	int32_t fragLen = 0;
	if (this->this$0->packetSize > 0) {
		fragLen = $Math::min(16709, this->this$0->packetSize);
		fragLen = $nc($nc(memo)->encodeCipher)->calculateFragmentSize(fragLen, 5);
	} else {
		fragLen = $Record::maxDataSize;
	}
	fragLen = this->this$0->calculateFragmentSize(fragLen);
	int32_t dstPos = $nc(dstBuf)->position();
	int32_t dstLim = dstBuf->limit();
	int32_t dstContent = dstPos + 5 + $nc($nc(memo)->encodeCipher)->getExplicitNonceSize();
	dstBuf->position(dstContent);
	if (hsMemo != nullptr) {
		int32_t remainingFragLen = fragLen;
		while ((remainingFragLen > 0) && !$nc(this->handshakeMemos)->isEmpty()) {
			int32_t memoFragLen = $nc($nc(hsMemo)->fragment)->length;
			if (hsMemo->acquireOffset == 0) {
				if (remainingFragLen <= 4) {
					break;
				}
				dstBuf->put(hsMemo->handshakeType);
				dstBuf->put((int8_t)((int32_t)((memoFragLen >> 16) & (uint32_t)255)));
				dstBuf->put((int8_t)((int32_t)((memoFragLen >> 8) & (uint32_t)255)));
				dstBuf->put((int8_t)((int32_t)(memoFragLen & (uint32_t)255)));
				remainingFragLen -= 4;
			}
			int32_t chipLen = $Math::min(remainingFragLen, (memoFragLen - hsMemo->acquireOffset));
			dstBuf->put(hsMemo->fragment, hsMemo->acquireOffset, chipLen);
			hsMemo->acquireOffset += chipLen;
			if (hsMemo->acquireOffset == memoFragLen) {
				$nc(this->handshakeMemos)->removeFirst();
				if ((remainingFragLen > chipLen) && !$nc(this->handshakeMemos)->isEmpty()) {
					$var($SSLEngineOutputRecord$RecordMemo, rm, $cast($SSLEngineOutputRecord$RecordMemo, $nc(this->handshakeMemos)->getFirst()));
					if ($nc(rm)->contentType == $ContentType::HANDSHAKE->id && rm->encodeCipher == hsMemo->encodeCipher) {
						$assign(hsMemo, $cast($SSLEngineOutputRecord$HandshakeMemo, rm));
					} else {
						break;
					}
				}
			}
			remainingFragLen -= chipLen;
		}
	} else {
		fragLen = $Math::min(fragLen, $nc(memo->fragment)->length);
		dstBuf->put(memo->fragment, 0, fragLen);
		$nc(this->handshakeMemos)->removeFirst();
	}
	dstBuf->limit(dstBuf->position());
	dstBuf->position(dstContent);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("record"_s)) {
		$var($String, var$0, $$str({"WRITE: "_s, $nc(this->this$0->protocolVersion)->name$, " "_s, $($ContentType::nameOf(memo->contentType)), ", length = "_s}));
		$SSLLogger::fine($$concat(var$0, $$str(dstBuf->remaining())), $$new($ObjectArray, 0));
	}
	int64_t recordSN = $OutputRecord::encrypt(memo->encodeCipher, memo->contentType, dstBuf, dstPos, dstLim, 5, $($ProtocolVersion::valueOf(memo->majorVersion, memo->minorVersion)));
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("packet"_s)) {
		$var($ByteBuffer, temporary, dstBuf->duplicate());
		$nc(temporary)->limit(temporary->position());
		temporary->position(dstPos);
		$SSLLogger::fine("Raw write"_s, $$new($ObjectArray, {$of(temporary)}));
	}
	dstBuf->limit(dstLim);
	{
		$var($Throwable, var$1, nullptr);
		$var($Ciphertext, var$3, nullptr);
		bool return$2 = false;
		try {
			if (hsMemo != nullptr) {
				$assign(var$3, $new($Ciphertext, hsMemo->contentType, hsMemo->handshakeType, recordSN));
				return$2 = true;
				goto $finally;
			} else {
				$init($SSLHandshake);
				$assign(var$3, $new($Ciphertext, memo->contentType, $SSLHandshake::NOT_APPLICABLE->id, recordSN));
				return$2 = true;
				goto $finally;
			}
		} catch ($Throwable& var$4) {
			$assign(var$1, var$4);
		} $finally: {
			if (this->this$0->isCloseWaiting && isEmpty()) {
				this->this$0->close();
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
		if (return$2) {
			return var$3;
		}
	}
	$shouldNotReachHere();
}

bool SSLEngineOutputRecord$HandshakeFragment::isEmpty() {
	return $nc(this->handshakeMemos)->isEmpty();
}

SSLEngineOutputRecord$HandshakeFragment::SSLEngineOutputRecord$HandshakeFragment() {
}

$Class* SSLEngineOutputRecord$HandshakeFragment::load$($String* name, bool initialize) {
	$loadClass(SSLEngineOutputRecord$HandshakeFragment, name, initialize, &_SSLEngineOutputRecord$HandshakeFragment_ClassInfo_, allocate$SSLEngineOutputRecord$HandshakeFragment);
	return class$;
}

$Class* SSLEngineOutputRecord$HandshakeFragment::class$ = nullptr;

		} // ssl
	} // security
} // sun