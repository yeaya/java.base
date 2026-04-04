#include <LastErrorString$ClosedRAFTest.h>
#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

#undef WRITEABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$ClosedRAFTest::init$($String* name) {
	$LastErrorString$Test::init$($$str({"RandomAccessFile."_s, name}));
}

void LastErrorString$ClosedRAFTest::go() {
	$init($LastErrorString);
	$set(this, raf, $new($RandomAccessFile, $LastErrorString::WRITEABLE_FILE, "rw"_s));
	this->raf->close();
	$LastErrorString$Test::go();
}

LastErrorString$ClosedRAFTest::LastErrorString$ClosedRAFTest() {
}

$Class* LastErrorString$ClosedRAFTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"raf", "Ljava/io/RandomAccessFile;", nullptr, 0, $field(LastErrorString$ClosedRAFTest, raf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LastErrorString$ClosedRAFTest, init$, void, $String*)},
		{"go", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$ClosedRAFTest, go, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
		{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"LastErrorString$ClosedRAFTest",
		"LastErrorString$Test",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LastErrorString"
	};
	$loadClass(LastErrorString$ClosedRAFTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$ClosedRAFTest);
	});
	return class$;
}

$Class* LastErrorString$ClosedRAFTest::class$ = nullptr;