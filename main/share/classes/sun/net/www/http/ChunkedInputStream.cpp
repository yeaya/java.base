#include <sun/net/www/http/ChunkedInputStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/nio/charset/Charset.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/net/www/MessageHeader.h>
#include <sun/net/www/http/HttpClient.h>
#include <sun/nio/cs/US_ASCII.h>
#include <jcpp.h>

#undef INSTANCE
#undef MAX_CHUNK_HEADER_SIZE
#undef STATE_AWAITING_CHUNK_EOL
#undef STATE_AWAITING_CHUNK_HEADER
#undef STATE_AWAITING_TRAILERS
#undef STATE_DONE
#undef STATE_READING_CHUNK

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Charset = ::java::nio::charset::Charset;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $MessageHeader = ::sun::net::www::MessageHeader;
using $HttpClient = ::sun::net::www::http::HttpClient;
using $US_ASCII = ::sun::nio::cs::US_ASCII;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _ChunkedInputStream_FieldInfo_[] = {
	{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(ChunkedInputStream, in)},
	{"hc", "Lsun/net/www/http/HttpClient;", nullptr, $PRIVATE, $field(ChunkedInputStream, hc)},
	{"responses", "Lsun/net/www/MessageHeader;", nullptr, $PRIVATE, $field(ChunkedInputStream, responses)},
	{"chunkSize", "I", nullptr, $PRIVATE, $field(ChunkedInputStream, chunkSize)},
	{"chunkRead", "I", nullptr, $PRIVATE, $field(ChunkedInputStream, chunkRead)},
	{"chunkData", "[B", nullptr, $PRIVATE, $field(ChunkedInputStream, chunkData)},
	{"chunkPos", "I", nullptr, $PRIVATE, $field(ChunkedInputStream, chunkPos)},
	{"chunkCount", "I", nullptr, $PRIVATE, $field(ChunkedInputStream, chunkCount)},
	{"rawData", "[B", nullptr, $PRIVATE, $field(ChunkedInputStream, rawData)},
	{"rawPos", "I", nullptr, $PRIVATE, $field(ChunkedInputStream, rawPos)},
	{"rawCount", "I", nullptr, $PRIVATE, $field(ChunkedInputStream, rawCount)},
	{"error", "Z", nullptr, $PRIVATE, $field(ChunkedInputStream, error)},
	{"closed", "Z", nullptr, $PRIVATE, $field(ChunkedInputStream, closed)},
	{"readLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(ChunkedInputStream, readLock)},
	{"MAX_CHUNK_HEADER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChunkedInputStream, MAX_CHUNK_HEADER_SIZE)},
	{"STATE_AWAITING_CHUNK_HEADER", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedInputStream, STATE_AWAITING_CHUNK_HEADER)},
	{"STATE_READING_CHUNK", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedInputStream, STATE_READING_CHUNK)},
	{"STATE_AWAITING_CHUNK_EOL", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedInputStream, STATE_AWAITING_CHUNK_EOL)},
	{"STATE_AWAITING_TRAILERS", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedInputStream, STATE_AWAITING_TRAILERS)},
	{"STATE_DONE", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedInputStream, STATE_DONE)},
	{"state", "I", nullptr, $PRIVATE, $field(ChunkedInputStream, state)},
	{}
};

$MethodInfo _ChunkedInputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/InputStream;Lsun/net/www/http/HttpClient;Lsun/net/www/MessageHeader;)V", nullptr, $PUBLIC, $method(ChunkedInputStream, init$, void, $InputStream*, $HttpClient*, $MessageHeader*), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(ChunkedInputStream, available, int32_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ChunkedInputStream, close, void), "java.io.IOException"},
	{"closeUnderlying", "()V", nullptr, $PRIVATE, $method(ChunkedInputStream, closeUnderlying, void), "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(ChunkedInputStream, ensureOpen, void), "java.io.IOException"},
	{"ensureRawAvailable", "(I)V", nullptr, $PRIVATE, $method(ChunkedInputStream, ensureRawAvailable, void, int32_t)},
	{"fastRead", "([BII)I", nullptr, $PRIVATE, $method(ChunkedInputStream, fastRead, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"hurry", "()Z", nullptr, $PUBLIC, $virtualMethod(ChunkedInputStream, hurry, bool)},
	{"processRaw", "()V", nullptr, $PRIVATE, $method(ChunkedInputStream, processRaw, void), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ChunkedInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(ChunkedInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"readAhead", "(Z)I", nullptr, $PRIVATE, $method(ChunkedInputStream, readAhead, int32_t, bool), "java.io.IOException"},
	{"readAheadBlocking", "()I", nullptr, $PRIVATE, $method(ChunkedInputStream, readAheadBlocking, int32_t), "java.io.IOException"},
	{"readAheadNonBlocking", "()I", nullptr, $PRIVATE, $method(ChunkedInputStream, readAheadNonBlocking, int32_t), "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ChunkedInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.http.ChunkedInputStream",
	"java.io.InputStream",
	"sun.net.www.http.Hurryable",
	_ChunkedInputStream_FieldInfo_,
	_ChunkedInputStream_MethodInfo_
};

$Object* allocate$ChunkedInputStream($Class* clazz) {
	return $of($alloc(ChunkedInputStream));
}

int32_t ChunkedInputStream::hashCode() {
	 return this->$InputStream::hashCode();
}

bool ChunkedInputStream::equals(Object$* obj) {
	 return this->$InputStream::equals(obj);
}

$Object* ChunkedInputStream::clone() {
	 return this->$InputStream::clone();
}

$String* ChunkedInputStream::toString() {
	 return this->$InputStream::toString();
}

void ChunkedInputStream::finalize() {
	this->$InputStream::finalize();
}

void ChunkedInputStream::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "stream is closed"_s);
	}
}

void ChunkedInputStream::ensureRawAvailable(int32_t size) {
	if (this->rawCount + size > $nc(this->rawData)->length) {
		int32_t used = this->rawCount - this->rawPos;
		if (used + size > $nc(this->rawData)->length) {
			$var($bytes, tmp, $new($bytes, used + size));
			if (used > 0) {
				$System::arraycopy(this->rawData, this->rawPos, tmp, 0, used);
			}
			$set(this, rawData, tmp);
		} else if (used > 0) {
			$System::arraycopy(this->rawData, this->rawPos, this->rawData, 0, used);
		}
		this->rawCount = used;
		this->rawPos = 0;
	}
}

void ChunkedInputStream::closeUnderlying() {
	if (this->in == nullptr) {
		return;
	}
	if (!this->error && this->state == ChunkedInputStream::STATE_DONE) {
		$nc(this->hc)->finished();
	} else if (!hurry()) {
		$nc(this->hc)->closeServer();
	}
	$set(this, in, nullptr);
}

int32_t ChunkedInputStream::fastRead($bytes* b, int32_t off, int32_t len) {
	int32_t remaining = this->chunkSize - this->chunkRead;
	int32_t cnt = (remaining < len) ? remaining : len;
	if (cnt > 0) {
		int32_t nread = 0;
		try {
			nread = $nc(this->in)->read(b, off, cnt);
		} catch ($IOException& e) {
			this->error = true;
			$throw(e);
		}
		if (nread > 0) {
			this->chunkRead += nread;
			if (this->chunkRead >= this->chunkSize) {
				this->state = ChunkedInputStream::STATE_AWAITING_CHUNK_EOL;
			}
			return nread;
		}
		this->error = true;
		$throwNew($IOException, "Premature EOF"_s);
	} else {
		return 0;
	}
}

void ChunkedInputStream::processRaw() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = 0;
	int32_t i = 0;
	while (this->state != ChunkedInputStream::STATE_DONE) {
		{
			$var($String, header, nullptr)
			int32_t copyLen = 0;
			$var($String, trailer, nullptr)
			$var($String, key, nullptr)
			$var($String, value, nullptr)
			switch (this->state) {
			case ChunkedInputStream::STATE_AWAITING_CHUNK_HEADER:
				{
					pos = this->rawPos;
					while (pos < this->rawCount) {
						if ($nc(this->rawData)->get(pos) == u'\n') {
							break;
						}
						++pos;
						if ((pos - this->rawPos) >= ChunkedInputStream::MAX_CHUNK_HEADER_SIZE) {
							this->error = true;
							$throwNew($IOException, "Chunk header too long"_s);
						}
					}
					if (pos >= this->rawCount) {
						return;
					}
					$init($US_ASCII);
					$assign(header, $new($String, this->rawData, this->rawPos, pos - this->rawPos + 1, static_cast<$Charset*>($US_ASCII::INSTANCE)));
					for (i = 0; i < $nc(header)->length(); ++i) {
						if ($Character::digit(header->charAt(i), 16) == -1) {
							break;
						}
					}
					try {
						this->chunkSize = $Integer::parseInt(header, 0, i, 16);
					} catch ($NumberFormatException& e) {
						this->error = true;
						$throwNew($IOException, "Bogus chunk size"_s);
					}
					this->rawPos = pos + 1;
					this->chunkRead = 0;
					if (this->chunkSize > 0) {
						this->state = ChunkedInputStream::STATE_READING_CHUNK;
					} else {
						this->state = ChunkedInputStream::STATE_AWAITING_TRAILERS;
					}
					break;
				}
			case ChunkedInputStream::STATE_READING_CHUNK:
				{
					if (this->rawPos >= this->rawCount) {
						return;
					}
					copyLen = $Math::min(this->chunkSize - this->chunkRead, this->rawCount - this->rawPos);
					if ($nc(this->chunkData)->length < this->chunkCount + copyLen) {
						int32_t cnt = this->chunkCount - this->chunkPos;
						if ($nc(this->chunkData)->length < cnt + copyLen) {
							$var($bytes, tmp, $new($bytes, cnt + copyLen));
							$System::arraycopy(this->chunkData, this->chunkPos, tmp, 0, cnt);
							$set(this, chunkData, tmp);
						} else {
							$System::arraycopy(this->chunkData, this->chunkPos, this->chunkData, 0, cnt);
						}
						this->chunkPos = 0;
						this->chunkCount = cnt;
					}
					$System::arraycopy(this->rawData, this->rawPos, this->chunkData, this->chunkCount, copyLen);
					this->rawPos += copyLen;
					this->chunkCount += copyLen;
					this->chunkRead += copyLen;
					if (this->chunkSize - this->chunkRead <= 0) {
						this->state = ChunkedInputStream::STATE_AWAITING_CHUNK_EOL;
					} else {
						return;
					}
					break;
				}
			case ChunkedInputStream::STATE_AWAITING_CHUNK_EOL:
				{
					if (this->rawPos + 1 >= this->rawCount) {
						return;
					}
					if ($nc(this->rawData)->get(this->rawPos) != u'\r') {
						this->error = true;
						$throwNew($IOException, "missing CR"_s);
					}
					if ($nc(this->rawData)->get(this->rawPos + 1) != u'\n') {
						this->error = true;
						$throwNew($IOException, "missing LF"_s);
					}
					this->rawPos += 2;
					this->state = ChunkedInputStream::STATE_AWAITING_CHUNK_HEADER;
					break;
				}
			case ChunkedInputStream::STATE_AWAITING_TRAILERS:
				{
					pos = this->rawPos;
					while (pos < this->rawCount) {
						if ($nc(this->rawData)->get(pos) == u'\n') {
							break;
						}
						++pos;
					}
					if (pos >= this->rawCount) {
						return;
					}
					if (pos == this->rawPos) {
						this->error = true;
						$throwNew($IOException, "LF should be proceeded by CR"_s);
					}
					if ($nc(this->rawData)->get(pos - 1) != u'\r') {
						this->error = true;
						$throwNew($IOException, "LF should be proceeded by CR"_s);
					}
					if (pos == (this->rawPos + 1)) {
						this->state = ChunkedInputStream::STATE_DONE;
						closeUnderlying();
						return;
					}
					$init($US_ASCII);
					$assign(trailer, $new($String, this->rawData, this->rawPos, pos - this->rawPos, static_cast<$Charset*>($US_ASCII::INSTANCE)));
					i = $nc(trailer)->indexOf((int32_t)u':');
					if (i == -1) {
						$throwNew($IOException, "Malformed tailer - format should be key:value"_s);
					}
					$assign(key, ($($nc(trailer)->substring(0, i)))->trim());
					$assign(value, ($(trailer->substring(i + 1, trailer->length())))->trim());
					$nc(this->responses)->add(key, value);
					this->rawPos = pos + 1;
					break;
				}
			}
		}
	}
}

int32_t ChunkedInputStream::readAheadNonBlocking() {
	int32_t avail = $nc(this->in)->available();
	if (avail > 0) {
		ensureRawAvailable(avail);
		int32_t nread = 0;
		try {
			nread = $nc(this->in)->read(this->rawData, this->rawCount, avail);
		} catch ($IOException& e) {
			this->error = true;
			$throw(e);
		}
		if (nread < 0) {
			this->error = true;
			return -1;
		}
		this->rawCount += nread;
		processRaw();
	}
	return this->chunkCount - this->chunkPos;
}

int32_t ChunkedInputStream::readAheadBlocking() {
	do {
		if (this->state == ChunkedInputStream::STATE_DONE) {
			return -1;
		}
		ensureRawAvailable(32);
		int32_t nread = 0;
		try {
			nread = $nc(this->in)->read(this->rawData, this->rawCount, $nc(this->rawData)->length - this->rawCount);
		} catch ($IOException& e) {
			this->error = true;
			$throw(e);
		}
		if (nread < 0) {
			this->error = true;
			$throwNew($IOException, "Premature EOF"_s);
		}
		this->rawCount += nread;
		processRaw();
	} while (this->chunkCount <= 0);
	return this->chunkCount - this->chunkPos;
}

int32_t ChunkedInputStream::readAhead(bool allowBlocking) {
	if (this->state == ChunkedInputStream::STATE_DONE) {
		return -1;
	}
	if (this->chunkPos >= this->chunkCount) {
		this->chunkCount = 0;
		this->chunkPos = 0;
	}
	if (allowBlocking) {
		return readAheadBlocking();
	} else {
		return readAheadNonBlocking();
	}
}

void ChunkedInputStream::init$($InputStream* in, $HttpClient* hc, $MessageHeader* responses) {
	$InputStream::init$();
	$set(this, chunkData, $new($bytes, 4096));
	$set(this, rawData, $new($bytes, 32));
	$set(this, readLock, $new($ReentrantLock));
	$set(this, in, in);
	$set(this, responses, responses);
	$set(this, hc, hc);
	this->state = ChunkedInputStream::STATE_AWAITING_CHUNK_HEADER;
}

int32_t ChunkedInputStream::read() {
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpen();
			if (this->chunkPos >= this->chunkCount) {
				if (readAhead(true) <= 0) {
					var$2 = -1;
					return$1 = true;
					goto $finally;
				}
			}
			var$2 = (int32_t)($nc(this->chunkData)->get(this->chunkPos++) & (uint32_t)255);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->readLock)->unlock();
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

int32_t ChunkedInputStream::read($bytes* b, int32_t off, int32_t len) {
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpen();
			if ((off < 0) || (off > $nc(b)->length) || (len < 0) || ((off + len) > $nc(b)->length) || ((off + len) < 0)) {
				$throwNew($IndexOutOfBoundsException);
			} else if (len == 0) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			int32_t avail = this->chunkCount - this->chunkPos;
			if (avail <= 0) {
				if (this->state == ChunkedInputStream::STATE_READING_CHUNK) {
					var$2 = fastRead(b, off, len);
					return$1 = true;
					goto $finally;
				}
				avail = readAhead(true);
				if (avail < 0) {
					var$2 = -1;
					return$1 = true;
					goto $finally;
				}
			}
			int32_t cnt = (avail < len) ? avail : len;
			$System::arraycopy(this->chunkData, this->chunkPos, b, off, cnt);
			this->chunkPos += cnt;
			var$2 = cnt;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->readLock)->unlock();
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

int32_t ChunkedInputStream::available() {
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpen();
			int32_t avail = this->chunkCount - this->chunkPos;
			if (avail > 0) {
				var$2 = avail;
				return$1 = true;
				goto $finally;
			}
			avail = readAhead(false);
			if (avail < 0) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			} else {
				var$2 = avail;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->readLock)->unlock();
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

void ChunkedInputStream::close() {
	if (this->closed) {
		return;
	}
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->closed) {
				return$1 = true;
				goto $finally;
			}
			closeUnderlying();
			this->closed = true;
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

bool ChunkedInputStream::hurry() {
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->in == nullptr || this->error) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			try {
				readAhead(false);
			} catch ($Exception& e) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			if (this->error) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			var$2 = (this->state == ChunkedInputStream::STATE_DONE);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->readLock)->unlock();
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

ChunkedInputStream::ChunkedInputStream() {
}

$Class* ChunkedInputStream::load$($String* name, bool initialize) {
	$loadClass(ChunkedInputStream, name, initialize, &_ChunkedInputStream_ClassInfo_, allocate$ChunkedInputStream);
	return class$;
}

$Class* ChunkedInputStream::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun