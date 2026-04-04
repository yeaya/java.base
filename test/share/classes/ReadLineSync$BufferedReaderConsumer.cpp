#include <ReadLineSync$BufferedReaderConsumer.h>
#include <ReadLineSync.h>
#include <java/io/BufferedReader.h>
#include <jcpp.h>

using $ReadLineSync = ::ReadLineSync;
using $BufferedReader = ::java::io::BufferedReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ReadLineSync$BufferedReaderConsumer::init$($BufferedReader* reader) {
	$Thread::init$();
	$set(this, reader, reader);
}

void ReadLineSync$BufferedReaderConsumer::run() {
	$useLocalObjectStack();
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
			$assign(record, this->reader->readLine());
		}
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

ReadLineSync$BufferedReaderConsumer::ReadLineSync$BufferedReaderConsumer() {
}

$Class* ReadLineSync$BufferedReaderConsumer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"reader", "Ljava/io/BufferedReader;", nullptr, 0, $field(ReadLineSync$BufferedReaderConsumer, reader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/BufferedReader;)V", nullptr, $PUBLIC, $method(ReadLineSync$BufferedReaderConsumer, init$, void, $BufferedReader*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ReadLineSync$BufferedReaderConsumer, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReadLineSync$BufferedReaderConsumer", "ReadLineSync", "BufferedReaderConsumer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReadLineSync$BufferedReaderConsumer",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReadLineSync"
	};
	$loadClass(ReadLineSync$BufferedReaderConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadLineSync$BufferedReaderConsumer);
	});
	return class$;
}

$Class* ReadLineSync$BufferedReaderConsumer::class$ = nullptr;