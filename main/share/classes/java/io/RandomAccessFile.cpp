#include <java/io/RandomAccessFile.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutput.h>
#include <java/io/DataOutputStream.h>
#include <java/io/EOFException.h>
#include <java/io/File.h>
#include <java/io/FileCleanable.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile$1.h>
#include <java/io/RandomAccessFile$2.h>
#include <java/lang/InternalError.h>
#include <java/lang/SecurityManager.h>
#include <java/nio/channels/FileChannel.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <jcpp.h>

#undef O_DSYNC
#undef O_RDONLY
#undef O_RDWR
#undef O_SYNC
#undef O_TEMPORARY

using $DataInputStream = ::java::io::DataInputStream;
using $DataOutput = ::java::io::DataOutput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $EOFException = ::java::io::EOFException;
using $File = ::java::io::File;
using $FileCleanable = ::java::io::FileCleanable;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $RandomAccessFile$1 = ::java::io::RandomAccessFile$1;
using $RandomAccessFile$2 = ::java::io::RandomAccessFile$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;

namespace java {
	namespace io {

int32_t RandomAccessFile::hashCode() {
	 return this->$DataOutput::hashCode();
}

bool RandomAccessFile::equals(Object$* obj) {
	 return this->$DataOutput::equals(obj);
}

$Object* RandomAccessFile::clone() {
	 return this->$DataOutput::clone();
}

$String* RandomAccessFile::toString() {
	 return this->$DataOutput::toString();
}

void RandomAccessFile::finalize() {
	this->$DataOutput::finalize();
}

void RandomAccessFile::init$($String* name, $String* mode) {
	RandomAccessFile::init$(name != nullptr ? $$new($File, name) : ($File*)nullptr, mode);
}

void RandomAccessFile::init$($File* file, $String* mode) {
	RandomAccessFile::init$(file, mode, false);
}

void RandomAccessFile::init$($File* file, $String* mode, bool openAndDelete) {
	$useLocalObjectStack();
	$set(this, closeLock, $new($Object));
	$var($String, name, file != nullptr ? file->getPath() : ($String*)nullptr);
	int32_t imode = -1;
	if ($nc(mode)->equals("r"_s)) {
		imode = RandomAccessFile::O_RDONLY;
	} else if (mode->startsWith("rw"_s)) {
		imode = RandomAccessFile::O_RDWR;
		this->rw = true;
		if (mode->length() > 2) {
			if (mode->equals("rws"_s)) {
				imode |= RandomAccessFile::O_SYNC;
			} else if (mode->equals("rwd"_s)) {
				imode |= RandomAccessFile::O_DSYNC;
			} else {
				imode = -1;
			}
		}
	}
	if (openAndDelete) {
		imode |= RandomAccessFile::O_TEMPORARY;
	}
	if (imode < 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal mode \""_s, mode, "\" must be one of \"r\", \"rw\", \"rws\", or \"rwd\""_s}));
	}
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(name);
		if (this->rw) {
			security->checkWrite(name);
		}
	}
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(file)->isInvalid()) {
		$throwNew($FileNotFoundException, "Invalid file path"_s);
	}
	$set(this, fd, $new($FileDescriptor));
	this->fd->attach(this);
	$set(this, path, name);
	open(name, imode);
	$FileCleanable::register$(this->fd);
}

$FileDescriptor* RandomAccessFile::getFD() {
	if (this->fd != nullptr) {
		return this->fd;
	}
	$throwNew($IOException);
}

$FileChannel* RandomAccessFile::getChannel() {
	$var($FileChannel, fc, this->channel);
	if (fc == nullptr) {
		$synchronized(this) {
			$assign(fc, this->channel);
			if (fc == nullptr) {
				$set(this, channel, $assign(fc, $FileChannelImpl::open(this->fd, this->path, true, this->rw, false, this)));
				if (this->closed) {
					try {
						$nc(fc)->close();
					} catch ($IOException& ioe) {
						$throwNew($InternalError, ioe);
					}
				}
			}
		}
	}
	return fc;
}

void RandomAccessFile::open0($String* name, int32_t mode) {
	$prepareNative(open0, void, $String* name, int32_t mode);
	$invokeNative(name, mode);
	$finishNative();
}

void RandomAccessFile::open($String* name, int32_t mode) {
	open0(name, mode);
}

int32_t RandomAccessFile::read() {
	return read0();
}

int32_t RandomAccessFile::read0() {
	$prepareNative(read0, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int32_t RandomAccessFile::readBytes($bytes* b, int32_t off, int32_t len) {
	$prepareNative(readBytes, int32_t, $bytes* b, int32_t off, int32_t len);
	int32_t $ret = $invokeNative(b, off, len);
	$finishNative();
	return $ret;
}

int32_t RandomAccessFile::read($bytes* b, int32_t off, int32_t len) {
	return readBytes(b, off, len);
}

int32_t RandomAccessFile::read($bytes* b) {
	return readBytes(b, 0, $nc(b)->length);
}

void RandomAccessFile::readFully($bytes* b) {
	readFully(b, 0, $nc(b)->length);
}

void RandomAccessFile::readFully($bytes* b, int32_t off, int32_t len) {
	int32_t n = 0;
	do {
		int32_t count = this->read(b, off + n, len - n);
		if (count < 0) {
			$throwNew($EOFException);
		}
		n += count;
	} while (n < len);
}

int32_t RandomAccessFile::skipBytes(int32_t n) {
	int64_t pos = 0;
	int64_t len = 0;
	int64_t newpos = 0;
	if (n <= 0) {
		return 0;
	}
	pos = getFilePointer();
	len = length();
	newpos = pos + n;
	if (newpos > len) {
		newpos = len;
	}
	seek(newpos);
	return (int32_t)(newpos - pos);
}

void RandomAccessFile::write(int32_t b) {
	write0(b);
}

void RandomAccessFile::write0(int32_t b) {
	$prepareNative(write0, void, int32_t b);
	$invokeNative(b);
	$finishNative();
}

void RandomAccessFile::writeBytes($bytes* b, int32_t off, int32_t len) {
	$prepareNative(writeBytes, void, $bytes* b, int32_t off, int32_t len);
	$invokeNative(b, off, len);
	$finishNative();
}

void RandomAccessFile::write($bytes* b) {
	writeBytes(b, 0, $nc(b)->length);
}

void RandomAccessFile::write($bytes* b, int32_t off, int32_t len) {
	writeBytes(b, off, len);
}

int64_t RandomAccessFile::getFilePointer() {
	$prepareNative(getFilePointer, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void RandomAccessFile::seek(int64_t pos) {
	if (pos < 0) {
		$throwNew($IOException, "Negative seek offset"_s);
	} else {
		seek0(pos);
	}
}

void RandomAccessFile::seek0(int64_t pos) {
	$prepareNative(seek0, void, int64_t pos);
	$invokeNative(pos);
	$finishNative();
}

int64_t RandomAccessFile::length() {
	$prepareNative(length, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void RandomAccessFile::setLength(int64_t newLength) {
	$prepareNative(setLength, void, int64_t newLength);
	$invokeNative(newLength);
	$finishNative();
}

void RandomAccessFile::close() {
	$useLocalObjectStack();
	if (this->closed) {
		return;
	}
	$synchronized(this->closeLock) {
		if (this->closed) {
			return;
		}
		this->closed = true;
	}
	$var($FileChannel, fc, this->channel);
	if (fc != nullptr) {
		fc->close();
	}
	$nc(this->fd)->closeAll($$new($RandomAccessFile$1, this));
}

bool RandomAccessFile::readBoolean() {
	int32_t ch = this->read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return (ch != 0);
}

int8_t RandomAccessFile::readByte() {
	int32_t ch = this->read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return (int8_t)(ch);
}

int32_t RandomAccessFile::readUnsignedByte() {
	int32_t ch = this->read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return ch;
}

int16_t RandomAccessFile::readShort() {
	int32_t ch1 = this->read();
	int32_t ch2 = this->read();
	if ((ch1 | ch2) < 0) {
		$throwNew($EOFException);
	}
	return (int16_t)((ch1 << 8) + (ch2 << 0));
}

int32_t RandomAccessFile::readUnsignedShort() {
	int32_t ch1 = this->read();
	int32_t ch2 = this->read();
	if ((ch1 | ch2) < 0) {
		$throwNew($EOFException);
	}
	return (ch1 << 8) + (ch2 << 0);
}

char16_t RandomAccessFile::readChar() {
	int32_t ch1 = this->read();
	int32_t ch2 = this->read();
	if ((ch1 | ch2) < 0) {
		$throwNew($EOFException);
	}
	return (char16_t)((ch1 << 8) + (ch2 << 0));
}

int32_t RandomAccessFile::readInt() {
	int32_t ch1 = this->read();
	int32_t ch2 = this->read();
	int32_t ch3 = this->read();
	int32_t ch4 = this->read();
	if ((((ch1 | ch2) | ch3) | ch4) < 0) {
		$throwNew($EOFException);
	}
	return ((ch1 << 24) + (ch2 << 16) + (ch3 << 8) + (ch4 << 0));
}

int64_t RandomAccessFile::readLong() {
	int64_t var$0 = (int64_t)(readInt()) << 32;
	return var$0 + (readInt() & (int64_t)0xffffffff);
}

float RandomAccessFile::readFloat() {
	return $Float::intBitsToFloat(readInt());
}

double RandomAccessFile::readDouble() {
	return $Double::longBitsToDouble(readLong());
}

$String* RandomAccessFile::readLine() {
	$var($StringBuilder, input, $new($StringBuilder));
	int32_t c = -1;
	bool eol = false;
	while (!eol) {
		int64_t cur = 0;
		switch (c = read()) {
		case -1:
		case u'\n':
			eol = true;
			break;
		case u'\r':
			eol = true;
			cur = getFilePointer();
			if ((read()) != u'\n') {
				seek(cur);
			}
			break;
		default:
			input->append((char16_t)c);
			break;
		}
	}
	if ((c == -1) && (input->length() == 0)) {
		return nullptr;
	}
	return input->toString();
}

$String* RandomAccessFile::readUTF() {
	return $DataInputStream::readUTF(this);
}

void RandomAccessFile::writeBoolean(bool v) {
	write(v ? 1 : 0);
}

void RandomAccessFile::writeByte(int32_t v) {
	write(v);
}

void RandomAccessFile::writeShort(int32_t v) {
	write(((int32_t)((uint32_t)v >> 8)) & 0xff);
	write(((int32_t)((uint32_t)v >> 0)) & 0xff);
}

void RandomAccessFile::writeChar(int32_t v) {
	write(((int32_t)((uint32_t)v >> 8)) & 0xff);
	write(((int32_t)((uint32_t)v >> 0)) & 0xff);
}

void RandomAccessFile::writeInt(int32_t v) {
	write(((int32_t)((uint32_t)v >> 24)) & 0xff);
	write(((int32_t)((uint32_t)v >> 16)) & 0xff);
	write(((int32_t)((uint32_t)v >> 8)) & 0xff);
	write(((int32_t)((uint32_t)v >> 0)) & 0xff);
}

void RandomAccessFile::writeLong(int64_t v) {
	write((int32_t)((int64_t)((uint64_t)v >> 56)) & 0xff);
	write((int32_t)((int64_t)((uint64_t)v >> 48)) & 0xff);
	write((int32_t)((int64_t)((uint64_t)v >> 40)) & 0xff);
	write((int32_t)((int64_t)((uint64_t)v >> 32)) & 0xff);
	write((int32_t)((int64_t)((uint64_t)v >> 24)) & 0xff);
	write((int32_t)((int64_t)((uint64_t)v >> 16)) & 0xff);
	write((int32_t)((int64_t)((uint64_t)v >> 8)) & 0xff);
	write((int32_t)((int64_t)((uint64_t)v >> 0)) & 0xff);
}

void RandomAccessFile::writeFloat(float v) {
	writeInt($Float::floatToIntBits(v));
}

void RandomAccessFile::writeDouble(double v) {
	writeLong($Double::doubleToLongBits(v));
}

void RandomAccessFile::writeBytes($String* s) {
	int32_t len = $nc(s)->length();
	$var($bytes, b, $new($bytes, len));
	s->getBytes(0, len, b, 0);
	writeBytes(b, 0, len);
}

void RandomAccessFile::writeChars($String* s) {
	$useLocalObjectStack();
	int32_t clen = $nc(s)->length();
	int32_t blen = 2 * clen;
	$var($bytes, b, $new($bytes, blen));
	$var($chars, c, $new($chars, clen));
	s->getChars(0, clen, c, 0);
	for (int32_t i = 0, j = 0; i < clen; ++i) {
		b->set(j++, (int8_t)((int32_t)((uint32_t)c->get(i) >> 8)));
		b->set(j++, (int8_t)((int32_t)((uint32_t)c->get(i) >> 0)));
	}
	writeBytes(b, 0, blen);
}

void RandomAccessFile::writeUTF($String* str) {
	$DataOutputStream::writeUTF(str, this);
}

void RandomAccessFile::initIDs() {
	$init(RandomAccessFile);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void RandomAccessFile::clinit$($Class* clazz) {
	{
		RandomAccessFile::initIDs();
		$SharedSecrets::setJavaIORandomAccessFileAccess($$new($RandomAccessFile$2));
	}
}

RandomAccessFile::RandomAccessFile() {
}

$Class* RandomAccessFile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE, $field(RandomAccessFile, fd)},
		{"channel", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $VOLATILE, $field(RandomAccessFile, channel)},
		{"rw", "Z", nullptr, $PRIVATE, $field(RandomAccessFile, rw)},
		{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(RandomAccessFile, path)},
		{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(RandomAccessFile, closeLock)},
		{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(RandomAccessFile, closed)},
		{"O_RDONLY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RandomAccessFile, O_RDONLY)},
		{"O_RDWR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RandomAccessFile, O_RDWR)},
		{"O_SYNC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RandomAccessFile, O_SYNC)},
		{"O_DSYNC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RandomAccessFile, O_DSYNC)},
		{"O_TEMPORARY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RandomAccessFile, O_TEMPORARY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RandomAccessFile, init$, void, $String*, $String*), "java.io.FileNotFoundException"},
		{"<init>", "(Ljava/io/File;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RandomAccessFile, init$, void, $File*, $String*), "java.io.FileNotFoundException"},
		{"<init>", "(Ljava/io/File;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(RandomAccessFile, init$, void, $File*, $String*, bool), "java.io.FileNotFoundException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile, close, void), "java.io.IOException"},
		{"getChannel", "()Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC | $FINAL, $method(RandomAccessFile, getChannel, $FileChannel*)},
		{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $FINAL, $method(RandomAccessFile, getFD, $FileDescriptor*), "java.io.IOException"},
		{"getFilePointer", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(RandomAccessFile, getFilePointer, int64_t), "java.io.IOException"},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(RandomAccessFile, initIDs, void)},
		{"length", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(RandomAccessFile, length, int64_t), "java.io.IOException"},
		{"open", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(RandomAccessFile, open, void, $String*, int32_t), "java.io.FileNotFoundException"},
		{"open0", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $NATIVE, $method(RandomAccessFile, open0, void, $String*, int32_t), "java.io.FileNotFoundException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile, read, int32_t, $bytes*), "java.io.IOException"},
		{"read0", "()I", nullptr, $PRIVATE | $NATIVE, $method(RandomAccessFile, read0, int32_t), "java.io.IOException"},
		{"readBoolean", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readBoolean, bool), "java.io.IOException"},
		{"readByte", "()B", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readByte, int8_t), "java.io.IOException"},
		{"readBytes", "([BII)I", nullptr, $PRIVATE | $NATIVE, $method(RandomAccessFile, readBytes, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"readChar", "()C", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readChar, char16_t), "java.io.IOException"},
		{"readDouble", "()D", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readDouble, double), "java.io.IOException"},
		{"readFloat", "()F", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readFloat, float), "java.io.IOException"},
		{"readFully", "([B)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readFully, void, $bytes*), "java.io.IOException"},
		{"readFully", "([BII)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readFully, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"readInt", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readInt, int32_t), "java.io.IOException"},
		{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readLine, $String*), "java.io.IOException"},
		{"readLong", "()J", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readLong, int64_t), "java.io.IOException"},
		{"readShort", "()S", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readShort, int16_t), "java.io.IOException"},
		{"readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readUTF, $String*), "java.io.IOException"},
		{"readUnsignedByte", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readUnsignedByte, int32_t), "java.io.IOException"},
		{"readUnsignedShort", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, readUnsignedShort, int32_t), "java.io.IOException"},
		{"seek", "(J)V", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile, seek, void, int64_t), "java.io.IOException"},
		{"seek0", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(RandomAccessFile, seek0, void, int64_t), "java.io.IOException"},
		{"setLength", "(J)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(RandomAccessFile, setLength, void, int64_t), "java.io.IOException"},
		{"skipBytes", "(I)I", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile, skipBytes, int32_t, int32_t), "java.io.IOException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile, write, void, int32_t), "java.io.IOException"},
		{"write", "([B)V", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile, write, void, $bytes*), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"write0", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(RandomAccessFile, write0, void, int32_t), "java.io.IOException"},
		{"writeBoolean", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeBoolean, void, bool), "java.io.IOException"},
		{"writeByte", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeByte, void, int32_t), "java.io.IOException"},
		{"writeBytes", "([BII)V", nullptr, $PRIVATE | $NATIVE, $method(RandomAccessFile, writeBytes, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"writeBytes", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeBytes, void, $String*), "java.io.IOException"},
		{"writeChar", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeChar, void, int32_t), "java.io.IOException"},
		{"writeChars", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeChars, void, $String*), "java.io.IOException"},
		{"writeDouble", "(D)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeDouble, void, double), "java.io.IOException"},
		{"writeFloat", "(F)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeFloat, void, float), "java.io.IOException"},
		{"writeInt", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeInt, void, int32_t), "java.io.IOException"},
		{"writeLong", "(J)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeLong, void, int64_t), "java.io.IOException"},
		{"writeShort", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeShort, void, int32_t), "java.io.IOException"},
		{"writeUTF", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RandomAccessFile, writeUTF, void, $String*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.RandomAccessFile$2", nullptr, nullptr, 0},
		{"java.io.RandomAccessFile$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.RandomAccessFile",
		"java.lang.Object",
		"java.io.DataOutput,java.io.DataInput,java.io.Closeable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.io.RandomAccessFile$2,java.io.RandomAccessFile$1"
	};
	$loadClass(RandomAccessFile, name, initialize, &classInfo$$, RandomAccessFile::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RandomAccessFile));
	});
	return class$;
}

$Class* RandomAccessFile::class$ = nullptr;

	} // io
} // java