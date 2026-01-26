#include <sun/net/ftp/impl/FtpClient$FtpFileIterator.h>

#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <sun/net/ftp/FtpDirEntry.h>
#include <sun/net/ftp/FtpDirParser.h>
#include <sun/net/ftp/impl/FtpClient.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $FtpDirEntry = ::sun::net::ftp::FtpDirEntry;
using $FtpDirParser = ::sun::net::ftp::FtpDirParser;

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

$FieldInfo _FtpClient$FtpFileIterator_FieldInfo_[] = {
	{"in", "Ljava/io/BufferedReader;", nullptr, $PRIVATE, $field(FtpClient$FtpFileIterator, in)},
	{"nextFile", "Lsun/net/ftp/FtpDirEntry;", nullptr, $PRIVATE, $field(FtpClient$FtpFileIterator, nextFile)},
	{"fparser", "Lsun/net/ftp/FtpDirParser;", nullptr, $PRIVATE, $field(FtpClient$FtpFileIterator, fparser)},
	{"eof", "Z", nullptr, $PRIVATE, $field(FtpClient$FtpFileIterator, eof)},
	{}
};

$MethodInfo _FtpClient$FtpFileIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/net/ftp/FtpDirParser;Ljava/io/BufferedReader;)V", nullptr, $PUBLIC, $method(FtpClient$FtpFileIterator, init$, void, $FtpDirParser*, $BufferedReader*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FtpClient$FtpFileIterator, close, void), "java.io.IOException"},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(FtpClient$FtpFileIterator, hasNext, bool)},
	{"next", "()Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC, $virtualMethod(FtpClient$FtpFileIterator, next, $Object*)},
	{"readNext", "()V", nullptr, $PRIVATE, $method(FtpClient$FtpFileIterator, readNext, void)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(FtpClient$FtpFileIterator, remove, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FtpClient$FtpFileIterator_InnerClassesInfo_[] = {
	{"sun.net.ftp.impl.FtpClient$FtpFileIterator", "sun.net.ftp.impl.FtpClient", "FtpFileIterator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FtpClient$FtpFileIterator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.ftp.impl.FtpClient$FtpFileIterator",
	"java.lang.Object",
	"java.util.Iterator,java.io.Closeable",
	_FtpClient$FtpFileIterator_FieldInfo_,
	_FtpClient$FtpFileIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lsun/net/ftp/FtpDirEntry;>;Ljava/io/Closeable;",
	nullptr,
	_FtpClient$FtpFileIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ftp.impl.FtpClient"
};

$Object* allocate$FtpClient$FtpFileIterator($Class* clazz) {
	return $of($alloc(FtpClient$FtpFileIterator));
}

int32_t FtpClient$FtpFileIterator::hashCode() {
	 return this->$Iterator::hashCode();
}

bool FtpClient$FtpFileIterator::equals(Object$* obj) {
	 return this->$Iterator::equals(obj);
}

$Object* FtpClient$FtpFileIterator::clone() {
	 return this->$Iterator::clone();
}

$String* FtpClient$FtpFileIterator::toString() {
	 return this->$Iterator::toString();
}

void FtpClient$FtpFileIterator::finalize() {
	this->$Iterator::finalize();
}

void FtpClient$FtpFileIterator::init$($FtpDirParser* p, $BufferedReader* in) {
	$set(this, in, nullptr);
	$set(this, nextFile, nullptr);
	$set(this, fparser, nullptr);
	this->eof = false;
	$set(this, in, in);
	$set(this, fparser, p);
	readNext();
}

void FtpClient$FtpFileIterator::readNext() {
	$set(this, nextFile, nullptr);
	if (this->eof) {
		return;
	}
	$var($String, line, nullptr);
	try {
		do {
			$assign(line, $nc(this->in)->readLine());
			if (line != nullptr) {
				$set(this, nextFile, $nc(this->fparser)->parseLine(line));
				if (this->nextFile != nullptr) {
					return;
				}
			}
		} while (line != nullptr);
		$nc(this->in)->close();
	} catch ($IOException& iOException) {
	}
	this->eof = true;
}

bool FtpClient$FtpFileIterator::hasNext() {
	return this->nextFile != nullptr;
}

$Object* FtpClient$FtpFileIterator::next() {
	$var($FtpDirEntry, ret, this->nextFile);
	readNext();
	return $of(ret);
}

void FtpClient$FtpFileIterator::remove() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

void FtpClient$FtpFileIterator::close() {
	if (this->in != nullptr && !this->eof) {
		$nc(this->in)->close();
	}
	this->eof = true;
	$set(this, nextFile, nullptr);
}

FtpClient$FtpFileIterator::FtpClient$FtpFileIterator() {
}

$Class* FtpClient$FtpFileIterator::load$($String* name, bool initialize) {
	$loadClass(FtpClient$FtpFileIterator, name, initialize, &_FtpClient$FtpFileIterator_ClassInfo_, allocate$FtpClient$FtpFileIterator);
	return class$;
}

$Class* FtpClient$FtpFileIterator::class$ = nullptr;

			} // impl
		} // ftp
	} // net
} // sun