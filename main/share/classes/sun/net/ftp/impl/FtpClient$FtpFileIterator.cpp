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
	return ret;
}

void FtpClient$FtpFileIterator::remove() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

void FtpClient$FtpFileIterator::close() {
	if (this->in != nullptr && !this->eof) {
		this->in->close();
	}
	this->eof = true;
	$set(this, nextFile, nullptr);
}

FtpClient$FtpFileIterator::FtpClient$FtpFileIterator() {
}

$Class* FtpClient$FtpFileIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"in", "Ljava/io/BufferedReader;", nullptr, $PRIVATE, $field(FtpClient$FtpFileIterator, in)},
		{"nextFile", "Lsun/net/ftp/FtpDirEntry;", nullptr, $PRIVATE, $field(FtpClient$FtpFileIterator, nextFile)},
		{"fparser", "Lsun/net/ftp/FtpDirParser;", nullptr, $PRIVATE, $field(FtpClient$FtpFileIterator, fparser)},
		{"eof", "Z", nullptr, $PRIVATE, $field(FtpClient$FtpFileIterator, eof)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.ftp.impl.FtpClient$FtpFileIterator", "sun.net.ftp.impl.FtpClient", "FtpFileIterator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.ftp.impl.FtpClient$FtpFileIterator",
		"java.lang.Object",
		"java.util.Iterator,java.io.Closeable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Lsun/net/ftp/FtpDirEntry;>;Ljava/io/Closeable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.ftp.impl.FtpClient"
	};
	$loadClass(FtpClient$FtpFileIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FtpClient$FtpFileIterator));
	});
	return class$;
}

$Class* FtpClient$FtpFileIterator::class$ = nullptr;

			} // impl
		} // ftp
	} // net
} // sun