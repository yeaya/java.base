#include <sun/security/ssl/InputRecord.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/Plaintext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HANDSHAKE
#undef TLS10

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $ContentType = ::sun::security::ssl::ContentType;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $Plaintext = ::sun::security::ssl::Plaintext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _InputRecord_FieldInfo_[] = {
	{"readCipher", "Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, 0, $field(InputRecord, readCipher)},
	{"tc", "Lsun/security/ssl/TransportContext;", nullptr, 0, $field(InputRecord, tc)},
	{"handshakeHash", "Lsun/security/ssl/HandshakeHash;", nullptr, $FINAL, $field(InputRecord, handshakeHash)},
	{"isClosed", "Z", nullptr, $VOLATILE, $field(InputRecord, isClosed$)},
	{"helloVersion", "Lsun/security/ssl/ProtocolVersion;", nullptr, 0, $field(InputRecord, helloVersion)},
	{"fragmentSize", "I", nullptr, 0, $field(InputRecord, fragmentSize)},
	{"recordLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $FINAL, $field(InputRecord, recordLock)},
	{}
};

$MethodInfo _InputRecord_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/HandshakeHash;Lsun/security/ssl/SSLCipher$SSLReadCipher;)V", nullptr, 0, $method(static_cast<void(InputRecord::*)($HandshakeHash*,$SSLCipher$SSLReadCipher*)>(&InputRecord::init$))},
	{"acquirePlaintext", "()Lsun/security/ssl/Plaintext;", nullptr, 0, nullptr, "java.io.IOException,javax.crypto.BadPaddingException"},
	{"bytesInCompletePacket", "([Ljava/nio/ByteBuffer;II)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"bytesInCompletePacket", "()I", nullptr, 0, nullptr, "java.io.IOException"},
	{"changeFragmentSize", "(I)V", nullptr, 0},
	{"changeReadCiphers", "(Lsun/security/ssl/SSLCipher$SSLReadCipher;)V", nullptr, 0},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"convertToClientHello", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", nullptr, $STATIC, $method(static_cast<$ByteBuffer*(*)($ByteBuffer*)>(&InputRecord::convertToClientHello))},
	{"decode", "([Ljava/nio/ByteBuffer;II)[Lsun/security/ssl/Plaintext;", nullptr, $ABSTRACT, nullptr, "java.io.IOException,javax.crypto.BadPaddingException"},
	{"estimateFragmentSize", "(I)I", nullptr, 0},
	{"expectingFinishFlight", "()V", nullptr, 0},
	{"extract", "([Ljava/nio/ByteBuffer;III)Ljava/nio/ByteBuffer;", nullptr, $STATIC, $method(static_cast<$ByteBuffer*(*)($ByteBufferArray*,int32_t,int32_t,int32_t)>(&InputRecord::extract))},
	{"finishHandshake", "()V", nullptr, 0},
	{"isClosed", "()Z", nullptr, 0},
	{"isEmpty", "()Z", nullptr, 0},
	{"seqNumIsHuge", "()Z", nullptr, 0},
	{"setDeliverStream", "(Ljava/io/OutputStream;)V", nullptr, 0},
	{"setHelloVersion", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, 0},
	{"setReceiverStream", "(Ljava/io/InputStream;)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InputRecord_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.InputRecord",
	"java.lang.Object",
	"sun.security.ssl.Record,java.io.Closeable",
	_InputRecord_FieldInfo_,
	_InputRecord_MethodInfo_
};

$Object* allocate$InputRecord($Class* clazz) {
	return $of($alloc(InputRecord));
}

int32_t InputRecord::hashCode() {
	 return this->$Record::hashCode();
}

bool InputRecord::equals(Object$* obj) {
	 return this->$Record::equals(obj);
}

$Object* InputRecord::clone() {
	 return this->$Record::clone();
}

$String* InputRecord::toString() {
	 return this->$Record::toString();
}

void InputRecord::finalize() {
	this->$Record::finalize();
}

void InputRecord::init$($HandshakeHash* handshakeHash, $SSLCipher$SSLReadCipher* readCipher) {
	$set(this, recordLock, $new($ReentrantLock));
	$set(this, readCipher, readCipher);
	$init($ProtocolVersion);
	$set(this, helloVersion, $ProtocolVersion::TLS10);
	$set(this, handshakeHash, handshakeHash);
	this->isClosed$ = false;
	this->fragmentSize = $Record::maxDataSize;
}

void InputRecord::setHelloVersion($ProtocolVersion* helloVersion) {
	$set(this, helloVersion, helloVersion);
}

bool InputRecord::seqNumIsHuge() {
	return ($nc(this->readCipher)->authenticator != nullptr) && $nc($nc(this->readCipher)->authenticator)->seqNumIsHuge();
}

bool InputRecord::isEmpty() {
	return false;
}

void InputRecord::expectingFinishFlight() {
}

void InputRecord::finishHandshake() {
}

void InputRecord::close() {
	$nc(this->recordLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!this->isClosed$) {
				this->isClosed$ = true;
				$nc(this->readCipher)->dispose();
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

bool InputRecord::isClosed() {
	return this->isClosed$;
}

void InputRecord::changeReadCiphers($SSLCipher$SSLReadCipher* readCipher) {
	$nc(readCipher)->dispose();
	$set(this, readCipher, readCipher);
}

void InputRecord::changeFragmentSize(int32_t fragmentSize) {
	this->fragmentSize = fragmentSize;
}

int32_t InputRecord::bytesInCompletePacket($ByteBufferArray* srcs, int32_t srcsOffset, int32_t srcsLength) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

int32_t InputRecord::bytesInCompletePacket() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void InputRecord::setReceiverStream($InputStream* inputStream) {
	$throwNew($UnsupportedOperationException);
}

$Plaintext* InputRecord::acquirePlaintext() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void InputRecord::setDeliverStream($OutputStream* outputStream) {
	$throwNew($UnsupportedOperationException);
}

int32_t InputRecord::estimateFragmentSize(int32_t packetSize) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$ByteBuffer* InputRecord::convertToClientHello($ByteBuffer* packet) {
	$init(InputRecord);
	int32_t srcPos = $nc(packet)->position();
	int8_t firstByte = packet->get();
	int8_t secondByte = packet->get();
	int32_t recordLen = ((((int32_t)(firstByte & (uint32_t)127)) << 8) | ((int32_t)(secondByte & (uint32_t)255))) + 2;
	packet->position(srcPos + 3);
	int8_t majorVersion = packet->get();
	int8_t minorVersion = packet->get();
	int32_t var$0 = (((int32_t)(packet->get() & (uint32_t)255)) << 8);
	int32_t cipherSpecLen = var$0 + ((int32_t)(packet->get() & (uint32_t)255));
	int32_t var$1 = (((int32_t)(packet->get() & (uint32_t)255)) << 8);
	int32_t sessionIdLen = var$1 + ((int32_t)(packet->get() & (uint32_t)255));
	int32_t var$2 = (((int32_t)(packet->get() & (uint32_t)255)) << 8);
	int32_t nonceLen = var$2 + ((int32_t)(packet->get() & (uint32_t)255));
	int32_t requiredSize = 48 + sessionIdLen + ((cipherSpecLen * 2) / 3);
	$var($bytes, converted, $new($bytes, requiredSize));
	$init($ContentType);
	converted->set(0, $ContentType::HANDSHAKE->id);
	converted->set(1, majorVersion);
	converted->set(2, minorVersion);
	converted->set(5, (int8_t)1);
	converted->set(9, majorVersion);
	converted->set(10, minorVersion);
	int32_t pointer = 11;
	int32_t offset = srcPos + 11 + cipherSpecLen + sessionIdLen;
	if (nonceLen < 32) {
		for (int32_t i = 0; i < (32 - nonceLen); ++i) {
			converted->set(pointer++, (int8_t)0);
		}
		packet->position(offset);
		packet->get(converted, pointer, nonceLen);
		pointer += nonceLen;
	} else {
		packet->position(offset + nonceLen - 32);
		packet->get(converted, pointer, 32);
		pointer += 32;
	}
	offset -= sessionIdLen;
	converted->set(pointer++, (int8_t)((int32_t)(sessionIdLen & (uint32_t)255)));
	packet->position(offset);
	packet->get(converted, pointer, sessionIdLen);
	int32_t j = 0;
	offset -= cipherSpecLen;
	packet->position(offset);
	j = pointer + 2;
	for (int32_t i = 0; i < cipherSpecLen; i += 3) {
		if (packet->get() != 0) {
			packet->get();
			packet->get();
			continue;
		}
		converted->set(j++, packet->get());
		converted->set(j++, packet->get());
	}
	j -= pointer + 2;
	converted->set(pointer++, (int8_t)((int32_t)(((int32_t)((uint32_t)j >> 8)) & (uint32_t)255)));
	converted->set(pointer++, (int8_t)((int32_t)(j & (uint32_t)255)));
	pointer += j;
	converted->set(pointer++, (int8_t)1);
	converted->set(pointer++, (int8_t)0);
	int32_t fragLen = pointer - 5;
	converted->set(3, (int8_t)((int32_t)(((int32_t)((uint32_t)fragLen >> 8)) & (uint32_t)255)));
	converted->set(4, (int8_t)((int32_t)(fragLen & (uint32_t)255)));
	fragLen = pointer - 9;
	converted->set(6, (int8_t)((int32_t)(((int32_t)((uint32_t)fragLen >> 16)) & (uint32_t)255)));
	converted->set(7, (int8_t)((int32_t)(((int32_t)((uint32_t)fragLen >> 8)) & (uint32_t)255)));
	converted->set(8, (int8_t)((int32_t)(fragLen & (uint32_t)255)));
	packet->position(srcPos + recordLen);
	return $ByteBuffer::wrap(converted, 5, pointer - 5);
}

$ByteBuffer* InputRecord::extract($ByteBufferArray* buffers, int32_t offset, int32_t length, int32_t headerSize) {
	$init(InputRecord);
	bool hasFullHeader = false;
	int32_t contentLen = -1;
	{
		int32_t i = offset;
		int32_t j = 0;
		for (; i < (offset + length) && j < headerSize; ++i) {
			int32_t remains = $nc($nc(buffers)->get(i))->remaining();
			int32_t pos = $nc(buffers->get(i))->position();
			for (int32_t k = 0; k < remains && j < headerSize; ++j, ++k) {
				int8_t b = $nc(buffers->get(i))->get(pos + k);
				if (j == (headerSize - 2)) {
					contentLen = (((int32_t)(b & (uint32_t)255)) << 8);
				} else if (j == (headerSize - 1)) {
					contentLen |= ((int32_t)(b & (uint32_t)255));
					hasFullHeader = true;
					break;
				}
			}
		}
	}
	if (!hasFullHeader) {
		$throwNew($BufferUnderflowException);
	}
	int32_t packetLen = headerSize + contentLen;
	int32_t remains = 0;
	for (int32_t i = offset; i < offset + length; ++i) {
		remains += $nc($nc(buffers)->get(i))->remaining();
		if (remains >= packetLen) {
			break;
		}
	}
	if (remains < packetLen) {
		$throwNew($BufferUnderflowException);
	}
	$var($bytes, packet, $new($bytes, packetLen));
	int32_t packetOffset = 0;
	int32_t packetSpaces = packetLen;
	for (int32_t i = offset; i < offset + length; ++i) {
		if ($nc($nc(buffers)->get(i))->hasRemaining()) {
			int32_t len = $Math::min(packetSpaces, $nc(buffers->get(i))->remaining());
			$nc(buffers->get(i))->get(packet, packetOffset, len);
			packetOffset += len;
			packetSpaces -= len;
		}
		if (packetSpaces <= 0) {
			break;
		}
	}
	return $ByteBuffer::wrap(packet);
}

InputRecord::InputRecord() {
}

$Class* InputRecord::load$($String* name, bool initialize) {
	$loadClass(InputRecord, name, initialize, &_InputRecord_ClassInfo_, allocate$InputRecord);
	return class$;
}

$Class* InputRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun