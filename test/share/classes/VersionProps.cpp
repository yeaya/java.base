#include <VersionProps.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

using $IntegerArray = $Array<::java::lang::Integer>;
using $ListArray = $Array<::java::util::List>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime$Version = ::java::lang::Runtime$Version;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;

$StringArray* VersionProps::validVersions = nullptr;
$ListArray* VersionProps::validLists = nullptr;
$StringArray* VersionProps::invalidVersions = nullptr;

void VersionProps::init$() {
}

void VersionProps::main($StringArray* args) {
	$init(VersionProps);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* versionProps = $Class::forName("java.lang.VersionProps"_s);
	$var($Method, parseVersionNumbers, versionProps->getDeclaredMethod("parseVersionNumbers"_s, $$new($ClassArray, {$String::class$})));
	$nc(parseVersionNumbers)->setAccessible(true);
	for (int32_t i = 0; i < VersionProps::validVersions->length; ++i) {
		$var($List, li, $cast($List, parseVersionNumbers->invoke(nullptr, $$new($ObjectArray, {VersionProps::validVersions->get(i)}))));
		$nc($System::out)->println(li);
		if (!$nc(VersionProps::validLists->get(i))->equals(li)) {
			$throwNew($Exception, $$str({li, " != "_s, VersionProps::validLists->get(i)}));
		}
		$assign(li, $$nc($Runtime$Version::parse(VersionProps::validVersions->get(i)))->version());
		if (!$nc(VersionProps::validLists->get(i))->equals(li)) {
			$throwNew($Exception, $$str({li, " != "_s, VersionProps::validLists->get(i)}));
		}
	}
	for (int32_t i = 0; i < VersionProps::invalidVersions->length; ++i) {
		try {
			$var($List, li, $cast($List, parseVersionNumbers->invoke(nullptr, $$new($ObjectArray, {VersionProps::invalidVersions->get(i)}))));
			$throwNew($Exception, $$str({VersionProps::invalidVersions->get(i), " not recognized as invalid by VersionProps.parseVersionNumbers()"_s}));
		} catch ($InvocationTargetException& ex) {
			if ($instanceOf($IllegalArgumentException, $(ex->getCause()))) {
				$nc($System::out)->println($$str({"OK - caught bad version string "_s, VersionProps::invalidVersions->get(i)}));
			} else {
				$throw(ex);
			}
		}
		try {
			$var($List, li, $$nc($Runtime$Version::parse(VersionProps::invalidVersions->get(i)))->version());
			$throwNew($Exception, $$str({VersionProps::invalidVersions->get(i), " not recognized as invalid by Runtime.Version.parse()"_s}));
		} catch ($IllegalArgumentException& ex) {
			continue;
		}
	}
}

void VersionProps::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(VersionProps::validVersions, $new($StringArray, {
		"1"_s,
		"1.2"_s,
		"1.2.3"_s,
		"1.2.3.4"_s,
		"1.0.0.1"_s,
		"1.10000.1"_s,
		"1.0.2.0.0.3.0.0.0.4.5.0.0.6"_s,
		"1000001"_s,
		"1.2.3.4.5.6.7.8.9.0.9.8.7.6.5.4.3.2.1"_s
	}));
	$assignStatic(VersionProps::validLists, $new($ListArray, {
		$($Arrays::asList($$new($IntegerArray, {$($Integer::valueOf(1))}))),
		$($Arrays::asList($$new($IntegerArray, {
			$($Integer::valueOf(1)),
			$($Integer::valueOf(2))
		}))),
		$($Arrays::asList($$new($IntegerArray, {
			$($Integer::valueOf(1)),
			$($Integer::valueOf(2)),
			$($Integer::valueOf(3))
		}))),
		$($Arrays::asList($$new($IntegerArray, {
			$($Integer::valueOf(1)),
			$($Integer::valueOf(2)),
			$($Integer::valueOf(3)),
			$($Integer::valueOf(4))
		}))),
		$($Arrays::asList($$new($IntegerArray, {
			$($Integer::valueOf(1)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(1))
		}))),
		$($Arrays::asList($$new($IntegerArray, {
			$($Integer::valueOf(1)),
			$($Integer::valueOf(10000)),
			$($Integer::valueOf(1))
		}))),
		$($Arrays::asList($$new($IntegerArray, {
			$($Integer::valueOf(1)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(2)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(3)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(4)),
			$($Integer::valueOf(5)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(6))
		}))),
		$($Arrays::asList($$new($IntegerArray, {$($Integer::valueOf(0x000f4241))}))),
		$($Arrays::asList($$new($IntegerArray, {
			$($Integer::valueOf(1)),
			$($Integer::valueOf(2)),
			$($Integer::valueOf(3)),
			$($Integer::valueOf(4)),
			$($Integer::valueOf(5)),
			$($Integer::valueOf(6)),
			$($Integer::valueOf(7)),
			$($Integer::valueOf(8)),
			$($Integer::valueOf(9)),
			$($Integer::valueOf(0)),
			$($Integer::valueOf(9)),
			$($Integer::valueOf(8)),
			$($Integer::valueOf(7)),
			$($Integer::valueOf(6)),
			$($Integer::valueOf(5)),
			$($Integer::valueOf(4)),
			$($Integer::valueOf(3)),
			$($Integer::valueOf(2)),
			$($Integer::valueOf(1))
		})))
	}));
	$assignStatic(VersionProps::invalidVersions, $new($StringArray, {
		"01"_s,
		"0.1.2"_s,
		"1.02.3"_s,
		"1.2.03.4"_s,
		"1.0.0.1.0"_s,
		"1.0.1.0.0"_s,
		"1.00.1"_s,
		"1.0.1.00"_s,
		"1.10000."_s
	}));
}

VersionProps::VersionProps() {
}

$Class* VersionProps::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"validVersions", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(VersionProps, validVersions)},
		{"validLists", "[Ljava/util/List;", nullptr, $STATIC | $FINAL, $staticField(VersionProps, validLists)},
		{"invalidVersions", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(VersionProps, invalidVersions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VersionProps, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(VersionProps, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"VersionProps",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VersionProps, name, initialize, &classInfo$$, VersionProps::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VersionProps);
	});
	return class$;
}

$Class* VersionProps::class$ = nullptr;