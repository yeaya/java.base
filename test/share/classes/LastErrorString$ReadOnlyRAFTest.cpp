#include <LastErrorString$ReadOnlyRAFTest.h>
#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

#undef READABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$ReadOnlyRAFTest::init$($String* name) {
	$LastErrorString$Test::init$($$str({"RandomAccessFile."_s, name}));
}

void LastErrorString$ReadOnlyRAFTest::go() {
	$init($LastErrorString);
	$set(this, raf, $new($RandomAccessFile, $LastErrorString::READABLE_FILE, "r"_s));
	$LastErrorString$Test::go();
	$nc(this->raf)->close();
}

LastErrorString$ReadOnlyRAFTest::LastErrorString$ReadOnlyRAFTest() {
}

$Class* LastErrorString$ReadOnlyRAFTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"raf", "Ljava/io/RandomAccessFile;", nullptr, 0, $field(LastErrorString$ReadOnlyRAFTest, raf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LastErrorString$ReadOnlyRAFTest, init$, void, $String*)},
		{"go", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$ReadOnlyRAFTest, go, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$ReadOnlyRAFTest", "LastErrorString", "ReadOnlyRAFTest", $STATIC | $ABSTRACT},
		{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"LastErrorString$ReadOnlyRAFTest",
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
	$loadClass(LastErrorString$ReadOnlyRAFTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$ReadOnlyRAFTest);
	});
	return class$;
}

$Class* LastErrorString$ReadOnlyRAFTest::class$ = nullptr;