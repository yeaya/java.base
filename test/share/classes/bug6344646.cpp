#include <bug6344646.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;

$MethodInfo _bug6344646_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6344646::*)()>(&bug6344646::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6344646::main))},
	{}
};

$ClassInfo _bug6344646_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6344646",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6344646_MethodInfo_
};

$Object* allocate$bug6344646($Class* clazz) {
	return $of($alloc(bug6344646));
}

void bug6344646::init$() {
}

void bug6344646::main($StringArray* s) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, reservedLocale, $Locale::getDefault());
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			$init($File);
			if ($File::separatorChar != u'\\') {
				return$1 = true;
				goto $finally;
			}
			$Locale::setDefault($$new($Locale, "lt"_s));
			$var($File, f1, $new($File, u"J\u0301"_s));
			$var($File, f2, $new($File, u"j\u0301"_s));
			int32_t var$2 = f1->hashCode();
			if (var$2 != f2->hashCode()) {
				$throwNew($RuntimeException, u"File.hashCode() for \"J\u0301\" and \"j\u0301\" should be the same"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
}

bug6344646::bug6344646() {
}

$Class* bug6344646::load$($String* name, bool initialize) {
	$loadClass(bug6344646, name, initialize, &_bug6344646_ClassInfo_, allocate$bug6344646);
	return class$;
}

$Class* bug6344646::class$ = nullptr;