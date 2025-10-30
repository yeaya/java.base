#include <NullLock.h>

#include <java/io/BufferedReader.h>
#include <java/io/BufferedWriter.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $BufferedWriter = ::java::io::BufferedWriter;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$MethodInfo _NullLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullLock::*)()>(&NullLock::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullLock::main)), "java.lang.Exception"},
	{"testBufferedReader", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&NullLock::testBufferedReader))},
	{"testBufferedWriter", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&NullLock::testBufferedWriter))},
	{}
};

$ClassInfo _NullLock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullLock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullLock_MethodInfo_
};

$Object* allocate$NullLock($Class* clazz) {
	return $of($alloc(NullLock));
}

void NullLock::init$() {
}

void NullLock::main($StringArray* argv) {
	if (!testBufferedReader()) {
		$throwNew($Exception, "Buffered Reader constructor: Null argument must throw an exception"_s);
	}
	if (!testBufferedWriter()) {
		$throwNew($Exception, "BufferedWriter constructor:  Null arg must throw an exception"_s);
	}
}

bool NullLock::testBufferedReader() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStreamReader, isr, nullptr);
		$var($BufferedReader, br, $new($BufferedReader, isr));
	} catch ($NullPointerException& e) {
		return true;
	}
	return false;
}

bool NullLock::testBufferedWriter() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($OutputStreamWriter, isr, nullptr);
		$var($BufferedWriter, br, $new($BufferedWriter, isr));
	} catch ($NullPointerException& e) {
		return true;
	}
	return false;
}

NullLock::NullLock() {
}

$Class* NullLock::load$($String* name, bool initialize) {
	$loadClass(NullLock, name, initialize, &_NullLock_ClassInfo_, allocate$NullLock);
	return class$;
}

$Class* NullLock::class$ = nullptr;