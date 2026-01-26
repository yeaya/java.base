#include <UseSTD3ASCIIRules.h>

#include <java/net/IDN.h>
#include <jcpp.h>

#undef USE_STD3_ASCII_RULES

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $IDN = ::java::net::IDN;

$MethodInfo _UseSTD3ASCIIRules_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UseSTD3ASCIIRules, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UseSTD3ASCIIRules, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _UseSTD3ASCIIRules_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UseSTD3ASCIIRules",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UseSTD3ASCIIRules_MethodInfo_
};

$Object* allocate$UseSTD3ASCIIRules($Class* clazz) {
	return $of($alloc(UseSTD3ASCIIRules));
}

void UseSTD3ASCIIRules::init$() {
}

void UseSTD3ASCIIRules::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, illegalNames, $new($StringArray, {
		"www.example.com-"_s,
		"-www.example.com"_s,
		"-www.example.com-"_s,
		"www.ex,mple.com"_s,
		"www.ex{mple.com"_s,
		u"www.ex\u007fmple.com"_s
	}));
	$var($StringArray, legalNames, $new($StringArray, {
		"www.ex-ample.com"_s,
		"www.ex-mple.com"_s,
		"www.exzmple.com"_s,
		u"www.exあmple.com"_s,
		u"www.あいう.com"_s,
		u"www.示例.com"_s
	}));
	{
		$var($StringArray, arr$, illegalNames);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				try {
					$nc($System::out)->println($$str({"Convering illegal IDN: "_s, name}));
					$IDN::toASCII(name, $IDN::USE_STD3_ASCII_RULES);
					$throwNew($Exception, $$str({"Expected to get IllegalArgumentException for "_s, name}));
				} catch ($IllegalArgumentException& iae) {
				}
			}
		}
	}
	{
		$var($StringArray, arr$, legalNames);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				$nc($System::out)->println($$str({"Convering legal IDN: "_s, name}));
				$nc($System::out)->println($$str({"\tThe ACE form is: "_s, $($IDN::toASCII(name, $IDN::USE_STD3_ASCII_RULES))}));
			}
		}
	}
}

UseSTD3ASCIIRules::UseSTD3ASCIIRules() {
}

$Class* UseSTD3ASCIIRules::load$($String* name, bool initialize) {
	$loadClass(UseSTD3ASCIIRules, name, initialize, &_UseSTD3ASCIIRules_ClassInfo_, allocate$UseSTD3ASCIIRules);
	return class$;
}

$Class* UseSTD3ASCIIRules::class$ = nullptr;