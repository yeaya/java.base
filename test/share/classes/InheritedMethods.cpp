#include <InheritedMethods.h>

#include <InheritedMethods$Foo.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <jcpp.h>

using $InheritedMethods$Foo = ::InheritedMethods$Foo;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;

$MethodInfo _InheritedMethods_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InheritedMethods::*)()>(&InheritedMethods::init$)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InheritedMethods::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _InheritedMethods_InnerClassesInfo_[] = {
	{"InheritedMethods$Foo", "InheritedMethods", "Foo", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InheritedMethods_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InheritedMethods",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InheritedMethods_MethodInfo_,
	nullptr,
	nullptr,
	_InheritedMethods_InnerClassesInfo_,
	nullptr,
	nullptr,
	"InheritedMethods$Foo"
};

$Object* allocate$InheritedMethods($Class* clazz) {
	return $of($alloc(InheritedMethods));
}

void InheritedMethods::main($StringArray* args) {
	$new(InheritedMethods);
}

void InheritedMethods::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($InheritedMethods$Foo);
	$Class* c = $InheritedMethods$Foo::class$;
	$load($Collection);
	$var($Method, m, $nc(c)->getMethod("removeAll"_s, $$new($ClassArray, {$Collection::class$})));
	$load($List);
	if ($nc(m)->getDeclaringClass() != $List::class$) {
		$throwNew($RuntimeException, "TEST FAILED"_s);
	}
}

InheritedMethods::InheritedMethods() {
}

$Class* InheritedMethods::load$($String* name, bool initialize) {
	$loadClass(InheritedMethods, name, initialize, &_InheritedMethods_ClassInfo_, allocate$InheritedMethods);
	return class$;
}

$Class* InheritedMethods::class$ = nullptr;