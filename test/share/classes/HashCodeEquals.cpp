#include <HashCodeEquals.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HashCodeEquals_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HashCodeEquals::*)()>(&HashCodeEquals::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HashCodeEquals::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*)>(&HashCodeEquals::test)), "java.lang.Exception"},
	{"testUnix", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&HashCodeEquals::testUnix)), "java.lang.Exception"},
	{"testWin32", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&HashCodeEquals::testWin32)), "java.lang.Exception"},
	{}
};

$ClassInfo _HashCodeEquals_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HashCodeEquals",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HashCodeEquals_MethodInfo_
};

$Object* allocate$HashCodeEquals($Class* clazz) {
	return $of($alloc(HashCodeEquals));
}

void HashCodeEquals::init$() {
}

void HashCodeEquals::test($String* fn1, $String* fn2) {
	$useLocalCurrentObjectStackCache();
	$var($File, f1, $new($File, fn1));
	$var($File, f2, $new($File, fn2));
	if (!f1->equals(f2)) {
		$throwNew($Exception, "Instances with equal paths are not equal"_s);
	}
	int32_t h1 = f1->hashCode();
	int32_t h2 = f2->hashCode();
	if (h1 != h2) {
		$throwNew($Exception, "Hashcodes of equal instances are not equal"_s);
	}
}

void HashCodeEquals::testWin32() {
	test("a:/foo/bar/baz"_s, "a:/foo/bar/baz"_s);
	test("A:/Foo/Bar/BAZ"_s, "a:/foo/bar/baz"_s);
}

void HashCodeEquals::testUnix() {
	test("foo/bar/baz"_s, "foo/bar/baz"_s);
}

void HashCodeEquals::main($StringArray* args) {
	$init($File);
	if ($File::separatorChar == u'\\') {
		testWin32();
	}
	if ($File::separatorChar == u'/') {
		testUnix();
	}
}

HashCodeEquals::HashCodeEquals() {
}

$Class* HashCodeEquals::load$($String* name, bool initialize) {
	$loadClass(HashCodeEquals, name, initialize, &_HashCodeEquals_ClassInfo_, allocate$HashCodeEquals);
	return class$;
}

$Class* HashCodeEquals::class$ = nullptr;