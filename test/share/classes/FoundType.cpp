#include <FoundType.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/annotation/AnnotationTypeMismatchException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationTypeMismatchException = ::java::lang::annotation::AnnotationTypeMismatchException;
using $Method = ::java::lang::reflect::Method;

$FieldInfo _FoundType_FieldInfo_[] = {
	{"TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FoundType, TYPE)},
	{}
};

$MethodInfo _FoundType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FoundType::*)()>(&FoundType::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FoundType::main))},
	{}
};

$ClassInfo _FoundType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FoundType",
	"java.lang.Object",
	nullptr,
	_FoundType_FieldInfo_,
	_FoundType_MethodInfo_
};

$Object* allocate$FoundType($Class* clazz) {
	return $of($alloc(FoundType));
}

$String* FoundType::TYPE = nullptr;

void FoundType::init$() {
}

void FoundType::main($StringArray* args) {
	$init(FoundType);
	$useLocalCurrentObjectStackCache();
	$var($AnnotationTypeMismatchException, ex, $new($AnnotationTypeMismatchException, nullptr, FoundType::TYPE));
	if (!$nc(FoundType::TYPE)->equals($(ex->foundType()))) {
		$throwNew($Error);
	}
}

FoundType::FoundType() {
}

void clinit$FoundType($Class* class$) {
	$assignStatic(FoundType::TYPE, "a.halting.Problem"_s);
}

$Class* FoundType::load$($String* name, bool initialize) {
	$loadClass(FoundType, name, initialize, &_FoundType_ClassInfo_, clinit$FoundType, allocate$FoundType);
	return class$;
}

$Class* FoundType::class$ = nullptr;