#include <IllegalArg.h>
#include <java/net/IDN.h>
#include <jcpp.h>

#undef USE_STD3_ASCII_RULES

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $IDN = ::java::net::IDN;

void IllegalArg::init$() {
}

void IllegalArg::main($StringArray* args) {
	$useLocalObjectStack();
	$var($StringArray, illegalNames, $new($StringArray, {
		"com..net"_s,
		"com.."_s,
		".com"_s,
		".com."_s
	}));
	$var($StringArray, legalNames, $new($StringArray, {
		"example.com"_s,
		u"com。"_s,
		"com."_s,
		"."_s
	}));
	{
		$var($StringArray, arr$, illegalNames);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				try {
					$IDN::toASCII(name, $IDN::USE_STD3_ASCII_RULES);
					$throwNew($Exception, $$str({"Expected to get IllegalArgumentException for "_s, name}));
				} catch ($IllegalArgumentException& iae) {
				}
				try {
					$IDN::toASCII(name);
					$throwNew($Exception, $$str({"Expected to get IllegalArgumentException for "_s, name}));
				} catch ($IllegalArgumentException& iae) {
				}
			}
		}
	}
	{
		$var($StringArray, arr$, legalNames);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				$nc($System::out)->println($$str({"Convering "_s, name}));
				$System::out->println($($IDN::toASCII(name, $IDN::USE_STD3_ASCII_RULES)));
			}
		}
	}
}

IllegalArg::IllegalArg() {
}

$Class* IllegalArg::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalArg, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IllegalArg, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IllegalArg",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IllegalArg, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalArg);
	});
	return class$;
}

$Class* IllegalArg::class$ = nullptr;