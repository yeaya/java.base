#include <bug6344646.h>
#include <java/io/File.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;

void bug6344646::init$() {
}

void bug6344646::main($StringArray* s) {
	$useLocalObjectStack();
	$var($Locale, reservedLocale, $Locale::getDefault());
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		$init($File);
		if ($File::separatorChar != u'\\') {
			return$1 = true;
			goto $finally;
		}
		$Locale::setDefault($$new($Locale, "lt"_s));
		$var($File, f1, $new($File, u"J́"_s));
		$var($File, f2, $new($File, u"j́"_s));
		int32_t var$2 = f1->hashCode();
		if (var$2 != f2->hashCode()) {
			$throwNew($RuntimeException, u"File.hashCode() for \"J́\" and \"j́\" should be the same"_s);
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Locale::setDefault(reservedLocale);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
}

bug6344646::bug6344646() {
}

$Class* bug6344646::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6344646, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6344646, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6344646",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6344646, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6344646);
	});
	return class$;
}

$Class* bug6344646::class$ = nullptr;