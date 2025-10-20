#include <CurrencyCollate.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DATA
#undef US

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

$FieldInfo _CurrencyCollate_FieldInfo_[] = {
	{"myCollation", "Ljava/text/Collator;", nullptr, $STATIC, $staticField(CurrencyCollate, myCollation)},
	{}
};

$MethodInfo _CurrencyCollate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyCollate::*)()>(&CurrencyCollate::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CurrencyCollate::main))},
	{}
};

$ClassInfo _CurrencyCollate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CurrencyCollate",
	"java.lang.Object",
	nullptr,
	_CurrencyCollate_FieldInfo_,
	_CurrencyCollate_MethodInfo_
};

$Object* allocate$CurrencyCollate($Class* clazz) {
	return $of($alloc(CurrencyCollate));
}

$Collator* CurrencyCollate::myCollation = nullptr;

void CurrencyCollate::init$() {
}

void CurrencyCollate::main($StringArray* args) {
	$init(CurrencyCollate);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, DATA, $new($StringArray, {
		u"\u20ac"_s,
		">"_s,
		"$"_s,
		u"\u20ac"_s,
		"<"_s,
		u"\u00a3"_s,
		u"\u00a4"_s,
		"<"_s,
		u"\u0e3f"_s,
		u"\u0e3f"_s,
		"<"_s,
		u"\u00a2"_s,
		u"\u00a2"_s,
		"<"_s,
		u"\u20a1"_s,
		u"\u20a1"_s,
		"<"_s,
		u"\u20a2"_s,
		u"\u20a2"_s,
		"<"_s,
		"$"_s,
		"$"_s,
		"<"_s,
		u"\u20ab"_s,
		u"\u20ab"_s,
		"<"_s,
		u"\u20a3"_s,
		u"\u20a3"_s,
		"<"_s,
		u"\u20a4"_s,
		u"\u20a4"_s,
		"<"_s,
		u"\u20a5"_s,
		u"\u20a5"_s,
		"<"_s,
		u"\u20a6"_s,
		u"\u20a6"_s,
		"<"_s,
		u"\u20a7"_s,
		u"\u20a7"_s,
		"<"_s,
		u"\u00a3"_s,
		u"\u00a3"_s,
		"<"_s,
		u"\u20a8"_s,
		u"\u20a8"_s,
		"<"_s,
		u"\u20aa"_s,
		u"\u20aa"_s,
		"<"_s,
		u"\u20a9"_s,
		u"\u20a9"_s,
		"<"_s,
		u"\u00a5"_s
	}));
	for (int32_t i = 0; i < DATA->length; i += 3) {
		int32_t expected = $nc(DATA->get(i + 1))->equals(">"_s) ? 1 : ($nc(DATA->get(i + 1))->equals("<"_s) ? -1 : 0);
		int32_t actual = $nc(CurrencyCollate::myCollation)->compare(DATA->get(i), DATA->get(i + 2));
		if (actual != expected) {
			$throwNew($RuntimeException, $$str({"Collation of "_s, DATA->get(i), " vs. "_s, DATA->get(i + 2), " yields "_s, $$str(actual), "; expected "_s, $$str(expected)}));
		}
	}
	$init($System);
	$nc($System::out)->println("Ok"_s);
}

void clinit$CurrencyCollate($Class* class$) {
	$init($Locale);
	$assignStatic(CurrencyCollate::myCollation, $Collator::getInstance($Locale::US));
}

CurrencyCollate::CurrencyCollate() {
}

$Class* CurrencyCollate::load$($String* name, bool initialize) {
	$loadClass(CurrencyCollate, name, initialize, &_CurrencyCollate_ClassInfo_, clinit$CurrencyCollate, allocate$CurrencyCollate);
	return class$;
}

$Class* CurrencyCollate::class$ = nullptr;