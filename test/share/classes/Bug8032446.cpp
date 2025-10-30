#include <Bug8032446.h>

#include <java/text/BreakIterator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ROOT

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BreakIterator = ::java::text::BreakIterator;
using $Locale = ::java::util::Locale;

$MethodInfo _Bug8032446_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8032446::*)()>(&Bug8032446::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug8032446::main))},
	{}
};

$ClassInfo _Bug8032446_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug8032446",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug8032446_MethodInfo_
};

$Object* allocate$Bug8032446($Class* clazz) {
	return $of($alloc(Bug8032446));
}

void Bug8032446::init$() {
}

void Bug8032446::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool err = false;
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = 0x00010860; i <= 0x00010876; ++i) {
		sb->append($($Character::toChars(i)));
	}
	sb->append(" "_s);
	for (int32_t i = 0x00010879; i <= 0x0001087D; ++i) {
		sb->append($($Character::toChars(i)));
	}
	$var($String, s, sb->toString());
	$init($Locale);
	$var($BreakIterator, bi, $BreakIterator::getWordInstance($Locale::ROOT));
	$nc(bi)->setText(s);
	bi->first();
	int32_t var$0 = bi->next();
	if (var$0 != $nc(s)->indexOf((int32_t)u' ')) {
		$throwNew($RuntimeException, "Unexpected word breaking."_s);
	}
}

Bug8032446::Bug8032446() {
}

$Class* Bug8032446::load$($String* name, bool initialize) {
	$loadClass(Bug8032446, name, initialize, &_Bug8032446_ClassInfo_, allocate$Bug8032446);
	return class$;
}

$Class* Bug8032446::class$ = nullptr;