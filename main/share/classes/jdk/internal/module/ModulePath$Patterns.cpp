#include <jdk/internal/module/ModulePath$Patterns.h>

#include <java/util/regex/Pattern.h>
#include <jdk/internal/module/ModulePath.h>
#include <jcpp.h>

#undef DASH_VERSION
#undef LEADING_DOTS
#undef NON_ALPHANUM
#undef REPEATING_DOTS
#undef TRAILING_DOTS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;
using $ModulePath = ::jdk::internal::module::ModulePath;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModulePath$Patterns_FieldInfo_[] = {
	{"DASH_VERSION", "Ljava/util/regex/Pattern;", nullptr, $STATIC | $FINAL, $staticField(ModulePath$Patterns, DASH_VERSION)},
	{"NON_ALPHANUM", "Ljava/util/regex/Pattern;", nullptr, $STATIC | $FINAL, $staticField(ModulePath$Patterns, NON_ALPHANUM)},
	{"REPEATING_DOTS", "Ljava/util/regex/Pattern;", nullptr, $STATIC | $FINAL, $staticField(ModulePath$Patterns, REPEATING_DOTS)},
	{"LEADING_DOTS", "Ljava/util/regex/Pattern;", nullptr, $STATIC | $FINAL, $staticField(ModulePath$Patterns, LEADING_DOTS)},
	{"TRAILING_DOTS", "Ljava/util/regex/Pattern;", nullptr, $STATIC | $FINAL, $staticField(ModulePath$Patterns, TRAILING_DOTS)},
	{}
};

$MethodInfo _ModulePath$Patterns_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ModulePath$Patterns::*)()>(&ModulePath$Patterns::init$))},
	{}
};

$InnerClassInfo _ModulePath$Patterns_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModulePath$Patterns", "jdk.internal.module.ModulePath", "Patterns", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModulePath$Patterns_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModulePath$Patterns",
	"java.lang.Object",
	nullptr,
	_ModulePath$Patterns_FieldInfo_,
	_ModulePath$Patterns_MethodInfo_,
	nullptr,
	nullptr,
	_ModulePath$Patterns_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModulePath"
};

$Object* allocate$ModulePath$Patterns($Class* clazz) {
	return $of($alloc(ModulePath$Patterns));
}

$Pattern* ModulePath$Patterns::DASH_VERSION = nullptr;
$Pattern* ModulePath$Patterns::NON_ALPHANUM = nullptr;
$Pattern* ModulePath$Patterns::REPEATING_DOTS = nullptr;
$Pattern* ModulePath$Patterns::LEADING_DOTS = nullptr;
$Pattern* ModulePath$Patterns::TRAILING_DOTS = nullptr;

void ModulePath$Patterns::init$() {
}

void clinit$ModulePath$Patterns($Class* class$) {
	$assignStatic(ModulePath$Patterns::DASH_VERSION, $Pattern::compile("-(\\d+(\\.|$))"_s));
	$assignStatic(ModulePath$Patterns::NON_ALPHANUM, $Pattern::compile("[^A-Za-z0-9]"_s));
	$assignStatic(ModulePath$Patterns::REPEATING_DOTS, $Pattern::compile("(\\.)(\\1)+"_s));
	$assignStatic(ModulePath$Patterns::LEADING_DOTS, $Pattern::compile("^\\."_s));
	$assignStatic(ModulePath$Patterns::TRAILING_DOTS, $Pattern::compile("\\.$"_s));
}

ModulePath$Patterns::ModulePath$Patterns() {
}

$Class* ModulePath$Patterns::load$($String* name, bool initialize) {
	$loadClass(ModulePath$Patterns, name, initialize, &_ModulePath$Patterns_ClassInfo_, clinit$ModulePath$Patterns, allocate$ModulePath$Patterns);
	return class$;
}

$Class* ModulePath$Patterns::class$ = nullptr;

		} // module
	} // internal
} // jdk