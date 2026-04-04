#include <RecordTest.h>
#include <Person.h>
#include <jcpp.h>

using $Person = ::Person;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;

void RecordTest::init$() {
}

void RecordTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Person, person1, $new($Person, "p1"_s, 15, 99999.0000000001));
	$var($Person, person2, $new($Person, "p2"_s, 29, 8.888888888888889E12));
	$nc($System::out)->println($(person1->name()));
	$System::out->println(person1);
	$System::out->println(person1->equals(person2));
}

RecordTest::RecordTest() {
}

$Class* RecordTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RecordTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RecordTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RecordTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RecordTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RecordTest);
	});
	return class$;
}

$Class* RecordTest::class$ = nullptr;