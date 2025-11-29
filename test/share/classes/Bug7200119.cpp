#include <Bug7200119.h>

#include <java/text/Collator.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef US

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Collator = ::java::text::Collator;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;

$MethodInfo _Bug7200119_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug7200119::*)()>(&Bug7200119::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug7200119::main))},
	{}
};

$ClassInfo _Bug7200119_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug7200119",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug7200119_MethodInfo_
};

$Object* allocate$Bug7200119($Class* clazz) {
	return $of($alloc(Bug7200119));
}

void Bug7200119::init$() {
}

void Bug7200119::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($List, avail, $Arrays::asList($($Collator::getAvailableLocales())));
	$init($Locale);
	if (!$nc(avail)->contains($Locale::US)) {
		$throwNew($RuntimeException, "Failed."_s);
	}
}

Bug7200119::Bug7200119() {
}

$Class* Bug7200119::load$($String* name, bool initialize) {
	$loadClass(Bug7200119, name, initialize, &_Bug7200119_ClassInfo_, allocate$Bug7200119);
	return class$;
}

$Class* Bug7200119::class$ = nullptr;