#include <ReadLineSync$BufferedReaderConsumer.h>

#include <ReadLineSync.h>
#include <java/io/BufferedReader.h>
#include <jcpp.h>

using $ReadLineSync = ::ReadLineSync;
using $BufferedReader = ::java::io::BufferedReader;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ReadLineSync$BufferedReaderConsumer_FieldInfo_[] = {
	{"reader", "Ljava/io/BufferedReader;", nullptr, 0, $field(ReadLineSync$BufferedReaderConsumer, reader)},
	{}
};

$MethodInfo _ReadLineSync$BufferedReaderConsumer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/BufferedReader;)V", nullptr, $PUBLIC, $method(static_cast<void(ReadLineSync$BufferedReaderConsumer::*)($BufferedReader*)>(&ReadLineSync$BufferedReaderConsumer::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReadLineSync$BufferedReaderConsumer_InnerClassesInfo_[] = {
	{"ReadLineSync$BufferedReaderConsumer", "ReadLineSync", "BufferedReaderConsumer", $STATIC},
	{}
};

$ClassInfo _ReadLineSync$BufferedReaderConsumer_ClassInfo_ = {
	$ACC_SUPER,
	"ReadLineSync$BufferedReaderConsumer",
	"java.lang.Thread",
	nullptr,
	_ReadLineSync$BufferedReaderConsumer_FieldInfo_,
	_ReadLineSync$BufferedReaderConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ReadLineSync$BufferedReaderConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReadLineSync"
};

$Object* allocate$ReadLineSync$BufferedReaderConsumer($Class* clazz) {
	return $of($alloc(ReadLineSync$BufferedReaderConsumer));
}

void ReadLineSync$BufferedReaderConsumer::init$($BufferedReader* reader) {
	$Thread::init$();
	$set(this, reader, reader);
}

void ReadLineSync$BufferedReaderConsumer::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, record, $nc(this->reader)->readLine());
		if (record == nullptr) {
			$nc($System::out)->println("File already finished"_s);
			return;
		}
		if ($nc(record)->length() == 0) {
			$nc($System::out)->println($$str({"Empty string on first read."_s, $($($Thread::currentThread())->getName())}));
		}
		while (record != nullptr) {
			$init($ReadLineSync);
			++$ReadLineSync::lineCount;
			if (record->length() == 0) {
				$throwNew($Exception, $$str({"Invalid tokens with string \'"_s, record, "\' on line "_s, $$str($ReadLineSync::lineCount)}));
			}
			$assign(record, $nc(this->reader)->readLine());
		}
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

ReadLineSync$BufferedReaderConsumer::ReadLineSync$BufferedReaderConsumer() {
}

$Class* ReadLineSync$BufferedReaderConsumer::load$($String* name, bool initialize) {
	$loadClass(ReadLineSync$BufferedReaderConsumer, name, initialize, &_ReadLineSync$BufferedReaderConsumer_ClassInfo_, allocate$ReadLineSync$BufferedReaderConsumer);
	return class$;
}

$Class* ReadLineSync$BufferedReaderConsumer::class$ = nullptr;