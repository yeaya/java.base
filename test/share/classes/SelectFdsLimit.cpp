#include <SelectFdsLimit.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/lang/CharSequence.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketTimeoutException.h>
#include <jcpp.h>

#undef FDTOOPEN
#undef TESTFILE

using $FileInputStreamArray = $Array<::java::io::FileInputStream>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;

$FieldInfo _SelectFdsLimit_FieldInfo_[] = {
	{"FDTOOPEN", "I", nullptr, $STATIC | $FINAL, $constField(SelectFdsLimit, FDTOOPEN)},
	{"TESTFILE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SelectFdsLimit, TESTFILE)},
	{"testFIS", "[Ljava/io/FileInputStream;", nullptr, $STATIC, $staticField(SelectFdsLimit, testFIS)},
	{}
};

$MethodInfo _SelectFdsLimit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SelectFdsLimit::*)()>(&SelectFdsLimit::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SelectFdsLimit::main)), "java.io.IOException,java.io.FileNotFoundException"},
	{"openFiles", "(ILjava/io/File;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$File*)>(&SelectFdsLimit::openFiles)), "java.io.FileNotFoundException,java.io.IOException"},
	{"prepareTestEnv", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&SelectFdsLimit::prepareTestEnv)), "java.io.IOException"},
	{}
};

$ClassInfo _SelectFdsLimit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SelectFdsLimit",
	"java.lang.Object",
	nullptr,
	_SelectFdsLimit_FieldInfo_,
	_SelectFdsLimit_MethodInfo_
};

$Object* allocate$SelectFdsLimit($Class* clazz) {
	return $of($alloc(SelectFdsLimit));
}

$String* SelectFdsLimit::TESTFILE = nullptr;
$FileInputStreamArray* SelectFdsLimit::testFIS = nullptr;

void SelectFdsLimit::init$() {
}

void SelectFdsLimit::prepareTestEnv() {
	$init(SelectFdsLimit);
	$var($File, fileToCreate, $new($File, SelectFdsLimit::TESTFILE));
	if (!fileToCreate->exists()) {
		if (!fileToCreate->createNewFile()) {
			$throwNew($RuntimeException, "Can\'t create test file"_s);
		}
	}
}

void SelectFdsLimit::openFiles(int32_t fn, $File* f) {
	$init(SelectFdsLimit);
	$useLocalCurrentObjectStackCache();
	$assignStatic(SelectFdsLimit::testFIS, $new($FileInputStreamArray, SelectFdsLimit::FDTOOPEN));
	for (;;) {
		if (0 == fn) {
			break;
		}
		$var($FileInputStream, fis, $new($FileInputStream, f));
		$nc(SelectFdsLimit::testFIS)->set(--fn, fis);
	}
}

void SelectFdsLimit::main($StringArray* args) {
	$init(SelectFdsLimit);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($System::getProperty("os.name"_s)))->contains("OS X"_s)) {
		return;
	}
	prepareTestEnv();
	openFiles(SelectFdsLimit::FDTOOPEN, $$new($File, SelectFdsLimit::TESTFILE));
	$var($ServerSocket, socket, $new($ServerSocket, 0));
	socket->setSoTimeout(1);
	try {
		socket->accept();
	} catch ($SocketTimeoutException& e) {
	}
}

SelectFdsLimit::SelectFdsLimit() {
}

void clinit$SelectFdsLimit($Class* class$) {
	$assignStatic(SelectFdsLimit::TESTFILE, "testfile"_s);
}

$Class* SelectFdsLimit::load$($String* name, bool initialize) {
	$loadClass(SelectFdsLimit, name, initialize, &_SelectFdsLimit_ClassInfo_, clinit$SelectFdsLimit, allocate$SelectFdsLimit);
	return class$;
}

$Class* SelectFdsLimit::class$ = nullptr;