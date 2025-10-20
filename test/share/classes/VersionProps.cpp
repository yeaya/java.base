#include <VersionProps.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

using $IntegerArray = $Array<::java::lang::Integer>;
using $ListArray = $Array<::java::util::List>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runtime$Version = ::java::lang::Runtime$Version;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;

$FieldInfo _VersionProps_FieldInfo_[] = {
	{"validVersions", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(VersionProps, validVersions)},
	{"validLists", "[Ljava/util/List;", nullptr, $STATIC | $FINAL, $staticField(VersionProps, validLists)},
	{"invalidVersions", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(VersionProps, invalidVersions)},
	{}
};

$MethodInfo _VersionProps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VersionProps::*)()>(&VersionProps::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&VersionProps::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _VersionProps_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"VersionProps",
	"java.lang.Object",
	nullptr,
	_VersionProps_FieldInfo_,
	_VersionProps_MethodInfo_
};

$Object* allocate$VersionProps($Class* clazz) {
	return $of($alloc(VersionProps));
}

$StringArray* VersionProps::validVersions = nullptr;
$ListArray* VersionProps::validLists = nullptr;
$StringArray* VersionProps::invalidVersions = nullptr;

void VersionProps::init$() {
}

void VersionProps::main($StringArray* args) {
	$init(VersionProps);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* versionProps = $Class::forName("java.lang.VersionProps"_s);
	$load($String);
	$var($Method, parseVersionNumbers, $nc(versionProps)->getDeclaredMethod("parseVersionNumbers"_s, $$new($ClassArray, {$String::class$})));
	$nc(parseVersionNumbers)->setAccessible(true);
	for (int32_t i = 0; i < $nc(VersionProps::validVersions)->length; ++i) {
		$var($List, li, $cast($List, parseVersionNumbers->invoke(nullptr, $$new($ObjectArray, {$of($nc(VersionProps::validVersions)->get(i))}))));
		$init($System);
		$nc($System::out)->println($of(li));
		if (!$nc($nc(VersionProps::validLists)->get(i))->equals(li)) {
			$throwNew($Exception, $$str({li, " != "_s, $nc(VersionProps::validLists)->get(i)}));
		}
		$assign(li, $nc($($Runtime$Version::parse($nc(VersionProps::validVersions)->get(i))))->version());
		if (!$nc($nc(VersionProps::validLists)->get(i))->equals(li)) {
			$throwNew($Exception, $$str({li, " != "_s, $nc(VersionProps::validLists)->get(i)}));
		}
	}
	for (int32_t i = 0; i < $nc(VersionProps::invalidVersions)->length; ++i) {
		try {
			$var($List, li, $cast($List, parseVersionNumbers->invoke(nullptr, $$new($ObjectArray, {$of($nc(VersionProps::invalidVersions)->get(i))}))));
			$throwNew($Exception, $$str({$nc(VersionProps::invalidVersions)->get(i), " not recognized as invalid by VersionProps.parseVersionNumbers()"_s}));
		} catch ($InvocationTargetException&) {
			$var($InvocationTargetException, ex, $catch());
			if ($instanceOf($IllegalArgumentException, $(ex->getCause()))) {
				$init($System);
				$nc($System::out)->println($$str({"OK - caught bad version string "_s, $nc(VersionProps::invalidVersions)->get(i)}));
			} else {
				$throw(ex);
			}
		}
		try {
			$var($List, li, $nc($($Runtime$Version::parse($nc(VersionProps::invalidVersions)->get(i))))->version());
			$throwNew($Exception, $$str({$nc(VersionProps::invalidVersions)->get(i), " not recognized as invalid by Runtime.Version.parse()"_s}));
		} catch ($IllegalArgumentException&) {
			$var($IllegalArgumentException, ex, $catch());
			continue;
		}
	}
}

void clinit$VersionProps($Class* class$) {
	$useLocalCurrentObjectStackCache();
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
		$($Arrays::asList($$new($IntegerArray, {$($Integer::valueOf(0x000F4241))}))),
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
	$loadClass(VersionProps, name, initialize, &_VersionProps_ClassInfo_, clinit$VersionProps, allocate$VersionProps);
	return class$;
}

$Class* VersionProps::class$ = nullptr;