#include <jcpp/test/TestAS.h>

#include <java/lang/CharSequence.h>
#include <jcpp/test/TestASBase.h>
#include <jcpp/test/TestASIF2.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TestASBase = ::jcpp::test::TestASBase;
using $TestASIF2 = ::jcpp::test::TestASIF2;

namespace jcpp {
	namespace test {

$MethodInfo _TestAS_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestAS::*)()>(&TestAS::init$))},
	{"get", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"get2", "()Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"get3", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"get4", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestAS::main))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TestAS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jcpp.test.TestAS",
	"jcpp.test.TestASBase",
	"jcpp.test.TestASIF2",
	nullptr,
	_TestAS_MethodInfo_
};

$Object* allocate$TestAS($Class* clazz) {
	return $of($alloc(TestAS));
}

int32_t TestAS::hashCode() {
	 return this->$TestASBase::hashCode();
}

bool TestAS::equals(Object$* arg0) {
	 return this->$TestASBase::equals(arg0);
}

$Object* TestAS::clone() {
	 return this->$TestASBase::clone();
}

$String* TestAS::toString() {
	 return this->$TestASBase::toString();
}

void TestAS::finalize() {
	this->$TestASBase::finalize();
}

TestAS::MemberClass0$::MemberClass0$() {
	$patchMemberClass(TestAS, $TestASIF2, memberClass0$);
}

$String* TestAS::MemberClass0$::get() {
	return $cast($String, ((TestAS*)(void*)((int8_t*)(void*)this - $offsetof(TestAS, memberClass0$)))->get());
}

$CharSequence* TestAS::MemberClass0$::get2() {
	return ((TestAS*)(void*)((int8_t*)(void*)this - $offsetof(TestAS, memberClass0$)))->get2();
}

$String* TestAS::MemberClass0$::get3() {
	return ((TestAS*)(void*)((int8_t*)(void*)this - $offsetof(TestAS, memberClass0$)))->get3();
}

int32_t TestAS::MemberClass0$::hashCode() {
	return ((TestAS*)(void*)((int8_t*)(void*)this - $offsetof(TestAS, memberClass0$)))->hashCode();
}

bool TestAS::MemberClass0$::equals(Object$* arg0) {
	return ((TestAS*)(void*)((int8_t*)(void*)this - $offsetof(TestAS, memberClass0$)))->equals(arg0);
}

$Object* TestAS::MemberClass0$::clone() {
	return ((TestAS*)(void*)((int8_t*)(void*)this - $offsetof(TestAS, memberClass0$)))->clone();
}

$String* TestAS::MemberClass0$::toString() {
	return ((TestAS*)(void*)((int8_t*)(void*)this - $offsetof(TestAS, memberClass0$)))->toString();
}

void TestAS::MemberClass0$::finalize() {
	return ((TestAS*)(void*)((int8_t*)(void*)this - $offsetof(TestAS, memberClass0$)))->finalize();
}

$String* TestAS::MemberClass0$::get4() {
	return ((TestAS*)(void*)((int8_t*)(void*)this - $offsetof(TestAS, memberClass0$)))->get4();
}

void TestAS::init$() {
	$TestASBase::init$();
}

void TestAS::main($StringArray* args) {
	$init(TestAS);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("hello"_s);
	$var(TestAS, tas, $new(TestAS));
	tas->get();
	$var($TestASIF2, if2, $as($TestASIF2, tas));
	if2->get();
}

$CharSequence* TestAS::get2() {
	return "3"_s;
}

$CharSequence* TestAS::get() {
	return ""_s;
}

$String* TestAS::get3() {
	return ""_s;
}

$String* TestAS::get4() {
	return ""_s;
}

TestAS::TestAS() {
}

$Class* TestAS::load$($String* name, bool initialize) {
	$loadClass(TestAS, name, initialize, &_TestAS_ClassInfo_, allocate$TestAS);
	return class$;
}

$Class* TestAS::class$ = nullptr;

	} // test
} // jcpp