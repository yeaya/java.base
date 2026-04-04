#include <CompareTo.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void CompareTo::init$() {
}

void CompareTo::testWin32() {
	$useLocalObjectStack();
	$var($File, f1, $new($File, "a"_s));
	$var($File, f2, $new($File, "B"_s));
	if (!(f1->compareTo(f2) < 0)) {
		$throwNew($Exception, "compareTo incorrect"_s);
	}
}

void CompareTo::testUnix() {
	$useLocalObjectStack();
	$var($File, f1, $new($File, "a"_s));
	$var($File, f2, $new($File, "B"_s));
	if (!(f1->compareTo(f2) > 0)) {
		$throwNew($Exception, "compareTo incorrect"_s);
	}
}

void CompareTo::main($StringArray* args) {
	$init($File);
	if ($File::separatorChar == u'\\') {
		testWin32();
	}
	if ($File::separatorChar == u'/') {
		testUnix();
	}
}

CompareTo::CompareTo() {
}

$Class* CompareTo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompareTo, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CompareTo, main, void, $StringArray*), "java.lang.Exception"},
		{"testUnix", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(CompareTo, testUnix, void), "java.lang.Exception"},
		{"testWin32", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(CompareTo, testWin32, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CompareTo",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CompareTo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompareTo);
	});
	return class$;
}

$Class* CompareTo::class$ = nullptr;