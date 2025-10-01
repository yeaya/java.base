#include <sun/net/www/http/ChunkedOutputStream.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/nio/cs/US_ASCII.h>
#include <jcpp.h>

#undef CRLF_SIZE
#undef DEFAULT_CHUNK_SIZE
#undef EMPTY_CHUNK_HEADER
#undef FOOTER_SIZE
#undef CRLF
#undef INSTANCE
#undef FOOTER
#undef EMPTY_CHUNK_HEADER_SIZE

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $US_ASCII = ::sun::nio::cs::US_ASCII;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _ChunkedOutputStream_FieldInfo_[] = {
	{"DEFAULT_CHUNK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedOutputStream, DEFAULT_CHUNK_SIZE)},
	{"CRLF", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChunkedOutputStream, CRLF)},
	{"CRLF_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChunkedOutputStream, CRLF_SIZE)},
	{"FOOTER", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChunkedOutputStream, FOOTER)},
	{"FOOTER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChunkedOutputStream, FOOTER_SIZE)},
	{"EMPTY_CHUNK_HEADER", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChunkedOutputStream, EMPTY_CHUNK_HEADER)},
	{"EMPTY_CHUNK_HEADER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChunkedOutputStream, EMPTY_CHUNK_HEADER_SIZE)},
	{"buf", "[B", nullptr, $PRIVATE, $field(ChunkedOutputStream, buf)},
	{"size", "I", nullptr, $PRIVATE, $field(ChunkedOutputStream, size$)},
	{"count", "I", nullptr, $PRIVATE, $field(ChunkedOutputStream, count)},
	{"spaceInCurrentChunk", "I", nullptr, $PRIVATE, $field(ChunkedOutputStream, spaceInCurrentChunk)},
	{"out", "Ljava/io/PrintStream;", nullptr, $PRIVATE, $field(ChunkedOutputStream, out)},
	{"preferredChunkDataSize", "I", nullptr, $PRIVATE, $field(ChunkedOutputStream, preferredChunkDataSize)},
	{"preferedHeaderSize", "I", nullptr, $PRIVATE, $field(ChunkedOutputStream, preferedHeaderSize)},
	{"preferredChunkGrossSize", "I", nullptr, $PRIVATE, $field(ChunkedOutputStream, preferredChunkGrossSize)},
	{"completeHeader", "[B", nullptr, $PRIVATE, $field(ChunkedOutputStream, completeHeader)},
	{"writeLock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL, $field(ChunkedOutputStream, writeLock)},
	{}
};

$MethodInfo _ChunkedOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ChunkedOutputStream::*)($PrintStream*)>(&ChunkedOutputStream::init$))},
	{"<init>", "(Ljava/io/PrintStream;I)V", nullptr, $PUBLIC, $method(static_cast<void(ChunkedOutputStream::*)($PrintStream*,int32_t)>(&ChunkedOutputStream::init$))},
	{"checkError", "()Z", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(ChunkedOutputStream::*)()>(&ChunkedOutputStream::ensureOpen)), "java.io.IOException"},
	{"flush", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(ChunkedOutputStream::*)(bool)>(&ChunkedOutputStream::flush))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getHeader", "(I)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)(int32_t)>(&ChunkedOutputStream::getHeader))},
	{"getHeaderSize", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ChunkedOutputStream::getHeaderSize))},
	{"reset", "()V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ChunkedOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.http.ChunkedOutputStream",
	"java.io.OutputStream",
	nullptr,
	_ChunkedOutputStream_FieldInfo_,
	_ChunkedOutputStream_MethodInfo_
};

$Object* allocate$ChunkedOutputStream($Class* clazz) {
	return $of($alloc(ChunkedOutputStream));
}

$bytes* ChunkedOutputStream::CRLF = nullptr;
int32_t ChunkedOutputStream::CRLF_SIZE = 0;
$bytes* ChunkedOutputStream::FOOTER = nullptr;
int32_t ChunkedOutputStream::FOOTER_SIZE = 0;
$bytes* ChunkedOutputStream::EMPTY_CHUNK_HEADER = nullptr;
int32_t ChunkedOutputStream::EMPTY_CHUNK_HEADER_SIZE = 0;

int32_t ChunkedOutputStream::getHeaderSize(int32_t size) {
	$init(ChunkedOutputStream);
	return $nc(($($Integer::toHexString(size))))->length() + ChunkedOutputStream::CRLF_SIZE;
}

$bytes* ChunkedOutputStream::getHeader(int32_t size) {
	$init(ChunkedOutputStream);
	$var($String, hexStr, $Integer::toHexString(size));
	$init($US_ASCII);
	$var($bytes, hexBytes, $nc(hexStr)->getBytes(static_cast<$Charset*>($US_ASCII::INSTANCE)));
	$var($bytes, header, $new($bytes, getHeaderSize(size)));
	for (int32_t i = 0; i < hexBytes->length; ++i) {
		header->set(i, hexBytes->get(i));
	}
	header->set(hexBytes->length, $nc(ChunkedOutputStream::CRLF)->get(0));
	header->set(hexBytes->length + 1, $nc(ChunkedOutputStream::CRLF)->get(1));
	return header;
}

void ChunkedOutputStream::init$($PrintStream* o) {
	ChunkedOutputStream::init$(o, ChunkedOutputStream::DEFAULT_CHUNK_SIZE);
}

void ChunkedOutputStream::init$($PrintStream* o, int32_t size) {
	$OutputStream::init$();
	$set(this, writeLock, $new($ReentrantLock));
	$set(this, out, o);
	if (size <= 0) {
		size = ChunkedOutputStream::DEFAULT_CHUNK_SIZE;
	}
	if (size > 0) {
		int32_t adjusted_size = size - getHeaderSize(size) - ChunkedOutputStream::FOOTER_SIZE;
		int32_t var$0 = getHeaderSize(adjusted_size + 1);
		if (var$0 < getHeaderSize(size)) {
			++adjusted_size;
		}
		size = adjusted_size;
	}
	if (size > 0) {
		this->preferredChunkDataSize = size;
	} else {
		this->preferredChunkDataSize = ChunkedOutputStream::DEFAULT_CHUNK_SIZE - getHeaderSize(ChunkedOutputStream::DEFAULT_CHUNK_SIZE) - ChunkedOutputStream::FOOTER_SIZE;
	}
	this->preferedHeaderSize = getHeaderSize(this->preferredChunkDataSize);
	this->preferredChunkGrossSize = this->preferedHeaderSize + this->preferredChunkDataSize + ChunkedOutputStream::FOOTER_SIZE;
	$set(this, completeHeader, getHeader(this->preferredChunkDataSize));
	$set(this, buf, $new($bytes, this->preferredChunkGrossSize));
	reset();
}

void ChunkedOutputStream::flush(bool flushAll) {
	if (this->spaceInCurrentChunk == 0) {
		$nc(this->out)->write(this->buf, 0, this->preferredChunkGrossSize);
		$nc(this->out)->flush();
		reset();
	} else if (flushAll) {
		if (this->size$ > 0) {
			int32_t adjustedHeaderStartIndex = this->preferedHeaderSize - getHeaderSize(this->size$);
			$var($Object, var$0, $of(getHeader(this->size$)));
			$var($Object, var$1, $of(this->buf));
			int32_t var$2 = adjustedHeaderStartIndex;
			$System::arraycopy(var$0, 0, var$1, var$2, getHeaderSize(this->size$));
			$nc(this->buf)->set(this->count++, $nc(ChunkedOutputStream::FOOTER)->get(0));
			$nc(this->buf)->set(this->count++, $nc(ChunkedOutputStream::FOOTER)->get(1));
			$nc(this->out)->write(this->buf, adjustedHeaderStartIndex, this->count - adjustedHeaderStartIndex);
		} else {
			$nc(this->out)->write(ChunkedOutputStream::EMPTY_CHUNK_HEADER, 0, ChunkedOutputStream::EMPTY_CHUNK_HEADER_SIZE);
		}
		$nc(this->out)->flush();
		reset();
	}
}

bool ChunkedOutputStream::checkError() {
	$var($PrintStream, out, this->out);
	return out == nullptr || $nc(out)->checkError();
}

void ChunkedOutputStream::ensureOpen() {
	if (this->out == nullptr) {
		$throwNew($IOException, "closed"_s);
	}
}

void ChunkedOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			ensureOpen();
			if ((off < 0) || (off > $nc(b)->length) || (len < 0) || ((off + len) > $nc(b)->length) || ((off + len) < 0)) {
				$throwNew($IndexOutOfBoundsException);
			} else if (len == 0) {
				return$1 = true;
				goto $finally;
			}
			int32_t bytesToWrite = len;
			int32_t inputIndex = off;
			do {
				if (bytesToWrite >= this->spaceInCurrentChunk) {
					for (int32_t i = 0; i < $nc(this->completeHeader)->length; ++i) {
						$nc(this->buf)->set(i, $nc(this->completeHeader)->get(i));
					}
					$System::arraycopy(b, inputIndex, this->buf, this->count, this->spaceInCurrentChunk);
					inputIndex += this->spaceInCurrentChunk;
					bytesToWrite -= this->spaceInCurrentChunk;
					this->count += this->spaceInCurrentChunk;
					$nc(this->buf)->set(this->count++, $nc(ChunkedOutputStream::FOOTER)->get(0));
					$nc(this->buf)->set(this->count++, $nc(ChunkedOutputStream::FOOTER)->get(1));
					this->spaceInCurrentChunk = 0;
					flush(false);
					if (checkError()) {
						break;
					}
				} else {
					$System::arraycopy(b, inputIndex, this->buf, this->count, bytesToWrite);
					this->count += bytesToWrite;
					this->size$ += bytesToWrite;
					this->spaceInCurrentChunk -= bytesToWrite;
					bytesToWrite = 0;
				}
			} while (bytesToWrite > 0);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void ChunkedOutputStream::write(int32_t _b) {
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($bytes, b, $new($bytes, {(int8_t)_b}));
			write(b, 0, 1);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ChunkedOutputStream::reset() {
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->count = this->preferedHeaderSize;
			this->size$ = 0;
			this->spaceInCurrentChunk = this->preferredChunkDataSize;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t ChunkedOutputStream::size() {
	return this->size$;
}

void ChunkedOutputStream::close() {
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->out == nullptr) {
				return$1 = true;
				goto $finally;
			}
			if (this->size$ > 0) {
				flush(true);
			}
			flush(true);
			$set(this, out, nullptr);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void ChunkedOutputStream::flush() {
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			ensureOpen();
			if (this->size$ > 0) {
				flush(true);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$ChunkedOutputStream($Class* class$) {
	$assignStatic(ChunkedOutputStream::CRLF, $new($bytes, {
		(int8_t)u'\r',
		(int8_t)u'\n'
	}));
	ChunkedOutputStream::CRLF_SIZE = $nc(ChunkedOutputStream::CRLF)->length;
	$assignStatic(ChunkedOutputStream::FOOTER, ChunkedOutputStream::CRLF);
	ChunkedOutputStream::FOOTER_SIZE = ChunkedOutputStream::CRLF_SIZE;
	$assignStatic(ChunkedOutputStream::EMPTY_CHUNK_HEADER, ChunkedOutputStream::getHeader(0));
	ChunkedOutputStream::EMPTY_CHUNK_HEADER_SIZE = ChunkedOutputStream::getHeaderSize(0);
}

ChunkedOutputStream::ChunkedOutputStream() {
}

$Class* ChunkedOutputStream::load$($String* name, bool initialize) {
	$loadClass(ChunkedOutputStream, name, initialize, &_ChunkedOutputStream_ClassInfo_, clinit$ChunkedOutputStream, allocate$ChunkedOutputStream);
	return class$;
}

$Class* ChunkedOutputStream::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun