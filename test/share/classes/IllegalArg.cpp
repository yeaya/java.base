#include <IllegalArg.h>

#include <java/net/IDN.h>
#include <jcpp.h>

#undef USE_STD3_ASCII_RULES

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $IDN = ::java::net::IDN;

$MethodInfo _IllegalArg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalArg::*)()>(&IllegalArg::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IllegalArg::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _IllegalArg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IllegalArg",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IllegalArg_MethodInfo_
};

$Object* allocate$IllegalArg($Class* clazz) {
	return $of($alloc(IllegalArg));
}

void IllegalArg::init$() {
}

void IllegalArg::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, illegalNames, $new($StringArray, {
		"com..net"_s,
		"com.."_s,
		".com"_s,
		".com."_s
	}));
	$var($StringArray, legalNames, $new($StringArray, {
		"example.com"_s,
		u"com\u3002"_s,
		"com."_s,
		"."_s
	}));
	{
		$var($StringArray, arr$, illegalNames);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				$nc($System::out)->println($$str({"Convering "_s, name}));
				$nc($System::out)->println($($IDN::toASCII(name, $IDN::USE_STD3_ASCII_RULES)));
			}
		}
	}
}

IllegalArg::IllegalArg() {
}

$Class* IllegalArg::load$($String* name, bool initialize) {
	$loadClass(IllegalArg, name, initialize, &_IllegalArg_ClassInfo_, allocate$IllegalArg);
	return class$;
}

$Class* IllegalArg::class$ = nullptr;