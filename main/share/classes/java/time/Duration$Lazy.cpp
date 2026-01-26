#include <java/time/Duration$Lazy.h>

#include <java/time/Duration.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE
#undef PATTERN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace time {

$FieldInfo _Duration$Lazy_FieldInfo_[] = {
	{"PATTERN", "Ljava/util/regex/Pattern;", nullptr, $STATIC | $FINAL, $staticField(Duration$Lazy, PATTERN)},
	{}
};

$MethodInfo _Duration$Lazy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Duration$Lazy, init$, void)},
	{}
};

$InnerClassInfo _Duration$Lazy_InnerClassesInfo_[] = {
	{"java.time.Duration$Lazy", "java.time.Duration", "Lazy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Duration$Lazy_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.Duration$Lazy",
	"java.lang.Object",
	nullptr,
	_Duration$Lazy_FieldInfo_,
	_Duration$Lazy_MethodInfo_,
	nullptr,
	nullptr,
	_Duration$Lazy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Duration"
};

$Object* allocate$Duration$Lazy($Class* clazz) {
	return $of($alloc(Duration$Lazy));
}

$Pattern* Duration$Lazy::PATTERN = nullptr;

void Duration$Lazy::init$() {
}

void clinit$Duration$Lazy($Class* class$) {
	$assignStatic(Duration$Lazy::PATTERN, $Pattern::compile("([-+]?)P(?:([-+]?[0-9]+)D)?(T(?:([-+]?[0-9]+)H)?(?:([-+]?[0-9]+)M)?(?:([-+]?[0-9]+)(?:[.,]([0-9]{0,9}))?S)?)?"_s, $Pattern::CASE_INSENSITIVE));
}

Duration$Lazy::Duration$Lazy() {
}

$Class* Duration$Lazy::load$($String* name, bool initialize) {
	$loadClass(Duration$Lazy, name, initialize, &_Duration$Lazy_ClassInfo_, clinit$Duration$Lazy, allocate$Duration$Lazy);
	return class$;
}

$Class* Duration$Lazy::class$ = nullptr;

	} // time
} // java