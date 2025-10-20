#include <ListSpace.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ListSpace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ListSpace::*)()>(&ListSpace::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ListSpace::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ListSpace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ListSpace",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ListSpace_MethodInfo_
};

$Object* allocate$ListSpace($Class* clazz) {
	return $of($alloc(ListSpace));
}

void ListSpace::init$() {
}

void ListSpace::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, d, $new($File, "."_s));
	$assign(d, $new($File, $$str({$(d->getCanonicalPath()), " "_s})));
	if (!d->isDirectory()) {
		return;
	}
	if (d->list() == nullptr) {
		$throwNew($RuntimeException, "list is null"_s);
	}
}

ListSpace::ListSpace() {
}

$Class* ListSpace::load$($String* name, bool initialize) {
	$loadClass(ListSpace, name, initialize, &_ListSpace_ClassInfo_, allocate$ListSpace);
	return class$;
}

$Class* ListSpace::class$ = nullptr;