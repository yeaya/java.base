#include <CompareIC.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _CompareIC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompareIC::*)()>(&CompareIC::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CompareIC::main)), "java.lang.Exception"},
	{"testTriplet", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CompareIC::*)($String*,$String*,$String*)>(&CompareIC::testTriplet)), "java.lang.Exception"},
	{}
};

$ClassInfo _CompareIC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CompareIC",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CompareIC_MethodInfo_
};

$Object* allocate$CompareIC($Class* clazz) {
	return $of($alloc(CompareIC));
}

void CompareIC::init$() {
}

void CompareIC::main($StringArray* args) {
	$var($String, test1, "Tess"_s);
	$var($String, test2, "Test"_s);
	$var($String, test3, "Tesu"_s);
	$var(CompareIC, comparer, $new(CompareIC));
	comparer->testTriplet(test1, test2, test3);
	$assign(test2, test2->toUpperCase());
	comparer->testTriplet(test1, test2, test3);
	$assign(test2, test2->toLowerCase());
	comparer->testTriplet(test1, test2, test3);
	if (u"\u00b5"_s->compareToIgnoreCase("X"_s) < 0) {
		$throwNew($RuntimeException, "Comparison failure1"_s);
	}
}

void CompareIC::testTriplet($String* one, $String* two, $String* three) {
	if ($nc(one)->compareToIgnoreCase(two) > 0) {
		$throwNew($RuntimeException, "Comparison failure1"_s);
	}
	if ($nc(two)->compareToIgnoreCase(three) > 0) {
		$throwNew($RuntimeException, "Comparison failure2"_s);
	}
	if ($nc(three)->compareToIgnoreCase(one) < 0) {
		$throwNew($RuntimeException, "Comparison failure3"_s);
	}
}

CompareIC::CompareIC() {
}

$Class* CompareIC::load$($String* name, bool initialize) {
	$loadClass(CompareIC, name, initialize, &_CompareIC_ClassInfo_, allocate$CompareIC);
	return class$;
}

$Class* CompareIC::class$ = nullptr;