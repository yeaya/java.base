#include <CompareTo.h>

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

$MethodInfo _CompareTo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompareTo::*)()>(&CompareTo::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CompareTo::main)), "java.lang.Exception"},
	{"testUnix", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&CompareTo::testUnix)), "java.lang.Exception"},
	{"testWin32", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&CompareTo::testWin32)), "java.lang.Exception"},
	{}
};

$ClassInfo _CompareTo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CompareTo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CompareTo_MethodInfo_
};

$Object* allocate$CompareTo($Class* clazz) {
	return $of($alloc(CompareTo));
}

void CompareTo::init$() {
}

void CompareTo::testWin32() {
	$var($File, f1, $new($File, "a"_s));
	$var($File, f2, $new($File, "B"_s));
	if (!(f1->compareTo(f2) < 0)) {
		$throwNew($Exception, "compareTo incorrect"_s);
	}
}

void CompareTo::testUnix() {
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
	$loadClass(CompareTo, name, initialize, &_CompareTo_ClassInfo_, allocate$CompareTo);
	return class$;
}

$Class* CompareTo::class$ = nullptr;