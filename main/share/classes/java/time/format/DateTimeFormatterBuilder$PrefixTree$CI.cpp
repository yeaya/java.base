#include <java/time/format/DateTimeFormatterBuilder$PrefixTree$CI.h>

#include <java/lang/CharSequence.h>
#include <java/time/format/DateTimeFormatterBuilder$PrefixTree.h>
#include <java/time/format/DateTimeParseContext.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeFormatterBuilder$PrefixTree = ::java::time::format::DateTimeFormatterBuilder$PrefixTree;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;

namespace java {
	namespace time {
		namespace format {

$MethodInfo _DateTimeFormatterBuilder$PrefixTree$CI_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$PrefixTree$CI::*)($String*,$String*,$DateTimeFormatterBuilder$PrefixTree*)>(&DateTimeFormatterBuilder$PrefixTree$CI::init$))},
	{"isEqual", "(CC)Z", nullptr, $PROTECTED},
	{"newNode", "(Ljava/lang/String;Ljava/lang/String;Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;)Ljava/time/format/DateTimeFormatterBuilder$PrefixTree$CI;", nullptr, $PROTECTED},
	{"prefixOf", "(Ljava/lang/CharSequence;II)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$PrefixTree$CI_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$PrefixTree", "java.time.format.DateTimeFormatterBuilder", "PrefixTree", $STATIC},
	{"java.time.format.DateTimeFormatterBuilder$PrefixTree$CI", "java.time.format.DateTimeFormatterBuilder$PrefixTree", "CI", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$PrefixTree$CI_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$PrefixTree$CI",
	"java.time.format.DateTimeFormatterBuilder$PrefixTree",
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$PrefixTree$CI_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$PrefixTree$CI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$PrefixTree$CI($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$PrefixTree$CI));
}

void DateTimeFormatterBuilder$PrefixTree$CI::init$($String* k, $String* v, $DateTimeFormatterBuilder$PrefixTree* child) {
	$DateTimeFormatterBuilder$PrefixTree::init$(k, v, child);
}

DateTimeFormatterBuilder$PrefixTree$CI* DateTimeFormatterBuilder$PrefixTree$CI::newNode($String* k, $String* v, $DateTimeFormatterBuilder$PrefixTree* child) {
	return $new(DateTimeFormatterBuilder$PrefixTree$CI, k, v, child);
}

bool DateTimeFormatterBuilder$PrefixTree$CI::isEqual(char16_t c1, char16_t c2) {
	return $DateTimeParseContext::charEqualsIgnoreCase(c1, c2);
}

bool DateTimeFormatterBuilder$PrefixTree$CI::prefixOf($CharSequence* text, int32_t off, int32_t end) {
	int32_t len = $nc(this->key)->length();
	if (len > end - off) {
		return false;
	}
	int32_t off0 = 0;
	while (len-- > 0) {
		char16_t var$0 = $nc(this->key)->charAt(off0++);
		if (!isEqual(var$0, $nc(text)->charAt(off++))) {
			return false;
		}
	}
	return true;
}

DateTimeFormatterBuilder$PrefixTree$CI::DateTimeFormatterBuilder$PrefixTree$CI() {
}

$Class* DateTimeFormatterBuilder$PrefixTree$CI::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$PrefixTree$CI, name, initialize, &_DateTimeFormatterBuilder$PrefixTree$CI_ClassInfo_, allocate$DateTimeFormatterBuilder$PrefixTree$CI);
	return class$;
}

$Class* DateTimeFormatterBuilder$PrefixTree$CI::class$ = nullptr;

		} // format
	} // time
} // java