#include <java/lang/AssertionStatusDirectives.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _AssertionStatusDirectives_FieldInfo_[] = {
	{"classes", "[Ljava/lang/String;", nullptr, 0, $field(AssertionStatusDirectives, classes)},
	{"classEnabled", "[Z", nullptr, 0, $field(AssertionStatusDirectives, classEnabled)},
	{"packages", "[Ljava/lang/String;", nullptr, 0, $field(AssertionStatusDirectives, packages)},
	{"packageEnabled", "[Z", nullptr, 0, $field(AssertionStatusDirectives, packageEnabled)},
	{"deflt", "Z", nullptr, 0, $field(AssertionStatusDirectives, deflt)},
	{}
};

$MethodInfo _AssertionStatusDirectives_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AssertionStatusDirectives::*)()>(&AssertionStatusDirectives::init$))},
	{}
};

$ClassInfo _AssertionStatusDirectives_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.AssertionStatusDirectives",
	"java.lang.Object",
	nullptr,
	_AssertionStatusDirectives_FieldInfo_,
	_AssertionStatusDirectives_MethodInfo_
};

$Object* allocate$AssertionStatusDirectives($Class* clazz) {
	return $of($alloc(AssertionStatusDirectives));
}

void AssertionStatusDirectives::init$() {
}

AssertionStatusDirectives::AssertionStatusDirectives() {
}

$Class* AssertionStatusDirectives::load$($String* name, bool initialize) {
	$loadClass(AssertionStatusDirectives, name, initialize, &_AssertionStatusDirectives_ClassInfo_, allocate$AssertionStatusDirectives);
	return class$;
}

$Class* AssertionStatusDirectives::class$ = nullptr;

	} // lang
} // java