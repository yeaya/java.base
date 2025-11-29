#include <java/lang/ProcessImpl$LazyPattern.h>

#include <java/lang/ProcessImpl.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef PATTERN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace lang {

$FieldInfo _ProcessImpl$LazyPattern_FieldInfo_[] = {
	{"PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProcessImpl$LazyPattern, PATTERN)},
	{}
};

$MethodInfo _ProcessImpl$LazyPattern_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProcessImpl$LazyPattern::*)()>(&ProcessImpl$LazyPattern::init$))},
	{}
};

$InnerClassInfo _ProcessImpl$LazyPattern_InnerClassesInfo_[] = {
	{"java.lang.ProcessImpl$LazyPattern", "java.lang.ProcessImpl", "LazyPattern", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessImpl$LazyPattern_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessImpl$LazyPattern",
	"java.lang.Object",
	nullptr,
	_ProcessImpl$LazyPattern_FieldInfo_,
	_ProcessImpl$LazyPattern_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessImpl$LazyPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessImpl"
};

$Object* allocate$ProcessImpl$LazyPattern($Class* clazz) {
	return $of($alloc(ProcessImpl$LazyPattern));
}

$Pattern* ProcessImpl$LazyPattern::PATTERN = nullptr;

void ProcessImpl$LazyPattern::init$() {
}

void clinit$ProcessImpl$LazyPattern($Class* class$) {
	$assignStatic(ProcessImpl$LazyPattern::PATTERN, $Pattern::compile("[^\\s\"]+|\"[^\"]*\""_s));
}

ProcessImpl$LazyPattern::ProcessImpl$LazyPattern() {
}

$Class* ProcessImpl$LazyPattern::load$($String* name, bool initialize) {
	$loadClass(ProcessImpl$LazyPattern, name, initialize, &_ProcessImpl$LazyPattern_ClassInfo_, clinit$ProcessImpl$LazyPattern, allocate$ProcessImpl$LazyPattern);
	return class$;
}

$Class* ProcessImpl$LazyPattern::class$ = nullptr;

	} // lang
} // java