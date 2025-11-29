#include <java/util/regex/Pattern$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/util/regex/Pattern$Qtype.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef GREEDY
#undef LAZY
#undef POSSESSIVE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Pattern$Qtype = ::java::util::regex::Pattern$Qtype;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$1_FieldInfo_[] = {
	{"$SwitchMap$java$util$regex$Pattern$Qtype", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Pattern$1, $SwitchMap$java$util$regex$Pattern$Qtype)},
	{}
};

$EnclosingMethodInfo _Pattern$1_EnclosingMethodInfo_ = {
	"java.util.regex.Pattern",
	nullptr,
	nullptr
};

$InnerClassInfo _Pattern$1_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Pattern$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.util.regex.Pattern$1",
	"java.lang.Object",
	nullptr,
	_Pattern$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Pattern$1_EnclosingMethodInfo_,
	_Pattern$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$1($Class* clazz) {
	return $of($alloc(Pattern$1));
}

$ints* Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype = nullptr;

void clinit$Pattern$1($Class* class$) {
	$assignStatic(Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype, $new($ints, $($Pattern$Qtype::values())->length));
	{
		try {
			$nc(Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype)->set($Pattern$Qtype::GREEDY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype)->set($Pattern$Qtype::LAZY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype)->set($Pattern$Qtype::POSSESSIVE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Pattern$1::Pattern$1() {
}

$Class* Pattern$1::load$($String* name, bool initialize) {
	$loadClass(Pattern$1, name, initialize, &_Pattern$1_ClassInfo_, clinit$Pattern$1, allocate$Pattern$1);
	return class$;
}

$Class* Pattern$1::class$ = nullptr;

		} // regex
	} // util
} // java