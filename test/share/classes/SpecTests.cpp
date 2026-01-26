#include <SpecTests.h>

#include <java/io/FilePermission.h>
#include <jcpp.h>

#undef ILE
#undef NPE

using $FilePermission = ::java::io::FilePermission;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SpecTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecTests, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecTests, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SpecTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SpecTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SpecTests_MethodInfo_
};

$Object* allocate$SpecTests($Class* clazz) {
	return $of($alloc(SpecTests));
}

void SpecTests::init$() {
}

void SpecTests::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, ILE, "java.lang.IllegalArgumentException"_s);
	$var($String, NPE, "java.lang.NullPointerException"_s);
	$var($StringArray, names, $new($StringArray, {
		""_s,
		($String*)nullptr,
		"foo"_s,
		"foo"_s,
		"foo"_s,
		"foo"_s,
		"foo"_s
	}));
	$var($StringArray, actions, $new($StringArray, {
		"read"_s,
		"read"_s,
		""_s,
		($String*)nullptr,
		"junk"_s,
		"read,write,execute,delete,rename"_s,
		",read"_s
	}));
	$var($StringArray, exps, $new($StringArray, {
		($String*)nullptr,
		NPE,
		ILE,
		ILE,
		ILE,
		ILE,
		ILE
	}));
	$var($FilePermission, permit, nullptr);
	for (int32_t i = 0; i < names->length; ++i) {
		try {
			$assign(permit, $new($FilePermission, names->get(i), actions->get(i)));
		} catch ($Exception& e) {
			if (exps->get(i) == nullptr) {
				$throw(e);
			} else if (!($nc(($($of(e)->getClass()->getName())))->equals(exps->get(i)))) {
				$throwNew($Exception, $$str({"Expecting: "_s, exps->get(i), " for name:"_s, names->get(i), " actions:"_s, actions->get(i)}));
			} else {
				$nc($System::out)->println($$str({names->get(i), ", ["_s, actions->get(i), "] resulted in "_s, exps->get(i), " as Expected"_s}));
				continue;
			}
		}
		if (exps->get(i) == nullptr) {
			$nc($System::out)->println($$str({names->get(i), ", ["_s, actions->get(i), "] resulted in No Exception as Expected"_s}));
		} else {
			$throwNew($Exception, $$str({"Expecting: "_s, exps->get(i), " for name:"_s, names->get(i), " actions:"_s, actions->get(i)}));
		}
	}
}

SpecTests::SpecTests() {
}

$Class* SpecTests::load$($String* name, bool initialize) {
	$loadClass(SpecTests, name, initialize, &_SpecTests_ClassInfo_, allocate$SpecTests);
	return class$;
}

$Class* SpecTests::class$ = nullptr;